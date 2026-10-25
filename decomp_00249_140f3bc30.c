// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140f3bc30 FUN_140f3bc30 body=414 status=ok
// SIG undefined FUN_140f3bc30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3bc30(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x9bc) == '\0') {
    uStack_c0 = *param_2;
    uVar3 = 0;
    local_88 = (longlong *)0x0;
    local_78 = 0;
    local_c8 = param_1;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar2 + 1) = (undefined4)local_c8;
      *(undefined4 *)((longlong)puVar2 + 0xc) = local_c8._4_4_;
      *(undefined4 *)(puVar2 + 2) = uStack_c0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_bc;
    }
    local_b8[0] = thunk_FUN_140f1ca60;
    FUN_1420849a0(param_1,local_68,local_b8);
    if (local_78 != 0) {
      plVar4 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar4 = local_88;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
    cVar1 = FUN_140f2ca60();
    if (cVar1 == '\0') {
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
      if (local_78 != 0) {
        plVar4 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar4 = local_88;
        }
        if (plVar4 != (longlong *)0x0) {
          uVar3 = (**(code **)(*plVar4 + 8))();
        }
      }
      (*local_b8[0])(uVar3);
      if (local_78 != 0) {
        plVar4 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar4 = local_88;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else {
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8);
      FUN_14208c4f0(param_1,local_b8);
    }
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
  }
  else {
    *(undefined1 *)(param_1 + 0x9bc) = 0;
  }
  return;
}



// FUNCTION 140f3bdd0 FUN_140f3bdd0 body=12 status=ok
// SIG undefined FUN_140f3bdd0(void)

undefined4 FUN_140f3bdd0(longlong param_1)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x9ec);
  *(undefined4 *)(param_1 + 0x9ec) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140f3bde0 FUN_140f3bde0 body=94 status=ok
// SIG undefined FUN_140f3bde0(void)

void FUN_140f3bde0(undefined8 param_1)

{
  longlong local_18 [2];
  
  local_18[1] = 0xc;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"refreshAnim",0x18);
  FUN_142088910(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f3be40 FUN_140f3be40 body=132 status=ok
// SIG undefined FUN_140f3be40(void)

void FUN_140f3be40(longlong param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  if ((((*(char *)(param_1 + 0x106) != '\0') && (param_2 == '\0')) &&
      (cVar2 = FUN_140f31cb0(param_1 + -0x4d8), cVar2 != '\0')) &&
     (lVar3 = FUN_142eb65a0(param_1 + -0x4d8), lVar3 != 0)) {
    uVar1 = UBlendableInterface::GetPrivateStaticClass();
    lVar3 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar1);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 9) != '\0')) {
      param_2 = '\x01';
    }
  }
  FUN_142ec6e40(param_1,param_2);
  return;
}



// FUNCTION 140f3bed0 FUN_140f3bed0 body=230 status=ok
// SIG undefined FUN_140f3bed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3bed0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_141096090();
  uVar1 = FUN_1410a77f0(param_1 + -0x4d8,local_68,DAT_1468728e0);
  FUN_14208c260(param_1 + -0x4d8,uVar1);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x95a) != '\0') {
    *(undefined1 *)(param_1 + 0x95a) = 0;
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x518) = 1;
  UNLOCK();
  FUN_140f262d0(param_1 + -0x4d8);
  LOCK();
  *(undefined4 *)(param_1 + 0xa68) = 1;
  UNLOCK();
  FUN_140f50e20(param_1 + -0x4d8);
  return;
}



// FUNCTION 140f3bfc0 FUN_140f3bfc0 body=255 status=ok
// SIG undefined FUN_140f3bfc0(void)

void FUN_140f3bfc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  iVar7 = *(int *)(param_1 + 0x228);
  if (iVar7 != 0) {
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x220) + 8);
    do {
      plVar4 = (longlong *)*plVar8;
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
      plVar8 = plVar8 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  if (*(int *)(param_1 + 0x22c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x220,0);
  }
  local_28 = 0;
  local_18 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_143f77b70;
    puVar6[1] = param_1 + -0x4d8;
  }
  local_58[0] = &LAB_140f26ef0;
  FUN_14204c280(local_58);
  FUN_142ec7390(param_1);
  return;
}



// FUNCTION 140f3c0c0 FUN_140f3c0c0 body=138 status=ok
// SIG undefined FUN_140f3c0c0(void)

void FUN_140f3c0c0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FUN_141132350(*(longlong *)(param_1 + 0x370),1);
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
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
      FUN_140d122c0(lVar2,0);
      FUN_140d03d60(lVar2);
    }
  }
  FUN_142ec7390(param_1);
  return;
}



// FUNCTION 140f3c150 FUN_140f3c150 body=209 status=ok
// SIG undefined FUN_140f3c150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3c150(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x95a) != '\0') {
    uVar1 = FUN_1410853c0(param_1 + -0x4d8,local_68,DAT_1468728e0);
    FUN_14208c260(param_1 + -0x4d8,uVar1);
    if (local_28 != 0) {
      plVar2 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar2 = local_38;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  FUN_140f2a1f0(param_1 + -0x4d8);
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FUN_142eb3ca0(*(longlong *)(param_1 + 0x508),0);
  }
  FUN_142ec7580(param_1);
  return;
}



// FUNCTION 140f3c230 FUN_140f3c230 body=279 status=ok
// SIG undefined FUN_140f3c230(void)

void FUN_140f3c230(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  plVar3 = (longlong *)(param_1 + 0x218);
  if (*plVar3 != 0) {
    FUN_142833de0();
    local_10 = (longlong *)0x0;
    if (plVar3 != &local_18) {
      *plVar3 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x220,&local_10);
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
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FUN_142eb3740();
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x20c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x200,0);
  }
  if (*(undefined2 **)(param_1 + 0x200) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x200) = 0;
  }
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 140f3c350 FUN_140f3c350 body=295 status=ok
// SIG undefined FUN_140f3c350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3c350(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar1 = param_1 + -0x4d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = lVar1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140f26ad0;
  uVar3 = FUN_1420849a0(lVar1,local_68,local_b8);
  FUN_14208c260(lVar1,uVar3);
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
  if (local_78 != 0) {
    plVar4 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar4 = local_88;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 140f3c480 FUN_140f3c480 body=102 status=ok
// SIG undefined FUN_140f3c480(void)

void FUN_140f3c480(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(param_1 + -0x4d8);
  local_18 = 0;
  local_10 = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,"Close",1);
  (**(code **)(lVar1 + 0x4e8))(param_1 + -0x4d8,*puVar2,&local_18);
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 140f3c4f0 FUN_140f3c4f0 body=844 status=ok
// SIG undefined FUN_140f3c4f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3c4f0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [80];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  plVar7 = param_1 + -0x9b;
  lVar3 = FUN_140f2b5e0(plVar7);
  if (lVar3 != 0) {
    FUN_1407665e0(lVar3 + 0x2d8,plVar7);
    FUN_1407665e0(lVar3 + 0x2e8,plVar7);
    FUN_1407665e0(lVar3 + 0x2f8,plVar7);
    FUN_1407665e0(lVar3 + 0x318,plVar7);
    if (*(char *)((longlong)param_1 + 0x211) != '\0') {
      FUN_143015b20(lVar3,0,0,1);
    }
  }
  lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0xbc);
  if (lVar3 != 0) {
    lVar4 = FUN_1413f82e0();
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
      FUN_1407665e0(lVar3 + 0x1050,plVar7);
      FUN_1407665e0(lVar3 + 0x1308,plVar7);
      FUN_1407665e0(lVar3 + 0x1318,plVar7);
      FUN_1407665e0(lVar3 + 0x1338,plVar7);
      FUN_1407665e0(lVar3 + 0x1348,plVar7);
    }
  }
  lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0xb4);
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
    if (bVar1) {
      lVar4 = FUN_140cff230(lVar3);
      if (lVar4 != 0) {
        cVar2 = FUN_140472310(lVar4);
        if (cVar2 != '\0') {
          FUN_140d1b4d0(lVar3);
        }
      }
    }
  }
  local_c8 = 0;
  local_c0 = 0;
  (**(code **)(*plVar7 + 0x4e8))(plVar7,DAT_146872868,&local_c8);
  if (param_1[0xad] != 0) {
    FUN_1411f8450();
    FUN_1407665e0(param_1[0xad] + 0xe8,plVar7);
    cVar2 = (**(code **)(*param_1 + 0x98))(param_1);
    if (cVar2 == '\0') {
      FUN_1411eff10(param_1[0xad]);
      param_1[0xad] = 0;
    }
  }
  if (param_1[0xae] != 0) {
    FUN_1411f8450();
    FUN_1407665e0(param_1[0xae] + 0xe8,plVar7);
    cVar2 = (**(code **)(*param_1 + 0x98))(param_1);
    if (cVar2 == '\0') {
      FUN_1411eff10(param_1[0xae]);
      param_1[0xae] = 0;
    }
  }
  FUN_142ecd460(plVar7);
  cVar2 = (**(code **)(*param_1 + 0x98))(param_1);
  if (cVar2 == '\0') {
    FUN_140ee38f0(param_1 + 0xb5);
    FUN_140ee38f0(param_1 + 0xe8);
  }
  else {
    FUN_1411fdd80();
  }
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = plVar7;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_68[0] = FUN_140f26f80;
  uVar6 = FUN_1420849a0(plVar7,local_b8,local_68);
  FUN_14208c4f0(plVar7,uVar6);
  if (local_28 != 0) {
    plVar7 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar7 = local_38;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 140f3c850 FUN_140f3c850 body=90 status=ok
// SIG undefined FUN_140f3c850(void)

void FUN_140f3c850(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_142ec85a0();
  lVar1 = *(longlong *)(param_1 + -0x4d8);
  local_18 = 0;
  local_10 = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,&DAT_144609c34,1);
  (**(code **)(lVar1 + 0x4e8))(param_1 + -0x4d8,*puVar2,&local_18);
  return;
}



// FUNCTION 140f3c8b0 FUN_140f3c8b0 body=30 status=ok
// SIG undefined FUN_140f3c8b0(void)

void FUN_140f3c8b0(longlong param_1)

{
  FUN_1410975c0();
  *(uint *)(param_1 + -0x498) = *(uint *)(param_1 + -0x498) & 0xffefffff;
  return;
}



// FUNCTION 140f3c8e0 FUN_140f3c8e0 body=1168 status=ok
// SIG undefined FUN_140f3c8e0(void)

void FUN_140f3c8e0(longlong param_1,float param_2)

{
  int iVar1;
  char cVar2;
  BOOL BVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  longlong local_res8;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  char local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 *local_d8 [2];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  FUN_142ec8c70();
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FUN_1411fd550(*(longlong *)(param_1 + 0x568),param_2);
  }
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FUN_1411fd550(*(longlong *)(param_1 + 0x570),param_2);
  }
  if (*(char *)(param_1 + 0x9cc) != '\0') {
    fVar9 = *(float *)(param_1 + 0x9e0) - param_2;
    *(float *)(param_1 + 0x9e0) = fVar9;
    if ((fVar9 < 0.0) || (ABS(fVar9) <= 1e-08)) {
      local_100 = *(char *)(param_1 + 0x9cc);
      local_fc = *(undefined4 *)(param_1 + 0x9d0);
      local_f8 = *(undefined4 *)(param_1 + 0x9d4);
      local_f4 = *(undefined4 *)(param_1 + 0x9d8);
      local_f0 = *(undefined4 *)(param_1 + 0x9dc);
      *(undefined4 *)(param_1 + 0x9e0) = 0xbf800000;
      if (*(longlong *)(param_1 + 0x508) != 0) {
        FUN_142edb460();
      }
      lVar5 = param_1 + -0x4d8;
      if (*(char *)(param_1 + 0x4e8) != '\0') {
        FUN_140f29a60(lVar5,0);
      }
      *(char *)(param_1 + 0x4e8) = local_100;
      *(undefined4 *)(param_1 + 0x4ec) = local_fc;
      *(undefined4 *)(param_1 + 0x4f0) = local_f8;
      *(undefined4 *)(param_1 + 0x4f4) = local_f4;
      *(undefined4 *)(param_1 + 0x4f8) = local_f0;
      plVar4 = (longlong *)FWeakObjectPtr::Get(&local_fc);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x338))(plVar4,1,0);
      }
      FUN_140f4e0f0(lVar5,1);
      if (local_100 == '\x01') {
        FUN_140f47890(lVar5,0);
        BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa40));
        if (BVar3 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa40));
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa40));
      }
      else if (local_100 == '\x02') {
        plVar4 = *(longlong **)(param_1 + 0x528);
        plVar8 = plVar4 + (longlong)*(int *)(param_1 + 0x530) * 0x1b;
        for (; plVar4 != plVar8; plVar4 = plVar4 + 0x1b) {
          if ((*plVar4 != 0) &&
             (cVar2 = (**(code **)(*(longlong *)(*plVar4 + 0x170) + 0x40))(), cVar2 != '\0')) {
            FWeakObjectPtr::operator=(param_1 + 0x4fc,*plVar4);
            break;
          }
        }
      }
      LOCK();
      *(undefined4 *)(param_1 + 0xae0) = 1;
      UNLOCK();
      FWeakObjectPtr::operator=(&local_114,0);
      FWeakObjectPtr::operator=(&local_10c,0);
      cVar2 = FWeakObjectPtr::IsValid(&local_114);
      if (cVar2 != '\0') {
        plVar4 = (longlong *)FWeakObjectPtr::Get(&local_114);
        lVar5 = (**(code **)(*plVar4 + 0x340))(plVar4);
        cVar2 = FWeakObjectPtr::IsValid(lVar5 + 0xdc);
        if (cVar2 == '\0') {
          cVar2 = FWeakObjectPtr::IsValid(lVar5 + 0x5c);
          if (cVar2 != '\0') {
            local_10c = *(undefined4 *)(lVar5 + 0x5c);
            local_108 = *(undefined4 *)(lVar5 + 0x60);
          }
        }
        else {
          local_10c = *(undefined4 *)(lVar5 + 0xdc);
          local_108 = *(undefined4 *)(lVar5 + 0xe0);
        }
      }
      *(undefined1 *)(param_1 + 0x9cc) = 0;
      *(undefined4 *)(param_1 + 0x9d0) = local_114;
      *(undefined4 *)(param_1 + 0x9d4) = local_110;
      *(undefined4 *)(param_1 + 0x9d8) = local_10c;
      *(undefined4 *)(param_1 + 0x9dc) = local_108;
    }
  }
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FUN_142edaa40(*(longlong *)(param_1 + 0x508),param_2);
  }
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa40));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa40));
  }
  lVar5 = param_1 + -0x4d8;
  lVar7 = 0x740;
  if (*(char *)(param_1 + 0x959) != '\x01') {
    lVar7 = 0x5a8;
  }
  cVar2 = FUN_140ee3fa0(lVar7 + param_1);
  if (cVar2 != '\0') {
    LOCK();
    *(undefined4 *)(param_1 + 0xad4) = 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa40));
  if ((0.0 < *(float *)(param_1 + 0x9c8)) &&
     (param_2 = *(float *)(param_1 + 0x9c8) - param_2, *(float *)(param_1 + 0x9c8) = param_2,
     param_2 <= 0.0)) {
    *(undefined4 *)(param_1 + 0x9c8) = 0;
    LOCK();
    *(undefined4 *)(param_1 + 0xad4) = 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0xad0) = 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(param_1 + 0xad4);
  *(int *)(param_1 + 0xad4) = 0;
  UNLOCK();
  if (iVar1 != 0) {
    uStack_e0 = &local_res8;
    local_res8 = lVar5;
    local_e8 = lVar5;
    if (*(longlong *)(param_1 + 0x568) != 0) {
      local_a8 = 0;
      local_98 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar6 + 1) = (undefined4)local_e8;
        *(undefined4 *)((longlong)puVar6 + 0xc) = local_e8._4_4_;
        *(undefined4 *)(puVar6 + 2) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_e0._4_4_;
      }
      local_d8[0] = &LAB_140f26d50;
      FUN_1411f67c0(*(undefined8 *)(param_1 + 0x568),local_d8);
    }
    if (*(longlong *)(param_1 + 0x570) != 0) {
      local_58 = 0;
      local_48 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_78);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = lVar5;
        *puVar6 = &PTR_FUN_143f77b70;
      }
      local_88[0] = &LAB_140f26980;
      FUN_1411f67c0(*(undefined8 *)(param_1 + 0x570),local_88);
    }
  }
  LOCK();
  iVar1 = *(int *)(param_1 + 0xa68);
  *(int *)(param_1 + 0xa68) = 0;
  UNLOCK();
  if (iVar1 != 0) {
    FUN_140f43dc0(lVar5);
  }
  LOCK();
  iVar1 = *(int *)(param_1 + 0xad8);
  *(int *)(param_1 + 0xad8) = 0;
  UNLOCK();
  if (iVar1 != 0) {
    FUN_140f4bbf0(lVar5);
  }
  return;
}



// FUNCTION 140f3cd70 FUN_140f3cd70 body=264 status=ok
// SIG undefined FUN_140f3cd70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140f3cd70(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [80];
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar1 = FUN_142ec8d60();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_68);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f77b70;
      puVar2[1] = param_1 + -0x4d8;
    }
    local_78[0] = FUN_140f26bf0;
    uVar3 = FUN_1420849a0(param_1 + -0x4d8,local_c8,local_78);
    FUN_14208c4f0(param_1 + -0x4d8,uVar3);
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
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 140f3cec0 FUN_140f3cec0 body=174 status=ok
// SIG undefined FUN_140f3cec0(void)

void FUN_140f3cec0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140eccca0();
  if ((((lVar2 != 0) && (lVar2 = FUN_140c453a0(lVar2), lVar2 != 0)) &&
      (*(longlong *)(param_1 + 0x630) != 0)) &&
     (((cVar1 = FUN_142d52a00(param_2), cVar1 != '\0' &&
       (lVar3 = FUN_142d52a20(param_2), *(longlong *)(lVar3 + 8) != 0)) &&
      ((lVar3 = FUN_142d52a20(param_2), *(longlong *)(*(longlong *)(lVar3 + 8) + 0x30) != 0 &&
       (lVar3 = FUN_142d52a20(param_2),
       *(longlong *)(*(longlong *)(lVar3 + 8) + 0x30) == *(longlong *)(param_1 + 0x630))))))) {
    FUN_1407665e0(lVar2 + 0x278,param_1);
    FUN_140f4d280(param_1,param_2);
  }
  return;
}



// FUNCTION 140f3cf70 FUN_140f3cf70 body=936 status=ok
// SIG undefined FUN_140f3cf70(void)

void FUN_140f3cf70(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  longlong *plVar7;
  int iVar8;
  code *pcVar9;
  longlong lVar10;
  code *pcVar11;
  code **ppcVar12;
  code *pcVar13;
  bool bVar14;
  undefined8 local_res10;
  code *local_88;
  longlong *local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  longlong *plStack_50;
  code *local_48;
  longlong *plStack_40;
  code *local_38;
  longlong *plStack_30;
  
  pcVar11 = (code *)0x0;
  if (*(longlong *)(param_1 + 0xa50) == 0) goto LAB_140f3d2d2;
  plStack_40 = (longlong *)((ulonglong)plStack_40 & 0xffffffff00000000);
  local_48 = FUN_140f3da10;
  local_38 = FUN_140f3da10;
  plStack_30 = plStack_40;
  pcVar9 = (code *)_guard_xfg_dispatch_icall_nop
                             (L"&ThisClass::OnPaperDollarItemCardElementalUpdated",L"::");
  pcVar13 = pcVar11;
  while (pcVar6 = pcVar9, pcVar6 != (code *)0x0) {
    pcVar9 = (code *)_guard_xfg_dispatch_icall_nop((wchar_t *)(pcVar6 + 2),L"::");
    pcVar13 = pcVar6;
  }
  FName::FName(&local_res10,pcVar13 + 4,1);
  lVar10 = (**(code **)(**(longlong **)(param_1 + 0xa50) + 0x2b0))();
  FUN_1407260e0(lVar10 + 8,param_1,&local_38,local_res10);
  pcVar13 = *(code **)(param_1 + 0x430);
  bVar4 = true;
  if (pcVar13 == (code *)0x0) {
LAB_140f3d072:
    pcVar13 = pcVar11;
  }
  else {
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pcVar13 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pcVar13 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar4 = false;
    }
    if (!bVar4) goto LAB_140f3d072;
  }
  lVar10 = (**(code **)(**(longlong **)(param_1 + 0xa50) + 0x2b0))();
  FWeakObjectPtr::operator=(lVar10 + 0x18,pcVar13);
  lVar10 = *(longlong *)(param_1 + 0xa50);
  if (lVar10 == 0) {
    ppcVar12 = &local_48;
    local_48 = (code *)0x0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    if ((*(longlong *)(lVar10 + 0x28) == 0) || (*(longlong *)(lVar10 + 0x30) == 0)) {
LAB_140f3d110:
      ppcVar12 = &local_58;
      local_58 = (code *)0x0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar4 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(lVar10 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f3d110;
      local_80 = *(longlong **)(lVar10 + 0x30);
      bVar5 = true;
      bVar4 = false;
      local_88 = (code *)0x0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          pcVar11 = (code *)(ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar8 = (int)pcVar11;
          LOCK();
          bVar14 = iVar8 == (int)local_80[1];
          if (bVar14) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar14) {
            pcVar11 = *(code **)(lVar10 + 0x28);
            ppcVar12 = &local_88;
            local_88 = pcVar11;
            goto LAB_140f3d124;
          }
          pcVar11 = (code *)0x0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            pcVar11 = (code *)(ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      pcVar11 = (code *)0x0;
      ppcVar12 = &local_88;
    }
LAB_140f3d124:
    local_78 = pcVar11;
    pcVar11 = ppcVar12[1];
    ppcVar12[1] = (code *)0x0;
    plVar7 = plStack_50;
    local_70 = pcVar11;
    *ppcVar12 = (code *)0x0;
    if ((bVar4) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plStack_50 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar7 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar4 = false;
    ppcVar12 = &local_78;
    pcVar11 = local_78;
  }
  local_68 = pcVar11;
  pcVar11 = ppcVar12[1];
  ppcVar12[1] = (code *)0x0;
  plVar7 = plStack_40;
  local_60 = pcVar11;
  *ppcVar12 = (code *)0x0;
  if ((bVar4) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  pcVar11 = local_70;
  if ((bVar5) && (local_70 != (code *)0x0)) {
    LOCK();
    pcVar13 = local_70 + 8;
    iVar8 = *(int *)pcVar13;
    *(int *)pcVar13 = *(int *)pcVar13 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (*(code *)**(undefined8 **)local_70)(local_70);
      LOCK();
      pcVar11 = pcVar11 + 0xc;
      iVar8 = *(int *)pcVar11;
      *(int *)pcVar11 = *(int *)pcVar11 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*(longlong *)local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 != (code *)0x0) {
    FUN_142051fa0(local_68,1);
  }
  pcVar11 = local_60;
  if (local_60 != (code *)0x0) {
    LOCK();
    pcVar13 = local_60 + 8;
    iVar8 = *(int *)pcVar13;
    *(int *)pcVar13 = *(int *)pcVar13 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (*(code *)**(undefined8 **)local_60)(local_60);
      LOCK();
      pcVar11 = pcVar11 + 0xc;
      iVar8 = *(int *)pcVar11;
      *(int *)pcVar11 = *(int *)pcVar11 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*(longlong *)local_60 + 8))(local_60,1);
      }
    }
  }
LAB_140f3d2d2:
  if ((((*(longlong *)(param_1 + 0xa58) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0xa58) + 0x1a8) != '\0')) &&
      (*(longlong *)(param_1 + 0xa50) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0xa50) + 0x1a8) != '\0')) {
    LOCK();
    *(undefined4 *)(param_1 + 0x9f0) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140f3d320 FUN_140f3d320 body=569 status=ok
// SIG undefined FUN_140f3d320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3d320(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 auStack_108 [32];
  undefined4 local_e8 [4];
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  cVar2 = FUN_1410875b0();
  if (cVar2 != '\0') {
    local_e8[0] = 0xffffffff;
    if (param_2 != 0) {
      FUN_14170c210(local_e8,param_2);
    }
    lVar1 = *param_3;
    if ((((lVar1 == DAT_1468725f0) || (lVar1 == DAT_1468725f8)) || (lVar1 == DAT_146872600)) ||
       (((lVar1 == DAT_146872608 || (lVar1 == DAT_146872610)) ||
        ((lVar1 == DAT_1468726e8 || (lVar1 == DAT_1468726f0)))))) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    uVar3 = FKey::IsGamepadKey(param_3 + 2);
    uVar8 = local_e8[0];
    uVar5 = 0;
    local_e8[0] = 0xffffffff;
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_14461b800;
      puVar4[1] = param_1;
      *(undefined1 *)(puVar4 + 2) = uVar7;
      *(undefined1 *)((longlong)puVar4 + 0x11) = uVar3;
      *(undefined4 *)((longlong)puVar4 + 0x14) = uVar8;
      uVar8 = 0xffffffff;
    }
    local_d8[0] = thunk_FUN_140f1aa50;
    FUN_1420849a0(param_1,local_88,local_d8);
    if (local_98 != 0) {
      plVar6 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar6 = local_a8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar8);
    FUN_1416f8340(local_e8[0]);
    cVar2 = FUN_140f2ca60();
    if (cVar2 == '\0') {
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
      if (local_98 != 0) {
        plVar6 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar6 = local_a8;
        }
        if (plVar6 != (longlong *)0x0) {
          uVar5 = (**(code **)(*plVar6 + 8))();
        }
      }
      (*local_d8[0])(uVar5);
      if (local_98 != 0) {
        plVar6 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar6 = local_a8;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else {
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8);
      FUN_14208c4f0(param_1,local_d8);
    }
    if (local_48 != 0) {
      plVar6 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar6 = local_58;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f3d560 FUN_140f3d560 body=713 status=ok
// SIG undefined FUN_140f3d560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3d560(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  code *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 local_98 [16];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  cVar5 = FUN_1410875b0();
  if (cVar5 == '\0') {
    return;
  }
  lVar9 = 0;
  if (param_2 != 0) {
    lVar6 = FUN_1413565b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f3d5f2;
  }
  param_2 = lVar9;
LAB_140f3d5f2:
  local_108 = 1;
  FWeakObjectPtr::operator=(&local_104,param_2);
  FWeakObjectPtr::operator=(&local_fc,0);
  cVar5 = FWeakObjectPtr::IsValid(&local_104);
  if (cVar5 != '\0') {
    plVar7 = (longlong *)FWeakObjectPtr::Get(&local_104);
    lVar6 = (**(code **)(*plVar7 + 0x340))(plVar7);
    cVar5 = FWeakObjectPtr::IsValid((undefined4 *)(lVar6 + 0xdc));
    if (cVar5 == '\0') {
      cVar5 = FWeakObjectPtr::IsValid((undefined4 *)(lVar6 + 0x5c));
      if (cVar5 != '\0') {
        local_fc = *(undefined4 *)(lVar6 + 0x5c);
        local_f8 = *(undefined4 *)(lVar6 + 0x60);
      }
    }
    else {
      local_fc = *(undefined4 *)(lVar6 + 0xdc);
      local_f8 = *(undefined4 *)(lVar6 + 0xe0);
    }
  }
  uVar4 = local_f8;
  uVar3 = local_fc;
  uVar2 = local_108;
  local_b8 = (longlong *)0x0;
  local_a8 = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x28,local_d8);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_FUN_14461b818;
    puVar8[1] = param_1;
    *(undefined1 *)(puVar8 + 2) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0x14) = local_104;
    *(undefined4 *)(puVar8 + 3) = local_100;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar3;
    *(undefined4 *)(puVar8 + 4) = uVar4;
  }
  local_e8[0] = FUN_140f27100;
  FUN_1420849a0(param_1,local_98,local_e8);
  if (local_a8 != 0) {
    plVar7 = local_d8;
    if (local_b8 != (longlong *)0x0) {
      plVar7 = local_b8;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free();
  }
  cVar5 = FUN_140f2ca60();
  if (cVar5 == '\0') {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_e8,local_98);
    if (local_a8 != 0) {
      plVar7 = local_d8;
      if (local_b8 != (longlong *)0x0) {
        plVar7 = local_b8;
      }
      if (plVar7 != (longlong *)0x0) {
        lVar9 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_e8[0])(lVar9);
    if (local_a8 != 0) {
      plVar7 = local_d8;
      if (local_b8 != (longlong *)0x0) {
        plVar7 = local_b8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_e8);
    FUN_14208c4f0(param_1,local_e8);
  }
  if (local_58 != 0) {
    plVar7 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar7 = local_68;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f3d830 FUN_140f3d830 body=467 status=ok
// SIG undefined FUN_140f3d830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3d830(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar2 = FUN_1410875b0();
  if (cVar2 != '\0') {
    lVar1 = *param_3;
    if ((((lVar1 == DAT_1468725f0) || (lVar1 == DAT_1468725f8)) || (lVar1 == DAT_146872600)) ||
       (((lVar1 == DAT_146872608 || (lVar1 == DAT_146872610)) ||
        ((lVar1 == DAT_1468726e8 || (lVar1 == DAT_1468726f0)))))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    uVar5 = 0;
    *(undefined1 *)(param_1 + 0xe91) = uVar3;
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = FUN_140f26ff0;
    FUN_1420849a0(param_1,local_68,local_b8);
    if (local_78 != 0) {
      plVar6 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar6 = local_88;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
    cVar2 = FUN_140f2ca60();
    if (cVar2 == '\0') {
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
      if (local_78 != 0) {
        plVar6 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar6 = local_88;
        }
        if (plVar6 != (longlong *)0x0) {
          uVar5 = (**(code **)(*plVar6 + 8))();
        }
      }
      (*local_b8[0])(uVar5);
      if (local_78 != 0) {
        plVar6 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar6 = local_88;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else {
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8);
      FUN_14208c4f0(param_1,local_b8);
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
  }
  return;
}



// FUNCTION 140f3da10 FUN_140f3da10 body=255 status=ok
// SIG undefined FUN_140f3da10(void)

void FUN_140f3da10(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  *(int *)(param_1 + 0xe88) = *(int *)(param_1 + 0xe88) + 1;
  plVar2 = *(longlong **)(param_1 + 0xa00);
  plVar5 = plVar2 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
  for (; plVar2 != plVar5; plVar2 = plVar2 + 0x1b) {
    cVar1 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                      (*plVar2,param_1 + 0xa60);
    if (((cVar1 == '\0') &&
        (cVar1 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                           (*plVar2,param_1 + 0xa68), cVar1 == '\0')) && (*plVar2 != 0)) {
      FUN_140f49780(*plVar2,*(undefined4 *)(param_1 + 0xe88));
    }
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xa60);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xa60);
    lVar3 = (**(code **)(*plVar2 + 0x340))(plVar2);
    cVar1 = FWeakObjectPtr::IsValid(lVar3 + 0xdc);
    if (cVar1 != '\0') {
      uVar4 = FWeakObjectPtr::Get(param_1 + 0xa60);
      FUN_140f49990(uVar4,param_2);
    }
  }
  return;
}



// FUNCTION 140f3db10 FUN_140f3db10 body=368 status=ok
// SIG undefined FUN_140f3db10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3db10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 local_98 [16];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FWeakObjectPtr::operator=(&local_f8);
  FWeakObjectPtr::operator=(&local_100,param_3);
  FWeakObjectPtr::operator=(&local_108,*(undefined8 *)(param_1 + 0x630));
  local_b8 = (longlong *)0x0;
  local_a8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x28,local_d8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b538;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_108;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_104;
    *(undefined4 *)(puVar1 + 3) = local_100;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_fc;
    *(undefined4 *)(puVar1 + 4) = local_f8;
    *(undefined4 *)((longlong)puVar1 + 0x24) = local_f4;
  }
  local_e8[0] = &LAB_140f26e10;
  uVar2 = FUN_1420849a0(param_1,local_98,local_e8);
  FUN_14208c260(param_1,uVar2);
  if (local_58 != 0) {
    plVar3 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar3 = local_68;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    plVar3 = local_d8;
    if (local_b8 != (longlong *)0x0) {
      plVar3 = local_b8;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f3dc80 FUN_140f3dc80 body=27 status=ok
// SIG undefined FUN_140f3dc80(void)

void FUN_140f3dc80(undefined8 param_1)

{
  FUN_142ecb050();
  FUN_140f4c530(param_1);
  return;
}



// FUNCTION 140f3dca0 FUN_140f3dca0 body=226 status=ok
// SIG undefined FUN_140f3dca0(void)

void FUN_140f3dca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_88);
  FWeakObjectPtr::operator=(&local_res20,param_3);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_48 = 0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x28,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b538;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined4 *)(puVar1 + 3) = local_res20;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_res24;
    *(undefined4 *)(puVar1 + 4) = local_88;
    *(undefined4 *)((longlong)puVar1 + 0x24) = local_84;
  }
  local_78[0] = &LAB_140f27020;
  FUN_14204c280(local_78);
  return;
}



// FUNCTION 140f3dd90 FUN_140f3dd90 body=350 status=ok
// SIG undefined FUN_140f3dd90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3dd90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FWeakObjectPtr::operator=(&local_e0,param_3);
  FWeakObjectPtr::operator=(&local_e8,param_2);
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c80;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_e8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_e4;
    *(undefined4 *)(puVar1 + 3) = local_e0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_dc;
  }
  local_d8[0] = &LAB_140f26ea0;
  uVar2 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c260(param_1,uVar2);
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
  if (local_98 != 0) {
    plVar3 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar3 = local_a8;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f3def0 FUN_140f3def0 body=385 status=ok
// SIG undefined FUN_140f3def0(void)

void FUN_140f3def0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  FUN_142ecb050();
  local_res8[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x668) != 0) {
    FUN_14170c210(local_res8);
  }
  local_res20[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    FUN_14170c210(local_res20);
  }
  FWeakObjectPtr::operator=(&local_94,param_3);
  FWeakObjectPtr::operator=(&local_9c,param_2);
  FWeakObjectPtr::operator=(&local_a4,param_1);
  uVar3 = local_res20[0];
  uVar2 = local_res8[0];
  local_res20[0] = 0xffffffff;
  local_res8[0] = 0xffffffff;
  FUN_1416f8340(0xffffffff);
  FUN_1416f8340(local_res8[0]);
  local_58 = 0;
  local_48 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x30,local_78);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b770;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_a4;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_a0;
    *(undefined4 *)(puVar1 + 3) = local_9c;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_98;
    *(undefined4 *)(puVar1 + 4) = local_94;
    *(undefined4 *)((longlong)puVar1 + 0x24) = local_90;
    *(undefined4 *)(puVar1 + 5) = uVar3;
    uVar3 = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar2;
    uVar2 = 0xffffffff;
  }
  local_88[0] = &LAB_140f270a0;
  FUN_14204c280(local_88);
  FUN_1416f8340(uVar2);
  FUN_1416f8340(uVar3);
  return;
}



// FUNCTION 140f3e080 FUN_140f3e080 body=1511 status=ok
// SIG undefined FUN_140f3e080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3e080(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  bool bVar10;
  undefined1 auStack_148 [40];
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  longlong *local_108;
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [16];
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (param_2 != 0) {
    lVar6 = FUN_14134b8f0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      FUN_140f529f0(param_1,4);
      lVar6 = *(longlong *)(param_2 + 0x348);
      *(longlong *)(param_1 + 0xb30) = lVar6;
      *(longlong *)(param_1 + 0xb38) = param_2;
      if (lVar6 != 0) {
        if ((*(longlong *)(param_1 + 0x6b0) != 0) && (*(longlong *)(param_1 + 0x6b8) != 0)) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x6b8) + 8);
          LOCK();
          iVar5 = *piVar1;
          if (iVar5 == 0) {
            *piVar1 = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (0 < iVar5) {
            UMistDebugEntityScreen::InspectEntity
                      (param_1 + 0x6a8,*(longlong *)(param_1 + 0xb30) + 0x38,1,0);
          }
        }
        if ((*(longlong *)(param_1 + 0x6c8) != 0) && (*(longlong *)(param_1 + 0x6d0) != 0)) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x6d0) + 8);
          LOCK();
          iVar5 = *piVar1;
          if (iVar5 == 0) {
            *piVar1 = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (0 < iVar5) {
            UMistDebugEntityScreen::InspectEntity
                      (param_1 + 0x6c0,*(longlong *)(param_1 + 0xb30) + 0x38,1,0);
          }
        }
        if ((*(longlong *)(param_1 + 0x6e0) != 0) && (*(longlong *)(param_1 + 0x6e8) != 0)) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x6e8) + 8);
          LOCK();
          iVar5 = *piVar1;
          if (iVar5 == 0) {
            *piVar1 = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (0 < iVar5) {
            UMistDebugEntityScreen::InspectEntity
                      (param_1 + 0x6d8,*(longlong *)(param_1 + 0xb30) + 0x50,1,0);
          }
        }
        plVar3 = *(longlong **)(param_1 + 0xa98);
        local_118 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar10 = iVar5 == 0;
          if (bVar10) {
            *(int *)(plVar3 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          while (!bVar10) {
            LOCK();
            bVar10 = iVar5 == (int)plVar3[1];
            if (bVar10) {
              *(int *)(plVar3 + 1) = iVar5 + 1;
            }
            UNLOCK();
            if (bVar10) {
              if (plVar3 != (longlong *)0x0) {
                local_120 = *(longlong *)(param_1 + 0xa90);
                if (local_120 != 0) {
                  FUN_14203e230(local_120,*(longlong *)(param_1 + 0xb30) + 0x68);
                }
                plVar2 = local_118;
                LOCK();
                plVar3 = plVar3 + 1;
                lVar6 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_118)(local_118);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar2 + 0xc);
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*local_118 + 8))(local_118,1);
                  }
                }
              }
              break;
            }
            LOCK();
            iVar5 = (int)plVar3[1];
            bVar10 = iVar5 == 0;
            if (bVar10) {
              *(int *)(plVar3 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
          }
        }
        local_d8 = 0;
        plStack_d0 = (longlong *)0x0;
        lVar6 = FText::AsNumber(local_78,*(undefined4 *)(*(longlong *)(param_1 + 0xb30) + 0xa0),0,
                                &local_d8);
        puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_88,param_1 + 0xc88);
        local_60[0] = 4;
        FText::FText(local_50,lVar6);
        local_e8 = *puVar7;
        local_f8 = local_60;
        puStack_f0 = &local_30;
        local_e0 = puVar7[1];
        local_38 = '\x01';
        if (local_e0 != 0) {
          LOCK();
          *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
          UNLOCK();
        }
        uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_b0,&local_f8);
        uVar8 = FText::Format(local_a0,&local_e8,uVar8);
        FText::FText(local_c8,uVar8);
        if (local_98 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_98 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar1 = (int *)((longlong)local_98 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_98 + 8))(local_98,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_b0);
        if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
          LOCK();
          plVar3 = local_48 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar1 = (int *)((longlong)local_48 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_48 + 8))(local_48,1);
            }
          }
        }
        plVar3 = (longlong *)puVar7[1];
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
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        plVar3 = *(longlong **)(lVar6 + 8);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        plVar3 = plStack_d0;
        if (plStack_d0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_d0 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_d0)(plStack_d0);
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
        if ((*(longlong *)(param_1 + 0x6f8) != 0) && (*(longlong *)(param_1 + 0x700) != 0)) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x700) + 8);
          LOCK();
          iVar5 = *piVar1;
          if (iVar5 == 0) {
            *piVar1 = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (0 < iVar5) {
            uVar8 = FText::ToString(local_c8);
            FUN_142f0fdc0(param_1 + 0x6f0,uVar8,1,0);
          }
        }
        if ((*(longlong *)(param_1 + 0x710) != 0) && (*(longlong *)(param_1 + 0x718) != 0)) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x718) + 8);
          LOCK();
          iVar5 = *piVar1;
          if (iVar5 == 0) {
            *piVar1 = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (0 < iVar5) {
            uVar8 = FText::ToString(local_c8);
            FUN_142f0fdc0(param_1 + 0x708,uVar8,1,0);
          }
        }
        LOCK();
        *(undefined4 *)(param_1 + 0x588) = 1;
        UNLOCK();
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_c0 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar1 = (int *)((longlong)local_c0 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_c0 + 8))(local_c0,1);
            }
          }
        }
      }
      plVar3 = *(longlong **)(param_1 + 0xaa8);
      local_108 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar5 == (int)plVar3[1];
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (plVar3 != (longlong *)0x0) {
              local_110 = *(longlong *)(param_1 + 0xaa0);
              if (local_110 != 0) {
                lVar6 = *(longlong *)(param_2 + 0x348);
                if ((lVar6 == 0) || ((*(int *)(lVar6 + 0x88) < 1 && (*(int *)(lVar6 + 0x98) < 1))))
                {
                  bVar10 = false;
                }
                else {
                  bVar10 = true;
                }
                pwVar9 = L"perkSlot";
                if (bVar10) {
                  pwVar9 = L"cosmeticSlot";
                }
                FUN_14203e4e0(local_110,pwVar9);
              }
              plVar2 = local_108;
              LOCK();
              plVar3 = plVar3 + 1;
              lVar6 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_108)(local_108);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_108 + 8))(local_108,1);
                }
              }
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar10 = iVar5 == 0;
          if (bVar10) {
            *(int *)(plVar3 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0xae0) != 0) &&
     (iVar5 = FUN_142eb62e0(), iVar5 != *(int *)(param_1 + 0xdcc))) {
    FUN_140f54370(param_1,0,0);
  }
  return;
}



// FUNCTION 140f3e670 FUN_140f3e670 body=82 status=ok
// SIG undefined FUN_140f3e670(void)

void FUN_140f3e670(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_140f25ce0();
  lVar1 = *param_1;
  local_18 = 0;
  local_10 = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"Guardian_Token_Redeem",1);
  (**(code **)(lVar1 + 0x4e8))(param_1,*puVar2,&local_18);
  return;
}



// FUNCTION 140f3e6d0 FUN_140f3e6d0 body=86 status=ok
// SIG undefined FUN_140f3e6d0(void)

void FUN_140f3e6d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = 0;
  local_10 = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"Navigate",1);
  (**(code **)(lVar1 + 0x4e8))(param_1,*puVar2,&local_18);
  FUN_140f529f0(param_1,3);
  return;
}



// FUNCTION 140f3e730 FUN_140f3e730 body=86 status=ok
// SIG undefined FUN_140f3e730(void)

undefined4 FUN_140f3e730(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_140f27170(param_1,1,1,0);
  FUN_140f4b9a0(param_1,0,0);
  LOCK();
  *(undefined4 *)(param_1 + 0xfb4) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x9f0) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x9ec);
  *(undefined4 *)(param_1 + 0x9ec) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0xfb0) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140f3e790 FUN_140f3e790 body=42 status=ok
// SIG undefined FUN_140f3e790(void)

void FUN_140f3e790(longlong *param_1)

{
  if (((char)param_1[199] == '\x02') &&
     (*(undefined1 *)(param_1 + 199) = 0, 1 < (byte)(*(char *)((longlong)param_1 + 0x639) - 1U))) {
                    /* WARNING: Could not recover jumptable at 0x000140f3e7b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x580))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140f3e7c0 FUN_140f3e7c0 body=437 status=ok
// SIG undefined FUN_140f3e7c0(void)

void FUN_140f3e7c0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_48 [4];
  undefined1 local_28 [8];
  longlong *local_20;
  
  *(undefined1 *)(param_1 + 199) = 2;
  if (param_1[0xc6] != 0) {
    *(undefined1 *)(param_1 + 199) = *(undefined1 *)(param_1[0xc6] + 0x10e6);
    (**(code **)(*param_1 + 0x578))(param_1,1);
    if (param_1[200] != 0) {
      local_48[0] = 0;
      local_48[1] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
      FGenericPlatformString::Memcpy(local_48[0],L"revive",0xe);
      FUN_142088910(param_1[200],local_48);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
    if (param_1[0xc9] != 0) {
      local_48[2] = 0;
      local_48[3] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 2,0);
      FGenericPlatformString::Memcpy(local_48[2],L"revive",0xe);
      FUN_142088910(param_1[0xc9],local_48 + 2);
      if (local_48[2] != 0) {
        FMemory::Free();
      }
    }
    if ((longlong *)param_1[0xca] != (longlong *)0x0) {
      lVar4 = *(longlong *)param_1[0xca];
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_28,L"RESURRECTING ALLY!",L"GFxFightForYourLifeWidget",
                         L"ResurrectingAlly");
      (**(code **)(lVar4 + 0x2b0))(param_1[0xca],uVar5,1,0);
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
    FUN_140f4ccf0(param_1,2);
    if (param_1[0xcc] != 0) {
      FUN_142f0ead0(param_1[0xcc],1.0 - *(float *)((longlong)param_1 + 0x68c));
      return;
    }
  }
  return;
}



// FUNCTION 140f3e9a0 FUN_140f3e9a0 body=87 status=ok
// SIG undefined FUN_140f3e9a0(void)

void FUN_140f3e9a0(longlong *param_1)

{
  char cVar1;
  
  if ((char)param_1[199] == '\x02') {
    cVar1 = *(char *)((longlong)param_1 + 0x639);
    *(undefined1 *)(param_1 + 199) = 0;
    if ((cVar1 != '\x01') && (cVar1 != '\x02')) {
      (**(code **)(*param_1 + 0x580))(param_1,0);
      cVar1 = *(char *)((longlong)param_1 + 0x639);
    }
    if (cVar1 != '\0') {
      FUN_140f51970(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140f3ea00 FUN_140f3ea00 body=100 status=ok
// SIG undefined FUN_140f3ea00(void)

void FUN_140f3ea00(longlong *param_1)

{
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xd7));
  *(undefined1 *)((longlong)param_1 + 0x6ca) = 0;
  if ((*(char *)((longlong)param_1 + 0x679) != '\0') &&
     ((param_1[0xd3] != 0 || (param_1[0xd5] != 0)))) {
    (**(code **)(*param_1 + 0x578))(param_1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140f3ea5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xd7));
  return;
}



// FUNCTION 140f3ea70 FUN_140f3ea70 body=230 status=ok
// SIG undefined FUN_140f3ea70(void)

void FUN_140f3ea70(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res10 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_2 != 0) {
    lVar3 = AReplicationGraphDebugActor::GetPrivateStaticClass();
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
      lVar3 = *param_1;
      local_18 = 0;
      local_10 = 0;
      puVar4 = (undefined8 *)FName::FName(local_res10,L"Guardian_Stat_Boost",1);
      (**(code **)(lVar3 + 0x4e8))(param_1,*puVar4,&local_18);
      lVar3 = *(longlong *)(param_2 + 0x330);
      cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x1b6);
      if (cVar2 != '\0') {
        FUN_140f529f0(param_1,6);
        if (lVar3 != 0) {
          FUN_140f244a0(param_1,*(undefined8 *)(lVar3 + 0x30));
        }
        uVar5 = FWeakObjectPtr::Get(param_1 + 0x1b6);
        FUN_1414b20c0(uVar5,lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140f3eb60 FUN_140f3eb60 body=420 status=ok
// SIG undefined FUN_140f3eb60(void)

void FUN_140f3eb60(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  longlong local_18 [2];
  
  lVar5 = 0;
  lVar4 = lVar5;
  if (*(longlong *)(param_1 + 0xb90) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb90) + 0x338);
    if (lVar2 != 0) {
      lVar4 = *(longlong *)(lVar2 + 0x30);
    }
    local_18[0] = 0;
    local_18[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"default",0x10);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0xb90),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0xb90) = 0;
  }
  if (param_2 != 0) {
    lVar2 = AReplicationGraphDebugActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(param_2 + 0x330) != 0)) {
      local_res8 = *(longlong *)(param_2 + 0x330);
      lVar2 = FUN_140f221c0(&local_res8,*(undefined8 *)(param_1 + 0xac8));
      *(longlong *)(param_1 + 0xb90) = lVar2;
      if (lVar2 == 0) {
        uVar3 = FUN_140f221c0(&local_res8,*(undefined8 *)(param_1 + 0xad0));
        *(undefined8 *)(param_1 + 0xb90) = uVar3;
      }
      if (*(longlong *)(param_1 + 0xb90) == 0) {
        uVar3 = FUN_140f221c0(&local_res8,*(undefined8 *)(param_1 + 0xad8));
        *(undefined8 *)(param_1 + 0xb90) = uVar3;
      }
      LOCK();
      *(undefined4 *)(param_1 + 0xde8) = 1;
      UNLOCK();
    }
  }
  if ((*(longlong *)(param_1 + 0xb90) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb90) + 0x338), lVar2 != 0)) {
    lVar5 = *(longlong *)(lVar2 + 0x30);
  }
  if (lVar4 != lVar5) {
    if (lVar4 != 0) {
      FUN_140f4e560(param_1,lVar4,0);
    }
    if (lVar5 != 0) {
      FUN_140f4e560(param_1,lVar5,1);
    }
  }
  return;
}



// FUNCTION 140f3ed10 FUN_140f3ed10 body=359 status=ok
// SIG undefined FUN_140f3ed10(void)

void FUN_140f3ed10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    if ((*(longlong **)(*param_2 + 0x10) == (longlong *)0x0) ||
       (cVar5 = (**(code **)(**(longlong **)(*param_2 + 0x10) + 0x20))(), cVar5 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar9 = 0;
      iVar6 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x6c8));
      if (0 < iVar6) {
        do {
          lVar7 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6c8),iVar9);
          if (lVar7 != 0) {
            lVar8 = UPackageMapClient::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (((bVar3) && (*(longlong *)(lVar7 + 0x308) != 0)) &&
               (cVar5 = (**(code **)**(undefined8 **)(*param_2 + 0x10))(), cVar5 != '\0')) {
              local_18 = *param_2;
              local_10 = (longlong *)param_2[1];
              if (local_10 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_10 + 1) = (int)local_10[1] + 1;
                UNLOCK();
              }
              FUN_140f44020(param_1,&local_18,lVar7);
              plVar4 = local_10;
              if (local_10 == (longlong *)0x0) {
                return;
              }
              LOCK();
              plVar1 = local_10 + 1;
              lVar7 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar7 != 1) {
                return;
              }
              (**(code **)*local_10)(local_10);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 != 1) {
                return;
              }
              (**(code **)(*local_10 + 8))(local_10,1);
              return;
            }
          }
          iVar9 = iVar9 + 1;
          iVar6 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x6c8));
        } while (iVar9 < iVar6);
      }
    }
  }
  return;
}



// FUNCTION 140f3ee80 FUN_140f3ee80 body=650 status=ok
// SIG undefined FUN_140f3ee80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3ee80(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [4];
  code *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  cVar1 = FUN_1410875b0();
  if (cVar1 == '\0') {
    return;
  }
  local_d8[0] = 0xffffffff;
  uVar5 = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(local_d8,param_2);
    uVar5 = local_d8[0];
  }
  uVar4 = 0;
  local_d8[0] = 0xffffffff;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144266c70;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = uVar5;
    uVar5 = 0xffffffff;
  }
  local_c8[0] = (code *)&LAB_140f26d30;
  FUN_1420849a0(param_1,local_78,local_c8);
  if (local_88 != 0) {
    plVar3 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar3 = local_98;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar5);
  FUN_1416f8340(local_d8[0]);
  cVar1 = FUN_140f2ca60();
  local_98 = (longlong *)0x0;
  local_88 = 0;
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)FUN_140438ef0(0x60,local_b8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_CopyToEmptyStorage_1444f81f0;
      puVar2[8] = 0;
      *(undefined4 *)(puVar2 + 10) = 0;
      if (local_38 == 0) {
LAB_140f3f044:
        local_78[0] = AK::MemoryMgr::StartProfileThreadUsage;
      }
      else {
        plVar3 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar3 = local_48;
        }
        if (plVar3 == (longlong *)0x0) goto LAB_140f3f044;
        plVar3 = (longlong *)(**(code **)*plVar3)(plVar3,puVar2 + 4);
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      puVar2[2] = local_78[0];
    }
    local_c8[0] = UE4Function_Private::
                  TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::
                  Call;
    if (local_88 != 0) {
      plVar3 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar3 = local_98;
      }
      if (plVar3 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 8))();
      }
    }
    (*local_c8[0])(uVar4);
    if (local_88 != 0) {
      plVar3 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar3 = local_98;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    goto LAB_140f3f0b9;
  }
  puVar2 = (undefined8 *)FUN_140438ef0(0x60,local_b8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_1444f81f0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 10) = 0;
    if (local_38 == 0) {
LAB_140f3efce:
      local_78[0] = AK::MemoryMgr::StartProfileThreadUsage;
    }
    else {
      plVar3 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar3 = local_48;
      }
      if (plVar3 == (longlong *)0x0) goto LAB_140f3efce;
      plVar3 = (longlong *)(**(code **)*plVar3)(plVar3,puVar2 + 4);
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    puVar2[2] = local_78[0];
  }
  local_c8[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::
                Call;
  FUN_14208c4f0(param_1,local_c8);
LAB_140f3f0b9:
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f3f110 FUN_140f3f110 body=672 status=ok
// SIG undefined FUN_140f3f110(void)

void FUN_140f3f110(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined *local_18;
  
  *(undefined1 *)(param_1 + 0x570) = 1;
  FUN_142ecbc80();
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar2 = FUN_140ac4770(param_1,param_1 + 0x6e8,0,6,&local_48);
  *(undefined8 *)(param_1 + 0x6a0) = uVar2;
  plVar3 = local_48;
  for (iVar4 = (int)local_40; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar2 = FUN_140ac4770(param_1,param_1 + 0x6f8,0,6,&local_48);
  *(undefined8 *)(param_1 + 0x6a8) = uVar2;
  plVar3 = local_48;
  for (iVar4 = (int)local_40; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar2 = FUN_140f13f30(param_1,param_1 + 0x708,0,6,&local_48);
  *(undefined8 *)(param_1 + 0x6b0) = uVar2;
  plVar3 = local_48;
  for (iVar4 = (int)local_40; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar2 = FUN_140e96f30(param_1,param_1 + 0x718,0,6,&local_48);
  *(undefined8 *)(param_1 + 0x6b8) = uVar2;
  plVar3 = local_48;
  for (iVar4 = (int)local_40; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (((*(longlong *)(param_1 + 0x6a0) != 0) && (*(longlong *)(param_1 + 0x6b0) != 0)) &&
     (*(longlong *)(param_1 + 0x6b8) != 0)) {
    FUN_142f118f0();
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    local_18 = PTR_s_bottom_14629dce8;
    local_28 = (longlong *)0x0;
    local_20 = 6;
    FUN_142f10860(*(undefined8 *)(param_1 + 0x6a0),&local_38);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*local_28 + 0x10))(local_28,&local_38,local_18);
    }
    FUN_142f10ae0(*(undefined8 *)(param_1 + 0x6a0),0);
    FUN_142f0de70(*(undefined8 *)(param_1 + 0x6a0),PTR_DAT_14629dcf0);
  }
  if (((0 < *(int *)(param_1 + 0x6c8)) || (cVar1 = FText::IsEmpty(param_1 + 0x6d0), cVar1 == '\0'))
     || (*(longlong *)(param_1 + 0x698) != 0)) {
    FUN_140f54060(param_1);
  }
  return;
}



// FUNCTION 140f3f3b0 FUN_140f3f3b0 body=461 status=ok
// SIG undefined FUN_140f3f3b0(void)

void FUN_140f3f3b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecc000();
  local_40 = 0xc;
  local_48 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"friendCount",0x18);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  uVar5 = FUN_140ac4770(param_1,&local_48,0,6,&local_58);
  *(undefined8 *)(param_1 + 0x4d8) = uVar5;
  plVar6 = local_58;
  for (iVar7 = (int)local_50; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  iVar7 = *(int *)(param_1 + 0x4e0);
  if ((-1 < iVar7) && (*(longlong *)(param_1 + 0x2b8) != 0)) {
    if (*(longlong **)(param_1 + 0x4d8) != (longlong *)0x0) {
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      lVar4 = **(longlong **)(param_1 + 0x4d8);
      uVar5 = FText::AsNumber(local_28,iVar7,0,&local_38);
      (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x4d8),uVar5,0,0);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_20 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      plVar6 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_30 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_30)(plStack_30);
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
    plVar6 = *(longlong **)(param_1 + 0x2b8);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x278))(plVar6,iVar7 != 0);
    }
  }
  return;
}



// FUNCTION 140f3f580 FUN_140f3f580 body=1305 status=ok
// SIG undefined FUN_140f3f580(void)

undefined4 FUN_140f3f580(longlong param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong *local_60;
  
  FUN_142ecbc80();
  uVar9 = 0;
  local_e0 = 0xc;
  local_e8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"headerLabel",0x18);
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_e8,0,6,&local_f8);
  *(undefined8 *)(param_1 + 0x6d0) = uVar3;
  plVar6 = local_f8;
  for (iVar10 = (int)local_f0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  local_c8 = 0;
  local_c0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"locationLabel",0x1c);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_c8,0,6,&local_d8);
  *(undefined8 *)(param_1 + 0x6d8) = uVar3;
  plVar6 = local_d8;
  for (iVar10 = (int)local_d0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"headerFriendCount",0x24);
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_a8,0,6,&local_b8);
  *(undefined8 *)(param_1 + 0x6e0) = uVar3;
  plVar6 = local_b8;
  for (iVar10 = (int)local_b0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  local_88 = 0;
  local_80 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"friendList.listWrapper",0x2e);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  uVar3 = FUN_140ecb410(param_1,&local_88,0,6,&local_98);
  *(undefined8 *)(param_1 + 0x6c8) = uVar3;
  plVar6 = local_98;
  for (iVar10 = (int)local_90; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = *(longlong *)(lVar4 + 0x478);
      local_108 = FUN_140f35b30;
      plVar11 = (longlong *)(lVar5 + 0x1e0);
      uStack_100 = 0;
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      uVar3 = uVar9;
      local_70 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_108;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_108._4_4_;
        *(undefined4 *)(plVar6 + 3) = uStack_100;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_fc;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar7;
        *plVar6 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
        puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_78);
        iVar10 = *(int *)(lVar5 + 0x1e8);
        uVar3 = *puVar8;
        *(int *)(lVar5 + 0x1e8) = iVar10 + 1;
        if (*(int *)(lVar5 + 0x1ec) < iVar10 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar10);
        }
        puVar8 = (undefined8 *)((longlong)iVar10 * 0x10 + *plVar11);
        *puVar8 = plVar6;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x6a8) = uVar3;
      lVar4 = *(longlong *)(lVar4 + 0x478);
      local_108 = FUN_140f35b30;
      uStack_100 = 0;
      plVar11 = (longlong *)(lVar4 + 0x208);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      local_60 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_108;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_108._4_4_;
        *(undefined4 *)(plVar6 + 3) = uStack_100;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_fc;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar5;
        *plVar6 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
        puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,&local_108);
        iVar10 = *(int *)(lVar4 + 0x210);
        uVar9 = *puVar8;
        *(int *)(lVar4 + 0x210) = iVar10 + 1;
        if (*(int *)(lVar4 + 0x214) < iVar10 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar10);
        }
        puVar8 = (undefined8 *)((longlong)iVar10 * 0x10 + *plVar11);
        *puVar8 = plVar6;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x6b0) = uVar9;
    }
  }
  if ((*(int *)(param_1 + 0x700) != 0) && (1 < *(int *)(param_1 + 0x6f0))) {
    FUN_140f44400(param_1,param_1 + 0x6f8,param_1 + 0x6e8);
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140f3faa0 FUN_140f3faa0 body=141 status=ok
// SIG undefined FUN_140f3faa0(void)

void FUN_140f3faa0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_142ecbc80();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_142f1c650();
  lVar2 = FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0x6b0) = lVar2;
  if (lVar2 != 0) {
    FUN_142ebb990(lVar2,param_1,param_1 + 0x680);
  }
  *(undefined1 *)(param_1 + 0x6e8) = 1;
  FUN_140f2ead0(param_1);
  return;
}



// FUNCTION 140f3fb30 FUN_140f3fb30 body=57 status=ok
// SIG undefined FUN_140f3fb30(void)

void FUN_140f3fb30(longlong *param_1)

{
  FUN_140efe5e0();
  if ((char)param_1[0xba] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140f3fb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x518))(param_1,param_1 + 0xba,param_1 + 0xa7);
    return;
  }
  return;
}



// FUNCTION 140f3fb70 FUN_140f3fb70 body=7735 status=ok
// SIG undefined FUN_140f3fb70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f3fb70(longlong param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 auStack_688 [32];
  longlong **local_668;
  longlong **local_660;
  char local_658;
  undefined8 local_650;
  longlong local_648;
  undefined8 local_640;
  longlong *local_638;
  undefined8 local_630;
  longlong local_628;
  undefined8 local_620;
  longlong *local_618;
  undefined8 local_610;
  longlong local_608;
  undefined8 local_600;
  longlong *local_5f8;
  undefined8 local_5f0;
  longlong local_5e8;
  undefined8 local_5e0;
  longlong *local_5d8;
  undefined8 local_5d0;
  longlong local_5c8;
  undefined8 local_5c0;
  longlong *local_5b8;
  undefined8 local_5b0;
  longlong *local_5a8;
  undefined8 local_5a0;
  longlong local_598;
  undefined8 local_590;
  longlong *local_588;
  undefined8 local_580;
  longlong local_578;
  undefined8 local_570;
  longlong *local_568;
  undefined8 local_560;
  longlong *local_558;
  undefined8 local_550;
  longlong local_548;
  undefined8 local_540;
  longlong local_538;
  undefined8 local_530;
  longlong *local_528;
  undefined8 local_520;
  longlong local_518;
  undefined8 local_510;
  longlong local_508;
  undefined8 local_500;
  longlong local_4f8;
  undefined8 local_4f0;
  longlong *local_4e8;
  undefined8 local_4e0;
  longlong local_4d8;
  undefined8 local_4d0;
  longlong *local_4c8;
  undefined8 local_4c0;
  longlong local_4b8;
  undefined8 local_4b0;
  longlong *local_4a8;
  undefined8 local_4a0;
  longlong local_498;
  undefined8 local_490;
  longlong *local_488;
  undefined8 local_480;
  longlong local_478;
  undefined8 local_470;
  longlong local_468;
  longlong local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined1 local_3f0 [8];
  longlong *local_3e8;
  undefined1 local_3e0 [8];
  longlong *local_3d8;
  undefined1 local_3d0 [8];
  longlong *local_3c8;
  undefined1 local_3c0 [8];
  longlong *local_3b8;
  undefined1 local_3b0 [8];
  longlong *local_3a8;
  undefined1 local_3a0 [8];
  longlong *local_398;
  undefined1 local_390 [8];
  longlong *local_388;
  undefined1 local_380 [8];
  longlong *local_378;
  undefined1 local_370 [8];
  longlong *local_368;
  undefined1 local_360 [8];
  longlong *local_358;
  undefined1 local_350 [8];
  longlong *local_348;
  undefined1 local_340 [8];
  longlong *local_338;
  undefined1 local_330 [8];
  longlong *local_328;
  undefined1 local_320 [8];
  longlong *local_318;
  undefined1 local_310 [8];
  longlong *local_308;
  undefined1 local_300 [8];
  longlong *local_2f8;
  undefined1 local_2f0 [8];
  longlong *local_2e8;
  undefined1 local_2e0 [8];
  longlong *local_2d8;
  undefined1 local_2d0 [8];
  longlong *local_2c8;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined1 local_2b0 [8];
  longlong *local_2a8;
  undefined1 local_2a0 [8];
  longlong *local_298;
  undefined1 local_290 [8];
  longlong *local_288;
  undefined1 local_280 [8];
  longlong *local_278;
  undefined1 local_270 [8];
  longlong *local_268;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined1 local_250 [8];
  longlong *local_248;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 *local_178 [2];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined1 *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined1 local_d8 [16];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_688;
  thunk_FUN_142ecbc80();
  local_540 = 0xc;
  local_548 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_548,0);
  FGenericPlatformString::Memcpy(local_548,L"infoPanelMC",0x18);
  local_660 = &local_558;
  local_558 = (longlong *)0x0;
  puVar10 = (undefined8 *)(param_1 + 0xa88);
  local_668 = (longlong **)CONCAT71(local_668._1_7_,6);
  local_550 = 0;
  local_458 = 0;
  cVar4 = FUN_140ecf270(param_1,puVar10,&local_548,0);
  plVar12 = local_558;
  for (iVar14 = (int)local_550; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_558 != (longlong *)0x0) {
    FMemory::Free(local_558);
  }
  if (local_548 != 0) {
    FMemory::Free();
  }
  if (cVar4 != '\0') {
    local_538 = 0;
    local_530 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_538,0);
    FGenericPlatformString::Memcpy(local_538,L"unlockDescription",0x24);
    FUN_142088cf0(*puVar10,&local_538);
    if (local_538 != 0) {
      FMemory::Free();
    }
    uVar5 = FUN_142085870(*puVar10,local_3f0,L"perkTitle");
    FUN_142ede260(param_1 + 0x6a8,uVar5);
    if (local_3e8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_3e8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_3e8)(local_3e8);
        LOCK();
        piVar1 = (int *)((longlong)local_3e8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_3e8 + 8))(local_3e8,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_3e0,L"perkTitleShadow");
    FUN_142ede260(param_1 + 0x6c0,uVar5);
    if (local_3d8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_3d8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_3d8)(local_3d8);
        LOCK();
        piVar1 = (int *)((longlong)local_3d8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_3d8 + 8))(local_3d8,1);
        }
      }
    }
    puVar6 = (undefined8 *)FUN_142085870(*puVar10,local_3d0,L"iconContainerMC");
    *(undefined8 *)(param_1 + 0xa90) = *puVar6;
    plVar12 = (longlong *)puVar6[1];
    plVar13 = *(longlong **)(param_1 + 0xa98);
    if (plVar12 != plVar13) {
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
        UNLOCK();
        plVar13 = *(longlong **)(param_1 + 0xa98);
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      *(longlong **)(param_1 + 0xa98) = plVar12;
    }
    if (local_3c8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_3c8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_3c8)(local_3c8);
        LOCK();
        piVar1 = (int *)((longlong)local_3c8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_3c8 + 8))(local_3c8,1);
        }
      }
    }
    puVar6 = (undefined8 *)FUN_142085870(*puVar10,local_3c0,L"slotTypeBG");
    *(undefined8 *)(param_1 + 0xaa0) = *puVar6;
    plVar12 = (longlong *)puVar6[1];
    plVar13 = *(longlong **)(param_1 + 0xaa8);
    if (plVar12 != plVar13) {
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
        UNLOCK();
        plVar13 = *(longlong **)(param_1 + 0xaa8);
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      *(longlong **)(param_1 + 0xaa8) = plVar12;
    }
    if (local_3b8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_3b8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_3b8)(local_3b8);
        LOCK();
        piVar1 = (int *)((longlong)local_3b8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_3b8 + 8))(local_3b8,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_3b0,L"infoPanelDescription");
    FUN_142ede260(param_1 + 0x6d8,uVar5);
    if (local_3a8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_3a8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_3a8)(local_3a8);
        LOCK();
        piVar1 = (int *)((longlong)local_3a8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_3a8 + 8))(local_3a8,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x6e0) != 0) && (*(longlong *)(param_1 + 0x6e8) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x6e8) + 8);
      LOCK();
      iVar14 = *piVar1;
      if (iVar14 == 0) {
        *piVar1 = 0;
        iVar14 = 0;
      }
      UNLOCK();
      if (0 < iVar14) {
        local_478 = 0;
        local_470 = 0;
        FUN_142f0fdc0(param_1 + 0x6d8,&local_478,1,0);
        if (local_478 != 0) {
          FMemory::Free();
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_3a0,L"infoPanelCost");
    FUN_142ede260(param_1 + 0x6f0,uVar5);
    if (local_398 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_398 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_398)(local_398);
        LOCK();
        piVar1 = (int *)((longlong)local_398 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_398 + 8))(local_398,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_390,L"infoPanelCostShadow");
    FUN_142ede260(param_1 + 0x708,uVar5);
    if (local_388 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_388 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_388)(local_388);
        LOCK();
        piVar1 = (int *)((longlong)local_388 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_388 + 8))(local_388,1);
        }
      }
    }
    local_518 = 0;
    local_510 = 0x1c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,0);
    FGenericPlatformString::Memcpy(local_518,L"infoPanelMC.statUpgradeList",0x38);
    local_668 = &local_528;
    local_528 = (longlong *)0x0;
    local_520 = 0;
    local_450 = 0;
    uVar5 = FUN_140ecb6b0(*puVar10,&local_518,0,6);
    *(undefined8 *)(param_1 + 0xab0) = uVar5;
    plVar12 = local_528;
    for (iVar14 = (int)local_520; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_528 != (longlong *)0x0) {
      FMemory::Free(local_528);
    }
    if (local_518 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0xab0) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0xab0) + 0x208) = 1;
    }
    uVar5 = FUN_142085870(*puVar10,local_380,L"rewardLabel");
    FUN_142ede260(param_1 + 0x720,uVar5);
    if (local_378 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_378 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_378)(local_378);
        LOCK();
        piVar1 = (int *)((longlong)local_378 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_378 + 8))(local_378,1);
        }
      }
    }
  }
  local_4f8 = 0;
  local_4f0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4f8,0);
  FGenericPlatformString::Memcpy(local_4f8,L"guardianRankPanel",0x24);
  local_668 = &local_5b8;
  local_5b8 = (longlong *)0x0;
  local_5b0 = 0;
  local_448 = 0;
  lVar7 = FUN_140e96f30(param_1,&local_4f8,0,6);
  plVar12 = local_5b8;
  for (iVar14 = (int)local_5b0; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_5b8 != (longlong *)0x0) {
    FMemory::Free(local_5b8);
  }
  if (local_4f8 != 0) {
    FMemory::Free();
  }
  if (lVar7 != 0) {
    uVar5 = FUN_142085870(lVar7,local_370,L"guardianRank");
    FUN_142ede260(param_1 + 0x738,uVar5);
    if (local_368 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_368 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_368)(local_368);
        LOCK();
        piVar1 = (int *)((longlong)local_368 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_368 + 8))(local_368,1);
        }
      }
    }
    local_4d8 = 0;
    local_4d0 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d8,0);
    FGenericPlatformString::Memcpy(local_4d8,L"guardianRankBar",0x20);
    local_668 = &local_4e8;
    local_4e8 = (longlong *)0x0;
    local_4e0 = 0;
    local_440 = 0;
    uVar5 = FUN_140ecc430(lVar7,&local_4d8,0,6);
    *(undefined8 *)(param_1 + 0xab8) = uVar5;
    plVar12 = local_4e8;
    for (iVar14 = (int)local_4e0; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_4e8 != (longlong *)0x0) {
      FMemory::Free(local_4e8);
    }
    if (local_4d8 != 0) {
      FMemory::Free();
    }
  }
  local_4b8 = 0;
  local_4b0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b8,0);
  FGenericPlatformString::Memcpy(local_4b8,L"bonusStatsMC",0x1a);
  local_668 = &local_4c8;
  local_4c8 = (longlong *)0x0;
  local_4c0 = 0;
  local_438 = 0;
  lVar7 = FUN_140e96f30(param_1,&local_4b8,0,6);
  plVar12 = local_4c8;
  for (iVar14 = (int)local_4c0; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_4c8 != (longlong *)0x0) {
    FMemory::Free(local_4c8);
  }
  if (local_4b8 != 0) {
    FMemory::Free();
  }
  if (lVar7 != 0) {
    uVar5 = FUN_142085870(lVar7,local_360,L"bonusStatsHeaderText");
    FUN_142ede260(param_1 + 0x780,uVar5);
    if (local_358 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_358 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_358)(local_358);
        LOCK();
        piVar1 = (int *)((longlong)local_358 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_358 + 8))(local_358,1);
        }
      }
    }
    uVar5 = FUN_142085870(lVar7,local_350,L"bonusStatsHeaderTextShadow");
    FUN_142ede260(param_1 + 0x798,uVar5);
    if (local_348 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_348 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_348)(local_348);
        LOCK();
        piVar1 = (int *)((longlong)local_348 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_348 + 8))(local_348,1);
        }
      }
    }
    uVar5 = FUN_142085870(lVar7,local_340,L"enforcerStatsLabel");
    FUN_142ede260(param_1 + 0x7b0,uVar5);
    if (local_338 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_338 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_338)(local_338);
        LOCK();
        piVar1 = (int *)((longlong)local_338 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_338 + 8))(local_338,1);
        }
      }
    }
    uVar5 = FUN_142085870(lVar7,local_330,L"enforcerStatsLabelShadow");
    FUN_142ede260(param_1 + 0x7c8,uVar5);
    if (local_328 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_328 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_328)(local_328);
        LOCK();
        piVar1 = (int *)((longlong)local_328 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_328 + 8))(local_328,1);
        }
      }
    }
    local_498 = 0;
    local_490 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_498,0);
    FGenericPlatformString::Memcpy(local_498,L"enforcerStats",0x1c);
    local_660 = &local_4a8;
    local_4a8 = (longlong *)0x0;
    local_4a0 = 0;
    local_430 = 0;
    local_668 = (longlong **)CONCAT71(local_668._1_7_,6);
    cVar4 = FUN_140f15e80(lVar7,param_1 + 0xac8,&local_498,0);
    plVar12 = local_4a8;
    for (iVar14 = (int)local_4a0; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_4a8 != (longlong *)0x0) {
      FMemory::Free(local_4a8);
    }
    if (local_498 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0xac8) + 0x170);
      (**(code **)(*plVar12 + 0x38))(plVar12,0);
    }
    uVar5 = FUN_142085870(lVar7,local_320,L"survivorStatsLabel");
    FUN_142ede260(param_1 + 0x7e0,uVar5);
    if (local_318 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_318 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_318)(local_318);
        LOCK();
        piVar1 = (int *)((longlong)local_318 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_318 + 8))(local_318,1);
        }
      }
    }
    uVar5 = FUN_142085870(lVar7,local_310,L"survivorStatsLabelShadow");
    FUN_142ede260(param_1 + 0x7f8,uVar5);
    if (local_308 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_308 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_308)(local_308);
        LOCK();
        piVar1 = (int *)((longlong)local_308 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_308 + 8))(local_308,1);
        }
      }
    }
    local_648 = 0;
    local_640 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_648,0);
    FGenericPlatformString::Memcpy(local_648,L"survivorStats",0x1c);
    local_660 = &local_488;
    local_488 = (longlong *)0x0;
    local_480 = 0;
    local_428 = 0;
    local_668 = (longlong **)CONCAT71(local_668._1_7_,6);
    cVar4 = FUN_140f15e80(lVar7,param_1 + 0xad0,&local_648,0);
    plVar12 = local_488;
    for (iVar14 = (int)local_480; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_488 != (longlong *)0x0) {
      FMemory::Free(local_488);
    }
    if (local_648 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0xad0) + 0x170);
      (**(code **)(*plVar12 + 0x38))(plVar12,0);
    }
    uVar5 = FUN_142085870(lVar7,local_300,L"hunterStatsLabel");
    FUN_142ede260(param_1 + 0x810,uVar5);
    if (local_2f8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2f8 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_2f8)(local_2f8);
        LOCK();
        piVar1 = (int *)((longlong)local_2f8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_2f8 + 8))(local_2f8,1);
        }
      }
    }
    uVar5 = FUN_142085870(lVar7,local_2f0,L"hunterStatsLabelShadow");
    FUN_142ede260(param_1 + 0x828,uVar5);
    if (local_2e8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2e8 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_2e8)(local_2e8);
        LOCK();
        piVar1 = (int *)((longlong)local_2e8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_2e8 + 8))(local_2e8,1);
        }
      }
    }
    local_628 = 0;
    local_620 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_628,0);
    FGenericPlatformString::Memcpy(local_628,L"hunterStats",0x18);
    local_660 = &local_638;
    local_638 = (longlong *)0x0;
    local_668 = (longlong **)CONCAT71(local_668._1_7_,6);
    local_630 = 0;
    local_3f8 = 0;
    local_658 = FUN_140f15e80(lVar7,param_1 + 0xad8,&local_628,0);
    plVar12 = local_638;
    for (iVar14 = (int)local_630; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_638 != (longlong *)0x0) {
      FMemory::Free(local_638);
    }
    if (local_628 != 0) {
      FMemory::Free();
    }
    if (local_658 != '\0') {
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0xad8) + 0x170);
      (**(code **)(*plVar12 + 0x38))(plVar12,0);
    }
    uVar5 = FUN_142085870(lVar7,local_2e0,L"guardianTokenCount");
    FUN_142ede260(param_1 + 0x750,uVar5);
    if (local_2d8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2d8 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_2d8)(local_2d8);
        LOCK();
        piVar1 = (int *)((longlong)local_2d8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_2d8 + 8))(local_2d8,1);
        }
      }
    }
    uVar5 = FUN_142085870(lVar7,local_2d0,L"guardianTokenCountShadow");
    FUN_142ede260(param_1 + 0x768,uVar5);
    if (local_2c8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2c8 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_2c8)(local_2c8);
        LOCK();
        piVar1 = (int *)((longlong)local_2c8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_2c8 + 8))(local_2c8,1);
        }
      }
    }
    local_608 = 0;
    local_600 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_608,0);
    FGenericPlatformString::Memcpy(local_608,L"redeemButtonMC",0x1e);
    local_660 = &local_618;
    local_618 = (longlong *)0x0;
    plVar12 = (longlong *)(param_1 + 0xac0);
    local_668 = (longlong **)CONCAT71(local_668._1_7_,6);
    local_610 = 0;
    local_420 = 0;
    cVar4 = FUN_140f15b10(lVar7,plVar12,&local_608,0);
    plVar13 = local_618;
    for (iVar14 = (int)local_610; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 2;
    }
    if (local_618 != (longlong *)0x0) {
      FMemory::Free(local_618);
    }
    if (local_608 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnRedeemTokenButtonFocused",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_468,pwVar3 + 2,1);
      lVar7 = *plVar12;
      FWeakObjectPtr::operator=(lVar7 + 0x1d0,param_1);
      *(longlong *)(lVar7 + 0x1d8) = local_468;
      local_650 = 0;
      if ((local_468 != 0) && (lVar9 = FWeakObjectPtr::Get(lVar7 + 0x1d0), lVar9 != 0)) {
        UObject::FindFunction(lVar9,*(undefined8 *)(lVar7 + 0x1d8));
      }
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnRedeemTokenButtonClicked",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_460,pwVar3 + 2,1);
      lVar7 = *plVar12;
      FWeakObjectPtr::operator=(lVar7 + 0x1b0,param_1);
      *(longlong *)(lVar7 + 0x1b8) = local_460;
      local_650 = 0;
      if ((local_460 != 0) && (lVar9 = FWeakObjectPtr::Get(lVar7 + 0x1b0), lVar9 != 0)) {
        UObject::FindFunction(lVar9,*(undefined8 *)(lVar7 + 0x1b8));
      }
    }
  }
  local_5e8 = 0;
  local_5e0 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5e8,0);
  FGenericPlatformString::Memcpy(local_5e8,L"perkTreeMC",0x16);
  local_660 = &local_5f8;
  local_5f8 = (longlong *)0x0;
  puVar10 = (undefined8 *)(param_1 + 0xa80);
  local_668 = (longlong **)CONCAT71(local_668._1_7_,6);
  local_5f0 = 0;
  local_650 = 0;
  cVar4 = FUN_140ecf270(param_1,puVar10,&local_5e8,0);
  plVar12 = local_5f8;
  for (iVar14 = (int)local_5f0; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_5f8 != (longlong *)0x0) {
    FMemory::Free(local_5f8);
  }
  if (local_5e8 != 0) {
    FMemory::Free();
  }
  if (cVar4 != '\0') {
    local_5c8 = 0;
    local_5c0 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5c8,0);
    FGenericPlatformString::Memcpy(local_5c8,L"perkSlots",0x14);
    local_660 = &local_5d8;
    plVar12 = (longlong *)(param_1 + 0xae0);
    local_668 = (longlong **)CONCAT71(local_668._1_7_,6);
    local_5d8 = (longlong *)0x0;
    local_5d0 = 0;
    local_418 = 0;
    local_658 = FUN_140f161f0(*puVar10,plVar12,&local_5c8,0);
    plVar13 = local_5d8;
    for (iVar14 = (int)local_5d0; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 2;
    }
    if (local_5d8 != (longlong *)0x0) {
      FMemory::Free(local_5d8);
    }
    if (local_5c8 != 0) {
      FMemory::Free();
    }
    if (local_658 != '\0') {
      *(undefined1 *)(*plVar12 + 0x20a) = 2;
      cVar4 = FUN_142ebe030(param_1);
      if (cVar4 == '\0') {
        uVar11 = *(undefined4 *)(param_1 + 0xda8);
      }
      else {
        uVar11 = *(undefined4 *)(param_1 + 0xdac);
      }
      *(undefined4 *)(*plVar12 + 800) = uVar11;
    }
    uVar5 = FUN_142085870(*puVar10,local_2c0,L"treeLabelEnforcer");
    FUN_142ede260(param_1 + 0x840,uVar5);
    if (local_2b8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2b8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_2b8)(local_2b8);
        LOCK();
        piVar1 = (int *)((longlong)local_2b8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_2b8 + 8))(local_2b8,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_2b0,L"treeLabelEnforcerShadow");
    FUN_142ede260(param_1 + 0x858,uVar5);
    if (local_2a8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2a8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_2a8)(local_2a8);
        LOCK();
        piVar1 = (int *)((longlong)local_2a8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_2a8 + 8))(local_2a8,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_2a0,L"treeLabelSurvivor");
    FUN_142ede260(param_1 + 0x870,uVar5);
    if (local_298 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_298 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_298)(local_298);
        LOCK();
        piVar1 = (int *)((longlong)local_298 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_298 + 8))(local_298,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_290,L"treeLabelSurvivorShadow");
    FUN_142ede260(param_1 + 0x888,uVar5);
    if (local_288 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_288 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_288)(local_288);
        LOCK();
        piVar1 = (int *)((longlong)local_288 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_288 + 8))(local_288,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_280,L"treeLabelHunter");
    FUN_142ede260(param_1 + 0x8a0,uVar5);
    if (local_278 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_278 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_278)(local_278);
        LOCK();
        piVar1 = (int *)((longlong)local_278 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_278 + 8))(local_278,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_270,L"treeLabelHunterShadow");
    FUN_142ede260(param_1 + 0x8b8,uVar5);
    if (local_268 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_268 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_268)(local_268);
        LOCK();
        piVar1 = (int *)((longlong)local_268 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_268 + 8))(local_268,1);
        }
      }
    }
    local_598 = 0;
    local_590 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_598,0);
    FGenericPlatformString::Memcpy(local_598,L"enforcerProgressBar",0x28);
    local_660 = &local_5a8;
    local_5a8 = (longlong *)0x0;
    local_5a0 = 0;
    local_410 = 0;
    local_668 = (longlong **)CONCAT71(local_668._1_7_,6);
    cVar4 = FUN_140f16560(*puVar10,param_1 + 0xb18,&local_598,0);
    plVar12 = local_5a8;
    for (iVar14 = (int)local_5a0; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_5a8 != (longlong *)0x0) {
      FMemory::Free(local_5a8);
    }
    if (local_598 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      puVar6 = (undefined8 *)FUN_142085870(*(undefined8 *)(param_1 + 0xb18),local_260,L"treeSelect")
      ;
      *(undefined8 *)(param_1 + 0xb40) = *puVar6;
      plVar12 = (longlong *)puVar6[1];
      plVar13 = *(longlong **)(param_1 + 0xb48);
      if (plVar12 != plVar13) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
          UNLOCK();
          plVar13 = *(longlong **)(param_1 + 0xb48);
        }
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
        *(longlong **)(param_1 + 0xb48) = plVar12;
      }
      if (local_258 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_258 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_258)(local_258);
          LOCK();
          piVar1 = (int *)((longlong)local_258 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_258 + 8))(local_258,1);
          }
        }
      }
    }
    local_578 = 0;
    local_570 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_578,0);
    FGenericPlatformString::Memcpy(local_578,L"survivorProgressBar",0x28);
    local_588 = (longlong *)0x0;
    local_580 = 0;
    local_408 = 0;
    local_668 = (longlong **)CONCAT71(local_668._1_7_,6);
    local_660 = &local_588;
    cVar4 = FUN_140f16560(*puVar10,param_1 + 0xb20,&local_578,0);
    plVar12 = local_588;
    for (iVar14 = (int)local_580; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_588 != (longlong *)0x0) {
      FMemory::Free(local_588);
    }
    if (local_578 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      puVar6 = (undefined8 *)FUN_142085870(*(undefined8 *)(param_1 + 0xb20),local_250,L"treeSelect")
      ;
      *(undefined8 *)(param_1 + 0xb50) = *puVar6;
      SharedPointerInternals::FWeakReferencer<1>::AssignReferenceController
                (param_1 + 0xb58,puVar6[1]);
      if (local_248 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_248 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_248)(local_248);
          LOCK();
          piVar1 = (int *)((longlong)local_248 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_248 + 8))(local_248,1);
          }
        }
      }
    }
    local_508 = 0;
    local_500 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_508,0);
    FGenericPlatformString::Memcpy(local_508,L"hunterProgressBar",0x24);
    local_660 = &local_568;
    local_568 = (longlong *)0x0;
    local_560 = 0;
    local_400 = 0;
    local_668 = (longlong **)CONCAT71(local_668._1_7_,6);
    cVar4 = FUN_140f16560(*puVar10,param_1 + 0xb28,&local_508,0);
    plVar12 = local_568;
    for (iVar14 = (int)local_560; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_568 != (longlong *)0x0) {
      FMemory::Free(local_568);
    }
    if (local_508 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      puVar6 = (undefined8 *)FUN_142085870(*(undefined8 *)(param_1 + 0xb28),local_240,L"treeSelect")
      ;
      *(undefined8 *)(param_1 + 0xb60) = *puVar6;
      SharedPointerInternals::FWeakReferencer<1>::AssignReferenceController
                (param_1 + 0xb68,puVar6[1]);
      if (local_238 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_238 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_238)(local_238);
          LOCK();
          piVar1 = (int *)((longlong)local_238 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_238 + 8))(local_238,1);
          }
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_230,L"enforcerTokenLabel");
    FUN_142ede260(param_1 + 0x8d0,uVar5);
    if (local_228 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_228 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_228)(local_228);
        LOCK();
        piVar1 = (int *)((longlong)local_228 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_228 + 8))(local_228,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_220,L"survivorTokenLabel");
    FUN_142ede260(param_1 + 0x8e8,uVar5);
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_218 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_218)(local_218);
        LOCK();
        piVar1 = (int *)((longlong)local_218 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_218 + 8))(local_218,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_210,L"hunterTokenLabel");
    FUN_142ede260(param_1 + 0x900,uVar5);
    if (local_208 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_208 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_208)(local_208);
        LOCK();
        piVar1 = (int *)((longlong)local_208 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_208 + 8))(local_208,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_200,L"enforcerCurrentValueLabel");
    FUN_142ede260(param_1 + 0x918,uVar5);
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_1f8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar1 = (int *)((longlong)local_1f8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_1f8 + 8))(local_1f8,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_1f0,L"enforcerCurrentValueLabelShadow");
    FUN_142ede260(param_1 + 0x930,uVar5);
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_1e8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar1 = (int *)((longlong)local_1e8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_1e8 + 8))(local_1e8,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_1e0,L"survivorCurrentValueLabel");
    FUN_142ede260(param_1 + 0x948,uVar5);
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_1d8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar1 = (int *)((longlong)local_1d8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_1d8 + 8))(local_1d8,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_1d0,L"survivorCurrentValueLabelShadow");
    FUN_142ede260(param_1 + 0x960,uVar5);
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_1c8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar1 = (int *)((longlong)local_1c8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_1c0,L"hunterCurrentValueLabel");
    FUN_142ede260(param_1 + 0x978,uVar5);
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_1b8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar1 = (int *)((longlong)local_1b8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_1b0,L"hunterCurrentValueLabelShadow");
    FUN_142ede260(param_1 + 0x990,uVar5);
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_1a8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1a8)(local_1a8);
        LOCK();
        piVar1 = (int *)((longlong)local_1a8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_1a8 + 8))(local_1a8,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_1a0,L"perkPanelLabel");
    FUN_142ede260(param_1 + 0x9a8,uVar5);
    if (local_198 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_198 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_198)(local_198);
        LOCK();
        piVar1 = (int *)((longlong)local_198 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_198 + 8))(local_198,1);
        }
      }
    }
    uVar5 = FUN_142085870(*puVar10,local_190,L"perkPanelLabelShadow");
    FUN_142ede260(param_1 + 0x9c0,uVar5);
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_188 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar1 = (int *)((longlong)local_188 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_188 + 8))(local_188,1);
        }
      }
    }
  }
  FUN_140f4f9a0(param_1);
  local_148 = (longlong *)0x0;
  local_138 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_168);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[1] = param_1;
    *puVar10 = &PTR_FUN_143f77b70;
  }
  local_178[0] = &LAB_140f26f50;
  uVar5 = FUN_1420849a0(param_1,local_d8,local_178);
  FUN_14208c260(param_1,uVar5);
  if (local_98 != 0) {
    plVar12 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar12 = local_a8;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_138 != 0) {
    plVar12 = local_168;
    if (local_148 != (longlong *)0x0) {
      plVar12 = local_148;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_f8 = (longlong *)0x0;
  local_e8 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_118);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[1] = param_1;
    *puVar10 = &PTR_FUN_143f77b70;
  }
  local_128[0] = &LAB_140f26d00;
  uVar5 = FUN_1420849a0(param_1,local_88,local_128);
  FUN_14208c260(param_1,uVar5);
  if (local_48 != 0) {
    plVar12 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar12 = local_58;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_e8 != 0) {
    plVar12 = local_118;
    if (local_f8 != (longlong *)0x0) {
      plVar12 = local_f8;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f419b0 FUN_140f419b0 body=817 status=ok
// SIG undefined FUN_140f419b0(void)

void FUN_140f419b0(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  *(undefined1 *)(param_1 + 500) = 1;
  *(undefined1 *)(param_1 + 0x218) = 1;
  FUN_142ecbc80();
  local_10 = 0xb;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"background",0x16);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x840) = uVar2;
  plVar6 = local_28;
  for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"optionList",0x16);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar2 = FUN_140ecb410(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x838) = uVar2;
  plVar6 = local_18;
  for (iVar5 = (int)local_10; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"TXT_Preview_Title",0x24);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar2 = FUN_140ac4770(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x828) = uVar2;
  plVar6 = local_18;
  for (iVar5 = (int)local_10; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"TXT_Description",0x20);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar2 = FUN_140ac4770(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x830) = uVar2;
  plVar6 = local_18;
  for (iVar5 = (int)local_10; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ecd4d0(param_1);
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x58c);
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
    if (bVar1) {
      FUN_140d03d70(lVar3);
    }
  }
  if (*(char *)(param_1 + 0x867) != '\0') {
    *(undefined1 *)(param_1 + 0x867) = 0;
    FUN_140f4e790(param_1,*(undefined1 *)(param_1 + 0x868),*(undefined8 *)(param_1 + 0x848),0);
  }
  return;
}



// FUNCTION 140f41cf0 FUN_140f41cf0 body=658 status=ok
// SIG undefined FUN_140f41cf0(void)

void FUN_140f41cf0(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  uVar7 = 0;
  FUN_142ecbc80();
  *(longlong *)(param_1 + 0x718) = *(longlong *)(param_1 + 0x600);
  uVar3 = uVar7;
  uVar10 = uVar7;
  if (*(longlong *)(param_1 + 0x600) != 0) {
    local_28 = (longlong *)0x0;
    local_20 = 0x28;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"initializationTextMC.initializationText",0x50);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    uVar3 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x718),&local_28,0,6,&local_38);
    uVar10 = 3;
  }
  *(ulonglong *)(param_1 + 0x720) = uVar3;
  if ((uVar10 & 2) != 0) {
    uVar10 = (ulonglong)((uint)uVar10 & 0xfffffffd);
    plVar8 = local_38;
    for (iVar9 = (int)local_30; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  if (((uVar10 & 1) != 0) && (local_28 != (longlong *)0x0)) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"widgetLabel",0x18);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar4 = FUN_140ac4770(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x728) = uVar4;
  plVar8 = local_28;
  for (iVar9 = (int)local_20; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if ((*(longlong *)(param_1 + 0x718) != 0) && (1 < *(int *)(param_1 + 0x738))) {
    lVar6 = *(longlong *)(param_1 + 0x430);
    if (lVar6 != 0) {
      lVar5 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (lVar6 = FUN_140cff1b0(lVar6), lVar6 != 0)) &&
         (*(char *)(lVar6 + 0x7c0) != '\0')) {
        FUN_140f54e20(param_1);
        return;
      }
    }
    FUN_140f533c0(param_1);
    FUN_140f4ce30(param_1,*(undefined1 *)(param_1 + 0x740));
    puVar1 = (undefined8 *)(param_1 + 0x730);
    FUN_142088910(*(undefined8 *)(param_1 + 0x718),puVar1);
    if ((undefined *)*puVar1 != &DAT_14460798c) {
      *(undefined4 *)(param_1 + 0x738) = 0;
      iVar9 = 0;
      if (*(int *)(param_1 + 0x73c) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1,0);
        iVar9 = *(int *)(param_1 + 0x73c);
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x738);
      }
      if (iVar9 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1,uVar7);
      }
    }
    *(undefined1 *)(param_1 + 0x740) = 0;
  }
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 140f41f90 FUN_140f41f90 body=635 status=ok
// SIG undefined FUN_140f41f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f41f90(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  thunk_FUN_142ecbc80();
  lVar1 = DAT_146872928;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar4 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_140f41ff7;
  }
  lVar4 = 0;
LAB_140f41ff7:
  if (*(int *)(lVar4 + lVar1) == 0) {
    FUN_140f2f900(param_1);
    FUN_140f2fb00(param_1);
    FUN_140f30fc0(param_1);
    FUN_140f2f000(param_1);
    if (*(longlong *)(param_1 + 0xa70) != 0) {
      FUN_140f4c460();
    }
    if (*(longlong *)(param_1 + 0xa78) != 0) {
      FUN_140f4c460();
    }
    FUN_140f47890(param_1,1);
    FUN_140f50440(param_1);
    *(undefined1 *)(param_1 + 0x9bd) = 5;
    cVar2 = FUN_142ebe120(param_1);
    if (cVar2 != '\0') {
      FUN_140f2c5f0(param_1,0);
    }
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_140f269a0;
    uVar6 = FUN_1420849a0(param_1,local_68,local_b8);
    FUN_14208c260(param_1,uVar6);
    if (local_28 != 0) {
      plVar7 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar7 = local_38;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_140f2c4c0(param_1);
    FUN_140f31440(param_1);
    FUN_140f2f7f0(param_1);
    FUN_140f27170(param_1,1,1,0);
    FUN_140f4b9a0(param_1,0,0);
    LOCK();
    *(undefined4 *)(param_1 + 0xfb4) = 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x9f0) = 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x588) = 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x9ec) = 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0xfb0) = 1;
    UNLOCK();
    FUN_140f50e20(param_1);
    cVar2 = FUN_140f51910();
    if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0xe20) != 0)) {
      FUN_140fca450(*(longlong *)(param_1 + 0xe20),param_1 + 0x928,param_1 + 0x908);
    }
    FUN_142edb720(param_1);
    *(undefined1 *)(param_1 + 0x9be) = 5;
  }
  else {
    *(undefined1 *)(param_1 + 0x9bd) = 1;
  }
  return;
}



// FUNCTION 140f42210 FUN_140f42210 body=33 status=ok
// SIG undefined FUN_140f42210(void)

void FUN_140f42210(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_142eb7a60(param_2);
    *(undefined1 *)(param_1 + 0x865) = uVar1;
  }
  return;
}



// FUNCTION 140f42240 FUN_140f42240 body=94 status=ok
// SIG undefined FUN_140f42240(void)

void FUN_140f42240(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x828);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x830) != 0)) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1 + 0x7c8,1,0);
                    /* WARNING: Could not recover jumptable at 0x000140f42291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2b0))
              (*(longlong **)(param_1 + 0x830),param_1 + 0x7e0,1,0);
    return;
  }
  return;
}



// FUNCTION 140f422b0 FUN_140f422b0 body=54 status=ok
// SIG undefined FUN_140f422b0(void)

void FUN_140f422b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    FUN_142edaa50();
  }
  if (*(char *)(param_1 + 0x6e9) != '\0') {
    FUN_142eb3990(param_1);
    return;
  }
  return;
}



// FUNCTION 140f422f0 BeginDestroy body=27 status=ok
// SIG undefined BeginDestroy(void)

void UFlowChart::BeginDestroy(undefined8 param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_140f54bc0(param_1);
  return;
}



// FUNCTION 140f42310 FUN_140f42310 body=509 status=ok
// SIG undefined FUN_140f42310(void)

void FUN_140f42310(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong local_38 [2];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  FUN_14109d980();
  LOCK();
  iVar3 = *(int *)(param_1 + 0xde4);
  *(int *)(param_1 + 0xde4) = 0;
  UNLOCK();
  iVar8 = 0;
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0xde0) != '\0') {
      if (*(char *)(param_1 + 0xdc8) == '\x02') {
        if (*(longlong *)(param_1 + 0xac0) != 0) {
          cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xdb0);
          if (cVar2 != '\0') {
            lVar4 = FWeakObjectPtr::Get(param_1 + 0xdb0);
            iVar8 = *(int *)(lVar4 + 0x17c);
          }
          plVar7 = (longlong *)(*(longlong *)(param_1 + 0xac0) + 0x170);
          (**(code **)(*plVar7 + 0x38))(plVar7,0 < iVar8);
        }
        if (*(longlong *)(param_1 + 0xae0) != 0) {
          plVar7 = (longlong *)(*(longlong *)(param_1 + 0xae0) + 0x170);
          (**(code **)(*plVar7 + 0x38))(plVar7,1);
        }
      }
      *(undefined1 *)(param_1 + 0xde0) = 0;
    }
    if (*(int *)(param_1 + 0xddc) < 1) {
      FUN_140f529f0(param_1,1);
    }
    else if ((*(longlong *)(param_1 + 0xac0) == 0) ||
            (cVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xac0) + 0x170) + 0x40))(),
            cVar2 == '\0')) {
      if (*(longlong *)(param_1 + 0xae0) != 0) {
        uVar5 = TScriptInterface<IBlendableInterface>::
                TScriptInterface<IBlendableInterface><UMaterialInterface>(local_18);
        FUN_142ed36d0(param_1,uVar5,0);
      }
    }
    else {
      uVar5 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>
                        (local_28,*(undefined8 *)(param_1 + 0xac0));
      FUN_142ed36d0(param_1,uVar5,0);
    }
  }
  LOCK();
  iVar3 = *(int *)(param_1 + 0xde8);
  *(int *)(param_1 + 0xde8) = 0;
  UNLOCK();
  if ((((iVar3 != 0) && (*(longlong *)(param_1 + 0xb90) != 0)) &&
      (*(longlong *)(*(longlong *)(param_1 + 0xb90) + 0x338) != 0)) &&
     ((*(longlong *)(param_1 + 0x728) != 0 && (*(longlong *)(param_1 + 0x730) != 0)))) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x730) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      puVar6 = (undefined8 *)FText::ToString(param_1 + 0xd60);
      puVar10 = &DAT_143f3eda8;
      if (*(int *)(puVar6 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar6;
      }
      puVar6 = (undefined8 *)
               FText::ToString(*(longlong *)(*(longlong *)(param_1 + 0xb90) + 0x338) + 0x48);
      if (*(int *)(puVar6 + 1) != 0) {
        puVar10 = (undefined2 *)*puVar6;
      }
      FString::PrintfImpl(local_38,puVar9,puVar10);
      FUN_142f0fdc0(param_1 + 0x720,local_38,1,0);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140f42520 FUN_140f42520 body=735 status=ok
// SIG undefined FUN_140f42520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f42520(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FUN_14109d980();
  if (*(char *)(param_1 + 0x9be) == '\x05') {
    plVar9 = *(longlong **)(param_1 + 0xa50);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x2a0))(plVar9,param_2);
    }
    plVar9 = *(longlong **)(param_1 + 0xa58);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x2a0))(plVar9,param_2);
    }
    plVar9 = *(longlong **)(param_1 + 0xf10);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x2a0))(plVar9,param_2);
    }
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xf80));
    LOCK();
    *(int *)(param_1 + 0xf8c) = *(int *)(param_1 + 0xf8c) + 1;
    UNLOCK();
    iVar2 = *(int *)(param_1 + 0xf78);
    uVar7 = 0;
    uVar8 = uVar7;
    if ((longlong)iVar2 != 0) {
      do {
        if (((-1 < (longlong)uVar7) && ((int)uVar8 < *(int *)(param_1 + 0xf78))) &&
           (*(longlong *)(*(longlong *)(param_1 + 0xf70) + uVar7 * 8) != 0)) {
          FUN_140f24780();
        }
        uVar7 = uVar7 + 1;
        uVar8 = (ulonglong)((int)uVar8 + 1);
      } while (uVar7 != (longlong)iVar2);
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xf80));
    LOCK();
    *(int *)(param_1 + 0xf8c) = *(int *)(param_1 + 0xf8c) + -1;
    UNLOCK();
    LOCK();
    iVar2 = *(int *)(param_1 + 0xfa8);
    *(int *)(param_1 + 0xfa8) = 0;
    UNLOCK();
    if (iVar2 != 0) {
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
      }
      local_68 = (longlong *)0x0;
      local_58 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_88);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = param_1;
        *puVar4 = &PTR_FUN_143f77b70;
      }
      local_98[0] = &LAB_140f26a80;
      lVar5 = 0xc18;
      if (*(char *)(param_1 + 0xe31) != '\x01') {
        lVar5 = 0xa80;
      }
      FUN_140ee5c20(lVar5 + param_1,local_98);
      if (local_58 != 0) {
        plVar9 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar9 = local_68;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
    }
    LOCK();
    iVar2 = *(int *)(param_1 + 4000);
    *(int *)(param_1 + 4000) = 0;
    UNLOCK();
    if (iVar2 != 0) {
      FUN_140f48060(param_1);
    }
    LOCK();
    iVar2 = *(int *)(param_1 + 0xfa4);
    *(int *)(param_1 + 0xfa4) = 0;
    UNLOCK();
    if (iVar2 != 0) {
      FUN_140f485b0(param_1);
    }
    LOCK();
    iVar2 = *(int *)(param_1 + 0x9e8);
    *(int *)(param_1 + 0x9e8) = 0;
    UNLOCK();
    if (iVar2 != 0) {
      FUN_140f4ab40(param_1);
    }
    LOCK();
    iVar2 = *(int *)(param_1 + 0xfb4);
    *(int *)(param_1 + 0xfb4) = 0;
    UNLOCK();
    if (iVar2 != 0) {
      FUN_140f49e80(param_1);
    }
    LOCK();
    iVar2 = *(int *)(param_1 + 0x9f4);
    *(int *)(param_1 + 0x9f4) = 0;
    UNLOCK();
    if (iVar2 != 0) {
      FUN_140f491a0(param_1);
    }
    LOCK();
    iVar2 = *(int *)(param_1 + 0x9ec);
    *(int *)(param_1 + 0x9ec) = 0;
    UNLOCK();
    if (iVar2 != 0) {
      FUN_140f4a190(param_1);
    }
    LOCK();
    iVar2 = *(int *)(param_1 + 0x9f0);
    *(int *)(param_1 + 0x9f0) = 0;
    UNLOCK();
    if (iVar2 != 0) {
      FUN_140f4a940(param_1);
    }
    LOCK();
    iVar2 = *(int *)(param_1 + 0xfb8);
    *(int *)(param_1 + 0xfb8) = 0;
    UNLOCK();
    if (iVar2 != 0) {
      FUN_140f4c9c0(param_1,0);
    }
    LOCK();
    iVar2 = *(int *)(param_1 + 0xf98);
    *(int *)(param_1 + 0xf98) = 0;
    UNLOCK();
    LOCK();
    iVar1 = *(int *)(param_1 + 0xf9c);
    *(int *)(param_1 + 0xf9c) = 0;
    UNLOCK();
    if (iVar2 == 0) {
      if (iVar1 == 0) {
        return;
      }
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    FUN_140f47890(param_1,uVar6);
  }
  return;
}



// FUNCTION 140f42800 FUN_140f42800 body=1140 status=ok
// SIG undefined FUN_140f42800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f42800(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  float fVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined1 local_res8 [8];
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float fStack_90;
  undefined4 uStack_8c;
  
  FUN_142ecd1d0();
  uVar13 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  uVar20 = 0;
  if (uVar13 != 0) {
    lVar14 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(uVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_140f42877;
  }
  uVar13 = uVar20;
LAB_140f42877:
  lVar14 = FUN_140eccca0(param_1);
  if ((uVar13 != 0) && (lVar14 != 0)) {
    lVar14 = *(longlong *)(lVar14 + 0x168);
    if (lVar14 == 0) {
      local_c8 = _DAT_1468b5d90;
      local_c0 = DAT_1468b5d98;
    }
    else {
      local_c0 = *(float *)(lVar14 + 0x228);
      local_c8 = *(undefined8 *)(lVar14 + 0x220);
    }
    local_d8 = local_c8;
    local_d0 = local_c0;
    if (*(longlong *)(uVar13 + 0x528) == 0) {
      if (lVar14 == 0) {
        uVar21 = (undefined4)DAT_1468b5da0;
        uVar23 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        fStack_b0 = DAT_1468b5da8;
      }
      else {
        fVar6 = *(float *)(lVar14 + 0x210);
        local_b8 = *(undefined8 *)(lVar14 + 0x210);
        fStack_b0 = *(float *)(lVar14 + 0x218);
        fStack_ac = *(float *)(lVar14 + 0x21c);
        auVar5._4_4_ = -(uint)(*(float *)(lVar14 + 0x254) != *(float *)(lVar14 + 0x214));
        auVar5._0_4_ = -(uint)(*(float *)(lVar14 + 0x250) != fVar6);
        auVar5._8_4_ = -(uint)(*(float *)(lVar14 + 600) != fStack_b0);
        auVar5._12_4_ = -(uint)(*(float *)(lVar14 + 0x25c) != fStack_ac);
        iVar11 = movmskps(local_c0,auVar5);
        if (iVar11 != 0) {
          *(float *)(lVar14 + 0x250) = fVar6;
          *(float *)(lVar14 + 0x254) = *(float *)(lVar14 + 0x214);
          *(float *)(lVar14 + 600) = fStack_b0;
          *(float *)(lVar14 + 0x25c) = fStack_ac;
          puVar15 = (undefined8 *)FQuat::Rotator(&local_b8,&local_a8);
          *(undefined8 *)(lVar14 + 0x260) = *puVar15;
          *(undefined4 *)(lVar14 + 0x268) = *(undefined4 *)(puVar15 + 1);
        }
        uVar21 = (undefined4)*(undefined8 *)(lVar14 + 0x260);
        uVar23 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x260) >> 0x20);
        fStack_b0 = *(float *)(lVar14 + 0x268);
      }
      local_b8 = CONCAT44(uVar23,uVar21);
      local_a0 = fStack_b0;
      puVar15 = &local_a8;
      local_a8 = CONCAT44(uVar23,uVar21);
    }
    else {
      puVar15 = (undefined8 *)FUN_1426e1d20(*(longlong *)(uVar13 + 0x528),&local_98);
    }
    uVar3 = *puVar15;
    plVar1 = (longlong *)(param_1 + 0x660);
    uVar21 = *(undefined4 *)(puVar15 + 1);
    iVar11 = *(int *)(uVar13 + 0xe38);
    iVar12 = *(int *)(param_1 + 0x66c) - *(int *)(param_1 + 0x668);
    *(undefined4 *)(param_1 + 0x668) = 0;
    if (iVar11 <= iVar12) {
      iVar11 = iVar12;
    }
    if (*(int *)(param_1 + 0x66c) != iVar11) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1);
    }
    fVar6 = local_d0;
    plVar17 = *(longlong **)(uVar13 + 0xe30);
    uVar18 = (longlong)*(int *)(uVar13 + 0xe38) & 0x1fffffffffffffff;
    if (plVar17 + *(int *)(uVar13 + 0xe38) < plVar17) {
      uVar18 = uVar20;
    }
    if (uVar18 != 0) {
      fVar9 = local_d8._4_4_;
      fVar8 = (float)local_d8;
      do {
        lVar14 = *plVar17;
        if (lVar14 != 0) {
          lVar4 = *(longlong *)(lVar14 + 0x168);
          if (lVar4 == 0) {
            local_a0 = DAT_1468b5d98;
            puVar15 = &local_a8;
            local_a8 = _DAT_1468b5d90;
          }
          else {
            puVar15 = &local_d8;
            local_d0 = *(float *)(lVar4 + 0x228);
            local_d8 = *(undefined8 *)(lVar4 + 0x220);
          }
          iVar11 = *(int *)(param_1 + 0x668);
          fVar24 = (float)*puVar15 - fVar8;
          fVar25 = (float)((ulonglong)*puVar15 >> 0x20) - fVar9;
          fStack_b0 = *(float *)(puVar15 + 1);
          local_98 = lVar14;
          fVar22 = *(float *)(puVar15 + 1) - fVar6;
          *(int *)(param_1 + 0x668) = iVar11 + 1;
          fStack_90 = fVar25 * fVar25 + fVar24 * fVar24 + fVar22 * fVar22;
          if (*(int *)(param_1 + 0x66c) < iVar11 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar11);
          }
          puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar11 * 0x10);
          *puVar2 = (undefined4)local_98;
          puVar2[1] = local_98._4_4_;
          puVar2[2] = fStack_90;
          puVar2[3] = uStack_8c;
        }
        plVar17 = plVar17 + 1;
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar18);
    }
    uVar18 = 0;
    AlgoImpl::
    IntroSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_>
              (*plVar1,(longlong)*(int *)(param_1 + 0x668),local_res8[0],local_res8);
    uVar13 = uVar18;
    uVar20 = uVar18;
    if (0 < *(int *)(param_1 + 0x658)) {
      do {
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x650) + uVar18 * 8);
        if (lVar14 != 0) {
          if (((longlong)uVar18 < 0) || (*(int *)(param_1 + 0x668) <= (int)uVar13)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) {
            uVar16 = *(undefined8 *)(uVar20 + *plVar1);
          }
          else {
            uVar16 = 0;
          }
          FWeakObjectPtr::operator=(lVar14 + 0x1f0,uVar16);
          FUN_140f54bc0(lVar14);
          cVar10 = FWeakObjectPtr::IsValid
                             (*(longlong *)(*(longlong *)(param_1 + 0x650) + uVar18 * 8) + 0x1f0);
          if (cVar10 != '\0') {
            lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x650) + uVar18 * 8);
            *(undefined8 *)(lVar14 + 0x1f8) = local_c8;
            *(float *)(lVar14 + 0x200) = local_c0;
            *(undefined8 *)(lVar14 + 0x204) = uVar3;
            *(undefined4 *)(lVar14 + 0x20c) = uVar21;
            plVar17 = *(longlong **)(*(longlong *)(param_1 + 0x650) + uVar18 * 8);
            (**(code **)(*plVar17 + 0x2a0))(plVar17,param_2);
          }
        }
        uVar19 = (int)uVar13 + 1;
        uVar18 = uVar18 + 1;
        uVar13 = (ulonglong)uVar19;
        uVar20 = uVar20 + 0x10;
      } while ((int)uVar19 < *(int *)(param_1 + 0x658));
    }
  }
  return;
}



// FUNCTION 140f42c80 FUN_140f42c80 body=917 status=ok
// SIG undefined FUN_140f42c80(void)

void FUN_140f42c80(longlong *param_1)

{
  PSRWLOCK SRWLock;
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_142ecd1d0();
  if (param_1[0xcd] == 0) {
    return;
  }
  SRWLock = (PSRWLOCK)(param_1 + 0xd7);
  AcquireSRWLockShared(SRWLock);
  cVar3 = FUN_142dee8f0(param_1[0xcd],0);
  if ((cVar3 == '\0') || (param_1[0xd4] == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  cVar3 = FUN_142dee8f0(param_1[0xcd],1);
  if ((cVar3 == '\0') || (param_1[0xd6] == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  ReleaseSRWLockShared(SRWLock);
  if ((*(char *)((longlong)param_1 + 0x6c9) == '\0') && ((bVar1 || (bVar2)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146872998) &&
       (_Init_thread_header(&DAT_146872998), DAT_146872998 == -1)) {
      FName::FName(&DAT_146872990,"Interaction_Spinner_Start",1);
      _Init_thread_footer(&DAT_146872998);
    }
    local_18 = 0;
    local_10 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872990,&local_18);
  }
  if (param_1[0xce] == 0) {
LAB_140f42d89:
    if (*(char *)((longlong)param_1 + 0x6c9) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x6c9) = 0;
      FUN_140f33cb0(param_1,param_1[0xce],param_1 + 0xcf,&local_18,0);
    }
  }
  else {
    if (bVar1) {
      cVar3 = (char)param_1[0xd9];
      if (cVar3 == '\x02') {
LAB_140f42e17:
        if (param_1[199] != 0) {
          AcquireSRWLockShared(SRWLock);
          (**(code **)(*(longlong *)param_1[199] + 0x2b0))
                    ((longlong *)param_1[199],param_1[0xd4] + 0x30,1,0);
          ReleaseSRWLockShared(SRWLock);
        }
        if (param_1[0xc6] != 0) {
          uVar5 = FUN_142ded860(param_1[0xcd],0);
          lVar4 = param_1[0xc6];
LAB_140f42e73:
          FUN_142ed2e60(lVar4,uVar5);
        }
      }
      else if (cVar3 == '\x03') {
        if (param_1[0xca] != 0) {
          AcquireSRWLockShared(SRWLock);
          lVar4 = *(longlong *)param_1[0xca];
          cVar3 = FText::IsEmpty(param_1[0xd4] + 0x30);
          (**(code **)(lVar4 + 0x278))(param_1[0xca],cVar3 == '\0');
          (**(code **)(*(longlong *)param_1[0xca] + 0x2b0))
                    ((longlong *)param_1[0xca],param_1[0xd4] + 0x30,1,0);
          ReleaseSRWLockShared(SRWLock);
        }
        if (param_1[0xc9] != 0) {
          uVar5 = FUN_142ded860(param_1[0xcd],0);
          lVar4 = param_1[0xc9];
          goto LAB_140f42e73;
        }
      }
      else if ((byte)(cVar3 - 6U) < 2) goto LAB_140f42e17;
      if (!bVar2) goto LAB_140f42dca;
    }
    else if (!bVar2) goto LAB_140f42d89;
    if (((char)param_1[0xd9] - 5U & 0xfd) == 0) {
      if (param_1[0xca] != 0) {
        AcquireSRWLockShared(SRWLock);
        lVar4 = *(longlong *)param_1[0xca];
        cVar3 = FText::IsEmpty(param_1[0xd6] + 0x30);
        (**(code **)(lVar4 + 0x278))(param_1[0xca],cVar3 == '\0');
        (**(code **)(*(longlong *)param_1[0xca] + 0x2b0))
                  ((longlong *)param_1[0xca],param_1[0xd6] + 0x30,1,0);
        ReleaseSRWLockShared(SRWLock);
      }
      if (param_1[0xc9] != 0) {
        uVar5 = FUN_142ded860(param_1[0xcd],1);
        FUN_142ed2e60(param_1[0xc9],uVar5);
      }
    }
  }
LAB_140f42dca:
  if ((!bVar1) && (!bVar2)) {
    *(undefined1 *)((longlong)param_1 + 0x6c9) = 0;
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x6c9) = 1;
  return;
}



// FUNCTION 140f43020 FUN_140f43020 body=132 status=ok
// SIG undefined FUN_140f43020(void)

void FUN_140f43020(longlong *param_1,float param_2)

{
  int iVar1;
  
  param_2 = param_2 + *(float *)((longlong)param_1 + 0x63c);
  iVar1 = (int)param_1[199];
  *(float *)((longlong)param_1 + 0x63c) = param_2;
  if (iVar1 == 1) {
    if (param_2 < *(float *)(param_1 + 0xc6)) {
      return;
    }
    param_1[199] = 2;
    (**(code **)(*param_1 + 0x580))(param_1,0);
    iVar1 = (int)param_1[199];
  }
  if ((iVar1 == 2) &&
     (*(float *)((longlong)param_1 + 0x634) < *(float *)((longlong)param_1 + 0x63c) ||
      *(float *)((longlong)param_1 + 0x634) == *(float *)((longlong)param_1 + 0x63c))) {
    param_1[199] = 0;
                    /* WARNING: Could not recover jumptable at 0x000140f43097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x580))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140f430b0 FUN_140f430b0 body=213 status=ok
// SIG undefined FUN_140f430b0(void)

void FUN_140f430b0(longlong param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + 0x630) != 0) {
    if ((byte)(*(char *)(param_1 + 0x639) - 1U) < 2) {
      uVar1 = FUN_140ad4b30();
      *(undefined4 *)(param_1 + 0x688) = uVar1;
      fVar2 = (float)FUN_140ad61c0(*(undefined8 *)(param_1 + 0x630));
      *(float *)(param_1 + 0x68c) = fVar2;
      if (*(char *)(param_1 + 0x638) == '\x01') {
        if (*(longlong *)(param_1 + 0x660) != 0) {
          FUN_142f0ead0(*(longlong *)(param_1 + 0x660),1.0 - fVar2);
          return;
        }
      }
      else if (*(longlong *)(param_1 + 0x658) != 0) {
        FUN_142f0ead0(*(longlong *)(param_1 + 0x658),*(undefined4 *)(param_1 + 0x688));
        return;
      }
    }
    else if (*(char *)(param_1 + 0x638) == '\x02') {
      FUN_140f4e410(param_1);
      if (*(longlong *)(param_1 + 0x660) != 0) {
        FUN_142f0ead0(*(longlong *)(param_1 + 0x660),1.0 - *(float *)(param_1 + 0x68c));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140f43190 FUN_140f43190 body=392 status=ok
// SIG undefined FUN_140f43190(void)

void FUN_140f43190(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  char local_res8 [8];
  undefined1 local_28 [32];
  
  LOCK();
  iVar3 = *(int *)(param_1 + 0x6c8);
  *(int *)(param_1 + 0x6c8) = 0;
  UNLOCK();
  if (((iVar3 != 0) && (*(longlong *)(param_1 + 0x6a0) != 0)) &&
     (*(longlong *)(param_1 + 0x6a8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x6a8) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      LOCK();
      *(undefined4 *)(param_1 + 0x6c8) = 0;
      UNLOCK();
      lVar4 = FUN_140eccc40(param_1);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0xa58) != 0)) {
        UMistDebugEntityScreen::InspectEntity
                  (param_1 + 0x698,*(longlong *)(lVar4 + 0xa58) + 0x90,1,0);
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x6b0) != 0) && (*(longlong *)(param_1 + 0x6b8) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x40))(*(longlong **)(param_1 + 0x6b8),local_28)
    ;
    cVar2 = FUN_142d52a00(local_28);
    if (cVar2 != '\0') {
      uVar5 = FUN_142d52a20(local_28);
      uVar5 = FArchive::operator<<(uVar5);
      fVar6 = (float)FUN_142d5fed0(uVar5);
      uVar5 = FUN_142d52a20(local_28);
      uVar5 = FArchive::operator<<(uVar5);
      uVar7 = FUN_142d5fea0(uVar5);
      FUN_140f539d0(param_1,(int)fVar6,uVar7);
      uVar5 = FUN_142d52a20(local_28);
      uVar5 = FArchive::operator<<(uVar5);
      FUN_142d62440(uVar5,local_res8);
      if (local_res8[0] != *(char *)(param_1 + 0x6cd)) {
        if (local_res8[0] == '\x02') {
          cVar2 = FUN_14208d120(param_1,param_1 + 0x688,L"healthGlowAnim");
          if (cVar2 != '\0') {
            FUN_14203e030(*(undefined8 *)(param_1 + 0x688),L"fullHealthFlash");
          }
        }
        else if ((local_res8[0] == '\x03') && (*(longlong *)(param_1 + 0x660) != 0)) {
          FUN_142f03c80();
        }
        *(char *)(param_1 + 0x6cd) = local_res8[0];
      }
    }
  }
  return;
}



// FUNCTION 140f43320 FUN_140f43320 body=20 status=ok
// SIG undefined FUN_140f43320(void)

undefined4 FUN_140f43320(longlong param_1)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0xfac);
  *(undefined4 *)(param_1 + 0xfac) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140f43340 FUN_140f43340 body=150 status=ok
// SIG undefined FUN_140f43340(void)

void FUN_140f43340(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xe20);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x188) != 0) &&
       (plVar2 = *(longlong **)(lVar1 + 0x180), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*(longlong *)(lVar1 + 0x180) != 0) {
        uVar4 = FMemory::Realloc(*(longlong *)(lVar1 + 0x180),0,0);
        *(undefined8 *)(lVar1 + 0x180) = uVar4;
      }
      *(undefined4 *)(lVar1 + 0x188) = 0;
    }
    uVar4 = FUN_140e971d0(param_1);
    cVar3 = FUN_140eec940(uVar4);
    if (cVar3 != '\0') {
      FUN_140fca450(*(undefined8 *)(param_1 + 0xe20),param_1 + 0x930,param_1 + 0x908);
    }
  }
  return;
}



// FUNCTION 140f433e0 FUN_140f433e0 body=48 status=ok
// SIG undefined FUN_140f433e0(void)

void FUN_140f433e0(void)

{
  FUN_140f33cb0();
  return;
}



// FUNCTION 140f43410 FUN_140f43410 body=67 status=ok
// SIG undefined FUN_140f43410(void)

void FUN_140f43410(longlong param_1)

{
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6b8));
  if (*(char *)(param_1 + 0x67a) == '\0') {
    FUN_140f43500(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000140f4344c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6b8));
  return;
}



// FUNCTION 140f43460 FUN_140f43460 body=74 status=ok
// SIG undefined FUN_140f43460(void)

void FUN_140f43460(longlong param_1)

{
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6b8));
  if (*(char *)(param_1 + 0x67b) == '\0') {
    FUN_140f43500();
  }
  else {
    FUN_140f435a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000140f434a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6b8));
  return;
}



// FUNCTION 140f434b0 FUN_140f434b0 body=67 status=ok
// SIG undefined FUN_140f434b0(void)

void FUN_140f434b0(longlong param_1)

{
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6b8));
  if (*(char *)(param_1 + 0x67c) == '\0') {
    FUN_140f43500(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000140f434ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6b8));
  return;
}



// FUNCTION 140f43500 FUN_140f43500 body=146 status=ok
// SIG undefined FUN_140f43500(void)

void FUN_140f43500(longlong *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468729a8) {
    _Init_thread_header(&DAT_1468729a8);
    if (DAT_1468729a8 == -1) {
      FName::FName(&DAT_1468729a0,"Interaction_Fail",1);
      _Init_thread_footer(&DAT_1468729a8);
    }
  }
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468729a0,&local_18);
  return;
}



// FUNCTION 140f435a0 FUN_140f435a0 body=146 status=ok
// SIG undefined FUN_140f435a0(void)

void FUN_140f435a0(longlong *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146872988) {
    _Init_thread_header(&DAT_146872988);
    if (DAT_146872988 == -1) {
      FName::FName(&DAT_146872980,"Interaction_Spinner_Stop",1);
      _Init_thread_footer(&DAT_146872988);
    }
  }
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872980,&local_18);
  return;
}



// FUNCTION 140f43640 FUN_140f43640 body=332 status=ok
// SIG undefined FUN_140f43640(void)

void FUN_140f43640(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"DROPPED",L"GFxInventoryFeedbackWidget",L"DroppedText");
  if ((*(longlong *)(param_1 + 0x1d0) != 0) && (*(longlong *)(param_1 + 0x1d8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1d8) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1c8,uVar5,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x1e8) != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1f0) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1e0,uVar5,1,0);
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    local_38[0] = 0;
    local_38[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"play",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x1c0),local_38);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f437b0 FUN_140f437b0 body=290 status=ok
// SIG undefined FUN_140f437b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f437b0(undefined8 param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uStack_c0 = *param_2;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_c8 = param_1;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(puVar1 + 2) = uStack_c0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_bc;
  }
  local_b8[0] = &LAB_140f26990;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f438e0 FUN_140f438e0 body=471 status=ok
// SIG undefined FUN_140f438e0(void)

ulonglong FUN_140f438e0(longlong *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  longlong local_38 [6];
  
  if (*(int *)((longlong)param_1 + 0xddc) < 1) {
    LOCK();
    uVar1 = *(uint *)((longlong)param_1 + 0xde4);
    *(uint *)((longlong)param_1 + 0xde4) = 1;
    UNLOCK();
    return (ulonglong)uVar1;
  }
  if (param_1[0x58] != 0) {
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x1b6);
    if (cVar3 != '\0') {
      uVar4 = FWeakObjectPtr::Get(param_1 + 0x1b6);
      cVar3 = FUN_140e53960(uVar4);
      if (cVar3 == '\0') {
        uVar5 = FUN_140f529f0(param_1,2);
        return uVar5;
      }
    }
    lVar6 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
    if (lVar6 != 0) {
      lVar7 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (*(char *)(lVar6 + 0x1951) == '\0')) {
        local_38[1] = 0x10;
        local_38[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
        FGenericPlatformString::Memcpy(local_38[0],L"firstTimeUnlock",0x20);
        FUN_142088910(param_1[0x58],local_38);
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        local_38[4] = 0;
        local_38[5] = 0;
        lVar6 = *param_1;
        puVar8 = (undefined8 *)FName::FName(local_res8,L"Guardian_Rank_Unlocked",1);
        (**(code **)(lVar6 + 0x4e8))(param_1,*puVar8,local_38 + 4);
        uVar5 = FUN_140e971d0(param_1);
        if (uVar5 == 0) {
          return 0;
        }
        *(undefined1 *)(uVar5 + 0x1951) = 1;
        return uVar5;
      }
    }
    local_38[3] = 10;
    local_38[2] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
    FGenericPlatformString::Memcpy(local_38[2],L"menuIntro",0x14);
    in_RAX = FUN_142088910(param_1[0x58],local_38 + 2);
    if (local_38[2] != 0) {
      uVar5 = FMemory::Free();
      return uVar5;
    }
  }
  return in_RAX;
}



// FUNCTION 140f43ac0 FUN_140f43ac0 body=388 status=ok
// SIG undefined FUN_140f43ac0(void)

void FUN_140f43ac0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Unlocked!",L"GFxInventoryFeedbackWidget",L"Unlocked");
  if ((*(longlong *)(param_1 + 0x180) != 0) && (*(longlong *)(param_1 + 0x188) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x188) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x178,param_2,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x198) != 0) && (*(longlong *)(param_1 + 0x1a0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1a0) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 400,param_2,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x1b0) != 0) && (*(longlong *)(param_1 + 0x1b8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1b8) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1a8,uVar5,1,0);
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    local_38[0] = 0;
    local_38[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"play",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x170),local_38);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f43c50 FUN_140f43c50 body=193 status=ok
// SIG undefined FUN_140f43c50(void)

void FUN_140f43c50(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  if (param_3 == '\x01') {
    local_28 = 0;
    local_18 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_58[0] = &LAB_140f26e20;
    ppuVar2 = local_58;
  }
  else {
    if (param_3 != '\n') goto LAB_140f43d01;
    local_78 = 0;
    local_68 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_98);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_a8[0] = &LAB_140f26ee0;
    ppuVar2 = local_a8;
  }
  FUN_14204c280(ppuVar2);
LAB_140f43d01:
  FUN_140f43d20(param_1);
  return;
}



// FUNCTION 140f43d20 FUN_140f43d20 body=145 status=ok
// SIG undefined FUN_140f43d20(void)

void FUN_140f43d20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  *(undefined8 *)(param_1 + 0x578) = 0;
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x6b8) != &local_18) {
    *(undefined8 *)(param_1 + 0x6b8) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x6c0,&local_10);
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



// FUNCTION 140f43dc0 FUN_140f43dc0 body=596 status=ok
// SIG undefined FUN_140f43dc0(void)

void FUN_140f43dc0(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  int local_res8 [2];
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_70;
  ulonglong local_68;
  undefined1 local_60 [32];
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x594);
  uVar8 = 0;
  if (lVar5 != 0) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (local_70 = FUN_140c453a0(lVar5), local_70 != 0)) &&
       (local_68 = (ulonglong)*(int *)(param_1 + 0x790), local_68 != 0)) {
      SRWLock = (PSRWLOCK)(param_1 + 0xf80);
      uVar9 = uVar8;
      do {
        AcquireSRWLockShared(SRWLock);
        LOCK();
        *(int *)(param_1 + 0xf8c) = *(int *)(param_1 + 0xf8c) + 1;
        UNLOCK();
        if (((longlong)uVar8 < 0) || (*(int *)(param_1 + 0xf78) <= (int)uVar9)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) ||
           (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xf70) + uVar8 * 8), lVar6 == 0)) {
          ReleaseSRWLockShared(SRWLock);
          LOCK();
          *(int *)(param_1 + 0xf8c) = *(int *)(param_1 + 0xf8c) + -1;
          UNLOCK();
          return;
        }
        ReleaseSRWLockShared(SRWLock);
        LOCK();
        *(int *)(param_1 + 0xf8c) = *(int *)(param_1 + 0xf8c) + -1;
        UNLOCK();
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x788) + uVar8 * 8);
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x60) != 0)) {
          FUN_142d61d40(local_60,&local_70,lVar5);
          cVar3 = FUN_142d52a00(local_60);
          FUN_140f4d550(lVar6,lVar1 + 0x50);
          if (cVar3 == '\0') {
            if (local_res18 != (undefined4 *)(lVar6 + 0x1c4)) {
              *(undefined4 *)(lVar6 + 0x1c4) = 1;
              *(undefined1 *)(lVar6 + 0x1c8) = 1;
            }
            if (local_res20 != (undefined4 *)(lVar6 + 0x1d0)) {
              *(undefined4 *)(lVar6 + 0x1d0) = 0;
              *(undefined1 *)(lVar6 + 0x1d4) = 1;
            }
            uVar4 = 4;
          }
          else {
            uVar7 = FUN_142d52a20(local_60);
            uVar7 = FArchive::operator<<(uVar7);
            fVar10 = (float)FUN_142d61c30(uVar7);
            local_res8[0] = (int)fVar10;
            uVar7 = FUN_142d52a20(local_60);
            uVar7 = FArchive::operator<<(uVar7);
            fVar11 = (float)FUN_142d5fed0(uVar7);
            local_res10[0] = (int)fVar11;
            if (local_res8 != (int *)(lVar6 + 0x1c4)) {
              *(int *)(lVar6 + 0x1c4) = (int)fVar10;
              *(undefined1 *)(lVar6 + 0x1c8) = 1;
            }
            if (local_res10 != (int *)(lVar6 + 0x1d0)) {
              *(int *)(lVar6 + 0x1d0) = local_res10[0];
              *(undefined1 *)(lVar6 + 0x1d4) = 1;
            }
            uVar4 = FUN_140f2aa70(param_1,lVar1,local_60);
          }
          FUN_140f4c750(lVar6,uVar4);
        }
        uVar9 = (ulonglong)((int)uVar9 + 1);
        uVar8 = uVar8 + 1;
      } while (uVar8 != local_68);
    }
  }
  LOCK();
  *(undefined4 *)(param_1 + 0xf40) = 0;
  UNLOCK();
  return;
}



// FUNCTION 140f44020 FUN_140f44020 body=978 status=ok
// SIG undefined FUN_140f44020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f44020(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  ulonglong *puStack_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  longlong local_100 [2];
  undefined1 local_f0 [16];
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  longlong local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  if (param_3 != 0) {
    local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_168;
    FText::FText(local_118);
    if (*(int *)(*param_2 + 0x84) != 0) {
      uVar6 = FUN_140d7dcd0(*param_2 + 0x38,local_100);
      uVar6 = FText::FromString(local_c8,uVar6);
      FText::operator=(local_118,uVar6);
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_c0 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
      if (local_100[0] != 0) {
        FMemory::Free();
      }
    }
    plVar4 = *(longlong **)(param_3 + 0x358);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2b0))(plVar4,local_118,1,0);
    }
    local_138 = 0;
    plStack_130 = (longlong *)0x0;
    uVar6 = FText::AsNumber(local_b0,*(undefined4 *)(*param_2 + 0x40),0,&local_138);
    plVar4 = *(longlong **)(param_3 + 0x340);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2b0))(plVar4,uVar6,1,0);
    }
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a8 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    plVar4 = plStack_130;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_130 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_130)(plStack_130);
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
    iVar3 = *(int *)(*param_2 + 0x68);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_80,L"{0}/4",L"GFxFriendsInAreaListMenu",L"FriendLevelLabel");
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_68,uVar6);
    local_58[0] = 0;
    local_148 = local_58;
    local_30 = '\0';
    puStack_140 = local_28;
    local_128 = *puVar7;
    local_120 = puVar7[1];
    if (local_120 != 0) {
      LOCK();
      *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
      UNLOCK();
    }
    local_50 = (longlong)iVar3;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_f0,&local_148);
    uVar6 = FText::Format(local_98,&local_128,uVar6);
    FText::FText(local_e0,uVar6);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_90 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_f0);
    if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    plVar4 = (longlong *)puVar7[1];
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
    plVar4 = *(longlong **)(param_3 + 0x360);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2b0))(plVar4,local_e0,1,0);
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d8 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_78 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_110 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f44400 FUN_140f44400 body=2716 status=ok
// SIG undefined FUN_140f44400(void)

void FUN_140f44400(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  wchar_t *pwVar7;
  char cVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int *piVar17;
  int iVar18;
  longlong *plVar19;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  int local_168;
  int local_164;
  longlong local_160;
  int local_158;
  int local_154;
  longlong local_150;
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined8 local_e0;
  longlong *plStack_d8;
  longlong local_d0;
  wchar_t *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [24];
  
  plVar16 = (longlong *)(param_1 + 0x6f8);
  pwVar14 = (wchar_t *)0x0;
  local_res18 = param_3;
  if (plVar16 != param_2) {
    iVar18 = *(int *)(param_1 + 0x700);
    if (iVar18 != 0) {
      plVar19 = (longlong *)(*plVar16 + 8);
      do {
        plVar5 = (longlong *)*plVar19;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
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
        plVar19 = plVar19 + 2;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    iVar18 = (int)param_2[1];
    lVar10 = *param_2;
    *(int *)(param_1 + 0x700) = iVar18;
    if ((iVar18 == 0) && (*(int *)(param_1 + 0x704) == 0)) {
      *(undefined4 *)(param_1 + 0x704) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar16,iVar18);
      puVar15 = (undefined8 *)*plVar16;
      if (iVar18 != 0) {
        lVar10 = lVar10 - (longlong)puVar15;
        do {
          *puVar15 = *(undefined8 *)(lVar10 + (longlong)puVar15);
          lVar13 = *(longlong *)(lVar10 + 8 + (longlong)puVar15);
          puVar15[1] = lVar13;
          if (lVar13 != 0) {
            LOCK();
            *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
            UNLOCK();
          }
          puVar15 = puVar15 + 2;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
    }
  }
  FString::operator=(param_1 + 0x6e8,local_res18);
  if (((*(longlong *)(param_1 + 0x6d0) == 0) && (*(longlong *)(param_1 + 0x6e0) == 0)) &&
     (*(longlong *)(param_1 + 0x6c8) == 0)) {
    return;
  }
  pwVar9 = (wchar_t *)FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (pwVar9 != (wchar_t *)0x0) {
    lVar10 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140f44561;
  }
  pwVar9 = pwVar14;
LAB_140f44561:
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    FText::FText(local_f8);
    if (pwVar9 != (wchar_t *)0x0) {
      uVar11 = (**(code **)(*(longlong *)pwVar9 + 0x148))(pwVar9);
      uVar11 = FUN_140c13bc0(local_b8,param_1 + 0x6e8,uVar11);
      FText::operator=(local_f8,uVar11);
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_b0 + 1;
        lVar10 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar2 = (int *)((longlong)local_b0 + 0xc);
          iVar18 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
    }
    cVar8 = FText::IsEmpty(local_f8);
    if (cVar8 != '\0') {
      uVar11 = FText::FromString(local_a0,param_1 + 0x6e8);
      FText::operator=(local_f8,uVar11);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_98 + 1;
        lVar10 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)local_98 + 0xc);
          iVar18 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
    }
    lVar10 = **(longlong **)(param_1 + 0x6d0);
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_88,L"FRIENDS IN",L"GFxFriendsInAreaListMenu",L"FriendsInZoneLabelText"
                       );
    (**(code **)(lVar10 + 0x2b0))(*(undefined8 *)(param_1 + 0x6d0),uVar11,0,0);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_80 + 1;
      lVar10 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar18 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    plVar16 = *(longlong **)(param_1 + 0x6d8);
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x2b0))(plVar16,local_f8,0,0);
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_f0 + 1;
      lVar10 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        iVar18 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
  }
  if (*(longlong **)(param_1 + 0x6e0) != (longlong *)0x0) {
    local_e0 = 0;
    plStack_d8 = (longlong *)0x0;
    lVar10 = **(longlong **)(param_1 + 0x6e0);
    uVar11 = FText::AsNumber(local_70,*(undefined4 *)(param_1 + 0x700),0,&local_e0);
    (**(code **)(lVar10 + 0x2b0))(*(undefined8 *)(param_1 + 0x6e0),uVar11,0,0);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_68 + 1;
      lVar10 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar18 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    plVar16 = plStack_d8;
    if (plStack_d8 != (longlong *)0x0) {
      LOCK();
      plVar19 = plStack_d8 + 1;
      lVar10 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_d8)(plStack_d8);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        iVar18 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
  }
  if ((pwVar9 != (wchar_t *)0x0) && (*(longlong *)(param_1 + 0x6c8) != 0)) {
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    FWeakObjectPtr::operator=(&local_118,0);
    FWeakObjectPtr::operator=(&local_110,0);
    FWeakObjectPtr::operator=(&local_108,0);
    FWeakObjectPtr::operator=(&local_100,0);
    uVar11 = TScriptInterface<IBlendableInterface>::
             TScriptInterface<IBlendableInterface><UMaterialInterface>
                       (local_58,*(undefined8 *)(param_1 + 0x6c8));
    FUN_142ecfd10(param_1,uVar11,&local_118);
    plVar16 = (longlong *)(*(longlong *)(param_1 + 0x6c8) + 0x170);
    (**(code **)(*plVar16 + 0x38))(plVar16,1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x6c8) + 0x180,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x6c8) + 0x1a8,param_1);
    FUN_142ecffe0(*(undefined8 *)(param_1 + 0x6c8));
    pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxFriendsInAreaListMenu::OnFriendSelected",L"::");
    pwVar9 = pwVar14;
    while (pwVar7 = pwVar12, pwVar7 != (wchar_t *)0x0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
      pwVar9 = pwVar7;
    }
    FName::FName(&local_res10,pwVar9 + 2,1);
    lVar10 = *(longlong *)(param_1 + 0x6c8);
    plVar16 = (longlong *)(lVar10 + 0x180);
    FWeakObjectPtr::operator=(&local_168,0);
    local_160 = 0;
    FWeakObjectPtr::operator=(&local_168,param_1);
    local_160 = local_res10;
    if ((local_res10 != 0) && (lVar13 = FWeakObjectPtr::Get(&local_168), lVar13 != 0)) {
      UObject::FindFunction(lVar13,local_160);
    }
    piVar2 = (int *)*plVar16;
    iVar18 = *(int *)(lVar10 + 0x188);
    for (piVar17 = piVar2; piVar17 != piVar2 + (longlong)iVar18 * 4; piVar17 = piVar17 + 4) {
      if (((*piVar17 == local_168) && (piVar17[1] == local_164)) ||
         ((cVar8 = FWeakObjectPtr::IsValid(piVar17), cVar8 == '\0' &&
          (cVar8 = FWeakObjectPtr::IsValid(&local_168), cVar8 == '\0')))) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if ((bVar6) && (*(longlong *)(piVar17 + 2) == local_160)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        if ((int)((longlong)piVar17 - (longlong)piVar2 >> 4) != -1) goto LAB_140f44a12;
        break;
      }
    }
    iVar18 = *(int *)(lVar10 + 0x188);
    lVar13 = (longlong)iVar18;
    *(int *)(lVar10 + 0x188) = iVar18 + 1;
    if (*(int *)(lVar10 + 0x18c) < iVar18 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar18);
    }
    lVar10 = *plVar16;
    *(int *)(lVar10 + lVar13 * 0x10) = local_168;
    *(int *)(lVar10 + 4 + lVar13 * 0x10) = local_164;
    *(longlong *)(lVar10 + 8 + lVar13 * 0x10) = local_160;
LAB_140f44a12:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar16);
    pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxFriendsInAreaListMenu::OnFriendClicked",L"::");
    pwVar9 = pwVar14;
    while (pwVar7 = pwVar12, pwVar7 != (wchar_t *)0x0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
      pwVar9 = pwVar7;
    }
    FName::FName(&local_res20,pwVar9 + 2,1);
    lVar10 = *(longlong *)(param_1 + 0x6c8);
    plVar16 = (longlong *)(lVar10 + 0x1a8);
    FWeakObjectPtr::operator=(&local_158,0);
    local_150 = 0;
    FWeakObjectPtr::operator=(&local_158,param_1);
    local_150 = local_res20;
    if ((local_res20 != 0) && (lVar13 = FWeakObjectPtr::Get(&local_158), lVar13 != 0)) {
      UObject::FindFunction(lVar13,local_150);
    }
    piVar2 = (int *)*plVar16;
    iVar18 = *(int *)(lVar10 + 0x1b0);
    for (piVar17 = piVar2; piVar17 != piVar2 + (longlong)iVar18 * 4; piVar17 = piVar17 + 4) {
      if (((*piVar17 == local_158) && (piVar17[1] == local_154)) ||
         ((cVar8 = FWeakObjectPtr::IsValid(piVar17), cVar8 == '\0' &&
          (cVar8 = FWeakObjectPtr::IsValid(&local_158), cVar8 == '\0')))) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if ((bVar6) && (*(longlong *)(piVar17 + 2) == local_150)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        if ((int)((longlong)piVar17 - (longlong)piVar2 >> 4) != -1) goto LAB_140f44b82;
        break;
      }
    }
    iVar18 = *(int *)(lVar10 + 0x1b0);
    lVar13 = (longlong)iVar18;
    *(int *)(lVar10 + 0x1b0) = iVar18 + 1;
    if (*(int *)(lVar10 + 0x1b4) < iVar18 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar18);
    }
    lVar10 = *plVar16;
    *(int *)(lVar10 + lVar13 * 0x10) = local_158;
    *(int *)(lVar10 + 4 + lVar13 * 0x10) = local_154;
    *(longlong *)(lVar10 + 8 + lVar13 * 0x10) = local_150;
LAB_140f44b82:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar16);
    plVar16 = *(longlong **)(param_1 + 0x6f8);
    iVar18 = 1;
    plVar19 = plVar16 + (longlong)*(int *)(param_1 + 0x700) * 2;
    for (; plVar16 != plVar19; plVar16 = plVar16 + 2) {
      local_128 = 0;
      local_120 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
      FGenericPlatformString::Memcpy(local_128,L"FriendListItem",0x1e);
      uVar11 = *(undefined8 *)(param_1 + 0x6c8);
      local_c0 = UPackageMapClient::GetPrivateStaticClass();
      pwVar9 = (wchar_t *)FUN_142ebcee0(uVar11,&local_128,local_c0,0);
      if (pwVar9 == (wchar_t *)0x0) {
LAB_140f44c52:
        pwVar9 = pwVar14;
      }
      else {
        lVar10 = UPackageMapClient::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_140f44c52;
      }
      if (local_128 != 0) {
        FMemory::Free();
      }
      if ((pwVar9 != (wchar_t *)0x0) && (lVar10 = *plVar16, *(char *)(lVar10 + 0x80) != '\0')) {
        local_138 = *(longlong *)(lVar10 + 0x10);
        plVar5 = *(longlong **)(lVar10 + 0x18);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_130 = plVar5;
        if (pwVar9 + 0x184 != (wchar_t *)&local_138) {
          *(longlong *)(pwVar9 + 0x184) = local_138;
          local_138 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(pwVar9 + 0x188,&local_130);
        }
        plVar1 = local_130;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_130 + 1;
          lVar10 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
        }
        local_140 = (longlong *)plVar16[1];
        local_148 = *plVar16;
        if (local_140 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_140 + 1) = (int)local_140[1] + 1;
          UNLOCK();
        }
        if (pwVar9 + 0x18c != (wchar_t *)&local_148) {
          *(longlong *)(pwVar9 + 0x18c) = local_148;
          local_148 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(pwVar9 + 400,&local_140);
        }
        plVar1 = local_140;
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_140 + 1;
          lVar10 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_140 + 8))(local_140,1);
            }
          }
        }
        FUN_140f44020(param_1,plVar16,pwVar9);
        if (*(longlong *)(pwVar9 + 0x1a4) != 0) {
          *(int *)(pwVar9 + 0x19c) = iVar18 % 5;
          FUN_142088ee0(*(longlong *)(pwVar9 + 0x1a4),iVar18 % 5 + 1);
        }
        FUN_140f461c0(param_1);
        iVar18 = iVar18 + 1;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
      }
    }
    lVar10 = *(longlong *)(param_1 + 0x6c8);
    local_d0 = lVar10;
    if (lVar10 != 0) {
      uVar11 = UBlendableInterface::GetPrivateStaticClass();
      pwVar14 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar10,uVar11);
    }
    local_c8 = pwVar14;
    FUN_142ed36d0(param_1,&local_d0,0);
    (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x2c8))(*(longlong **)(param_1 + 0x6c8),1,0);
  }
  return;
}



// FUNCTION 140f44ea0 FUN_140f44ea0 body=56 status=ok
// SIG undefined FUN_140f44ea0(void)

void FUN_140f44ea0(longlong param_1)

{
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FUN_142ee2030(*(longlong *)(param_1 + 0x5b0),DAT_146b3e2b8,param_1 + 0x728);
    return;
  }
  return;
}



// FUNCTION 140f44ee0 FUN_140f44ee0 body=400 status=ok
// SIG undefined FUN_140f44ee0(void)

void FUN_140f44ee0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Join",L"GFxFriendsInAreaListMenu",L"JoinPrompt");
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar5,1);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Player Options",L"GFxFriendsInAreaListMenu",L"PlayerOptionsText");
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_1468725a8,uVar5,1);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Close",L"GFxFriendsInAreaListMenu",L"ClosePrompt");
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar5,1);
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
  return;
}



// FUNCTION 140f45070 FUN_140f45070 body=807 status=ok
// SIG undefined FUN_140f45070(void)

void FUN_140f45070(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  bool bVar11;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xdc8) == '\x03') {
    lVar9 = param_1 + 0xb98;
LAB_140f450cd:
    FUN_142ee2030(*(longlong *)(param_1 + 0x5b0),DAT_146b3e2a0,lVar9);
  }
  else if (*(char *)(param_1 + 0xdc8) == '\x05') {
    lVar9 = param_1 + 0xbb0;
    goto LAB_140f450cd;
  }
  if (((*(longlong *)(param_1 + 0xb30) != 0) &&
      (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xdb0), cVar4 != '\0')) &&
     (cVar4 = FUN_140f28f90(param_1), cVar4 != '\0')) {
    cVar4 = FUN_140e1a9c0(*(undefined8 *)(param_1 + 0xb30));
    if (cVar4 == '\0') {
      uVar5 = FWeakObjectPtr::Get(param_1 + 0xdb0);
      cVar4 = FUN_140e53ce0(uVar5,*(undefined8 *)(param_1 + 0xb30));
      if (cVar4 != '\0') goto LAB_140f4523e;
    }
    uVar5 = FWeakObjectPtr::Get(param_1 + 0xdb0);
    cVar4 = FUN_140e53ce0(uVar5,*(undefined8 *)(param_1 + 0xb30));
    bVar11 = cVar4 == '\0';
    if (bVar11) {
      puVar6 = local_68;
      pwVar7 = L"Enable Perk";
      pwVar8 = L"GFxGuardianRankMenu";
      pwVar10 = L"EnableGuardianPerk";
    }
    else {
      puVar6 = local_50;
      pwVar7 = L"Disable Perk";
      pwVar8 = L"GFxGuardianRankMenu";
      pwVar10 = L"DisableGuardianPerk";
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (puVar6,pwVar7,pwVar8,pwVar10);
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_1468725b0,uVar5);
    if ((bVar11) && (local_60 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    if ((!bVar11) && (local_48 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
LAB_140f4523e:
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xdb0);
  if ((cVar4 != '\0') && ((byte)(*(char *)(param_1 + 0xdc8) - 2U) < 3)) {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0xdb0);
    cVar4 = FUN_140e53960(uVar5);
    bVar11 = cVar4 == '\0';
    if (bVar11) {
      puVar6 = local_38;
      pwVar7 = L"Enable Guardian Rank";
      pwVar8 = L"GFxGuardianRankMenu";
      pwVar10 = L"EnableGuardianSystem";
    }
    else {
      puVar6 = local_20;
      pwVar7 = L"Disable Guardian Rank";
      pwVar8 = L"GFxGuardianRankMenu";
      pwVar10 = L"DisableGuardianSystem";
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (puVar6,pwVar7,pwVar8,pwVar10);
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_1468725a8,uVar5);
    if ((bVar11) && (local_30 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
    if ((!bVar11) && (local_18 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  lVar9 = param_1 + 0xbc8;
  if (*(char *)(param_1 + 0xdc8) != '\x05') {
    lVar9 = param_1 + 0xbe0;
  }
  FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,lVar9);
  return;
}



// FUNCTION 140f453a0 FUN_140f453a0 body=400 status=ok
// SIG undefined FUN_140f453a0(void)

void FUN_140f453a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Accept",L"GFxHDRCalibrationMenu",L"ConfirmText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar5);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Reset to Default",L"GFxHDRCalibrationMenu",L"ResetText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_1468725a8,uVar5);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    if (*(char *)(param_1 + 0x868) == '\0') {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_28,L"Cancel",L"GFxHDRCalibrationMenu",L"BackText");
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar5);
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
  }
  return;
}



// FUNCTION 140f45530 FUN_140f45530 body=3205 status=ok
// SIG undefined FUN_140f45530(void)

ulonglong FUN_140f45530(longlong *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 local_res8 [8];
  undefined1 local_1c8 [4];
  undefined1 local_1c4 [8];
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198 [12];
  undefined1 local_18c [12];
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
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
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  (**(code **)(*param_1 + 0x4c0))(param_1,local_res8);
  lVar13 = 0;
  uVar6 = 0;
  LOCK();
  uVar3 = *(uint *)((longlong)param_1 + 0xfbc);
  if (uVar3 == 0) {
    *(uint *)((longlong)param_1 + 0xfbc) = 0;
  }
  else {
    uVar6 = (ulonglong)uVar3;
  }
  UNLOCK();
  if (uVar3 != 0) {
    if (param_1[0xb6] == 0) {
      return uVar6;
    }
    uVar6 = FUN_142ee3e70();
    return uVar6;
  }
  FUN_142ecdac0(param_1);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_78,L"Close",L"GFxInventoryMenu",L"BackOutHelp");
  uVar6 = FUN_140f51910();
  if ((((char)uVar6 != '\0') && (param_1[0x1c4] != 0)) &&
     (uVar6 = FUN_140cb6290(), (char)uVar6 != '\0')) {
    uVar6 = FUN_142ee2030(param_1[0xb6],DAT_146b3e2b8,local_78);
    goto LAB_140f4616f;
  }
  if (param_1[0xb6] == 0) goto LAB_140f4616f;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_180,L"Select",L"GFxInventoryMenu",L"SelectHint");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_90,L"Cancel",L"GFxInventoryMenu",L"CancelHint");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_a8,L"Mark as Junk/Favorite",L"GFxInventoryMenu",L"ToggleTrashFavorite");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_c0,L"Drop",L"GFxInventoryMenu",L"DropHintText");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_d8,L"Unequip",L"GFxInventoryMenu",L"UnequipItemText");
  FText::FText(local_1b0);
  FText::FText(local_f0);
  FText::FText(local_150);
  FText::FText(local_108);
  FText::FText(local_120);
  FText::FText(local_138);
  FText::FText(local_168);
  lVar7 = FUN_140e97230(param_1);
  FUN_140f2b410(param_1,local_198);
  cVar5 = FUN_140f31e50(param_1);
  if (cVar5 == '\0') {
    lVar8 = FUN_142eb65a0(param_1);
    if ((lVar8 == 0) || (lVar8 != param_1[0x1b6])) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) goto LAB_140f45a45;
    cVar5 = FUN_140f31cb0(param_1);
    if (cVar5 == '\0') {
      cVar5 = FUN_140f31c30(param_1);
      if (cVar5 != '\0') {
        if ((((char)param_1[0x1d2] != '\0') && (param_1[0x142] != 0)) &&
           (lVar8 = FWeakObjectPtr::Get(local_18c), lVar8 != 0)) {
          lVar9 = FUN_1414ecd30();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar17 = false;
          }
          else {
            bVar17 = true;
          }
          if (bVar17) goto LAB_140f45a45;
        }
        if ((char)param_1[0x138] == '\0') {
          lVar8 = FUN_140f2b2d0(param_1);
          if (lVar8 == 0) {
LAB_140f4599b:
            local_1c8[0] = 0;
            FWeakObjectPtr::operator=(local_1c4,0);
            FWeakObjectPtr::operator=(&local_1bc,0);
            cVar5 = FWeakObjectPtr::IsValid(local_1c4);
            if (cVar5 != '\0') {
              plVar10 = (longlong *)FWeakObjectPtr::Get(local_1c4);
              lVar8 = (**(code **)(*plVar10 + 0x340))(plVar10);
              cVar5 = FWeakObjectPtr::IsValid(lVar8 + 0xdc);
              if (cVar5 == '\0') {
                cVar5 = FWeakObjectPtr::IsValid(lVar8 + 0x5c);
                if (cVar5 != '\0') {
                  local_1bc = *(undefined4 *)(lVar8 + 0x5c);
                  local_1b8 = *(undefined4 *)(lVar8 + 0x60);
                }
              }
              else {
                local_1bc = *(undefined4 *)(lVar8 + 0xdc);
                local_1b8 = *(undefined4 *)(lVar8 + 0xe0);
              }
            }
          }
          else {
            lVar9 = FUN_142eb65a0(param_1);
            plVar10 = (longlong *)param_1[0x140];
            plVar16 = plVar10 + (longlong)(int)param_1[0x141] * 0x1b;
            for (; plVar10 != plVar16; plVar10 = plVar10 + 0x1b) {
              if ((lVar9 != 0) && (lVar9 == *plVar10)) {
                FUN_140f16950(local_1c8,CONCAT71((int7)((ulonglong)plVar10 >> 8),1),lVar8);
                goto LAB_140f45a20;
              }
            }
            cVar5 = FUN_140f31c30(param_1);
            if (cVar5 == '\0') goto LAB_140f4599b;
            FUN_140f16950(local_1c8,2,lVar8);
          }
LAB_140f45a20:
          uVar12 = FWeakObjectPtr::Get(local_1c4);
          cVar5 = FUN_140f258f0(param_1,uVar12);
          if (cVar5 == '\0') {
LAB_140f45a39:
            cVar5 = FUN_140f27da0(param_1);
            bVar17 = cVar5 == '\0';
            goto LAB_140f45a43;
          }
        }
        else if ((char)param_1[0x138] == '\x02') {
          cVar5 = FUN_140f27da0();
          if (cVar5 != '\0') goto LAB_140f45a45;
          lVar8 = FWeakObjectPtr::Get(local_18c);
          if (lVar8 == 0) {
LAB_140f4588b:
            lVar8 = lVar13;
          }
          else {
            lVar9 = FUN_1428dfc70();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar17 = false;
            }
            else {
              bVar17 = true;
            }
            if (!bVar17) goto LAB_140f4588b;
          }
          lVar9 = FUN_140f2ad20(param_1 + 0x138);
          if (lVar8 != lVar9) goto LAB_140f45a54;
        }
        else {
          cVar5 = FUN_140f279e0();
          if (cVar5 == '\0') {
            lVar8 = FUN_140f2ad20(param_1 + 0x138);
            if (lVar8 != 0) {
              lVar8 = FWeakObjectPtr::Get(local_18c);
              if (lVar8 != 0) {
                lVar9 = FUN_1428dfc70();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar17 = false;
                }
                else {
                  bVar17 = true;
                }
                if (bVar17) goto LAB_140f45a39;
              }
              goto LAB_140f45a45;
            }
            goto LAB_140f45a39;
          }
        }
        goto LAB_140f45a45;
      }
    }
    else {
      if ((char)param_1[0x138] == '\0') goto LAB_140f45a45;
      lVar8 = FWeakObjectPtr::Get(local_18c);
      if (lVar8 != 0) {
        lVar9 = FUN_1428dfc70();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (bVar17) goto LAB_140f45a45;
      }
      lVar8 = FUN_140f2ad20(param_1 + 0x138);
      bVar17 = lVar8 == 0;
LAB_140f45a43:
      if (!bVar17) goto LAB_140f45a45;
    }
  }
  else {
LAB_140f45a45:
    FText::operator=(local_1b0,local_180);
  }
LAB_140f45a54:
  cVar5 = FUN_140f31e50(param_1);
  if (cVar5 != '\0') {
    lVar9 = FUN_142eb65a0(param_1);
    lVar8 = lVar13;
    if (lVar9 != 0) {
      lVar11 = UXGameInstance::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (bVar17) {
        lVar11 = param_1[0x140];
        lVar15 = (longlong)(int)param_1[0x141] * 0xd8 + lVar11;
        for (; lVar11 != lVar15; lVar11 = lVar11 + 0xd8) {
          if (*(longlong *)(lVar11 + 8) == lVar9) {
            lVar8 = *(longlong *)(lVar11 + 0x58);
            break;
          }
        }
      }
    }
    if (((lVar7 != 0) && (lVar8 != 0)) && (lVar7 = FUN_140c469b0(lVar7), lVar7 != 0)) {
      FText::operator=(local_168,local_d8);
    }
  }
  if ((char)param_1[0x138] == '\0') {
    if ((char)param_1[0x1d2] == '\0') {
LAB_140f45b31:
      uVar12 = FUN_1404b03b0();
      FUN_142ee25d0(param_1[0xb6],DAT_1468725e0,uVar12,1);
      uVar12 = FUN_1404b03b0();
      FUN_142ee25d0(param_1[0xb6],DAT_1468725e8,uVar12,1);
    }
  }
  else if ((char)param_1[0x138] == '\x01') goto LAB_140f45b31;
  cVar5 = FUN_140f31c30(param_1);
  if (((cVar5 == '\0') || ((char)param_1[0x1d2] != '\0')) ||
     (cVar5 = FUN_140f27350(param_1), cVar5 == '\0')) {
    lVar7 = FUN_142eb65a0(param_1);
    plVar10 = (longlong *)param_1[0x140];
    plVar16 = plVar10 + (longlong)(int)param_1[0x141] * 0x1b;
    for (; plVar10 != plVar16; plVar10 = plVar10 + 0x1b) {
      if ((lVar7 != 0) && (lVar7 == *plVar10)) {
        if ((char)param_1[0x1d2] == '\0') goto LAB_140f45bf6;
        break;
      }
    }
    cVar5 = FUN_140f31c30(param_1);
    if ((cVar5 != '\0') && ((char)param_1[0x1d2] == '\0')) {
LAB_140f45bf6:
      cVar5 = FUN_140f27350(param_1);
      if (cVar5 != '\0') {
        puVar14 = local_108;
        goto LAB_140f45c06;
      }
    }
  }
  else {
    puVar14 = local_120;
LAB_140f45c06:
    FText::operator=(puVar14,local_c0);
  }
  cVar5 = FUN_140f27650(param_1);
  if (cVar5 != '\0') {
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_60,L"Inspect",L"GFxInventoryMenu",L"InspectHintText");
    FText::operator=(local_f0,uVar12);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_58 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
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
  }
  cVar5 = FUN_140f27bd0(param_1);
  if (cVar5 != '\0') {
    FText::operator=(local_168,local_d8);
  }
  lVar7 = FWeakObjectPtr::Get(local_18c);
  if (lVar7 == 0) {
LAB_140f45cdf:
    lVar7 = lVar13;
  }
  else {
    lVar8 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (!bVar17) goto LAB_140f45cdf;
  }
  uVar12 = FUN_140f2b5e0(param_1);
  cVar5 = FUN_1411d5660(lVar7,uVar12);
  if (cVar5 != '\0') {
    FText::operator=(local_138,local_a8);
  }
  lVar13 = FUN_142eb65a0(param_1);
  if ((lVar13 == 0) || (lVar13 != param_1[0x1b6])) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  if (((((bVar17) || (param_1[0x86] == 0)) || (cVar5 = FUN_142dd3d20(), cVar5 == '\0')) &&
      ((char)param_1[0x138] == '\0')) &&
     ((cVar5 = FUN_140f31c30(param_1), cVar5 == '\0' || ((char)param_1[0x1d2] == '\0')))) {
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_48,L"Close",L"GFxInventoryMenu",L"BackOutHelp");
    FText::operator=(local_150,uVar12);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_40 + 1;
      lVar13 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
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
  else {
    FText::operator=(local_150,local_90);
  }
  cVar5 = FText::IsEmpty(local_1b0);
  if (cVar5 == '\0') {
    FUN_142ee2030(param_1[0xb6],DAT_146b3e2a0,local_1b0);
  }
  cVar5 = FText::IsEmpty(local_168);
  if (cVar5 == '\0') {
    FUN_142ee2030(param_1[0xb6],param_1[0xee],local_168);
  }
  cVar5 = FText::IsEmpty(local_120);
  if (cVar5 == '\0') {
    FUN_142ee2030(param_1[0xb6],param_1[0xea],local_120);
  }
  cVar5 = FText::IsEmpty(local_108);
  if (cVar5 == '\0') {
    FUN_142ee2030(param_1[0xb6],param_1[0xeb],local_108);
  }
  cVar5 = FText::IsEmpty(local_f0);
  if (cVar5 == '\0') {
    FUN_142ee2030(param_1[0xb6],param_1[0xed],local_f0);
  }
  cVar5 = FText::IsEmpty(local_138);
  if (cVar5 == '\0') {
    FUN_142ee2030(param_1[0xb6],param_1[0xec],local_138);
  }
  uVar6 = FText::IsEmpty(local_150);
  if ((char)uVar6 == '\0') {
    uVar6 = FUN_142ee2030(param_1[0xb6],DAT_146b3e2b8,local_150);
  }
  if (local_160 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_160 + 1);
    uVar3 = *puVar1;
    uVar6 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      puVar1 = (uint *)((longlong)local_160 + 0xc);
      uVar3 = *puVar1;
      uVar6 = (ulonglong)uVar3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar3 == 1) {
        uVar6 = (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
  if (local_130 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_130 + 1);
    uVar3 = *puVar1;
    uVar6 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      puVar1 = (uint *)((longlong)local_130 + 0xc);
      uVar3 = *puVar1;
      uVar6 = (ulonglong)uVar3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar3 == 1) {
        uVar6 = (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  if (local_118 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_118 + 1);
    uVar3 = *puVar1;
    uVar6 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      puVar1 = (uint *)((longlong)local_118 + 0xc);
      uVar3 = *puVar1;
      uVar6 = (ulonglong)uVar3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar3 == 1) {
        uVar6 = (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_100 + 1);
    uVar3 = *puVar1;
    uVar6 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      puVar1 = (uint *)((longlong)local_100 + 0xc);
      uVar3 = *puVar1;
      uVar6 = (ulonglong)uVar3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar3 == 1) {
        uVar6 = (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  if (local_148 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_148 + 1);
    uVar3 = *puVar1;
    uVar6 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      (**(code **)*local_148)(local_148);
      LOCK();
      puVar1 = (uint *)((longlong)local_148 + 0xc);
      uVar3 = *puVar1;
      uVar6 = (ulonglong)uVar3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar3 == 1) {
        uVar6 = (**(code **)(*local_148 + 8))(local_148,1);
      }
    }
  }
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_e8 + 1);
    uVar3 = *puVar1;
    uVar6 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      puVar1 = (uint *)((longlong)local_e8 + 0xc);
      uVar3 = *puVar1;
      uVar6 = (ulonglong)uVar3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar3 == 1) {
        uVar6 = (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  if (local_1a8 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_1a8 + 1);
    uVar3 = *puVar1;
    uVar6 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      (**(code **)*local_1a8)(local_1a8);
      LOCK();
      puVar1 = (uint *)((longlong)local_1a8 + 0xc);
      uVar3 = *puVar1;
      uVar6 = (ulonglong)uVar3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar3 == 1) {
        uVar6 = (**(code **)(*local_1a8 + 8))(local_1a8,1);
      }
    }
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_d0 + 1);
    uVar3 = *puVar1;
    uVar6 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      puVar1 = (uint *)((longlong)local_d0 + 0xc);
      uVar3 = *puVar1;
      uVar6 = (ulonglong)uVar3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar3 == 1) {
        uVar6 = (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_b8 + 1);
    uVar3 = *puVar1;
    uVar6 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      puVar1 = (uint *)((longlong)local_b8 + 0xc);
      uVar3 = *puVar1;
      uVar6 = (ulonglong)uVar3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar3 == 1) {
        uVar6 = (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 1);
    uVar3 = *puVar1;
    uVar6 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      puVar1 = (uint *)((longlong)local_a0 + 0xc);
      uVar3 = *puVar1;
      uVar6 = (ulonglong)uVar3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar3 == 1) {
        uVar6 = (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_88 + 1);
    uVar3 = *puVar1;
    uVar6 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      puVar1 = (uint *)((longlong)local_88 + 0xc);
      uVar3 = *puVar1;
      uVar6 = (ulonglong)uVar3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar3 == 1) {
        uVar6 = (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  if (local_178 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_178 + 1);
    uVar3 = *puVar1;
    uVar6 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      (**(code **)*local_178)(local_178);
      LOCK();
      puVar1 = (uint *)((longlong)local_178 + 0xc);
      uVar3 = *puVar1;
      uVar6 = (ulonglong)uVar3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar3 == 1) {
        uVar6 = (**(code **)(*local_178 + 8))(local_178,1);
      }
    }
  }
LAB_140f4616f:
  if (local_70 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_70 + 1);
    uVar3 = *puVar1;
    uVar6 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      uVar6 = (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        uVar6 = (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 140f461c0 FUN_140f461c0 body=1441 status=ok
// SIG undefined FUN_140f461c0(void)

void FUN_140f461c0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8 [2];
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  bVar12 = false;
  lVar9 = FWeakObjectPtr::Get((longlong)param_1 + 0x5cc);
  if (lVar9 == 0) {
    return;
  }
  lVar10 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
      != lVar10 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  local_118 = *(undefined8 *)(param_2 + 0x308);
  local_110 = *(longlong **)(param_2 + 0x310);
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  cVar6 = FUN_140d79f00(*(undefined8 *)(lVar9 + 0x478),&local_118,1,0,param_2 + 0x328);
  plVar3 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_110 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_110)(local_110);
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
  if (cVar6 == '\0') {
    local_108 = *(undefined8 *)(param_2 + 0x308);
    local_100 = *(longlong **)(param_2 + 0x310);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_140d938f0(*(undefined8 *)(lVar9 + 0x478),&local_108);
    plVar3 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_100)(local_100);
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
  }
  local_f8 = *(undefined8 *)(param_2 + 0x308);
  local_f0 = *(longlong **)(param_2 + 0x310);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
  }
  FUN_140d84620(*(longlong *)(lVar9 + 0x478) + 0x1f8,&local_c8,&local_f8);
  plVar3 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f0 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_f0)(local_f0);
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
  if ((local_c8 == (longlong *)0x0) || (lVar10 = (**(code **)(*local_c8 + 0x10))(), lVar10 == 0)) {
    local_e8 = *(undefined8 *)(param_2 + 0x308);
    local_e0 = *(longlong **)(param_2 + 0x310);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    FUN_140d94190(*(longlong *)(lVar9 + 0x478) + 0x1f8,&local_e8);
    plVar3 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_e0 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_e0)(local_e0);
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
    local_a8 = *(undefined8 *)(param_2 + 0x318);
    local_a0 = *(longlong *)(param_2 + 800);
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    local_98 = *(undefined8 *)(param_2 + 0x308);
    local_90 = *(longlong *)(param_2 + 0x310);
    local_68 = 0;
    uStack_60 = 0;
    if (local_90 != 0) {
      LOCK();
      *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
      UNLOCK();
    }
    lVar10 = FUN_1411e5cb0(lVar9,&local_98,&local_68,&local_a8);
    if (lVar10 == 0) goto LAB_140f4651d;
    FString::PrintfImpl(local_88,L"Profile_Image%i_nopack",*(undefined4 *)(param_2 + 0x338));
    (**(code **)(*param_1 + 0x2a0))(param_1,local_88,lVar10);
    local_b8[0] = local_88[0];
  }
  else {
    FString::PrintfImpl(local_b8,L"Profile_Image%i_nopack",*(undefined4 *)(param_2 + 0x338));
    lVar10 = *param_1;
    uVar11 = (**(code **)(*local_c8 + 0x10))(local_c8);
    (**(code **)(lVar10 + 0x2a0))(param_1,local_b8,uVar11);
  }
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
LAB_140f4651d:
  plVar3 = *(longlong **)(param_2 + 0x310);
  lVar10 = *(longlong *)(param_2 + 0x308);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (lVar10 == 0) {
    uVar7 = 7;
  }
  else {
    local_128 = (undefined4)lVar10;
    uStack_124 = (undefined4)((ulonglong)lVar10 >> 0x20);
    uStack_120 = SUB84(plVar3,0);
    uStack_11c = (undefined4)((ulonglong)plVar3 >> 0x20);
    bVar12 = true;
    local_78 = local_128;
    uStack_74 = uStack_124;
    uStack_70 = uStack_120;
    uStack_6c = uStack_11c;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    uVar7 = FUN_140bbd2a0(lVar9,&local_78);
  }
  if ((bVar12) && (plVar4 = (longlong *)CONCAT44(uStack_6c,uStack_70), plVar4 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  FText::FromString(local_48);
  plVar4 = *(longlong **)(param_2 + 0x350);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2a8))(plVar4,param_2 + 0x328,1,0);
  }
  plVar4 = *(longlong **)(param_2 + 0x370);
  local_d0 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar4[1];
    bVar12 = iVar8 == 0;
    if (bVar12) {
      *(int *)(plVar4 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar8 == (int)plVar4[1];
      if (bVar12) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar12) {
        lVar9 = *(longlong *)(param_2 + 0x368);
        local_d8 = lVar9;
        if (lVar9 != 0) {
          uVar11 = FUN_1411f1490(local_58,uVar7);
          FUN_14203e230(lVar9,uVar11);
          if (local_58[0] != 0) {
            FMemory::Free();
          }
        }
        plVar2 = local_d0;
        LOCK();
        plVar4 = plVar4 + 1;
        lVar9 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
        break;
      }
      LOCK();
      iVar8 = (int)plVar4[1];
      bVar12 = iVar8 == 0;
      if (bVar12) {
        *(int *)(plVar4 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  (**(code **)(*(longlong *)(param_2 + 0x170) + 0x38))((longlong *)(param_2 + 0x170),1);
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
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_c0 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return;
}



// FUNCTION 140f46770 FUN_140f46770 body=795 status=ok
// SIG undefined FUN_140f46770(void)

void FUN_140f46770(longlong param_1)

{
  int iVar1;
  void *_Src;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *local_48;
  int local_40;
  longlong *local_38;
  int local_30;
  
  plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x594);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar6 = AGFireballProjectile::GetPrivateStaticClass();
      lVar5 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar6);
      if (lVar5 != 0) {
        puVar11 = (undefined8 *)0x0;
        puVar13 = puVar11;
        if (plVar4[0x21b] != 0) {
          *(longlong *)(param_1 + 0xc00) = plVar4[0x21b];
          uVar3 = (**(code **)(*(longlong *)plVar4[0x21b] + 0x408))();
          puVar13 = (undefined8 *)(ulonglong)uVar3;
        }
        if (*(longlong *)(param_1 + 0x6d0) != 0) {
          plVar4 = (longlong *)(param_1 + 0xc10);
          *(undefined4 *)(param_1 + 0xc18) = 0;
          if (*(int *)(param_1 + 0xc1c) != 0) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(plVar4,0);
          }
          FUN_1409a7860(*(undefined8 *)(param_1 + 0x6d0),&local_38);
          if (local_30 != 0) {
            plVar9 = (longlong *)*local_38;
            if (plVar9 == (longlong *)0x0) {
              lVar7 = 0;
            }
            else {
              lVar7 = plVar9[0x1f];
              if (lVar7 == 0) {
                (**(code **)(*plVar9 + 0x368))(plVar9);
                lVar7 = plVar9[0x1f];
              }
            }
            iVar1 = *(int *)(param_1 + 0xc18);
            *(int *)(param_1 + 0xc18) = iVar1 + 1;
            if (*(int *)(param_1 + 0xc1c) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar1);
            }
            *(longlong *)(*plVar4 + (longlong)iVar1 * 8) = lVar7;
          }
          if (0 < *(int *)(param_1 + 0xc18)) {
            plVar9 = (longlong *)*plVar4;
            lVar7 = *plVar9;
            if (lVar7 != 0) {
              local_40 = *(int *)(lVar7 + 0x148);
              lVar10 = (longlong)local_40;
              _Src = *(void **)(lVar7 + 0x140);
              local_48 = (undefined8 *)0x0;
              puVar12 = puVar11;
              if (local_40 != 0) {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (&local_48,local_40,0);
                puVar12 = local_48;
                _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar10 << 3);
                plVar9 = (longlong *)*plVar4;
              }
              iVar1 = local_40;
              lVar7 = FUN_141039070(param_1,*plVar9);
              if (lVar7 != 0) {
                if (*(longlong *)(param_1 + 0xf20) != 0) {
                  FUN_14105ad40(*(longlong *)(param_1 + 0xf20),lVar7);
                }
                if (*(longlong *)(param_1 + 0xf30) != 0) {
                  FUN_14105ad40(*(longlong *)(param_1 + 0xf30),lVar7);
                }
                if (*(longlong *)(param_1 + 0xf28) != 0) {
                  FUN_14105ad40(*(longlong *)(param_1 + 0xf28),lVar7);
                }
                if (*(longlong *)(param_1 + 0xf38) != 0) {
                  FUN_14105ad40(*(longlong *)(param_1 + 0xf38),lVar7);
                }
              }
              puVar8 = puVar11;
              if (1 < iVar1) {
                puVar8 = (undefined8 *)puVar12[1];
              }
              FUN_141055530(param_1,lVar5,puVar13,*(undefined8 *)(param_1 + 0xf20),puVar8);
              puVar8 = puVar11;
              if (0 < iVar1) {
                puVar8 = (undefined8 *)*puVar12;
              }
              FUN_141055530(param_1,lVar5,puVar13,*(undefined8 *)(param_1 + 0xf30),puVar8);
              puVar8 = puVar11;
              if (3 < iVar1) {
                puVar8 = (undefined8 *)puVar12[3];
              }
              FUN_141055530(param_1,lVar5,puVar13,*(undefined8 *)(param_1 + 0xf28),puVar8);
              if (2 < iVar1) {
                puVar11 = (undefined8 *)puVar12[2];
              }
              FUN_141055530(param_1,lVar5,puVar13,*(undefined8 *)(param_1 + 0xf38),puVar11);
              if (puVar12 != (undefined8 *)0x0) {
                FMemory::Free(puVar12);
              }
            }
          }
          if (local_38 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140f46a90 FUN_140f46a90 body=2395 status=ok
// SIG undefined FUN_140f46a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_140f46a90(longlong *param_1,char param_2)

{
  int *piVar1;
  void **ppvVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  void *pvVar20;
  longlong *plVar21;
  ulonglong *puVar22;
  int iVar23;
  int iVar24;
  void *pvVar25;
  void *pvVar26;
  void **ppvVar27;
  undefined8 *puVar28;
  int iVar29;
  longlong *plVar30;
  int iVar31;
  int iVar32;
  undefined1 auStack_1b8 [32];
  char local_198;
  int local_194;
  void *local_190;
  void *local_188;
  longlong *local_180;
  wchar_t *local_178;
  undefined8 local_170;
  longlong *local_168;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  undefined8 local_148;
  void *local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  void *local_118;
  int local_110;
  void *local_108;
  int local_100;
  void *local_f8;
  int local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  void *local_78 [3];
  int local_60 [2];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_198 = param_2;
  local_180 = param_1;
  if (param_1[0x15c] != 0) {
    FUN_142ecffe0();
  }
  if ((int)param_1[0x1b8] < 1) {
    FUN_140f2bec0(param_1);
  }
  cVar11 = FWeakObjectPtr::IsValid(param_1 + 0x1b6);
  if ((cVar11 != '\0') && (param_1[0x15c] != 0)) {
    lVar14 = FWeakObjectPtr::Get(param_1 + 0x1b6);
    local_190 = (void *)0x0;
    iVar12 = 0;
    local_118 = (void *)0x0;
    iVar31 = 0;
    iVar29 = 0;
    local_110 = 0;
    iVar13 = (int)local_180[0x1b8];
    local_168 = (longlong *)(lVar14 + 0x1b8);
    pvVar20 = (void *)0x0;
    local_108 = (void *)0x0;
    local_100 = 0;
    local_f8 = (void *)0x0;
    local_f0 = 0;
    plVar30 = local_180;
    pvVar26 = (void *)0x0;
    iVar32 = 0;
    iVar24 = 0;
    iVar23 = 0;
    if (0 < iVar13) {
      plVar21 = (longlong *)*local_168;
      pvVar26 = (void *)0x0;
      iVar32 = 0;
      local_188 = (void *)0x0;
      local_160 = (void *)0x0;
      local_158 = 0;
      plVar4 = plVar21 + (longlong)*(int *)(lVar14 + 0x1c0) * 3;
      iVar29 = 0;
      if (plVar21 != plVar4) {
        do {
          local_b8 = plVar21[2];
          if ((*plVar21 == 0) || (*(longlong *)(*plVar21 + 0x30) != *(longlong *)plVar30[0x1b7])) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          iVar29 = iVar12;
          if (bVar8) {
            iVar29 = iVar12 + 1;
            local_158 = CONCAT44(local_158._4_4_,iVar29);
            if (iVar32 < iVar29) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_160,iVar12);
              pvVar26 = local_160;
              plVar30 = local_180;
              iVar29 = (int)local_158;
              iVar32 = local_158._4_4_;
            }
            uVar6 = *(undefined4 *)((longlong)plVar21 + 4);
            lVar14 = plVar21[1];
            uVar7 = *(undefined4 *)((longlong)plVar21 + 0xc);
            puVar5 = (undefined4 *)((longlong)pvVar26 + (longlong)iVar12 * 0x18);
            *puVar5 = (int)*plVar21;
            puVar5[1] = uVar6;
            puVar5[2] = (int)lVar14;
            puVar5[3] = uVar7;
            *(longlong *)((longlong)pvVar26 + (longlong)iVar12 * 0x18 + 0x10) = plVar21[2];
          }
          plVar21 = plVar21 + 3;
          iVar12 = iVar29;
        } while (plVar21 != plVar4);
        iVar13 = (int)plVar30[0x1b8];
        local_188 = pvVar26;
      }
      pvVar26 = local_188;
      iVar32 = 0;
      iVar24 = 0;
      iVar23 = iVar29;
      local_118 = local_188;
      local_110 = iVar29;
      if (1 < iVar13) {
        plVar21 = (longlong *)*local_168;
        pvVar26 = (void *)0x0;
        iVar23 = 0;
        local_190 = (void *)0x0;
        local_150 = (void *)0x0;
        local_148 = 0;
        plVar4 = plVar21 + (longlong)(int)local_168[1] * 3;
        iVar32 = 0;
        if (plVar21 != plVar4) {
          do {
            local_b8 = plVar21[2];
            if ((*plVar21 == 0) ||
               (*(longlong *)(*plVar21 + 0x30) != *(longlong *)(plVar30[0x1b7] + 8))) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            iVar32 = iVar31;
            if (bVar8) {
              iVar32 = iVar31 + 1;
              local_148 = CONCAT44(local_148._4_4_,iVar32);
              if (iVar23 < iVar32) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(&local_150,iVar31);
                pvVar26 = local_150;
                plVar30 = local_180;
                iVar32 = (int)local_148;
                iVar23 = local_148._4_4_;
              }
              uVar6 = *(undefined4 *)((longlong)plVar21 + 4);
              lVar14 = plVar21[1];
              uVar7 = *(undefined4 *)((longlong)plVar21 + 0xc);
              puVar5 = (undefined4 *)((longlong)pvVar26 + (longlong)iVar31 * 0x18);
              *puVar5 = (int)*plVar21;
              puVar5[1] = uVar6;
              puVar5[2] = (int)lVar14;
              puVar5[3] = uVar7;
              *(longlong *)((longlong)pvVar26 + (longlong)iVar31 * 0x18 + 0x10) = plVar21[2];
            }
            plVar21 = plVar21 + 3;
            iVar31 = iVar32;
          } while (plVar21 != plVar4);
          iVar13 = (int)plVar30[0x1b8];
          local_190 = pvVar26;
        }
        local_194 = iVar32;
        if (iVar32 <= iVar29) {
          local_194 = iVar29;
        }
        pvVar26 = local_188;
        iVar23 = local_194;
        local_108 = local_190;
        local_100 = iVar32;
        if (2 < iVar13) {
          plVar21 = (longlong *)*local_168;
          iVar13 = 0;
          local_140 = (void *)0x0;
          local_138 = 0;
          plVar4 = plVar21 + (longlong)(int)local_168[1] * 3;
          iVar24 = 0;
          for (; local_188 = pvVar26, plVar21 != plVar4; plVar21 = plVar21 + 3) {
            local_b8 = plVar21[2];
            if ((*plVar21 == 0) ||
               (*(longlong *)(*plVar21 + 0x30) != *(longlong *)(plVar30[0x1b7] + 0x10))) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            iVar23 = iVar24;
            if (bVar8) {
              iVar23 = iVar24 + 1;
              local_138._4_4_ = (int)((ulonglong)local_138 >> 0x20);
              local_138 = CONCAT44(local_138._4_4_,iVar23);
              if (iVar13 < iVar23) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(&local_140,iVar24);
                plVar30 = local_180;
                pvVar20 = local_140;
                iVar23 = (int)local_138;
                iVar13 = local_138._4_4_;
              }
              uVar6 = *(undefined4 *)((longlong)plVar21 + 4);
              lVar14 = plVar21[1];
              uVar7 = *(undefined4 *)((longlong)plVar21 + 0xc);
              puVar5 = (undefined4 *)((longlong)pvVar20 + (longlong)iVar24 * 0x18);
              *puVar5 = (int)*plVar21;
              puVar5[1] = uVar6;
              puVar5[2] = (int)lVar14;
              puVar5[3] = uVar7;
              *(longlong *)((longlong)pvVar20 + (longlong)iVar24 * 0x18 + 0x10) = plVar21[2];
            }
            iVar24 = iVar23;
            pvVar26 = local_188;
          }
          iVar23 = iVar24;
          local_f8 = pvVar20;
          local_f0 = iVar24;
          if (iVar24 <= local_194) {
            iVar23 = local_194;
          }
        }
      }
    }
    pvVar25 = local_190;
    cVar11 = FUN_142ebe030(plVar30);
    if (cVar11 == '\0') {
      iVar13 = (int)local_180[0x1b5];
    }
    else {
      iVar13 = *(int *)((longlong)local_180 + 0xdac);
    }
    local_78[2] = (void *)0x0;
    iVar12 = 0;
    if (iVar23 % iVar13 != 0) {
      iVar12 = iVar13 - iVar23 % iVar13;
    }
    local_60[0] = iVar29;
    if (iVar29 == 0) {
      local_60[1] = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(local_78 + 2,iVar29);
      _guard_xfg_dispatch_icall_nop(local_78[2],pvVar26,(longlong)iVar29 * 0x18);
    }
    local_58 = (void *)0x0;
    local_50 = iVar32;
    if (iVar32 == 0) {
      local_4c = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_58,iVar32,0);
      _guard_xfg_dispatch_icall_nop(local_58,pvVar25,(longlong)iVar32 * 0x18);
    }
    local_48 = (void *)0x0;
    local_40 = iVar24;
    if (iVar24 == 0) {
      local_3c = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_48,iVar24,0);
      _guard_xfg_dispatch_icall_nop(local_48,pvVar20,(longlong)iVar24 * 0x18);
    }
    local_98 = 0;
    local_90 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"orange",0xe);
    local_88 = 0;
    local_80 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    FGenericPlatformString::Memcpy(local_88,L"blue",10);
    local_78[0] = (void *)0x0;
    local_78[1] = (void *)0x6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"green",0xc);
    local_130 = (longlong)(iVar23 + iVar12);
    local_194 = 0;
    pvVar25 = local_190;
    if (0 < iVar23 + iVar12) {
      local_190 = (void *)0x0;
      do {
        ppvVar27 = local_78;
        local_188 = (void *)0x3;
        puVar28 = &local_98;
        pvVar20 = local_190;
        iVar13 = local_194;
        do {
          pvVar26 = local_188;
          ppvVar27 = ppvVar27 + 2;
          if (((longlong)pvVar20 < 0) || (*(int *)(ppvVar27 + 1) <= iVar13)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            plVar30 = (longlong *)((longlong)*ppvVar27 + (longlong)pvVar20);
            local_178 = (wchar_t *)0x0;
            local_170 = 0;
            lVar14 = *plVar30;
            if ((lVar14 == 0) || ((*(int *)(lVar14 + 0x88) < 1 && (*(int *)(lVar14 + 0x98) < 1)))) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_178,0x12);
              iVar13 = (int)local_170 + 0x12;
              local_170 = CONCAT44(local_170._4_4_,iVar13);
              if (local_170._4_4_ < iVar13) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178);
              }
              builtin_wcsncpy(local_178,L"PerkSlotDiamondMC",0x12);
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_178,0x11);
              iVar13 = (int)local_170 + 0x11;
              local_170 = CONCAT44(local_170._4_4_,iVar13);
              if (local_170._4_4_ < iVar13) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178);
              }
              builtin_wcsncpy(local_178,L"PerkSlotSquareMC",0x11);
            }
            plVar4 = local_180;
            lVar14 = local_180[0x15c];
            local_a8 = FUN_14134b8f0();
            lVar14 = FUN_142ebcee0(lVar14,&local_178,local_a8,1);
            if (lVar14 != 0) {
              lVar15 = FUN_14134b8f0();
              if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (bVar8) {
                pwVar16 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPerkSlotFocused",L"::");
                pwVar10 = (wchar_t *)0x0;
                while (pwVar9 = pwVar16, pwVar9 != (wchar_t *)0x0) {
                  pwVar16 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
                  pwVar10 = pwVar9;
                }
                FName::FName(&local_e8,pwVar10 + 2,1);
                lVar15 = local_e8;
                FWeakObjectPtr::operator=(lVar14 + 0x1d0,plVar4);
                *(longlong *)(lVar14 + 0x1d8) = lVar15;
                local_168 = (longlong *)0x0;
                if ((lVar15 != 0) && (lVar15 = FWeakObjectPtr::Get(lVar14 + 0x1d0), lVar15 != 0)) {
                  UObject::FindFunction(lVar15,*(undefined8 *)(lVar14 + 0x1d8));
                }
                FUN_142ed3c20(lVar14,1);
                cVar11 = FWeakObjectPtr::IsValid(plVar4 + 0x1b6);
                if (cVar11 != '\0') {
                  uVar17 = FWeakObjectPtr::Get(plVar4 + 0x1b6);
                  uVar18 = FString::FString(local_c8,puVar28);
                  FUN_140f4e250(lVar14,plVar30,uVar18,uVar17);
                }
                pvVar26 = local_188;
                if ((local_198 == '\0') && (*(char *)((longlong)plVar30 + 0x11) != '\0')) {
                  FUN_140f2c350(lVar14,&local_128);
                  if (local_128 != 0) {
                    FUN_14203e030(local_128,L"startAnim");
                  }
                  plVar30 = local_120;
                  if (local_120 != (longlong *)0x0) {
                    LOCK();
                    plVar21 = local_120 + 1;
                    lVar14 = *plVar21;
                    *(int *)plVar21 = (int)*plVar21 + -1;
                    UNLOCK();
                    if ((int)lVar14 == 1) {
                      (**(code **)*local_120)(local_120);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar30 + 0xc);
                      iVar13 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar13 == 1) {
                        (**(code **)(*local_120 + 8))(local_120,1);
                      }
                    }
                  }
                  lVar14 = *plVar4;
                  local_e0 = 0;
                  local_d8 = 0;
                  puVar19 = (undefined8 *)FName::FName(local_a0,L"Guardian_Token_Stat_Boost",1);
                  (**(code **)(lVar14 + 0x4e8))(plVar4,*puVar19,&local_e0);
                  pvVar26 = local_188;
                }
              }
            }
            pvVar20 = local_190;
            iVar13 = local_194;
            if (local_178 != (wchar_t *)0x0) {
              FMemory::Free();
              pvVar20 = local_190;
              iVar13 = local_194;
            }
          }
          puVar28 = puVar28 + 2;
          local_188 = (void *)((longlong)pvVar26 + -1);
        } while (local_188 != (void *)0x0);
        local_194 = iVar13 + 1;
        local_190 = (void *)((longlong)pvVar20 + 0x18);
        local_130 = local_130 + -1;
      } while (local_130 != 0);
      local_188 = (void *)0x0;
      local_130 = 0;
      pvVar25 = local_108;
      pvVar26 = local_118;
      pvVar20 = local_f8;
    }
    plVar30 = local_180;
    lVar15 = 3;
    (**(code **)(*(longlong *)local_180[0x15c] + 0x300))();
    FUN_142ebe240(plVar30[0x15c],*(undefined4 *)((longlong)plVar30 + 0xdcc));
    ppvVar27 = local_78 + 2;
    lVar14 = 3;
    do {
      ppvVar2 = ppvVar27 + -2;
      ppvVar27 = ppvVar27 + -2;
      lVar14 = lVar14 + -1;
      if (*ppvVar2 != (void *)0x0) {
        FMemory::Free();
      }
    } while (lVar14 != 0);
    puVar22 = local_38;
    do {
      puVar3 = puVar22 + -2;
      puVar22 = puVar22 + -2;
      lVar15 = lVar15 + -1;
      if (*puVar3 != 0) {
        FMemory::Free();
      }
    } while (lVar15 != 0);
    if (pvVar20 != (void *)0x0) {
      FMemory::Free(pvVar20);
    }
    if (pvVar25 != (void *)0x0) {
      FMemory::Free(pvVar25);
    }
    if (pvVar26 != (void *)0x0) {
      FMemory::Free(pvVar26);
    }
  }
  return;
}



// FUNCTION 140f473f0 FUN_140f473f0 body=276 status=ok
// SIG undefined FUN_140f473f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f473f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_142ece720();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140f26f70;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_142ecfea0(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f47510 FUN_140f47510 body=883 status=ok
// SIG undefined FUN_140f47510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f47510(longlong *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar3 = FUN_142088620();
  if (cVar3 == '\0') {
    return;
  }
  lVar8 = param_1[7];
  if (lVar8 == 0) {
LAB_140f4759d:
    lVar8 = 0;
  }
  else {
    lVar4 = FUN_141353250();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140f4759d;
  }
  lVar4 = param_1[7];
  if (lVar4 != 0) {
    lVar5 = FUN_1413a7320();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f475e2;
  }
  lVar4 = 0;
LAB_140f475e2:
  if (((lVar8 == 0) && (lVar4 == 0)) || (param_1[0x59] == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  FUN_142ed3c20(param_1,*(char *)((longlong)param_1 + 0x361) != '\0',0);
  *(undefined1 *)(param_1 + 0xd6) = *(undefined1 *)((longlong)param_1 + 0x414);
  cVar3 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x3e4);
  if ((cVar3 == '\0') && (cVar3 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x364), cVar3 == '\0')
     ) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) || (*(char *)((longlong)param_1 + 0x35c) == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  FUN_142ed3eb0(param_1,uVar7);
  FUN_140f49c30(param_1,0);
  FUN_142ed2820(param_1,*(char *)((longlong)param_1 + 0x659) != '\0',0);
  FUN_140f49a60(param_1);
  FUN_140f49b50(param_1);
  FUN_140f4aee0(param_1);
  if (!bVar1) {
    lVar5 = param_1[0xa8];
    if (lVar5 != 0) {
      if ((char)param_1[0x83] == '\0') {
        FUN_142056670(lVar5,0);
      }
      else {
        FUN_14203e030(lVar5,&DAT_144611b78);
      }
    }
    if (param_1[0x8a] != 0) {
      FUN_142056670(param_1[0x8a],0);
    }
    if (param_1[0x8c] != 0) {
      FUN_142056670(param_1[0x8c],0);
    }
    (**(code **)(*param_1 + 0x358))(param_1,param_1 + 0xd1,1);
  }
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_b8);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = param_1;
    *puVar6 = &PTR_FUN_143f77b70;
  }
  local_c8[0] = &LAB_140f26c60;
  uVar7 = FUN_1420849a0(param_1,local_78,local_c8);
  FUN_14208c300(param_1,uVar7);
  if (local_38 != 0) {
    plVar9 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar9 = local_48;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    plVar9 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar9 = local_98;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ecf920(param_1,0);
  if (bVar1) {
    if (lVar8 != 0) {
      lVar5 = *param_1;
      uVar7 = FUN_1411c87b0(local_c8);
      (**(code **)(lVar5 + 0x358))(param_1,uVar7,1);
      FUN_140ddef50(local_c8);
      *(undefined4 *)(lVar8 + 0xea0) = *(undefined4 *)(lVar8 + 0x9b8);
    }
    if (lVar4 != 0) {
      lVar8 = *param_1;
      uVar7 = FUN_1411c87b0(local_c8);
      (**(code **)(lVar8 + 0x358))(param_1,uVar7,1);
      FUN_140ddef50(local_c8);
      *(undefined4 *)(lVar4 + 0xe1c) = *(undefined4 *)(lVar4 + 0xe18);
    }
  }
  return;
}



// FUNCTION 140f47890 FUN_140f47890 body=1999 status=ok
// SIG undefined FUN_140f47890(void)

void FUN_140f47890(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  longlong *plVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  BOOL BVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  longlong *plVar24;
  undefined1 local_res20 [8];
  undefined1 local_f8 [4];
  undefined1 local_f4 [8];
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  
  BVar12 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
  if (BVar12 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
  }
  lVar14 = FUN_140f2b2d0(param_1);
  if (lVar14 == 0) {
LAB_140f4794b:
    local_f8[0] = 0;
    FWeakObjectPtr::operator=(local_f4,0);
    FWeakObjectPtr::operator=(&local_ec,0);
    cVar9 = FWeakObjectPtr::IsValid(local_f4);
    if (cVar9 != '\0') {
      plVar17 = (longlong *)FWeakObjectPtr::Get(local_f4);
      lVar14 = (**(code **)(*plVar17 + 0x340))(plVar17);
      cVar9 = FWeakObjectPtr::IsValid(lVar14 + 0xdc);
      if (cVar9 == '\0') {
        cVar9 = FWeakObjectPtr::IsValid(lVar14 + 0x5c);
        if (cVar9 != '\0') {
          local_ec = *(undefined4 *)(lVar14 + 0x5c);
          local_e8 = *(undefined4 *)(lVar14 + 0x60);
        }
      }
      else {
        local_ec = *(undefined4 *)(lVar14 + 0xdc);
        local_e8 = *(undefined4 *)(lVar14 + 0xe0);
      }
    }
  }
  else {
    lVar15 = FUN_142eb65a0(param_1);
    plVar17 = *(longlong **)(param_1 + 0xa00);
    plVar24 = plVar17 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar17 != plVar24; plVar17 = plVar17 + 0x1b) {
      if ((lVar15 != 0) && (lVar15 == *plVar17)) {
        FUN_140f16950(local_f8,CONCAT71((int7)((ulonglong)plVar17 >> 8),1),lVar14);
        goto LAB_140f479cc;
      }
    }
    cVar9 = FUN_140f31c30(param_1);
    if (cVar9 == '\0') goto LAB_140f4794b;
    FUN_140f16950(local_f8,2,lVar14);
  }
LAB_140f479cc:
  pcVar3 = (char *)(param_1 + 0x9c0);
  cVar9 = *pcVar3;
  if (cVar9 == '\x01') {
    uVar16 = FUN_140f2b5e0(param_1);
    uVar16 = FUN_140f2b510(pcVar3,uVar16);
    cVar9 = *pcVar3;
  }
  else {
    uVar16 = 0;
  }
  if (cVar9 == '\x01') {
    plVar17 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x9c4);
    uVar18 = (**(code **)(*plVar17 + 0x370))(plVar17);
  }
  else {
    uVar18 = 0;
  }
  lVar15 = FUN_142eb65a0(param_1);
  lVar14 = *(longlong *)(param_1 + 0xa00);
  lVar21 = (longlong)*(int *)(param_1 + 0xa08) * 0xd8 + lVar14;
  for (; lVar14 != lVar21; lVar14 = lVar14 + 0xd8) {
    if ((lVar15 != 0) && (lVar15 == *(longlong *)(lVar14 + 8))) {
      cVar9 = '\x01';
      goto LAB_140f47a62;
    }
  }
  cVar9 = '\0';
LAB_140f47a62:
  cVar10 = FUN_1405dc8f0(param_1 + 0xa1c,uVar16);
  cVar4 = *(char *)(param_1 + 0xe90);
  cVar11 = FUN_140f12a40(uVar18,param_1 + 0xa24);
  if (((cVar11 != '\0') || (cVar10 != '\0')) || (bVar8 = false, cVar9 != cVar4)) {
    bVar8 = true;
  }
  *(char *)(param_1 + 0xe90) = cVar9;
  FWeakObjectPtr::operator=(param_1 + 0xa1c,uVar16);
  FWeakObjectPtr::operator=(param_1 + 0xa24,uVar18);
  plVar17 = (longlong *)(param_1 + 0xa30);
  iVar23 = *(int *)(param_1 + 0xa3c);
  iVar22 = *(int *)(param_1 + 0xa38);
  iVar13 = -1;
  if (iVar23 < 0) {
    if (iVar22 != 0) {
      plVar24 = (longlong *)(*plVar17 + 8);
      do {
        plVar5 = (longlong *)*plVar24;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar23 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar23 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar24 = plVar24 + 4;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      iVar23 = *(int *)(param_1 + 0xa3c);
    }
    *(undefined4 *)(param_1 + 0xa38) = 0;
    if (iVar23 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (plVar17,0);
    }
  }
  else {
    if (iVar22 != 0) {
      plVar24 = (longlong *)(*plVar17 + 8);
      do {
        plVar5 = (longlong *)*plVar24;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar23 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar23 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar24 = plVar24 + 4;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
    }
    *(undefined4 *)(param_1 + 0xa38) = 0;
  }
  if (*(char *)(param_1 + 0xe90) == '\0') {
    if (plVar17 != (longlong *)(param_1 + 0x710)) {
      iVar23 = *(int *)(param_1 + 0xa38);
      if (iVar23 != 0) {
        plVar24 = (longlong *)(*plVar17 + 8);
        do {
          plVar5 = (longlong *)*plVar24;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar14 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar22 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar22 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          plVar24 = plVar24 + 4;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
      }
      iVar23 = *(int *)(param_1 + 0x718);
      lVar14 = *(longlong *)(param_1 + 0x710);
      *(int *)(param_1 + 0xa38) = iVar23;
      if ((iVar23 == 0) && (*(int *)(param_1 + 0xa3c) == 0)) {
        *(undefined4 *)(param_1 + 0xa3c) = 0;
      }
      else {
        TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(plVar17,iVar23);
        if (iVar23 != 0) {
          puVar20 = (undefined1 *)(lVar14 + 0x18);
          lVar14 = *plVar17 - lVar14;
          do {
            FText::FText(puVar20 + lVar14 + -0x18,puVar20 + -0x18);
            puVar20[lVar14] = *puVar20;
            puVar20 = puVar20 + 0x20;
            iVar23 = iVar23 + -1;
          } while (iVar23 != 0);
        }
      }
    }
    uVar16 = FUN_1404b03b0();
    FText::FText(local_c0,uVar16);
    local_a8 = 0;
    uVar16 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_80,L"RARITY",L"GFxInventoryMenu",L"FilterRarity");
    FText::operator=(local_c0,uVar16);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar24 = local_78 + 1;
      lVar14 = *plVar24;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)local_78 + 0xc);
        iVar23 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    iVar23 = *(int *)(param_1 + 0xa38);
    local_a8 = 4;
    *(int *)(param_1 + 0xa38) = iVar23 + 1;
    if (*(int *)(param_1 + 0xa3c) < iVar23 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar17,iVar23);
    }
    lVar14 = (longlong)iVar23 * 0x20 + *plVar17;
    FText::FText(lVar14,local_c0);
    *(undefined1 *)(lVar14 + 0x18) = local_a8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar24 = local_b8 + 1;
      lVar14 = *plVar24;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_b8)(local_b8);
        local_d8 = local_b8;
        goto LAB_140f47c48;
      }
    }
  }
  else {
    uVar16 = FUN_1404b03b0();
    FText::FText(local_e0,uVar16);
    local_c8 = 0;
    FText::operator=(local_e0,param_1 + 0x8f0);
    iVar23 = *(int *)(param_1 + 0xa38);
    local_c8 = 0;
    *(int *)(param_1 + 0xa38) = iVar23 + 1;
    if (*(int *)(param_1 + 0xa3c) < iVar23 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar17,iVar23);
    }
    lVar14 = (longlong)iVar23 * 0x20 + *plVar17;
    FText::FText(lVar14,local_e0);
    *(undefined1 *)(lVar14 + 0x18) = local_c8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar24 = local_d8 + 1;
      lVar14 = *plVar24;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_d8)(local_d8);
LAB_140f47c48:
        LOCK();
        piVar2 = (int *)((longlong)local_d8 + 0xc);
        iVar23 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0xa38) == 0) {
    uVar16 = FUN_1404b03b0();
    FText::FText(local_a0,uVar16);
    local_88 = 0;
    uVar16 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_68,L"Designer Fix Me: No Filter Found",L"GFxInventoryMenu",
                        L"NoFiltersText");
    FText::operator=(local_a0,uVar16);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar24 = local_60 + 1;
      lVar14 = *plVar24;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar23 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    iVar23 = *(int *)(param_1 + 0xa38);
    local_88 = 0;
    *(int *)(param_1 + 0xa38) = iVar23 + 1;
    if (*(int *)(param_1 + 0xa3c) < iVar23 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar17,iVar23);
    }
    lVar14 = (longlong)iVar23 * 0x20 + *plVar17;
    FText::FText(lVar14,local_a0);
    *(undefined1 *)(lVar14 + 0x18) = local_88;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_98 + 1;
      lVar14 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)local_98 + 0xc);
        iVar23 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
  }
  lVar14 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar14 != 0) {
    lVar15 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8
         ) != lVar15 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) && (lVar14 = FUN_140cff230(lVar14), lVar14 != 0)) {
      puVar19 = (undefined8 *)FName::FName(local_res20,"Backpack",1);
      iVar13 = FUN_140d3b200(lVar14,*puVar19);
    }
  }
  *(int *)(param_1 + 0xa18) = iVar13;
  if ((iVar13 < 0) || (*(int *)(param_1 + 0xa38) <= iVar13)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (bVar7) {
    if (bVar8) {
      lVar14 = 0xc18;
      if (*(char *)(param_1 + 0xe31) != '\x01') {
        lVar14 = 0xa80;
      }
      FUN_140f07da0(lVar14 + param_1);
      uVar6 = 0xc18;
      if (*(char *)(param_1 + 0xe31) != '\x01') {
        uVar6 = 0xa80;
      }
      FUN_140f07d80(param_1 + (ulonglong)uVar6);
      goto LAB_140f4802b;
    }
  }
  else {
    lVar14 = 0xc18;
    *(undefined4 *)(param_1 + 0xa18) = 0;
    if (*(char *)(param_1 + 0xe31) != '\x01') {
      lVar14 = 0xa80;
    }
    FUN_140f07da0(lVar14 + param_1);
    uVar6 = 0xc18;
    if (*(char *)(param_1 + 0xe31) != '\x01') {
      uVar6 = 0xa80;
    }
    FUN_140f07d80(param_1 + (ulonglong)uVar6);
    if (param_2 == '\x01') goto LAB_140f48042;
LAB_140f4802b:
    FUN_140f27170(param_1,0,2,0);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0xfa4) = 1;
  UNLOCK();
LAB_140f48042:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
  return;
}



// FUNCTION 140f48060 FUN_140f48060 body=1351 status=ok
// SIG undefined FUN_140f48060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f48060(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  ulonglong *puStack_190;
  undefined4 local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  ulonglong local_168;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined8 local_148;
  longlong local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [8];
  longlong *local_120;
  undefined8 local_110;
  longlong *local_108;
  undefined1 local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_188 = 0;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_160,L"ALL ITEMS",L"GFxInventoryMenu",L"AllItemsFilterText");
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0xa24);
  if (cVar7 == '\0') {
    if (*(char *)(param_1 + 0xe90) != '\0') {
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_d0,L"TRINKETS",L"GFxInventoryMenu",L"TrinketsFilterText");
      FText::operator=(local_160,uVar10);
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_c8 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar2 = (int *)((longlong)local_c8 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
          }
        }
      }
    }
  }
  else {
    lVar9 = FWeakObjectPtr::Get(param_1 + 0xa24);
    FText::operator=(local_160,lVar9 + 0x40);
  }
  iVar8 = *(int *)(param_1 + 0xa18);
  if ((iVar8 < 0) || (*(int *)(param_1 + 0xa38) <= iVar8)) {
    local_180 = 0;
    local_178 = (longlong *)0x0;
    local_170 = 0;
    local_168 = 0;
    uVar10 = FUN_1404b03b0();
    FText::FText(&local_180,uVar10);
    local_168 = local_168 & 0xffffffffffffff00;
    puVar11 = &local_180;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    lVar9 = (longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0xa30);
    FText::FText(&local_110,lVar9);
    local_f8 = *(undefined1 *)(lVar9 + 0x18);
    bVar5 = true;
    bVar4 = false;
    puVar11 = &local_110;
  }
  FText::FText(local_f0,puVar11);
  plVar3 = local_178;
  local_d8 = *(undefined1 *)(puVar11 + 3);
  if ((bVar4) && (local_178 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_178 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_178)(local_178);
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
  if ((bVar5) && (local_108 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_108 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)local_108 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  if ((*(longlong *)(param_1 + 0xde0) != 0) && (*(longlong *)(param_1 + 0xde8) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0xde8) + 8);
    LOCK();
    iVar8 = *piVar2;
    if (iVar8 == 0) {
      *piVar2 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      lVar9 = FText::FText(local_78,local_f0);
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_a0,L"SORT BY: {0}",L"GFxInventoryMenu",L"FormattedSortText");
      puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar10);
      local_60[0] = 4;
      FText::FText(local_50,lVar9);
      local_148 = *puVar11;
      local_198 = local_60;
      puStack_190 = &local_30;
      local_140 = puVar11[1];
      local_38 = '\x01';
      if (local_140 != 0) {
        LOCK();
        *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
        UNLOCK();
      }
      uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_138,&local_198);
      uVar10 = FText::Format(local_b8,&local_148,uVar10);
      FText::FText(local_128,uVar10);
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_b0 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar2 = (int *)((longlong)local_b0 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_138);
      if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_48 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)local_48 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      plVar3 = (longlong *)puVar11[1];
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
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar3 = *(longlong **)(lVar9 + 8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xdd8,local_128,1,0);
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_120 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar2 = (int *)((longlong)local_120 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
          }
        }
      }
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_98 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)local_98 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0xdc8) != 0) && (*(longlong *)(param_1 + 0xdd0) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0xdd0) + 8);
    LOCK();
    iVar8 = *piVar2;
    if (iVar8 == 0) {
      *piVar2 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xdc0,local_160,1,0);
    }
  }
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_e8 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar2 = (int *)((longlong)local_e8 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_158 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar2 = (int *)((longlong)local_158 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_158 + 8))(local_158,1);
      }
    }
  }
  return;
}



// FUNCTION 140f485b0 FUN_140f485b0 body=965 status=ok
// SIG undefined FUN_140f485b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f485b0(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  BOOL BVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  undefined8 local_d4;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf18);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar4 = FUN_142eb65a0(param_1);
  plVar5 = *(longlong **)(param_1 + 0xa00);
  plVar9 = plVar5 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
  for (; plVar5 != plVar9; plVar5 = plVar5 + 0x1b) {
    if ((lVar4 != 0) && (lVar4 == *plVar5)) {
      lVar4 = FUN_140f2b2d0(param_1);
      if (lVar4 == 0) goto LAB_140f48730;
      lVar6 = FUN_142eb65a0(param_1);
      plVar5 = *(longlong **)(param_1 + 0xa00);
      plVar9 = plVar5 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
      goto joined_r0x000140f486d9;
    }
  }
  local_c0 = local_c0 & 0xffffffffffffff00;
  FWeakObjectPtr::operator=((longlong)&local_c0 + 4,0);
  FWeakObjectPtr::operator=((longlong)&uStack_b8 + 4,0);
  cVar1 = FWeakObjectPtr::IsValid((longlong)&local_c0 + 4);
  if (cVar1 != '\0') {
    plVar5 = (longlong *)FWeakObjectPtr::Get((longlong)&local_c0 + 4);
    lVar4 = (**(code **)(*plVar5 + 0x340))(plVar5);
    cVar1 = FWeakObjectPtr::IsValid(lVar4 + 0xdc);
    if (cVar1 == '\0') {
      cVar1 = FWeakObjectPtr::IsValid(lVar4 + 0x5c);
      if (cVar1 == '\0') goto LAB_140f487d5;
      uStack_b8 = (undefined1 *)CONCAT44(*(undefined4 *)(lVar4 + 0x5c),(undefined4)uStack_b8);
      uVar3 = *(undefined4 *)(lVar4 + 0x60);
    }
    else {
      uStack_b8 = (undefined1 *)CONCAT44(*(undefined4 *)(lVar4 + 0xdc),(undefined4)uStack_b8);
      uVar3 = *(undefined4 *)(lVar4 + 0xe0);
    }
    local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,uVar3);
  }
LAB_140f487d5:
  puVar8 = &local_c0;
LAB_140f487d9:
  local_a0[0] = *(undefined1 *)puVar8;
  local_9c = *(undefined4 *)((longlong)puVar8 + 4);
  local_98 = *(undefined4 *)(puVar8 + 1);
  local_94 = *(undefined4 *)((longlong)puVar8 + 0xc);
  local_90 = *(undefined4 *)(puVar8 + 2);
  uVar7 = FUN_140f2b5e0(param_1);
  local_88 = FUN_140f2b510(local_a0,uVar7);
  lVar4 = FWeakObjectPtr::Get(&local_9c);
  local_80 = 0;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FWeakObjectPtr::Get(&local_9c);
    local_80 = (**(code **)(*plVar5 + 0x370))(plVar5);
  }
  if (*(char *)(param_1 + 0x9c0) == '\0') {
    lVar4 = FUN_142eb65a0(param_1);
    plVar5 = *(longlong **)(param_1 + 0xa00);
    plVar9 = plVar5 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar5 != plVar9; plVar5 = plVar5 + 0x1b) {
      if ((lVar4 != 0) && (lVar4 == *plVar5)) {
        local_d8[0] = 1;
        goto LAB_140f4888f;
      }
    }
  }
  local_d8[0] = 0;
LAB_140f4888f:
  uStack_b8 = local_d8;
  local_b0 = &local_88;
  local_48 = (longlong *)0x0;
  puStack_a8 = &local_80;
  local_38 = 0;
  local_c0 = param_1;
  puVar8 = (undefined8 *)FUN_140438ef0(0x28,local_68);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_FUN_143ff7760;
    *(undefined4 *)(puVar8 + 1) = (undefined4)local_c0;
    *(undefined4 *)((longlong)puVar8 + 0xc) = local_c0._4_4_;
    *(undefined4 *)(puVar8 + 2) = (undefined4)uStack_b8;
    *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_b8._4_4_;
    puVar8[3] = local_b0;
    puVar8[4] = puStack_a8;
  }
  local_78[0] = &LAB_140f26c70;
  lVar4 = 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar4 = 0xa80;
  }
  FUN_140ee5c20(lVar4 + param_1,local_78);
  if (local_38 != 0) {
    plVar5 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar5 = local_48;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
joined_r0x000140f486d9:
  if (plVar5 == plVar9) goto LAB_140f486f6;
  if ((lVar6 != 0) && (lVar6 == *plVar5)) {
    FUN_140f16950(&local_d4,CONCAT71((int7)((ulonglong)plVar5 >> 8),1),lVar4);
    puVar8 = &local_d4;
    goto LAB_140f487d9;
  }
  plVar5 = plVar5 + 0x1b;
  goto joined_r0x000140f486d9;
LAB_140f486f6:
  cVar1 = FUN_140f31c30(param_1);
  if (cVar1 == '\0') {
LAB_140f48730:
    local_d4._0_1_ = 0;
    FWeakObjectPtr::operator=((longlong)&local_d4 + 4,0);
    FWeakObjectPtr::operator=(&local_c8,0);
    cVar1 = FWeakObjectPtr::IsValid((longlong)&local_d4 + 4);
    if (cVar1 != '\0') {
      plVar5 = (longlong *)FWeakObjectPtr::Get((longlong)&local_d4 + 4);
      lVar4 = (**(code **)(*plVar5 + 0x340))(plVar5);
      cVar1 = FWeakObjectPtr::IsValid(lVar4 + 0xdc);
      if (cVar1 != '\0') {
        puVar8 = &local_d4;
        local_c8 = *(undefined4 *)(lVar4 + 0xdc);
        local_c4 = *(undefined4 *)(lVar4 + 0xe0);
        goto LAB_140f487d9;
      }
      cVar1 = FWeakObjectPtr::IsValid(lVar4 + 0x5c);
      if (cVar1 != '\0') {
        local_c8 = *(undefined4 *)(lVar4 + 0x5c);
        local_c4 = *(undefined4 *)(lVar4 + 0x60);
      }
    }
    puVar8 = &local_d4;
  }
  else {
    FUN_140f16950(&local_d4,2,lVar4);
    puVar8 = &local_d4;
  }
  goto LAB_140f487d9;
}



// FUNCTION 140f48980 FUN_140f48980 body=2071 status=ok
// SIG undefined FUN_140f48980(void)

void FUN_140f48980(longlong param_1,undefined1 param_2,char param_3,longlong param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined1 uVar4;
  BOOL BVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 local_308 [4];
  undefined4 local_304 [2];
  undefined4 local_2fc;
  undefined4 local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  int local_2d8;
  undefined4 local_2d4;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined1 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined1 local_2a8 [4];
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  longlong local_290;
  longlong local_288;
  undefined1 *local_280;
  undefined8 local_278;
  undefined1 local_270 [24];
  undefined1 local_258 [272];
  undefined1 local_148 [272];
  
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe58));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe58));
  }
  iVar6 = *(int *)(param_1 + 0xa18);
  if ((iVar6 < 0) || (*(int *)(param_1 + 0xa38) <= iVar6)) {
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
    }
    lVar13 = 0xc18;
    if (*(char *)(param_1 + 0xe31) != '\x01') {
      lVar13 = 0xa80;
    }
    FUN_140ee2710(lVar13 + param_1);
    LOCK();
    *(undefined4 *)(param_1 + 4000) = 1;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
    goto LAB_140f49176;
  }
  lVar13 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0xa30);
  FUN_142ed21f0(param_1,0);
  *(int *)(param_1 + 0x9f8) = *(int *)(param_1 + 0x9f8) + 1;
  if (*(char *)(param_1 + 0x9c0) == '\x01') {
    puVar9 = &local_2bc;
    local_2bc = *(undefined4 *)(param_1 + 0x9c4);
    puVar10 = &local_2b4;
    local_2b8 = *(undefined4 *)(param_1 + 0x9c8);
    local_2b4 = *(undefined4 *)(param_1 + 0x9cc);
    local_2b0 = *(undefined4 *)(param_1 + 0x9d0);
    local_2c0 = 1;
    local_2a8[0] = 1;
  }
  else {
    lVar16 = FUN_140f2b2d0(param_1);
    if (lVar16 == 0) {
LAB_140f48adc:
      local_308[0] = 0;
      FWeakObjectPtr::operator=(local_304,0);
      FWeakObjectPtr::operator=(&local_2fc,0);
      cVar3 = FWeakObjectPtr::IsValid(local_304);
      if (cVar3 != '\0') {
        plVar7 = (longlong *)FWeakObjectPtr::Get(local_304);
        lVar16 = (**(code **)(*plVar7 + 0x340))(plVar7);
        cVar3 = FWeakObjectPtr::IsValid(lVar16 + 0xdc);
        if (cVar3 == '\0') {
          cVar3 = FWeakObjectPtr::IsValid(lVar16 + 0x5c);
          if (cVar3 == '\0') goto LAB_140f48b61;
          local_2fc = *(undefined4 *)(lVar16 + 0x5c);
          local_2f8 = *(undefined4 *)(lVar16 + 0x60);
        }
        else {
          local_2fc = *(undefined4 *)(lVar16 + 0xdc);
          local_2f8 = *(undefined4 *)(lVar16 + 0xe0);
        }
      }
    }
    else {
      lVar12 = FUN_142eb65a0(param_1);
      plVar7 = *(longlong **)(param_1 + 0xa00);
      plVar14 = plVar7 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
      for (; plVar7 != plVar14; plVar7 = plVar7 + 0x1b) {
        if ((lVar12 != 0) && (lVar12 == *plVar7)) {
          FUN_140f16950(local_308,CONCAT71((int7)((ulonglong)plVar7 >> 8),1),lVar16);
          goto LAB_140f48b61;
        }
      }
      cVar3 = FUN_140f31c30(param_1);
      if (cVar3 == '\0') goto LAB_140f48adc;
      FUN_140f16950(local_308,2,lVar16);
    }
LAB_140f48b61:
    puVar9 = local_304;
    puVar10 = &local_2fc;
    local_2a8[0] = local_308[0];
  }
  local_2a4 = *puVar9;
  local_2a0 = puVar9[1];
  local_29c = *puVar10;
  local_298 = puVar10[1];
  local_280 = local_2a8;
  local_2c8 = param_1;
  local_290 = param_1;
  local_288 = lVar13;
  if (*(char *)(param_1 + 0xe90) == '\0') {
    if (param_3 == '\x03') {
LAB_140f4902e:
      if (*(char *)(param_1 + 0x940) != '\0') goto LAB_140f48e62;
      if ((param_4 != 0) && (cVar3 = FUN_140f1a150(&local_2c8,param_4), cVar3 != '\0')) {
        uVar1 = *(undefined4 *)(param_1 + 0xe84);
        BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
        if (BVar5 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
        }
        cVar3 = *(char *)(param_1 + 0xe31);
        uVar8 = FUN_140f2b5e0(param_1);
        lVar13 = 0xc18;
        if (cVar3 != '\x01') {
          lVar13 = 0xa80;
        }
        FUN_140edf120(lVar13 + param_1,param_4,uVar8,uVar1);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
      }
    }
    else {
      if (param_3 == '\x04') {
LAB_140f490bb:
        if (*(char *)(param_1 + 0x940) == '\0') {
          if (param_4 != 0) {
            BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
            if (BVar5 == 0) {
              EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
            }
            lVar13 = 0xc18;
            if (*(char *)(param_1 + 0xe31) != '\x01') {
              lVar13 = 0xa80;
            }
            FUN_140f07ab0(lVar13 + param_1,param_4);
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
          }
          goto LAB_140f48fea;
        }
      }
      else {
        if (param_3 == '\x05') goto LAB_140f4902e;
        if (param_3 == '\x06') goto LAB_140f490bb;
      }
LAB_140f48e62:
      lVar13 = FUN_140f2b5e0(param_1);
      if (lVar13 != 0) {
        local_2f0 = 0;
        local_2e8 = 0;
        FUN_140ed0240(local_258);
        lVar12 = *(longlong *)(param_1 + 0xe48);
        lVar16 = lVar12 + (longlong)*(int *)(param_1 + 0xe50) * 4;
        for (; lVar12 != lVar16; lVar12 = lVar12 + 4) {
          cVar3 = FUN_140f1a150(&local_2c8,lVar12);
          if (cVar3 != '\0') {
            uVar8 = FUN_142fffe20(lVar13,lVar12);
            uVar8 = FUN_1411e38c0(local_148,uVar8,lVar13);
            FUN_140e9ca30(local_258,uVar8);
            FUN_140e9c360(local_148);
            uVar2 = local_2e8;
            lVar18 = (longlong)(int)local_2e8;
            iVar6 = (int)local_2e8 + 1;
            local_2e8 = CONCAT44(local_2e8._4_4_,iVar6);
            if (local_2e8._4_4_ < iVar6) {
              TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeGrow
                        (&local_2f0,uVar2 & 0xffffffff);
            }
            FUN_140e9a4f0(lVar18 * 0x110 + local_2f0,local_258);
          }
        }
        FUN_140f23bf0(&local_290,&local_2f0);
        iVar15 = ASwitchActor::GetSelectedOption(lVar13);
        iVar15 = *(int *)(param_1 + 0xe80) - iVar15;
        iVar6 = 0;
        if (-1 < iVar15) {
          iVar6 = iVar15;
        }
        BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
        if (BVar5 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
        }
        if (*(longlong *)(param_1 + 0xa40) != 0) {
          FUN_1411fa3e0();
        }
        lVar13 = 0xc18;
        if (*(char *)(param_1 + 0xe31) != '\x01') {
          lVar13 = 0xa80;
        }
        FUN_140f04ef0(lVar13 + param_1,&local_2f0,param_2,*(undefined4 *)(param_1 + 0xe80),iVar6);
        LOCK();
        *(undefined4 *)(param_1 + 0xfa8) = 1;
        UNLOCK();
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
        FUN_140e9c360(local_258);
        plVar7 = &local_2f0;
        goto LAB_140f48fe5;
      }
    }
  }
  else {
    local_2f0 = FUN_140e971d0(param_1);
    iVar6 = *(int *)(param_1 + 0xe40);
    lVar13 = 0;
    local_2e0 = 0;
    local_2d4 = 0;
    local_2d8 = iVar6;
    if (0 < iVar6) {
      TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeGrow(&local_2e0,0);
    }
    if (iVar6 != 0) {
      piVar11 = (int *)(local_2e0 + 0x8c);
      lVar16 = local_2e0;
      iVar15 = iVar6;
      do {
        uVar8 = FUN_1404b03b0();
        FText::FText(lVar16,uVar8);
        piVar11[-0x1d] = 0;
        uVar8 = FUN_1404b03b0();
        FText::FText(piVar11 + -0x1b,uVar8);
        FText::FText(piVar11 + -0x15);
        piVar11[-0xf] = 0;
        piVar11[-0xe] = 0x1000000;
        *(undefined2 *)(piVar11 + -0xd) = 0;
        *(undefined1 *)((longlong)piVar11 + -0x32) = 0;
        piVar11[-0xc] = -1;
        piVar11[-0xb] = 0;
        piVar11[-3] = 0;
        piVar11[-2] = 0;
        piVar11[-1] = 0;
        piVar11[0] = 0;
        piVar11[-9] = -1;
        piVar11[-8] = 0;
        piVar11[-5] = 0;
        piVar11[-4] = 0;
        local_2d0 = 0;
        piVar11[-1] = 0;
        if ((*piVar11 < 0) && (*piVar11 != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(piVar11 + -3,0);
        }
        if (*(undefined2 **)(piVar11 + -3) != (undefined2 *)0x0) {
          **(undefined2 **)(piVar11 + -3) = 0;
        }
        piVar11[-7] = 0;
        piVar11[1] = 0;
        FUN_142fde510(piVar11 + 3);
        piVar11[0x13] = -1;
        piVar11[0x14] = -1;
        lVar16 = lVar16 + 0x110;
        piVar11[0x15] = 0;
        piVar11[0x16] = -1;
        piVar11[0x17] = 0;
        piVar11[0x18] = -1;
        piVar11[0x19] = 0;
        piVar11[0x1a] = -1;
        piVar11[0x1b] = 0;
        piVar11[0x1d] = 0;
        piVar11[0x1e] = 0;
        piVar11[0x1f] = 0;
        *(undefined1 *)(piVar11 + 0x20) = 1;
        piVar11 = piVar11 + 0x44;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    lVar16 = local_2f0;
    lVar12 = lVar13;
    if (iVar6 != 0) {
      do {
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xe38) + lVar13 * 8);
        if (lVar18 != 0) {
          lVar17 = local_2e0 + lVar12;
          FWeakObjectPtr::operator=(lVar17 + 0x5c,lVar18);
          *(undefined4 *)(lVar17 + 0x68) = *(undefined4 *)(lVar18 + 0x90);
          *(undefined4 *)(lVar17 + 0x6c) = *(undefined4 *)(lVar18 + 0x94);
          *(undefined4 *)(lVar17 + 0x70) = *(undefined4 *)(lVar18 + 0x98);
          local_278 = *(undefined8 *)(lVar18 + 0xa0);
          FString::FString(local_270,lVar18 + 0xa8);
          FSoftObjectPath::operator=(lVar17 + 0x78,&local_278);
          FWeakObjectPtr::operator=(lVar17 + 0xe4,*(undefined8 *)(lVar18 + 0x180));
          *(undefined1 *)(lVar17 + 0x10c) = 1;
          FText::operator=(lVar17 + 0x20,lVar18 + 0x30);
          if ((lVar16 == 0) || (cVar3 = FUN_140d01cd0(lVar16,lVar18), cVar3 == '\0')) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
          *(undefined1 *)(lVar17 + 0x54) = uVar4;
        }
        lVar13 = lVar13 + 1;
        lVar12 = lVar12 + 0x110;
      } while (lVar13 != iVar6);
    }
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
    }
    lVar13 = 0xc18;
    if (*(char *)(param_1 + 0xe31) != '\x01') {
      lVar13 = 0xa80;
    }
    FUN_140f04ef0(lVar13 + param_1,&local_2e0,param_2,local_2d8,0xffffffff);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
    plVar7 = &local_2e0;
LAB_140f48fe5:
    FUN_140e9bfd0(plVar7);
  }
LAB_140f48fea:
  *(int *)(param_1 + 0x9f8) = *(int *)(param_1 + 0x9f8) + -1;
  FUN_142ed21f0(param_1,1);
  LOCK();
  *(undefined4 *)(param_1 + 4000) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0xfac) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x9f0) = 1;
  UNLOCK();
LAB_140f49176:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe58));
  return;
}



// FUNCTION 140f491a0 FUN_140f491a0 body=1490 status=ok
// SIG undefined FUN_140f491a0(void)

void FUN_140f491a0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  lVar6 = FUN_140f2b5e0();
  if (lVar6 == 0) {
    return;
  }
  uVar5 = 0;
  uVar3 = 0;
  if ((param_1[0x1dc] == 0) || (param_1[0x1dd] == 0)) {
LAB_140f49204:
    uVar7 = (**(code **)(*param_1 + 0x4a8))(param_1,local_a8,L"goldenKey");
    FUN_142ede260(param_1 + 0x1db,uVar7);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_a0 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  else {
    piVar1 = (int *)(param_1[0x1dd] + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (iVar10 < 1) goto LAB_140f49204;
  }
  if ((param_1[0x1dc] != 0) && (param_1[0x1dd] != 0)) {
    piVar1 = (int *)(param_1[0x1dd] + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (0 < iVar10) {
      local_d8 = 0;
      plStack_d0 = (longlong *)0x0;
      if (param_1[0xd9] != 0) {
        uVar3 = FUN_142ff7c90(lVar6);
      }
      uVar7 = FText::AsNumber(local_78,uVar3,0,&local_d8);
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1db,uVar7,1,0);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_70 + 1;
        lVar8 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      plVar9 = plStack_d0;
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_d0 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_d0)(plStack_d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
  }
  if ((param_1[0x1df] == 0) || (param_1[0x1e0] == 0)) {
LAB_140f4936b:
    uVar7 = (**(code **)(*param_1 + 0x4a8))(param_1,local_98,L"eridium");
    FUN_142ede260(param_1 + 0x1de,uVar7);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_90 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  else {
    piVar1 = (int *)(param_1[0x1e0] + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (iVar10 < 1) goto LAB_140f4936b;
  }
  uVar3 = 0;
  if ((param_1[0x1df] != 0) && (param_1[0x1e0] != 0)) {
    piVar1 = (int *)(param_1[0x1e0] + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (0 < iVar10) {
      local_c8 = 0;
      plStack_c0 = (longlong *)0x0;
      uVar4 = uVar3;
      if (param_1[0xda] != 0) {
        uVar4 = FUN_142ff7c90(lVar6);
      }
      uVar7 = FText::AsNumber(local_60,uVar4,0,&local_c8);
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1de,uVar7,1,0);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_58 + 1;
        lVar8 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
      plVar9 = plStack_c0;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_c0 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
  }
  if (param_1[0x1e2] == 0) {
    local_e8 = 0;
    local_e0 = 0x25;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    FGenericPlatformString::Memcpy(local_e8,L"backpack.currency.animationContainer",0x4a);
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    lVar8 = FUN_140e96c90(param_1,&local_e8,0,6,&local_f8);
    param_1[0x1e2] = lVar8;
    plVar9 = local_f8;
    for (iVar10 = (int)local_f0; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free(local_f8);
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
  }
  if (param_1[0x1e2] != 0) {
    FUN_140f0b470(param_1[0x1e2],*(undefined4 *)((longlong)param_1 + 0x8e4));
    FUN_140f0a9a0(param_1[0x1e2],(int)param_1[0x11d]);
    FUN_140f08510(param_1[0x1e2],*(undefined4 *)((longlong)param_1 + 0x8ec));
    if (param_1[0xdb] == 0) {
      lVar8 = 0;
    }
    else {
      uVar3 = FUN_142ff7c90(lVar6);
      lVar8 = param_1[0xdb];
    }
    FUN_140f0abd0(param_1[0x1e2],lVar8,uVar3,1);
  }
  if ((param_1[0x1d9] != 0) && (param_1[0x1da] != 0)) {
    piVar1 = (int *)(param_1[0x1da] + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (0 < iVar10) goto LAB_140f49671;
  }
  uVar7 = (**(code **)(*param_1 + 0x4a8))(param_1,local_88,L"diamondKey");
  FUN_142ede260(param_1 + 0x1d8,uVar7);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_80 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
LAB_140f49671:
  if ((param_1[0x1d9] != 0) && (param_1[0x1da] != 0)) {
    piVar1 = (int *)(param_1[0x1da] + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (0 < iVar10) {
      local_b8 = 0;
      plStack_b0 = (longlong *)0x0;
      if (param_1[0xdc] != 0) {
        uVar5 = FUN_142ff7c90(lVar6);
      }
      uVar7 = FText::AsNumber(local_48,uVar5,0,&local_b8);
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1d8,uVar7,1,0);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_40 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      plVar9 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_b0 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140f49780 FUN_140f49780 body=513 status=ok
// SIG undefined FUN_140f49780(void)

void FUN_140f49780(longlong param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *local_38;
  undefined8 local_30;
  ulonglong uVar10;
  
  if (*(longlong *)(param_1 + 0x440) != 0) {
    uVar6 = 0;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x3e4);
    if (cVar2 != '\0') {
      uVar4 = FWeakObjectPtr::Get(param_1 + 0x3e4);
      FUN_1411e14e0(uVar4,0,&local_38);
    }
    lVar5 = (longlong)(int)local_30;
    iVar12 = 0;
    if ((int)local_30 != 0) {
      plVar1 = (longlong *)*local_38;
      uVar10 = uVar6;
      uVar13 = uVar6;
      if (plVar1 == (longlong *)0x0) {
        bVar7 = false;
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x278))(plVar1);
        if (cVar2 == '\0') {
          bVar7 = false;
        }
        else {
          bVar7 = 1 < (int)plVar1[0x15];
        }
      }
      do {
        uVar8 = (uint)uVar10;
        uVar9 = uVar8;
        do {
          uVar6 = uVar6 + 1;
          uVar9 = uVar9 + 1;
          if (lVar5 <= (longlong)uVar6) break;
          plVar1 = (longlong *)local_38[uVar6];
          if (plVar1 == (longlong *)0x0) {
            bVar3 = false;
          }
          else {
            cVar2 = (**(code **)(*plVar1 + 0x278))(plVar1);
            bVar3 = false;
            if (cVar2 != '\0') {
              bVar3 = 1 < (int)plVar1[0x15];
            }
          }
        } while (bVar7 == bVar3);
        if (bVar7 != false) {
          uVar11 = (uint)uVar13;
          if (uVar11 != uVar8) {
            _guard_xfg_dispatch_icall_nop
                      (local_38 + (int)uVar11,local_38 + (int)uVar8,
                       (longlong)(int)(uVar9 - uVar8) << 3);
          }
          uVar13 = (ulonglong)(uVar11 + (uVar9 - uVar8));
        }
        bVar7 = (bool)(bVar7 ^ 1);
        uVar10 = (ulonglong)uVar9;
      } while ((longlong)uVar6 < lVar5);
      iVar12 = (int)uVar13;
      local_30 = CONCAT44(local_30._4_4_,iVar12);
    }
    lVar5 = *(longlong *)(param_1 + 0x430);
    if (iVar12 < 1) {
      if (lVar5 == 0) {
        FUN_142056670(*(undefined8 *)(param_1 + 0x440),0);
      }
      else {
        FUN_14203e4e0(lVar5,&DAT_1446124a8);
      }
    }
    else {
      if (lVar5 == 0) {
        FUN_142056670(*(undefined8 *)(param_1 + 0x440),1);
      }
      else {
        FUN_14203e4e0(lVar5,&DAT_14461249c);
      }
      if (local_38[param_2 % (int)local_30] != 0) {
        FUN_14203e230(*(undefined8 *)(param_1 + 0x440),local_38[param_2 % (int)local_30] + 0xa0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f49990 FUN_140f49990 body=208 status=ok
// SIG undefined FUN_140f49990(void)

void FUN_140f49990(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  if (*(longlong *)(param_1 + 0x440) != 0) {
    puVar3 = &DAT_143f3eda8;
    if (*(int *)(param_2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    if (*(int *)(param_1 + 0x628) != 0) {
      puVar3 = *(undefined2 **)(param_1 + 0x620);
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
    if (iVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x430);
      if (*(int *)(param_2 + 1) < 2) {
        if (lVar1 == 0) {
          FUN_142056670(*(undefined8 *)(param_1 + 0x440),0);
        }
        else {
          FUN_14203e4e0(lVar1,&DAT_1446124b0);
        }
      }
      else {
        if (lVar1 == 0) {
          FUN_142056670(*(undefined8 *)(param_1 + 0x440),1);
        }
        else {
          FUN_14203e4e0(lVar1,&DAT_1446124b8);
        }
        FUN_14203e230(*(undefined8 *)(param_1 + 0x440),param_2);
      }
      FString::operator=(param_1 + 0x620,param_2);
    }
  }
  return;
}



// FUNCTION 140f49a60 FUN_140f49a60 body=225 status=ok
// SIG undefined FUN_140f49a60(void)

void FUN_140f49a60(longlong param_1)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    if ((*(char *)(param_1 + 0x361) == '\0') && (*(char *)(param_1 + 0x658) != '\x01')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    if ((*(int *)(param_1 + 0x5ec) == 2) || ((*(int *)(param_1 + 0x5ec) == 1) != SUB41(uVar4,0))) {
      pwVar2 = L"off";
      if (SUB41(uVar4,0) != false) {
        pwVar2 = L"default";
      }
      FUN_14203e4e0(*(longlong *)(param_1 + 0x4d0),pwVar2);
      *(undefined4 *)(param_1 + 0x5ec) = uVar4;
    }
  }
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    cVar1 = *(char *)(param_1 + 0x658);
    if ((*(int *)(param_1 + 0x5f0) == 2) || ((*(int *)(param_1 + 0x5f0) == 1) != (cVar1 == '\x03')))
    {
      if (*(char *)(param_1 + 0x418) == '\0') {
        FUN_142056670();
      }
      else {
        puVar3 = &DAT_144610fb8;
        if (cVar1 == '\x03') {
          puVar3 = &DAT_14460ffd4;
        }
        FUN_14203e030(*(longlong *)(param_1 + 0x4e0),puVar3);
      }
      *(uint *)(param_1 + 0x5f0) = (uint)(cVar1 == '\x03');
    }
  }
  return;
}



// FUNCTION 140f49b50 FUN_140f49b50 body=221 status=ok
// SIG undefined FUN_140f49b50(void)

void FUN_140f49b50(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  
  bVar2 = *(byte *)(param_1 + 0x658);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x3e4);
  if ((((cVar3 == '\0') && (cVar3 = FUN_14044aea0(param_1 + 0x364), cVar3 != '\0')) &&
      ((bVar2 & 0xfd) == 0)) &&
     ((*(char *)(param_1 + 0x361) == '\0' && (*(char *)(param_1 + 0x362) == '\0')))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((*(int *)(param_1 + 0x5e8) == 2) || ((*(int *)(param_1 + 0x5e8) == 1) != bVar6)) {
    if (*(longlong *)(param_1 + 0x560) != 0) {
      puVar5 = &DAT_144610fc8;
      if (bVar6 != false) {
        puVar5 = &DAT_144610fc0;
      }
      FUN_14203e030(*(longlong *)(param_1 + 0x560),puVar5);
      return;
    }
    if ((*(longlong *)(param_1 + 0x5c0) != 0) && (*(longlong *)(param_1 + 0x5c8) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x5c8) + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        FUN_142f10d20(param_1 + 0x5b8,bVar6);
      }
    }
  }
  return;
}



// FUNCTION 140f49c30 FUN_140f49c30 body=580 status=ok
// SIG undefined FUN_140f49c30(void)

void FUN_140f49c30(longlong param_1,char param_2)

{
  wchar_t **ppwVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  wchar_t *_Src;
  int iVar4;
  char cVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *local_28;
  int local_20;
  int local_1c;
  
  if (*(longlong *)(param_1 + 0x420) != 0) {
    if (*(char *)(param_1 + 0x418) == '\0') {
      cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x3e4);
      if (((cVar5 == '\0') && (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x364), cVar5 == '\0')) ||
         ((*(char *)(param_1 + 0x35d) == '\0' && (*(char *)(param_1 + 0x35e) == '\0')))) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      if ((*(int *)(param_1 + 0x5f8) == 2) || ((*(int *)(param_1 + 0x5f8) == 1) != SUB41(uVar7,0)))
      {
        FUN_142056670(*(undefined8 *)(param_1 + 0x420),uVar7);
        *(undefined4 *)(param_1 + 0x5f8) = uVar7;
      }
    }
    local_28 = (wchar_t *)0x0;
    local_1c = 0;
    local_20 = 0;
    if (*(char *)(param_1 + 0x35d) == '\0') {
      if (*(char *)(param_1 + 0x35e) == '\0') {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,8);
        local_20 = local_20 + 8;
        if (local_1c < local_20) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
        }
        builtin_wcsncpy(local_28,L"default",8);
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,6);
        local_20 = local_20 + 6;
        if (local_1c < local_20) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
        }
        builtin_wcsncpy(local_28,L"trash",6);
      }
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,9);
      local_20 = local_20 + 9;
      if (local_1c < local_20) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
      }
      builtin_wcsncpy(local_28,L"favorite",9);
    }
    iVar4 = local_20;
    _Src = local_28;
    pwVar6 = L"";
    ppwVar1 = (wchar_t **)(param_1 + 0x6b8);
    pwVar8 = L"";
    if (local_20 != 0) {
      pwVar8 = local_28;
    }
    if (*(int *)(param_1 + 0x6c0) != 0) {
      pwVar6 = *ppwVar1;
    }
    lVar9 = (longlong)pwVar8 - (longlong)pwVar6;
    do {
      wVar2 = *pwVar6;
      wVar3 = *(wchar_t *)((longlong)pwVar6 + lVar9);
      if (wVar2 != wVar3) break;
      pwVar6 = pwVar6 + 1;
    } while (wVar3 != L'\0');
    if (wVar2 != wVar3) {
      if (ppwVar1 != &local_28) {
        *(int *)(param_1 + 0x6c0) = local_20;
        if ((local_20 == 0) && (*(int *)(param_1 + 0x6c4) == 0)) {
          *(undefined4 *)(param_1 + 0x6c4) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppwVar1,local_20);
          _guard_xfg_dispatch_icall_nop(*ppwVar1,_Src,(longlong)iVar4 * 2);
        }
      }
      FUN_14203dbf0(*(undefined8 *)(param_1 + 0x420),ppwVar1);
    }
    if ((*(char *)(param_1 + 0x6b2) != '\0') && (param_2 != '\0')) {
      FUN_142ecf920(param_1,0);
    }
    if (_Src != (wchar_t *)0x0) {
      FMemory::Free(_Src);
    }
  }
  return;
}



// FUNCTION 140f49e80 FUN_140f49e80 body=777 status=ok
// SIG undefined FUN_140f49e80(void)

void FUN_140f49e80(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar1 = *(longlong *)(param_1 + 0x600);
  lVar5 = FUN_140f2b2d0();
  if (lVar5 == 0) {
LAB_140f49f13:
    local_38 = local_38 & 0xffffffffffffff00;
    FWeakObjectPtr::operator=((longlong)&local_38 + 4,0);
    FWeakObjectPtr::operator=((longlong)&local_30 + 4,0);
    cVar3 = FWeakObjectPtr::IsValid((longlong)&local_38 + 4);
    if (cVar3 != '\0') {
      plVar7 = (longlong *)FWeakObjectPtr::Get((longlong)&local_38 + 4);
      lVar5 = (**(code **)(*plVar7 + 0x340))(plVar7);
      cVar3 = FWeakObjectPtr::IsValid(lVar5 + 0xdc);
      if (cVar3 == '\0') {
        FWeakObjectPtr::IsValid(lVar5 + 0x5c);
      }
    }
  }
  else {
    lVar6 = FUN_142eb65a0(param_1);
    plVar7 = *(longlong **)(param_1 + 0xa00);
    plVar9 = plVar7 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar7 != plVar9; plVar7 = plVar7 + 0x1b) {
      if ((lVar6 != 0) && (lVar6 == *plVar7)) {
        FUN_140f16950(&local_38,CONCAT71((int7)((ulonglong)plVar7 >> 8),1),lVar5);
        goto LAB_140f49f6b;
      }
    }
    cVar3 = FUN_140f31c30(param_1);
    if (cVar3 == '\0') goto LAB_140f49f13;
    FUN_140f16950(&local_38,2,lVar5);
  }
LAB_140f49f6b:
  cVar3 = (char)local_38;
  lVar5 = FUN_140f2b2d0(param_1);
  if (lVar5 == 0) {
LAB_140f49fec:
    local_38 = local_38 & 0xffffffffffffff00;
    FWeakObjectPtr::operator=((longlong)&local_38 + 4,0);
    FWeakObjectPtr::operator=((longlong)&local_30 + 4,0);
    cVar4 = FWeakObjectPtr::IsValid((longlong)&local_38 + 4);
    if (cVar4 != '\0') {
      plVar7 = (longlong *)FWeakObjectPtr::Get((longlong)&local_38 + 4);
      lVar5 = (**(code **)(*plVar7 + 0x340))(plVar7);
      cVar4 = FWeakObjectPtr::IsValid(lVar5 + 0xdc);
      if (cVar4 == '\0') {
        cVar4 = FWeakObjectPtr::IsValid(lVar5 + 0x5c);
        if (cVar4 != '\0') {
          local_30 = CONCAT44(*(undefined4 *)(lVar5 + 0x5c),(undefined4)local_30);
          local_28 = *(undefined4 *)(lVar5 + 0x60);
        }
      }
      else {
        local_30 = CONCAT44(*(undefined4 *)(lVar5 + 0xdc),(undefined4)local_30);
        local_28 = *(undefined4 *)(lVar5 + 0xe0);
      }
    }
  }
  else {
    lVar6 = FUN_142eb65a0(param_1);
    plVar7 = *(longlong **)(param_1 + 0xa00);
    plVar9 = plVar7 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar7 != plVar9; plVar7 = plVar7 + 0x1b) {
      if ((lVar6 != 0) && (lVar6 == *plVar7)) {
        FUN_140f16950(&local_38,CONCAT71((int7)((ulonglong)plVar7 >> 8),1),lVar5);
        goto LAB_140f4a073;
      }
    }
    cVar4 = FUN_140f31c30(param_1);
    if (cVar4 == '\0') goto LAB_140f49fec;
    FUN_140f16950(&local_38,2,lVar5);
  }
LAB_140f4a073:
  lVar5 = FWeakObjectPtr::Get((longlong)&local_30 + 4);
  if (lVar5 != 0) {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140f4a0bd;
  }
  cVar3 = '\0';
LAB_140f4a0bd:
  if (*(char *)(param_1 + 0xe31) == '\x01') {
    cVar3 = '\x01';
  }
  else if (cVar3 == '\0') {
    cVar3 = *(char *)(param_1 + 0x9c0);
  }
  if (((lVar1 != 0) && (*(char *)(param_1 + 0xe30) != cVar3)) && (cVar3 != '\0')) {
    *(char *)(param_1 + 0xe30) = cVar3;
    if (cVar3 == '\x01') {
      local_30 = 0xe;
      local_38 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      pwVar8 = L"focusEquipped";
    }
    else {
      if (cVar3 != '\x02') {
        return;
      }
      local_30 = 0xe;
      local_38 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      pwVar8 = L"focusBackpack";
    }
    FGenericPlatformString::Memcpy(local_38,pwVar8,0x1c);
    FUN_142088910(lVar1,&local_38);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f4a190 FUN_140f4a190 body=1957 status=ok
// SIG undefined FUN_140f4a190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f4a190(longlong param_1)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  BOOL BVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  int iVar19;
  longlong lVar20;
  char *pcVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_308 [32];
  longlong **local_2e8;
  longlong **local_2e0;
  int local_2d8;
  undefined4 *local_2c8;
  undefined4 *puStack_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  undefined8 local_290;
  longlong local_288;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [24];
  undefined1 local_118 [64];
  undefined4 local_d8 [2];
  longlong local_d0;
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [2];
  longlong local_a0;
  undefined1 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined1 local_50;
  ulonglong local_48 [4];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_308;
  uVar23 = 0;
  local_2d8 = 0;
  local_278 = param_1;
  lVar12 = FUN_140f2b5e0();
  uVar27 = DAT_1464aa6cc;
  uVar26 = DAT_1464aa6c8;
  uVar25 = DAT_1464aa6c4;
  uVar24 = DAT_1464aa6c0;
  if (lVar12 == 0) {
    return;
  }
  local_2d8 = FUN_142b47070(lVar12);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xe58);
  BVar11 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar11 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  FUN_142fde510(local_118);
  lVar20 = *(longlong *)(param_1 + 0xe48);
  lVar13 = lVar20 + (longlong)*(int *)(param_1 + 0xe50) * 4;
  uVar22 = uVar23;
  for (; lVar20 != lVar13; lVar20 = lVar20 + 4) {
    cVar9 = FUN_142ffa4f0(lVar12,lVar20,local_118);
    if (cVar9 != '\0') {
      bVar10 = FUN_142fffd80(local_118);
      uVar22 = uVar22 + bVar10;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  lVar12 = local_278;
  lVar13 = FUN_140e97290(local_278);
  if (lVar13 != 0) {
    puVar14 = (undefined4 *)FUN_1411e0f50(lVar13,local_150,uVar22,local_2d8);
    uVar24 = *puVar14;
    uVar25 = puVar14[1];
    uVar26 = puVar14[2];
    uVar27 = puVar14[3];
  }
  if (*(longlong *)(lVar12 + 0xf08) == 0) {
    local_2a8 = 0;
    local_2a0 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
    FGenericPlatformString::Memcpy(local_2a8,L"backpack",0x12);
    local_2e0 = &local_2b8;
    local_2b8 = (longlong *)0x0;
    local_2e8 = (longlong **)CONCAT71(local_2e8._1_7_,6);
    local_2b0 = 0;
    local_278 = 0;
    uVar23 = 3;
    cVar9 = FUN_140ecf270(lVar12,lVar12 + 0xdb8,&local_2a8,0);
    if (cVar9 != '\0') {
      bVar5 = true;
      goto LAB_140f4a335;
    }
  }
  bVar5 = false;
LAB_140f4a335:
  if ((uVar23 & 2) != 0) {
    uVar23 = uVar23 & 0xfffffffd;
    plVar16 = local_2b8;
    for (iVar19 = (int)local_2b0; iVar19 != 0; iVar19 = iVar19 + -1) {
      if (*plVar16 != 0) {
        FMemory::Free();
      }
      plVar16 = plVar16 + 2;
    }
    if (local_2b8 != (longlong *)0x0) {
      FMemory::Free(local_2b8);
    }
  }
  if (((uVar23 & 1) != 0) && (local_2a8 != 0)) {
    FMemory::Free();
  }
  if (bVar5) {
    local_288 = 0;
    local_280 = 0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
    FGenericPlatformString::Memcpy(local_288,L"backpackHeader.headerText",0x34);
    local_2e8 = &local_298;
    local_298 = (longlong *)0x0;
    local_290 = 0;
    local_260 = 0;
    uVar15 = FUN_140ecc7d0(*(undefined8 *)(lVar12 + 0xdb8),&local_288,0,6);
    *(undefined8 *)(lVar12 + 0xf08) = uVar15;
    plVar16 = local_298;
    for (iVar19 = (int)local_290; iVar19 != 0; iVar19 = iVar19 + -1) {
      if (*plVar16 != 0) {
        FMemory::Free();
      }
      plVar16 = plVar16 + 2;
    }
    if (local_298 != (longlong *)0x0) {
      FMemory::Free(local_298);
    }
    if (local_288 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(lVar12 + 0xf08) != 0) {
    lVar13 = (longlong)local_2d8;
    if (local_2d8 < 1) {
      bVar8 = false;
      bVar7 = false;
      bVar6 = true;
      bVar5 = true;
      uVar15 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_180,L"BACKPACK ({0}/Unlimited)",L"GFxInventoryMenu",
                          L"HeaderInfiniteFormat");
      puVar17 = (undefined8 *)FTextFormat::FTextFormat(local_130,uVar15);
      local_d8[0] = 0;
      local_2c8 = local_d8;
      local_b0 = '\0';
      puStack_2c0 = local_a8;
      local_270 = *puVar17;
      local_268 = puVar17[1];
      if (local_268 != 0) {
        LOCK();
        *(int *)(local_268 + 8) = *(int *)(local_268 + 8) + 1;
        UNLOCK();
      }
      local_d0 = (longlong)(int)uVar22;
      local_238 = local_2c8;
      uStack_230 = puStack_2c0;
      uVar15 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_228,&local_238);
      uVar15 = FText::Format(local_198,&local_270,uVar15);
      FText::FText(local_218,uVar15);
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_190 + 1;
        lVar13 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar1 = (int *)((longlong)local_190 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_190 + 8))(local_190,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_228);
      if ((local_b0 != '\0') && (local_b0 = '\0', local_c0 != (longlong *)0x0)) {
        LOCK();
        plVar16 = local_c0 + 1;
        lVar13 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
      plVar16 = (longlong *)puVar17[1];
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar16 + 1;
        lVar13 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
      }
      puVar18 = local_218;
    }
    else {
      bVar8 = true;
      bVar7 = true;
      bVar6 = false;
      bVar5 = false;
      uVar15 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_168,L"BACKPACK ({0}/{1})",L"GFxInventoryMenu",L"HeaderCountsFormat")
      ;
      plVar16 = (longlong *)FTextFormat::FTextFormat(local_140,uVar15);
      local_a8[0] = 0;
      local_258 = local_a8;
      local_80 = 0;
      uStack_250 = local_48;
      puStack_2c0 = (undefined4 *)plVar16[1];
      local_2c8 = (undefined4 *)*plVar16;
      local_78 = 0;
      local_50 = 0;
      if (puStack_2c0 != (undefined4 *)0x0) {
        LOCK();
        puStack_2c0[2] = puStack_2c0[2] + 1;
        UNLOCK();
      }
      local_a0 = (longlong)(int)uVar22;
      local_70 = lVar13;
      uVar15 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_248,&local_258);
      uVar15 = FText::Format(local_1b0,&local_2c8,uVar15);
      FText::FText(local_200,uVar15);
      if (local_1a8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_1a8 + 1;
        lVar13 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_1a8)(local_1a8);
          LOCK();
          piVar1 = (int *)((longlong)local_1a8 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_1a8 + 8))(local_1a8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_248);
      lVar13 = 2;
      pcVar21 = &stack0xffffffffffffffe0;
      do {
        lVar13 = lVar13 + -1;
        pcVar2 = pcVar21 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar4 = *(longlong **)(pcVar21 + -0x40);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar4 + 1;
            lVar20 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar20 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar19 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar19 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
        }
        pcVar21 = pcVar2;
      } while (lVar13 != 0);
      plVar16 = (longlong *)plVar16[1];
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar16 + 1;
        lVar13 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
      }
      puVar18 = local_200;
    }
    FText::FText(local_1e8,puVar18);
    if ((bVar5) && (local_210 != (longlong *)0x0)) {
      LOCK();
      plVar16 = local_210 + 1;
      lVar13 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar1 = (int *)((longlong)local_210 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_210 + 8))(local_210,1);
        }
      }
    }
    if ((bVar6) && (local_178 != (longlong *)0x0)) {
      LOCK();
      plVar16 = local_178 + 1;
      lVar13 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar1 = (int *)((longlong)local_178 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_178 + 8))(local_178,1);
        }
      }
    }
    if ((bVar7) && (local_1f8 != (longlong *)0x0)) {
      LOCK();
      plVar16 = local_1f8 + 1;
      lVar13 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar1 = (int *)((longlong)local_1f8 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_1f8 + 8))(local_1f8,1);
        }
      }
    }
    if ((bVar8) && (local_160 != (longlong *)0x0)) {
      LOCK();
      plVar16 = local_160 + 1;
      lVar13 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)local_160 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
    (**(code **)(**(longlong **)(lVar12 + 0xf08) + 0x2b0))
              (*(longlong **)(lVar12 + 0xf08),local_1e8,1,0);
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1d0 = uVar24;
    uStack_1cc = uVar25;
    uStack_1c8 = uVar26;
    uStack_1c4 = uVar27;
    FUN_14208db90(*(undefined8 *)(lVar12 + 0xf08),&local_1d0);
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_1e0 + 1;
      lVar12 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar1 = (int *)((longlong)local_1e0 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_1e0 + 8))(local_1e0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f4a940 FUN_140f4a940 body=507 status=ok
// SIG undefined FUN_140f4a940(void)

void FUN_140f4a940(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_28 [32];
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x594);
  if (lVar6 != 0) {
    FUN_1413f82e0();
  }
  lVar6 = *(longlong *)(param_1 + 0xa58);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x1a8) != '\0')) {
    lVar7 = FUN_1413592a0();
    lVar3 = *(longlong *)(lVar6 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_140f8dbf0(lVar6 + 0x1b0,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
    }
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  puVar1 = (undefined4 *)(param_1 + 0xa60);
  *puVar1 = local_res8;
  *(undefined4 *)(param_1 + 0xa64) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  puVar2 = (undefined4 *)(param_1 + 0xa68);
  *puVar2 = local_res8;
  *(undefined4 *)(param_1 + 0xa6c) = local_resc;
  cVar5 = *(char *)(param_1 + 0x9c0);
  if (cVar5 == '\0') {
    lVar6 = FUN_142eb65a0(param_1);
    plVar11 = *(longlong **)(param_1 + 0xa00);
    plVar12 = plVar11 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar11 != plVar12; plVar11 = plVar11 + 0x1b) {
      if ((lVar6 != 0) && (lVar6 == *plVar11)) goto LAB_140f4aa53;
    }
    cVar5 = FUN_140f31c30(param_1);
    if (cVar5 == '\0') goto LAB_140f4aad6;
LAB_140f4aab5:
    lVar6 = FUN_140f2b410(param_1,local_28);
    uVar8 = FWeakObjectPtr::Get(lVar6 + 4);
    puVar10 = puVar2;
  }
  else {
    if (cVar5 == '\x01') {
      uVar8 = FWeakObjectPtr::Get(param_1 + 0x9c4);
      FWeakObjectPtr::operator=(puVar1,uVar8);
      goto LAB_140f4aab5;
    }
    if (cVar5 != '\x02') goto LAB_140f4aad6;
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x9c4);
    FWeakObjectPtr::operator=(puVar2,uVar8);
LAB_140f4aa53:
    lVar6 = FUN_140f2b410(param_1,local_28);
    uVar8 = FWeakObjectPtr::Get(lVar6 + 4);
    puVar10 = puVar1;
  }
  FWeakObjectPtr::operator=(puVar10,uVar8);
LAB_140f4aad6:
  uVar8 = FWeakObjectPtr::Get(puVar2);
  uVar9 = FWeakObjectPtr::Get(puVar1);
  FUN_140f50ba0(param_1,*(undefined8 *)(param_1 + 0xa50),uVar9,uVar8);
  uVar8 = FWeakObjectPtr::Get(puVar1);
  uVar9 = FWeakObjectPtr::Get(puVar2);
  FUN_140f50ba0(param_1,*(undefined8 *)(param_1 + 0xa58),uVar9,uVar8);
  return;
}



// FUNCTION 140f4ab40 FUN_140f4ab40 body=924 status=ok
// SIG undefined FUN_140f4ab40(void)

void FUN_140f4ab40(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  BOOL BVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf18);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  pcVar1 = (char *)(param_1 + 0x9c0);
  if ((*pcVar1 == '\x02') &&
     ((lVar7 = FUN_140f2ad20(pcVar1), lVar7 != 0 || (lVar7 = FUN_140f2ad80(pcVar1), lVar7 != 0)))) {
    lVar7 = FUN_140f2ad20(pcVar1);
    lVar8 = FUN_140f2ad80(pcVar1);
    lVar12 = 0xd88;
    if (*(char *)(param_1 + 0xe31) != '\x01') {
      lVar12 = 0xbf0;
    }
    iVar15 = 0;
    if (*(longlong *)(lVar12 + param_1) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_142eb7440();
    }
    FWeakObjectPtr::operator=(&local_54,0);
    FWeakObjectPtr::operator=(&local_4c,0);
    cVar4 = FWeakObjectPtr::IsValid(&local_54);
    uVar13 = local_48;
    if (cVar4 != '\0') {
      plVar9 = (longlong *)FWeakObjectPtr::Get(&local_54);
      lVar12 = (**(code **)(*plVar9 + 0x340))(plVar9);
      cVar4 = FWeakObjectPtr::IsValid(lVar12 + 0xdc);
      if (cVar4 == '\0') {
        cVar4 = FWeakObjectPtr::IsValid(lVar12 + 0x5c);
        uVar13 = local_48;
        if (cVar4 != '\0') {
          local_4c = *(undefined4 *)(lVar12 + 0x5c);
          uVar13 = *(uint *)(lVar12 + 0x60);
        }
      }
      else {
        local_4c = *(undefined4 *)(lVar12 + 0xdc);
        uVar13 = *(uint *)(lVar12 + 0xe0);
      }
    }
    *pcVar1 = '\0';
    *(undefined4 *)(param_1 + 0x9c4) = local_54;
    *(undefined4 *)(param_1 + 0x9c8) = local_50;
    *(undefined4 *)(param_1 + 0x9cc) = local_4c;
    *(uint *)(param_1 + 0x9d0) = uVar13;
    if (0 < iVar6) {
      do {
        uVar10 = FUN_140f2b2b0(param_1);
        plVar9 = (longlong *)FUN_140ee6f60(uVar10,iVar15);
        if (plVar9 != (longlong *)0x0) {
          lVar12 = FUN_1413565b0();
          if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
              != lVar12 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            lVar12 = (**(code **)(*plVar9 + 0x340))(plVar9);
            if ((lVar7 == 0) || (cVar4 = FUN_14058c1e0(lVar12 + 0xdc,lVar7), cVar4 == '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((lVar8 == 0) || (cVar4 = FUN_14058c1e0(lVar12 + 0x5c,lVar8), cVar4 == '\0')) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar2) || (bVar3)) {
              FWeakObjectPtr::operator=(&local_54,plVar9);
              FWeakObjectPtr::operator=(&local_4c,0);
              cVar4 = FWeakObjectPtr::IsValid(&local_54);
              if (cVar4 == '\0') {
LAB_140f4aded:
                uVar14 = (ulonglong)local_48;
              }
              else {
                plVar11 = (longlong *)FWeakObjectPtr::Get(&local_54);
                lVar7 = (**(code **)(*plVar11 + 0x340))(plVar11);
                cVar4 = FWeakObjectPtr::IsValid(lVar7 + 0xdc);
                if (cVar4 == '\0') {
                  cVar4 = FWeakObjectPtr::IsValid(lVar7 + 0x5c);
                  if (cVar4 == '\0') goto LAB_140f4aded;
                  local_4c = *(undefined4 *)(lVar7 + 0x5c);
                  uVar14 = (ulonglong)*(uint *)(lVar7 + 0x60);
                }
                else {
                  local_4c = *(undefined4 *)(lVar7 + 0xdc);
                  uVar14 = (ulonglong)*(uint *)(lVar7 + 0xe0);
                }
              }
              *pcVar1 = '\x02';
              *(undefined4 *)(param_1 + 0x9c4) = local_54;
              *(undefined4 *)(param_1 + 0x9c8) = local_50;
              *(undefined4 *)(param_1 + 0x9cc) = local_4c;
              *(int *)(param_1 + 0x9d0) = (int)uVar14;
              (**(code **)(*plVar9 + 0x338))(plVar9,CONCAT71((int7)(uVar14 >> 8),1),0);
              lVar7 = 0xc18;
              if (*(char *)(param_1 + 0xe31) != '\x01') {
                lVar7 = 0xa80;
              }
              iVar15 = FUN_140ee6b70(lVar7 + param_1);
              if (iVar15 == -1) {
                lVar7 = 0xd88;
                if (*(char *)(param_1 + 0xe31) != '\x01') {
                  lVar7 = 0xbf0;
                }
                if (*(longlong *)(lVar7 + param_1) != 0) {
                  uVar13 = 0xd88;
                  if (*(char *)(param_1 + 0xe31) != '\x01') {
                    uVar13 = 0xbf0;
                  }
                  (**(code **)(**(longlong **)((ulonglong)uVar13 + param_1) + 0x2f0))
                            (*(longlong **)((ulonglong)uVar13 + param_1),(int)plVar9[0x5b],0);
                }
              }
              break;
            }
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar6);
    }
  }
  plVar9 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x9c4);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x338))(plVar9,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140f4aed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 140f4aee0 FUN_140f4aee0 body=2593 status=ok
// SIG undefined FUN_140f4aee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f4aee0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  wchar_t **ppwVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  longlong lVar15;
  int iVar16;
  wchar_t *pwVar17;
  undefined2 *puVar18;
  undefined *puVar19;
  undefined2 *puVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  wchar_t *pwVar23;
  bool bVar24;
  bool bVar25;
  undefined4 uVar26;
  undefined1 auStack_178 [32];
  wchar_t *local_158;
  undefined8 local_150;
  undefined2 *local_148;
  int local_140;
  undefined4 local_13c;
  longlong local_138 [2];
  undefined4 *local_128;
  ulonglong *puStack_120;
  ulonglong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [16];
  undefined4 local_68 [2];
  longlong local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar22 = 0;
  local_118 = local_118 & 0xffffffff00000000;
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x3e4);
  if ((cVar6 == '\0') && (cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x364), cVar6 == '\0')) {
    uVar26 = 0;
  }
  else {
    uVar26 = 1;
  }
  if ((*(longlong *)(param_1 + 0x5d8) != 0) && (*(longlong *)(param_1 + 0x5e0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x5e0) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      if ((*(char *)(param_1 + 0x6b0) == '\0') ||
         ((cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x3e4), cVar6 == '\0' &&
          (cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x364), cVar6 == '\0')))) {
        uVar21 = 0;
      }
      else {
        uVar21 = 1;
      }
      if ((*(int *)(param_1 + 0x5fc) == 2) || ((*(int *)(param_1 + 0x5fc) == 1) != SUB41(uVar21,0)))
      {
        if (*(longlong *)(param_1 + 0x550) == 0) {
          FUN_142f10d20(param_1 + 0x5d0,uVar21);
        }
        else {
          puVar19 = &DAT_144611030;
          if (SUB41(uVar21,0) != false) {
            puVar19 = &DAT_144611028;
          }
          FUN_14203e030(*(longlong *)(param_1 + 0x550),puVar19);
        }
        *(undefined4 *)(param_1 + 0x5fc) = uVar21;
      }
      cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x3e4);
      uVar10 = uVar22;
      if (cVar6 != '\0') {
        plVar9 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x3e4);
        local_118 = FUN_14301f8f0();
        uVar10 = (**(code **)(*plVar9 + 0x628))(plVar9,local_118);
      }
      if (uVar10 == 0) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x5d0,param_1 + 0x328,1,0);
      }
      else {
        FText::FText(local_d8,uVar10 + 0x268);
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x5d0,local_d8,1,0);
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_d0 + 1;
          lVar11 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar1 = (int *)((longlong)local_d0 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_d0 + 8))(local_d0,1);
            }
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x470) == 0) goto LAB_140f4b250;
  local_158 = (wchar_t *)0x0;
  local_150 = 0;
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x3ec);
  if (cVar6 == '\0') {
    pwVar23 = L"common";
    if (*(char *)(param_1 + 0x418) != '\0') {
      pwVar23 = L"off";
    }
    if (local_158 != pwVar23) {
      if (*pwVar23 != L'\0') {
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (pwVar23[lVar11] != L'\0');
        uVar22 = (ulonglong)((int)lVar11 + 1);
      }
      iVar8 = (int)uVar22;
      iVar16 = local_150._4_4_;
      if (local_150._4_4_ != iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_158,uVar22);
        iVar16 = local_150._4_4_;
      }
      iVar7 = iVar8 + (int)local_150;
      local_150 = CONCAT44(local_150._4_4_,iVar7);
      if (iVar16 < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158);
      }
      if (iVar8 != 0) goto LAB_140f4b1a9;
    }
  }
  else {
    lVar11 = FWeakObjectPtr::Get(param_1 + 0x3ec);
    if (&local_158 != (wchar_t **)(lVar11 + 0x58)) {
      iVar8 = *(int *)(lVar11 + 0x60);
      pwVar23 = *(wchar_t **)(lVar11 + 0x58);
      local_150 = CONCAT44(local_150._4_4_,iVar8);
      if ((iVar8 == 0) && (local_150._4_4_ == 0)) {
        local_150 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,iVar8);
LAB_140f4b1a9:
        _guard_xfg_dispatch_icall_nop(local_158,pwVar23,(longlong)iVar8 * 2);
      }
    }
  }
  ppwVar3 = (wchar_t **)(param_1 + 0x630);
  pwVar23 = L"";
  if ((int)local_150 != 0) {
    pwVar23 = local_158;
  }
  if (*(int *)(param_1 + 0x638) == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = *ppwVar3;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar17,pwVar23);
  if ((iVar8 != 0) &&
     (FUN_14203e230(*(undefined8 *)(param_1 + 0x470),&local_158), pwVar23 = local_158,
     ppwVar3 != &local_158)) {
    lVar11 = (longlong)(int)local_150;
    *(int *)(param_1 + 0x638) = (int)local_150;
    if (((int)local_150 == 0) && (*(int *)(param_1 + 0x63c) == 0)) {
      *(undefined4 *)(param_1 + 0x63c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppwVar3,local_150 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*ppwVar3,pwVar23,lVar11 * 2);
    }
  }
  if (local_158 != (wchar_t *)0x0) {
    FMemory::Free(local_158);
  }
LAB_140f4b250:
  bVar25 = SUB41(uVar26,0);
  if ((*(longlong *)(param_1 + 0x590) != 0) && (*(longlong *)(param_1 + 0x598) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x598) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      if ((*(int *)(param_1 + 0x600) == 2) || ((*(int *)(param_1 + 0x600) == 1) != bVar25)) {
        FUN_142f10d20(param_1 + 0x588,uVar26);
        *(undefined4 *)(param_1 + 0x600) = uVar26;
      }
      cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x3ec);
      if (cVar6 != '\0') {
        lVar11 = FWeakObjectPtr::Get(param_1 + 0x3ec);
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x588,lVar11 + 0x70,1,0);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468729d8) && (_Init_thread_header(&DAT_1468729d8), DAT_1468729d8 == -1))
  {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_1468729c0,&DAT_1446110d0,L"GFxInventoryItemWidget",L"ItemScoreFormat");
    atexit(FUN_143e59e30);
    _Init_thread_footer(&DAT_1468729d8);
  }
  if (((bVar25 == false) || (*(char *)(param_1 + 0x6b0) != '\0')) ||
     (iVar8 = *(int *)(param_1 + 0x358), iVar8 == 0)) {
    bVar24 = false;
    uVar13 = FUN_1404b03b0();
    puVar14 = (undefined1 *)FText::FText(local_90,uVar13);
    bVar5 = false;
    bVar4 = true;
  }
  else {
    bVar24 = true;
    puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_78,&DAT_1468729c0);
    local_68[0] = 0;
    local_128 = local_68;
    local_40 = '\0';
    puStack_120 = local_38;
    local_110 = *puVar12;
    local_108 = puVar12[1];
    if (local_108 != 0) {
      LOCK();
      *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
      UNLOCK();
    }
    local_60 = (longlong)iVar8;
    uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_128);
    uVar13 = FText::Format(local_a8,&local_110,uVar13);
    FText::FText(local_c0,uVar13);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_a0 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_e8);
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar9 = local_50 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar9 = (longlong *)puVar12[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    puVar14 = local_c0;
    bVar5 = true;
    bVar4 = false;
  }
  FText::FText(local_100,puVar14);
  if ((bVar4) && (local_88 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_88 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  if ((bVar5) && (local_b8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_b8 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  if ((*(int *)(param_1 + 0x604) == 2) || ((*(int *)(param_1 + 0x604) == 1) != bVar24)) {
    if ((*(longlong *)(param_1 + 0x578) != 0) && (*(longlong *)(param_1 + 0x580) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x580) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) {
        if (*(longlong *)(param_1 + 0x480) == 0) {
          FUN_142f10d20(param_1 + 0x570,bVar24);
        }
        else {
          puVar19 = &DAT_1446110f8;
          if (bVar24 != false) {
            puVar19 = &DAT_1446110ec;
          }
          FUN_14203e4e0(*(longlong *)(param_1 + 0x480),puVar19);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x5a8) != 0) && (*(longlong *)(param_1 + 0x5b0) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x5b0) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) {
        if (*(longlong *)(param_1 + 0x490) == 0) {
          FUN_142f10d20(param_1 + 0x5a0,bVar24);
        }
        else {
          puVar19 = &DAT_144611120;
          if (bVar24 != false) {
            puVar19 = &DAT_144611114;
          }
          FUN_14203e4e0(*(longlong *)(param_1 + 0x490),puVar19);
        }
      }
    }
    *(uint *)(param_1 + 0x604) = (uint)bVar24;
  }
  if ((*(longlong *)(param_1 + 0x578) != 0) && (*(longlong *)(param_1 + 0x580) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x580) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x570,local_100,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x5a8) != 0) && (*(longlong *)(param_1 + 0x5b0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x5b0) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x5a0,local_100,1,0);
    }
  }
  FUN_140f49780(param_1,0);
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    if (((bVar25 == false) || (*(char *)(param_1 + 0x6b0) != '\0')) ||
       (cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x3f4), cVar6 == '\0')) {
      uVar26 = 0;
    }
    else {
      uVar26 = 1;
    }
    bVar25 = SUB41(uVar26,0);
    if ((*(int *)(param_1 + 0x608) == 2) || ((*(int *)(param_1 + 0x608) == 1) != bVar25)) {
      if (*(longlong *)(param_1 + 0x4b0) == 0) {
        FUN_142056670(*(undefined8 *)(param_1 + 0x4c0),uVar26);
      }
      else {
        puVar19 = &DAT_144611150;
        if (bVar25 != false) {
          puVar19 = &DAT_144611148;
        }
        FUN_14203e4e0(*(longlong *)(param_1 + 0x4b0),puVar19);
      }
      *(undefined4 *)(param_1 + 0x608) = uVar26;
    }
    if (bVar25 != false) {
      lVar15 = FWeakObjectPtr::Get(param_1 + 0x3f4);
      local_138[0] = 0;
      local_138[1] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138,0);
      lVar11 = local_138[0];
      FGenericPlatformString::Memcpy(local_138[0],&DAT_143f61010,0xc);
      plVar9 = local_138;
      if (1 < *(int *)(lVar15 + 0x100)) {
        plVar9 = (longlong *)(lVar15 + 0xf8);
      }
      local_148 = (undefined2 *)0x0;
      local_140 = (int)plVar9[1];
      lVar15 = (longlong)local_140;
      _Src = (void *)*plVar9;
      if (local_140 == 0) {
        local_13c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,local_140,0);
        _guard_xfg_dispatch_icall_nop(local_148,_Src,lVar15 * 2);
      }
      if (lVar11 != 0) {
        FMemory::Free(lVar11);
      }
      puVar18 = &DAT_143f3eda8;
      puVar20 = &DAT_143f3eda8;
      if (local_140 != 0) {
        puVar20 = local_148;
      }
      if (*(int *)(param_1 + 0x648) != 0) {
        puVar18 = *(undefined2 **)(param_1 + 0x640);
      }
      iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar18,puVar20);
      if (iVar8 != 0) {
        FUN_14203e230(*(undefined8 *)(param_1 + 0x4c0),&local_148);
        FString::operator=((undefined8 *)(param_1 + 0x640),&local_148);
      }
      if (local_148 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    cVar6 = *(char *)(param_1 + 0x35f);
    if ((*(int *)(param_1 + 0x60c) == 2) || ((*(int *)(param_1 + 0x60c) == 1) != (cVar6 == '\0'))) {
      FUN_142056670();
      *(uint *)(param_1 + 0x60c) = (uint)(cVar6 == '\0');
    }
  }
  FUN_140f4d060(param_1,*(undefined1 *)(param_1 + 0x360));
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_f8 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar1 = (int *)((longlong)local_f8 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8,1);
      }
    }
  }
  return;
}



// FUNCTION 140f4b910 FUN_140f4b910 body=140 status=ok
// SIG undefined FUN_140f4b910(void)

void FUN_140f4b910(undefined8 param_1)

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
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_140f26ce0;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 140f4b9a0 FUN_140f4b9a0 body=585 status=ok
// SIG undefined FUN_140f4b9a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f4b9a0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 *local_188 [2];
  undefined1 local_178 [32];
  undefined8 local_158;
  undefined4 local_148;
  undefined1 local_138 [80];
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 local_98 [16];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_1a4 = 0xffffffff;
  if (param_3 != 0) {
    FUN_14170c210(&local_1a4,param_3);
  }
  local_1a8 = 0xffffffff;
  uVar8 = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(&local_1a8,param_2);
    uVar8 = local_1a8;
  }
  uVar7 = local_1a4;
  local_1a8 = 0xffffffff;
  local_1a4 = 0xffffffff;
  local_b8 = (longlong *)0x0;
  local_a8 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_d8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_144605c38;
    puVar6[1] = param_1;
    *(undefined4 *)(puVar6 + 2) = uVar8;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar7;
    uVar7 = 0xffffffff;
    uVar8 = 0xffffffff;
  }
  local_e8[0] = &LAB_140f26b70;
  FUN_1420849a0(param_1,local_98,local_e8);
  if (local_a8 != 0) {
    plVar9 = local_d8;
    if (local_b8 != (longlong *)0x0) {
      plVar9 = local_b8;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar7);
  FUN_1416f8340(uVar8);
  FUN_1416f8340(local_1a8);
  FUN_1416f8340(local_1a4);
  puVar6 = (undefined8 *)FUN_140ad4c90(param_1,local_1a0);
  uVar4 = *puVar6;
  plVar9 = (longlong *)puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (local_198 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_198 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar2 = (int *)((longlong)local_198 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_198 + 8))(local_198,1);
      }
    }
  }
  local_158 = 0;
  local_148 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_178);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_14461b758;
    puVar6[1] = uVar4;
    puVar6[2] = plVar9;
    plVar9 = (longlong *)0x0;
  }
  local_188[0] = &LAB_140f26c30;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_138,local_98);
  FUN_14208c800(param_1,local_138,local_188);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_58 != 0) {
    plVar9 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar9 = local_68;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f4bbf0 FUN_140f4bbf0 body=671 status=ok
// SIG undefined FUN_140f4bbf0(void)

void FUN_140f4bbf0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int *piVar12;
  undefined1 local_58 [8];
  longlong *local_50;
  
  lVar8 = FUN_1405ec200(param_1 + 0x990);
  if (lVar8 != 0) {
    FUN_140680770();
  }
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar8 != 0) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140f4bc63;
  }
  lVar8 = 0;
LAB_140f4bc63:
  piVar4 = *(int **)(param_1 + 0xa00);
  iVar3 = *(int *)(param_1 + 0xa08);
  if (piVar4 != piVar4 + (longlong)iVar3 * 0x36) {
    piVar12 = piVar4 + 0x24;
    do {
      if ((*(longlong *)(piVar12 + -0x20) != 0) && (lVar8 != 0)) {
        lVar9 = FUN_1405ec200(piVar12 + -2);
        if (lVar9 != 0) {
          FUN_1406804e0();
        }
        lVar9 = FWeakObjectPtr::Get(piVar12 + -2);
        if (lVar9 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *piVar12) && (*(longlong *)(piVar12 + 2) != 0)) {
            lVar9 = FUN_141796df0();
            FWeakObjectPtr::operator=(piVar12 + -2,lVar9);
            if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *piVar12 = DAT_1464b56f4;
            }
            lVar9 = FWeakObjectPtr::Get(piVar12 + -2);
            if (lVar9 != 0) goto LAB_140f4bd50;
          }
        }
        else {
LAB_140f4bd50:
          lVar10 = FUN_1406804e0();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            FUN_142088cf0(*(undefined8 *)(piVar12 + -0x20),piVar12 + 8);
            goto LAB_140f4be39;
          }
        }
        uVar11 = FUN_140f141d0(param_1);
        FUN_142ef30e0(local_58,*(undefined8 *)(piVar12 + 0xc),uVar11,0,0xbf800000,0);
        if ((*(longlong *)(piVar12 + -0x1c) != 0) && (*(longlong *)(piVar12 + -0x1a) != 0)) {
          piVar1 = (int *)(*(longlong *)(piVar12 + -0x1a) + 8);
          LOCK();
          iVar7 = *piVar1;
          if (iVar7 == 0) {
            *piVar1 = 0;
            iVar7 = 0;
          }
          UNLOCK();
          if (0 < iVar7) {
            UMistDebugEntityScreen::InspectEntity(piVar12 + -0x1e,local_58,1);
          }
        }
        FUN_142088cf0(*(undefined8 *)(piVar12 + -0x20),piVar12 + -6);
        plVar6 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_50 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
      }
LAB_140f4be39:
      if ((*(longlong *)(piVar12 + -0x24) != 0) &&
         (*(longlong *)(*(longlong *)(piVar12 + -0x24) + 0x650) != 0)) {
        FUN_142ecfa40();
      }
      piVar1 = piVar12 + 0x12;
      piVar12 = piVar12 + 0x36;
    } while (piVar1 != piVar4 + (longlong)iVar3 * 0x36);
  }
  return;
}



// FUNCTION 140f4be90 FUN_140f4be90 body=940 status=ok
// SIG undefined FUN_140f4be90(void)

void FUN_140f4be90(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  short *psVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong local_c8;
  ulonglong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  if (*(longlong *)(param_1 + 0xac8) != 0) {
    FUN_142ecffe0();
  }
  if (*(longlong *)(param_1 + 0xad0) != 0) {
    FUN_142ecffe0();
  }
  if (*(longlong *)(param_1 + 0xad8) != 0) {
    FUN_142ecffe0();
  }
  if (*(int *)(param_1 + 0xdc0) == 0) {
    FUN_140f2bec0(param_1);
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xdb0);
  if (cVar4 != '\0') {
    FUN_142de2730(local_98);
    lVar6 = FWeakObjectPtr::Get(param_1 + 0xdb0);
    plVar13 = *(longlong **)(lVar6 + 0x188);
    plVar12 = plVar13 + (longlong)*(int *)(lVar6 + 400) * 4;
    for (; plVar13 != plVar12; plVar13 = plVar13 + 4) {
      if (*plVar13 != 0) {
        plVar2 = *(longlong **)(param_1 + 0xdb8);
        if (plVar2 != plVar2 + *(int *)(param_1 + 0xdc0)) {
          plVar7 = plVar2;
          do {
            if (*plVar7 == *(longlong *)(*plVar13 + 0x30)) {
              iVar5 = (int)((longlong)plVar7 - (longlong)plVar2 >> 3);
              goto LAB_140f4bfa1;
            }
            plVar7 = plVar7 + 1;
          } while (plVar7 != plVar2 + *(int *)(param_1 + 0xdc0));
        }
        iVar5 = -1;
LAB_140f4bfa1:
        if (iVar5 == 0) {
          lVar6 = *(longlong *)(param_1 + 0xac8);
          local_b8 = *(undefined4 *)(param_1 + 0xd78);
          uStack_b4 = *(undefined4 *)(param_1 + 0xd7c);
          uStack_b0 = *(undefined4 *)(param_1 + 0xd80);
          uStack_ac = *(undefined4 *)(param_1 + 0xd84);
        }
        else if (iVar5 == 1) {
          lVar6 = *(longlong *)(param_1 + 0xad0);
          local_b8 = *(undefined4 *)(param_1 + 0xd88);
          uStack_b4 = *(undefined4 *)(param_1 + 0xd8c);
          uStack_b0 = *(undefined4 *)(param_1 + 0xd90);
          uStack_ac = *(undefined4 *)(param_1 + 0xd94);
        }
        else {
          local_b8 = DAT_1464aa6c0;
          uStack_b4 = DAT_1464aa6c4;
          uStack_b0 = DAT_1464aa6c8;
          uStack_ac = DAT_1464aa6cc;
          if (iVar5 != 2) goto LAB_140f4c14e;
          lVar6 = *(longlong *)(param_1 + 0xad8);
          local_b8 = *(undefined4 *)(param_1 + 0xd98);
          uStack_b4 = *(undefined4 *)(param_1 + 0xd9c);
          uStack_b0 = *(undefined4 *)(param_1 + 0xda0);
          uStack_ac = *(undefined4 *)(param_1 + 0xda4);
        }
        if (lVar6 != 0) {
          cVar4 = FUN_142ebe120();
          psVar11 = (short *)PTR_u_BonusStatEntryMC_14629e108;
          if (cVar4 != '\0') {
            psVar11 = (short *)PTR_u_BonusStatEntryMCSplit_14629e100;
          }
          local_c8 = 0;
          local_c0 = 0;
          if ((psVar11 != (short *)0x0) && (*psVar11 != 0)) {
            lVar10 = -1;
            do {
              lVar10 = lVar10 + 1;
            } while (psVar11[lVar10] != 0);
            uVar9 = (int)lVar10 + 1;
            local_c0 = (ulonglong)uVar9;
            if (0 < (int)uVar9) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
            }
            FGenericPlatformString::Memcpy(local_c8,psVar11,(longlong)(int)uVar9 * 2);
          }
          uVar8 = AReplicationGraphDebugActor::GetPrivateStaticClass();
          lVar6 = FUN_142ebcee0(lVar6,&local_c8,uVar8,1);
          if (lVar6 == 0) {
LAB_140f4c0be:
            lVar6 = 0;
          }
          else {
            lVar10 = AReplicationGraphDebugActor::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_140f4c0be;
          }
          if (local_c8 != 0) {
            FMemory::Free();
          }
          if (lVar6 != 0) {
            uVar8 = FWeakObjectPtr::Get(param_1 + 0xdb0);
            cVar4 = FUN_140e4de30(uVar8,plVar13,local_98);
            if (cVar4 == '\0') {
              local_a8 = 0;
              local_a0 = 0;
              uVar8 = FText::FromString(local_40,&local_a8);
              FUN_140f4e450(lVar6,*plVar13,uVar8,&local_b8);
              if (local_a8 != 0) {
                FMemory::Free();
              }
            }
            else {
              uVar8 = FText::FText(local_58,local_78);
              FUN_140f4e450(lVar6,*plVar13,uVar8,&local_b8);
            }
          }
        }
      }
LAB_140f4c14e:
    }
    if (*(longlong **)(param_1 + 0xac8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xac8) + 0x300))();
    }
    if (*(longlong **)(param_1 + 0xad0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xad0) + 0x300))();
    }
    if (*(longlong **)(param_1 + 0xad8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xad8) + 0x300))();
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_70 + 1;
      lVar6 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
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
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_88 + 1;
      lVar6 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f4c240 FUN_140f4c240 body=271 status=ok
// SIG undefined FUN_140f4c240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f4c240(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140f26cb0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f4c350 FUN_140f4c350 body=271 status=ok
// SIG undefined FUN_140f4c350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f4c350(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140f26950;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f4c460 FUN_140f4c460 body=204 status=ok
// SIG undefined FUN_140f4c460(void)

void FUN_140f4c460(longlong param_1)

{
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    local_18[0] = 0;
    local_18[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],&DAT_14460f9e0,8);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x1c0),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    local_18[0] = 0;
    local_18[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],&DAT_14460f9f8,8);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x170),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f4c530 FUN_140f4c530 body=116 status=ok
// SIG undefined FUN_140f4c530(void)

void FUN_140f4c530(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140f2a2a0();
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (0 < *(int *)(lVar2 + 0xe38))) {
      FUN_140f26410(param_1);
    }
  }
  return;
}



// FUNCTION 140f4c5b0 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<216,8>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0xd8,0);
  iVar4 = (int)(uVar3 / 0xd8);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xd8,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140f4c640 FUN_140f4c640 body=258 status=ok
// SIG undefined FUN_140f4c640(void)

void FUN_140f4c640(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_18;
  undefined8 local_10;
  
  if ((((*(longlong *)(param_1 + 0xdb0) != 0) &&
       (cVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xdb0) + 0x170) + 0x40))(),
       cVar2 != '\0')) && (*(longlong *)(param_1 + 0x430) != 0)) &&
     (cVar2 = FUN_142dd3d20(), cVar2 != '\0')) {
    uVar3 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (&local_18,*(undefined8 *)(param_1 + 0xdb0));
    FUN_142ed36d0(param_1,uVar3,0);
    return;
  }
  plVar4 = *(longlong **)(param_1 + 0xa00);
  plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
  if (plVar4 == plVar5) {
    return;
  }
  while ((*plVar4 == 0 ||
         (cVar2 = (**(code **)(*(longlong *)(*plVar4 + 0x170) + 0x40))(), cVar2 == '\0'))) {
    plVar4 = plVar4 + 0x1b;
    if (plVar4 == plVar5) {
      return;
    }
  }
  lVar1 = *plVar4;
  local_18 = lVar1;
  if (lVar1 == 0) {
    local_10 = 0;
  }
  else {
    uVar3 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
  }
  FUN_142ed36d0(param_1,&local_18,0);
  return;
}



// FUNCTION 140f4c750 FUN_140f4c750 body=543 status=ok
// SIG undefined FUN_140f4c750(void)

void FUN_140f4c750(longlong param_1,char param_2)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_38;
  ulonglong local_30;
  
  if (param_2 != *(char *)(param_1 + 0x250)) {
    pwVar2 = L"empty";
    switch(param_2) {
    default:
      pwVar4 = L"default";
      break;
    case '\x01':
    case '\x02':
      pwVar4 = L"highlight";
      break;
    case '\x03':
      pwVar4 = L"low";
      break;
    case '\x04':
      pwVar4 = L"empty";
      break;
    case '\x05':
      pwVar4 = L"full";
    }
    lVar3 = 0;
    local_38 = 0;
    local_30 = 0;
    lVar5 = -1;
    lVar7 = lVar5;
    lVar8 = lVar3;
    if (*pwVar4 != L'\0') {
      do {
        lVar7 = lVar7 + 1;
      } while (pwVar4[lVar7] != L'\0');
      uVar6 = (int)lVar7 + 1;
      local_30 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      lVar8 = local_38;
      FGenericPlatformString::Memcpy(local_38,pwVar4,(longlong)(int)uVar6 * 2);
    }
    plVar1 = (longlong *)(param_1 + 0x210);
    if (&local_38 != plVar1) {
      if ((*(char *)(param_1 + 0x220) != '\0') &&
         (*(undefined1 *)(param_1 + 0x220) = 0, *plVar1 != 0)) {
        FMemory::Free();
      }
      FString::FString(plVar1,&local_38);
      *(undefined1 *)(param_1 + 0x220) = 1;
      lVar8 = local_38;
    }
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
    switch(param_2) {
    default:
      pwVar2 = L"up";
      break;
    case '\x01':
      pwVar2 = L"focusedUp";
      break;
    case '\x02':
      pwVar2 = L"focusedEmpty";
      break;
    case '\x04':
      break;
    }
    local_38 = 0;
    local_30 = 0;
    if (*pwVar2 != L'\0') {
      do {
        lVar5 = lVar5 + 1;
      } while (pwVar2[lVar5] != L'\0');
      uVar6 = (int)lVar5 + 1;
      local_30 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      lVar3 = local_38;
      FGenericPlatformString::Memcpy(local_38,pwVar2,(longlong)(int)uVar6 * 2);
    }
    plVar1 = (longlong *)(param_1 + 0x238);
    if (&local_38 != plVar1) {
      if ((*(char *)(param_1 + 0x248) != '\0') &&
         (*(undefined1 *)(param_1 + 0x248) = 0, *plVar1 != 0)) {
        FMemory::Free();
      }
      FString::FString(plVar1,&local_38);
      *(undefined1 *)(param_1 + 0x248) = 1;
      lVar3 = local_38;
    }
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
    *(char *)(param_1 + 0x250) = param_2;
  }
  return;
}



// FUNCTION 140f4c9a0 FUN_140f4c9a0 body=22 status=ok
// SIG undefined FUN_140f4c9a0(void)

void FUN_140f4c9a0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x6b1) != param_2) {
    *(char *)(param_1 + 0x6b1) = param_2;
    FUN_142ecf920(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140f4c9c0 FUN_140f4c9c0 body=809 status=ok
// SIG undefined FUN_140f4c9c0(void)

void FUN_140f4c9c0(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  undefined1 uVar6;
  BOOL BVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong local_58 [6];
  
  if (*(char *)(param_1 + 0xe31) == param_2) {
    return;
  }
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
  }
  lVar13 = 0xc18;
  lVar11 = 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar11 = 0xa80;
  }
  cVar5 = FUN_140eec880(lVar11 + param_1);
  uVar4 = 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    uVar4 = 0xa80;
  }
  uVar6 = FUN_140eec840((ulonglong)uVar4 + param_1);
  lVar11 = 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar11 = 0xa80;
  }
  uVar8 = FUN_140ee6b70(lVar11 + param_1);
  plVar9 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x9c4);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x338))(plVar9,0,0);
  }
  *(char *)(param_1 + 0xe31) = param_2;
  if (cVar5 != '\0') {
    local_58[4] = 0;
    local_58[5] = 0;
    FUN_142ed36d0(param_1,local_58 + 4,0);
  }
  FUN_140f0b090(param_1 + 0xc18,0xffffffff,0);
  FUN_140f08820(param_1 + 0xc18,0);
  FUN_140f0b090(param_1 + 0xa80,0xffffffff,0);
  FUN_140f08820(param_1 + 0xa80,0);
  if (*(longlong *)(param_1 + 0xdb8) != 0) {
    if (*(char *)(param_1 + 0xe31) == '\0') {
      local_58[2] = 0;
      local_58[3] = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 2,0);
      FGenericPlatformString::Memcpy(local_58[2],L"backpackLarge",0x1c);
      FUN_142088910(*(undefined8 *)(param_1 + 0xdb8),local_58 + 2);
      if (local_58[2] != 0) {
        FMemory::Free();
      }
      uVar3 = *(undefined4 *)(param_1 + 0xd80);
      lVar11 = param_1 + 0xd78;
      lVar10 = param_1 + 0xa80;
    }
    else {
      if (*(char *)(param_1 + 0xe31) != '\x01') goto LAB_140f4cbfd;
      local_58[0] = 0;
      local_58[1] = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
      FGenericPlatformString::Memcpy(local_58[0],L"backpackSmall",0x1c);
      FUN_142088910(*(undefined8 *)(param_1 + 0xdb8),local_58);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      uVar3 = *(undefined4 *)(param_1 + 0xbe8);
      lVar11 = param_1 + 0xbe0;
      lVar10 = param_1 + 0xc18;
    }
    FUN_140f04ef0(lVar10,lVar11,0,uVar3,0xffffffff);
  }
LAB_140f4cbfd:
  lVar11 = 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar11 = 0xa80;
  }
  FUN_140f08820(lVar11 + param_1,uVar6);
  if (cVar5 == '\0') goto LAB_140f4cc6e;
  LOCK();
  iVar1 = *(int *)(param_1 + 0xf98);
  *(int *)(param_1 + 0xf98) = 0;
  UNLOCK();
  LOCK();
  iVar2 = *(int *)(param_1 + 0xf9c);
  *(int *)(param_1 + 0xf9c) = 0;
  UNLOCK();
  if (iVar1 == 0) {
    if (iVar2 != 0) {
      uVar12 = 1;
      goto LAB_140f4cc50;
    }
  }
  else {
    uVar12 = 0;
LAB_140f4cc50:
    FUN_140f47890(param_1,uVar12);
  }
  lVar11 = 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar11 = 0xa80;
  }
  FUN_140f089d0(lVar11 + param_1);
LAB_140f4cc6e:
  lVar11 = 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar11 = 0xa80;
  }
  FUN_140f0b090(lVar11 + param_1,uVar8,1,0);
  LOCK();
  *(undefined4 *)(param_1 + 0xfac) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x9e8) = 1;
  UNLOCK();
  LOCK();
  uVar8 = *(undefined4 *)(param_1 + 0xfa4);
  *(undefined4 *)(param_1 + 0xfa4) = 1;
  UNLOCK();
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar13 = 0xa80;
  }
  FUN_140eecc00(param_1 + lVar13,uVar8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
  return;
}



// FUNCTION 140f4ccf0 FUN_140f4ccf0 body=314 status=ok
// SIG undefined FUN_140f4ccf0(void)

void FUN_140f4ccf0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  plVar1 = (longlong *)param_1[0xcb];
  if (((plVar1 != (longlong *)0x0) && (param_1[0xcc] != 0)) &&
     (plVar2 = (longlong *)param_1[0xce], plVar2 != (longlong *)0x0)) {
    if (param_2 == 0) {
      (**(code **)(*plVar1 + 0x278))(plVar1,1);
      (**(code **)(*(longlong *)param_1[0xcc] + 0x278))((longlong *)param_1[0xcc],0);
      (**(code **)(*(longlong *)param_1[0xce] + 0x278))((longlong *)param_1[0xce],1);
      plVar1 = (longlong *)param_1[0xcf];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,1);
      }
      FUN_140f3adb0(param_1);
      local_18 = 0;
      local_10 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872820,&local_18);
    }
    else if (param_2 - 1U < 2) {
      (**(code **)(*plVar2 + 0x278))(plVar2,0);
      (**(code **)(*(longlong *)param_1[0xcb] + 0x278))((longlong *)param_1[0xcb],0);
      (**(code **)(*(longlong *)param_1[0xcc] + 0x278))((longlong *)param_1[0xcc],1);
      local_18 = 0;
      local_10 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872818,&local_18);
      plVar1 = (longlong *)param_1[0xcf];
      if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140f4cdab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x278))(plVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140f4ce30 FUN_140f4ce30 body=124 status=ok
// SIG undefined FUN_140f4ce30(void)

void FUN_140f4ce30(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x728);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  switch(param_2) {
  case 1:
    lVar2 = 0x698;
    break;
  case 2:
    lVar2 = 0x6a8;
    break;
  case 3:
    lVar2 = 0x6b8;
    break;
  case 4:
    lVar2 = 0x6c8;
    break;
  case 5:
    lVar2 = 0x6d8;
    break;
  case 6:
    lVar2 = 0x6e8;
    break;
  case 7:
    lVar2 = 0x6f8;
    break;
  default:
    lVar2 = 0x708;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f4cea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2a8))(plVar1,lVar2 + param_1,1,0);
  return;
}



// FUNCTION 140f4ced0 FUN_140f4ced0 body=395 status=ok
// SIG undefined FUN_140f4ced0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f4ced0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_118 [220];
  undefined1 local_3c [52];
  
  if (param_2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x340))(param_2);
    FUN_140e9a4f0(local_118,uVar3);
    cVar2 = FWeakObjectPtr::IsValid(local_3c);
    if (cVar2 != '\0') {
      plVar4 = (longlong *)FWeakObjectPtr::Get(local_3c);
      uVar3 = FUN_14301f8f0();
      lVar5 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar3);
      if (lVar5 != 0) {
        puVar6 = &DAT_14686e138;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_14686e148) &&
           (_Init_thread_header(&DAT_14686e148), DAT_14686e148 == -1)) {
          _DAT_14686e140 = 7;
          DAT_14686e138 = 0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14686e138,0);
          FGenericPlatformString::Memcpy(DAT_14686e138,L"Common",0xe);
          atexit((_func_5014 *)&LAB_143e51550);
          _Init_thread_footer(&DAT_14686e148);
        }
        if (((*(longlong *)(lVar5 + 0x210) != 0) &&
            (lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x210) + 0xb8), lVar1 != 0)) &&
           (1 < *(int *)(lVar1 + 0x60))) {
          puVar6 = (undefined8 *)(lVar1 + 0x58);
        }
        FUN_142088cf0(param_1,puVar6);
        if ((*(longlong *)(param_1 + 0x170) != 0) && (*(longlong *)(lVar5 + 0x208) != 0)) {
          FUN_14203e230(*(longlong *)(param_1 + 0x170),*(longlong *)(lVar5 + 0x208) + 0xe0);
        }
      }
    }
    FUN_140e9c360(local_118);
  }
  return;
}



// FUNCTION 140f4d060 FUN_140f4d060 body=132 status=ok
// SIG undefined FUN_140f4d060(void)

void FUN_140f4d060(longlong param_1,byte param_2)

{
  byte bVar1;
  undefined *puVar2;
  
  if (*(int *)(param_1 + 0x5f4) == 2) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x5f4) == 1 ^ param_2;
  }
  if (bVar1 != 0) {
    if (*(longlong *)(param_1 + 0x500) == 0) {
      if (*(longlong *)(param_1 + 0x510) != 0) {
        FUN_142056670(*(longlong *)(param_1 + 0x510),param_2);
      }
    }
    else {
      puVar2 = &DAT_144612570;
      if (param_2 != 0) {
        puVar2 = &DAT_144612564;
      }
      FUN_14203e4e0(*(longlong *)(param_1 + 0x500),puVar2);
    }
    *(uint *)(param_1 + 0x5f4) = (uint)param_2;
  }
  return;
}



// FUNCTION 140f4d0f0 FUN_140f4d0f0 body=86 status=ok
// SIG undefined FUN_140f4d0f0(void)

void FUN_140f4d0f0(longlong param_1,undefined8 param_2,char param_3)

{
  *(char *)(param_1 + 0x659) = (char)param_2;
  FUN_142ed2820(param_1,param_2,0);
  FUN_142ecf920(param_1,0);
  if ((*(char *)(param_1 + 0x659) == '\0') || (param_3 != '\0')) {
    (**(code **)(*(longlong *)(param_1 + 0x170) + 0x38))
              ((longlong *)(param_1 + 0x170),*(char *)(param_1 + 0x659) == '\0');
  }
  return;
}



// FUNCTION 140f4d150 FUN_140f4d150 body=124 status=ok
// SIG undefined FUN_140f4d150(void)

void FUN_140f4d150(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (lVar3 = *(longlong *)(param_1 + 0x10), lVar3 != 0)) {
    LOCK();
    iVar5 = *(int *)(lVar3 + 8);
    if (iVar5 == 0) {
      *(int *)(lVar3 + 8) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity
                (param_1,param_2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1),0);
    }
  }
  plVar4 = *(longlong **)(param_2 + 8);
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



// FUNCTION 140f4d1d0 FUN_140f4d1d0 body=163 status=ok
// SIG undefined FUN_140f4d1d0(void)

void FUN_140f4d1d0(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_38 = 0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b7a0;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined1 *)(puVar1 + 3) = param_2;
    *(undefined1 *)((longlong)puVar1 + 0x19) = param_3;
  }
  local_68[0] = &LAB_140f269d0;
  FUN_14208c4f0(param_1,local_68);
  return;
}



// FUNCTION 140f4d280 FUN_140f4d280 body=438 status=ok
// SIG undefined FUN_140f4d280(void)

void FUN_140f4d280(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined8 *)(param_2 + 2);
  uVar6 = *(undefined8 *)(param_2 + 4);
  local_28 = 0;
  local_18 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x28,local_48);
  local_78 = (undefined4)param_1;
  uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143ff7760;
    *(undefined4 *)(puVar5 + 1) = local_78;
    *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_74;
    *(undefined4 *)(puVar5 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
    puVar5[3] = uVar3;
    puVar5[4] = uVar6;
  }
  local_58[0] = &LAB_140f27050;
  FUN_14204c280(local_58);
  cVar4 = FUN_142d52a00(param_1 + 0x640);
  if (cVar4 != '\0') {
    local_28 = 0;
    local_18 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_58[0] = &LAB_140f26a70;
    FUN_14204c280(local_58);
    uVar6 = FUN_142d52a20(param_1 + 0x640);
    uVar6 = FArchive::operator<<(uVar6);
    fVar7 = (float)FUN_142d5fed0(uVar6);
    FUN_140f53780(param_1);
    cVar4 = FUN_142d529c0(param_1 + 0x640,param_1 + 0x640);
    if (cVar4 != '\0') {
      FUN_140f538a0(param_1,param_1 + 0x640);
      if (*(longlong *)(param_1 + 0x768) != 0) {
        FUN_142088910(*(longlong *)(param_1 + 0x768),param_1 + 0x6e8);
      }
    }
    uStack_70 = CONCAT31((int3)((uint)uVar1 >> 8),0 < (int)fVar7);
    local_28 = 0;
    local_18 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar5 + 1) = local_78;
      *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_74;
      *(undefined4 *)(puVar5 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
    }
    local_58[0] = &LAB_140f26c80;
    FUN_14208c4f0(param_1,local_58);
  }
  return;
}



// FUNCTION 140f4d440 FUN_140f4d440 body=258 status=ok
// SIG undefined FUN_140f4d440(void)

void FUN_140f4d440(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  undefined *puVar8;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  FUN_140f2b890(param_1,&local_28);
  if (local_28 == 0) goto LAB_140f4d4f8;
  FUN_1420392d0(local_28,&local_18,L"disabledByPlayerIcon");
  if (local_18 != 0) {
    if (param_2 == '\0') {
LAB_140f4d4a0:
      bVar5 = false;
    }
    else {
      cVar7 = AGameSession::RequiresPushToTalk(param_1);
      if (cVar7 == '\x01') goto LAB_140f4d4a0;
      bVar5 = true;
    }
    puVar8 = &DAT_1446124f8;
    if (bVar5) {
      puVar8 = &DAT_1446124ec;
    }
    FUN_14203e4e0(local_18,puVar8);
  }
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
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
LAB_140f4d4f8:
  plVar1 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 140f4d550 FUN_140f4d550 body=74 status=ok
// SIG undefined FUN_140f4d550(void)

void FUN_140f4d550(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x1e8);
  if (param_2 != plVar1) {
    if (*(char *)(param_1 + 0x1f8) != '\0') {
      *(undefined1 *)(param_1 + 0x1f8) = 0;
      if (*plVar1 != 0) {
        FMemory::Free();
      }
    }
    FString::FString(plVar1,param_2);
    *(undefined1 *)(param_1 + 0x1f8) = 1;
  }
  return;
}



// FUNCTION 140f4d5a0 FUN_140f4d5a0 body=583 status=ok
// SIG undefined FUN_140f4d5a0(void)

void FUN_140f4d5a0(longlong param_1,int param_2,longlong param_3,char param_4)

{
  bool bVar1;
  void *_Src;
  char cVar2;
  longlong *plVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48 [2];
  void *local_38;
  ulonglong local_30;
  
  iVar5 = param_2 + 1;
  if (param_2 == -1) {
    iVar5 = 0;
  }
  if ((*(longlong *)(param_1 + 0x38) != 0) && (param_2 != -1)) {
    FString::PrintfImpl(&local_38,L"ExtTexTrinketRender_%02d_nopack",param_2);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2a0))
              (*(longlong **)(param_1 + 0x38),&local_38,param_3);
    _Src = local_38;
    local_58 = (void *)0x0;
    iVar6 = (int)local_30;
    local_50 = iVar6;
    if (iVar6 == 0) {
      local_4c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_30 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_58,_Src,(longlong)iVar6 * 2);
    }
    local_48[0] = 0;
    local_48[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_48[0],8,"_nopack",8,0x3f);
    cVar2 = FString::RemoveFromEnd(&local_58,local_48,1);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (cVar2 != '\0') {
      plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x240);
      (**(code **)(*plVar3 + 0x2a0))(plVar3,&local_58,param_3);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
  }
  cVar2 = FUN_14208d2d0(param_1,param_1 + 0x2e8,L"trinketRenderWrapper.trinketRender");
  if (cVar2 != '\0') {
    FUN_142056670(*(undefined8 *)(param_1 + 0x2e8),param_3 != 0);
    if (param_2 != -1) {
      FUN_14203e3e0(*(undefined8 *)(param_1 + 0x2e8),iVar5);
    }
  }
  cVar2 = FUN_14208d2d0(param_1,param_1 + 0x2f8,L"trinketRenderShadow.trinketRender");
  if (cVar2 != '\0') {
    FUN_142056670(*(undefined8 *)(param_1 + 0x2f8),param_3 != 0);
    if (param_2 != -1) {
      FUN_14203e3e0(*(undefined8 *)(param_1 + 0x2f8),iVar5);
    }
  }
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    if ((param_3 == 0) && (param_4 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    puVar4 = &DAT_144613828;
    if (bVar1) {
      puVar4 = &DAT_1446130e4;
    }
    FUN_14203e030(*(longlong *)(param_1 + 0x2c8),puVar4);
  }
  return;
}



// FUNCTION 140f4d7f0 FUN_140f4d7f0 body=707 status=ok
// SIG undefined FUN_140f4d7f0(void)

void FUN_140f4d7f0(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  if ((*(int *)(param_1 + 0x1ec) != param_2) || (param_3 != '\0')) {
    *(int *)(param_1 + 0x1ec) = param_2;
    plVar3 = *(longlong **)(param_1 + 0x198);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (!bVar6) {
        LOCK();
        bVar6 = iVar5 == (int)plVar3[1];
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar6) {
          if (plVar3 != (longlong *)0x0) {
            if (*(longlong *)(param_1 + 400) != 0) {
              FUN_142056670(*(longlong *)(param_1 + 400),*(int *)(param_1 + 0x1ec) == 2);
            }
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
          break;
        }
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar6 = iVar5 == 0;
        if (bVar6) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x1a8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (!bVar6) {
        LOCK();
        bVar6 = iVar5 == (int)plVar3[1];
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar6) {
          if (plVar3 != (longlong *)0x0) {
            if (*(longlong *)(param_1 + 0x1a0) != 0) {
              FUN_142056670(*(longlong *)(param_1 + 0x1a0),*(int *)(param_1 + 0x1ec) == 2);
            }
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
          break;
        }
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar6 = iVar5 == 0;
        if (bVar6) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x1b8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (!bVar6) {
        LOCK();
        bVar6 = iVar5 == (int)plVar3[1];
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar6) {
          if (plVar3 != (longlong *)0x0) {
            if (*(longlong *)(param_1 + 0x1b0) != 0) {
              FUN_142056670(*(longlong *)(param_1 + 0x1b0),*(int *)(param_1 + 0x1ec) == 2);
            }
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
          break;
        }
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar6 = iVar5 == 0;
        if (bVar6) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x1c8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (!bVar6) {
        LOCK();
        bVar6 = iVar5 == (int)plVar3[1];
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar6) {
          if (plVar3 != (longlong *)0x0) {
            if (*(longlong *)(param_1 + 0x1c0) != 0) {
              FUN_142056670(*(longlong *)(param_1 + 0x1c0),*(int *)(param_1 + 0x1ec) == 1);
            }
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
          break;
        }
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar6 = iVar5 == 0;
        if (bVar6) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x1d8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (!bVar6) {
        LOCK();
        bVar6 = iVar5 == (int)plVar3[1];
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar6) {
          if (plVar3 == (longlong *)0x0) {
            return;
          }
          if (*(longlong *)(param_1 + 0x1d0) != 0) {
            FUN_142056670(*(longlong *)(param_1 + 0x1d0),*(int *)(param_1 + 0x1ec) == 1);
          }
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 != 1) {
            return;
          }
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 != 1) {
            return;
          }
          (**(code **)(*plVar3 + 8))(plVar3,1);
          return;
        }
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar6 = iVar5 == 0;
        if (bVar6) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 140f4dac0 FUN_140f4dac0 body=139 status=ok
// SIG undefined FUN_140f4dac0(void)

void FUN_140f4dac0(longlong param_1)

{
  longlong lVar1;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  lVar1 = FUN_1410833d0();
  if (lVar1 != 0) {
    local_10 = 0x1000000;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_58[0] = 1;
    local_c = 1;
    FUN_1411f9940(lVar1 + 0x6e0,local_58,*(char *)(param_1 + 0xe32) == '\0');
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  }
  return;
}



// FUNCTION 140f4db50 FUN_140f4db50 body=210 status=ok
// SIG undefined FUN_140f4db50(void)

void FUN_140f4db50(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FText::FText(local_70);
  local_28 = 0;
  local_18 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x28,local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_144605c20;
    puVar5[1] = param_1;
    FText::FText(puVar5 + 2,local_70);
  }
  local_58[0] = &LAB_140f26f20;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  FUN_14208c5d0(param_1,local_58);
  return;
}



// FUNCTION 140f4dc30 FUN_140f4dc30 body=68 status=ok
// SIG undefined FUN_140f4dc30(void)

void FUN_140f4dc30(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x658) != param_2) {
    *(char *)(param_1 + 0x658) = param_2;
    (**(code **)(*(longlong *)(param_1 + 0x170) + 0x38))
              ((longlong *)(param_1 + 0x170),param_2 == '\0');
    FUN_140f49a60(param_1);
    FUN_140f49b50(param_1);
    return;
  }
  return;
}



// FUNCTION 140f4dc80 FUN_140f4dc80 body=49 status=ok
// SIG undefined FUN_140f4dc80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f4dc80(float param_1)

{
  if (DAT_146b17150 != 0) {
    *(float *)(DAT_146b17150 + 0x8fc) = (DAT_14629dc3c - _DAT_14629dc38) * param_1 + _DAT_14629dc38;
  }
  return;
}



// FUNCTION 140f4dcc0 FUN_140f4dcc0 body=64 status=ok
// SIG undefined FUN_140f4dcc0(void)

void FUN_140f4dcc0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x540);
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x418) != '\0') {
    puVar2 = &DAT_144611b78;
    if (param_2 != '\0') {
      puVar2 = &DAT_144611b6c;
    }
    FUN_14203e030(lVar1,puVar2);
    return;
  }
  FUN_142056670(lVar1,param_2);
  return;
}



// FUNCTION 140f4dd00 FUN_140f4dd00 body=995 status=ok
// SIG undefined FUN_140f4dd00(void)

void FUN_140f4dd00(longlong param_1,char *param_2,char *param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  longlong *plVar7;
  char *pcVar8;
  int iVar9;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  pcVar6 = *(char **)(param_1 + 0x5a0);
  pcVar8 = pcVar6 + (longlong)*(int *)(param_1 + 0x5a8) * 0x60;
  if (pcVar6 != pcVar8) {
    while (*pcVar6 != *param_2) {
      pcVar6 = pcVar6 + 0x60;
      if (pcVar6 == pcVar8) {
        return;
      }
    }
    FUN_140ad4c90(param_1,&local_98);
    if ((local_98 == 0) || (cVar4 = FUN_142045c80(), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
      local_e8 = (longlong *)0x0;
      local_e0 = 0;
      local_68 = 0;
      lVar5 = FUN_140e96f30(param_1,param_1 + 0x5b0,0,6,&local_e8);
      plVar7 = local_e8;
      for (iVar9 = (int)local_e0; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free(local_e8);
      }
      if (lVar5 != 0) {
        FUN_142088910(lVar5,pcVar6 + 8);
      }
      local_d8 = (longlong *)0x0;
      local_d0 = 0;
      local_60 = 0;
      lVar5 = FUN_140e96f30(param_1,pcVar6 + 0x18,0,6,&local_d8);
      local_88 = lVar5;
      plVar7 = local_d8;
      for (iVar9 = (int)local_d0; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_d8 != (longlong *)0x0) {
        FMemory::Free(local_d8);
      }
      if (lVar5 != 0) {
        cVar4 = FText::IsEmpty(pcVar6 + 0x48);
        pcVar8 = pcVar6 + 0x48;
        if (cVar4 != '\0') {
          pcVar8 = param_3;
        }
        FText::FText(local_80,pcVar8);
        local_c8 = (longlong *)0x0;
        local_c0 = 0;
        local_58 = 0;
        lVar5 = FUN_140ac4770(param_1,pcVar6 + 0x28,0,6,&local_c8);
        *(longlong *)(param_1 + 0x5c0) = lVar5;
        plVar7 = local_c8;
        for (iVar9 = (int)local_c0; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 2;
        }
        if (local_c8 != (longlong *)0x0) {
          FMemory::Free(local_c8);
        }
        if (lVar5 != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x5c0) + 0x2b0))
                    (*(longlong **)(param_1 + 0x5c0),local_80,1,0);
        }
        local_b8 = (longlong *)0x0;
        local_b0 = 0;
        local_50 = 0;
        lVar5 = FUN_140ac4770(param_1,pcVar6 + 0x38,0,6,&local_b8);
        *(longlong *)(param_1 + 0x5c8) = lVar5;
        plVar7 = local_b8;
        for (iVar9 = (int)local_b0; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 2;
        }
        if (local_b8 != (longlong *)0x0) {
          FMemory::Free(local_b8);
        }
        if (lVar5 != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x5c8) + 0x2b0))
                    (*(longlong **)(param_1 + 0x5c8),local_80,1,0);
        }
        local_a8 = 0;
        local_a0 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        FGenericPlatformString::Memcpy(local_a8,L"play",10);
        FUN_142088910(local_88,&local_a8);
        if (local_a8 != 0) {
          FMemory::Free();
        }
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_78 + 1;
          lVar5 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar1 = (int *)((longlong)local_78 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_78 + 8))(local_78,1);
            }
          }
        }
      }
    }
    FText::operator=(param_1 + 0x538,param_3);
    plVar7 = local_90;
    if (bVar3) {
      cVar4 = '\0';
    }
    else {
      cVar4 = *param_2;
    }
    *(char *)(param_1 + 0x5d0) = cVar4;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_90 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f4e0f0 FUN_140f4e0f0 body=350 status=ok
// SIG undefined FUN_140f4e0f0(void)

void FUN_140f4e0f0(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(longlong *)(param_1 + 0xdb0) != 0) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0xdb0) + 0x170);
    (**(code **)(*plVar5 + 0x38))(plVar5,param_2 ^ 1);
  }
  uVar3 = FUN_140f2b5e0(param_1);
  lVar4 = FUN_140f2b510(param_1 + 0x9c0,uVar3);
  plVar5 = *(longlong **)(param_1 + 0xa00);
  plVar8 = plVar5 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
  do {
    if (plVar5 == plVar8) {
      return;
    }
    if ((longlong *)*plVar5 == (longlong *)0x0) {
LAB_140f4e1bd:
      if (plVar5[1] != 0) {
        plVar7 = (longlong *)(plVar5[1] + 0x170);
        (**(code **)(*plVar7 + 0x38))(plVar7,(byte)param_2 ^ 1);
        puVar1 = (undefined8 *)(plVar5[1] + 0x2d8);
        cVar2 = FUN_14208d2d0(plVar5[1],puVar1,L"invalidSlot");
        if (cVar2 != '\0') {
          FUN_14203e4e0(*puVar1);
        }
      }
    }
    else {
      cVar2 = (**(code **)(*(longlong *)*plVar5 + 0x388))();
      if (cVar2 != '\x01') {
        if ((byte)param_2 == 0) {
LAB_140f4e1af:
          uVar3 = 0;
        }
        else {
          if (plVar5[0xb] == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *(longlong *)(plVar5[0xb] + 0x70);
          }
          if ((lVar4 != 0) && (lVar4 == lVar6)) goto LAB_140f4e1af;
          uVar3 = 3;
        }
        (**(code **)(*(longlong *)*plVar5 + 0x360))((longlong *)*plVar5,uVar3);
        goto LAB_140f4e1bd;
      }
    }
    plVar5 = plVar5 + 0x1b;
  } while( true );
}



// FUNCTION 140f4e250 FUN_140f4e250 body=444 status=ok
// SIG undefined FUN_140f4e250(void)

void FUN_140f4e250(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  char cVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined4 *)(param_1 + 0x348) = *param_2;
  *(undefined4 *)(param_1 + 0x34c) = uVar5;
  *(undefined4 *)(param_1 + 0x350) = uVar6;
  *(undefined4 *)(param_1 + 0x354) = uVar7;
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_2 + 4);
  FString::operator=(param_1 + 0x360,param_3);
  FUN_142ed3c20(param_1,*(char *)(param_1 + 0x358) == '\0',1);
  FUN_140f2ba00(param_1,&local_38);
  puVar11 = &DAT_143f3eda8;
  if (local_38 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x348);
    if (lVar4 == 0) {
      pwVar10 = L"placeholder1";
    }
    else if (*(int *)(lVar4 + 0x70) == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = *(wchar_t **)(lVar4 + 0x68);
    }
    FUN_14203e4e0(local_38,pwVar10);
  }
  plVar8 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  FUN_140f2ade0(param_1,&local_28);
  if (local_28 != 0) {
    if (*(int *)(param_1 + 0x368) != 0) {
      puVar11 = *(undefined2 **)(param_1 + 0x360);
    }
    FUN_14203e4e0(local_28,puVar11);
  }
  plVar8 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  FUN_140f53570(param_1,2);
  cVar9 = FUN_140e53ce0(param_4,*(undefined8 *)(param_1 + 0x348));
  FUN_140f4d440(param_1,cVar9 == '\0');
  if (*param_3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140f4e410 FUN_140f4e410 body=60 status=ok
// SIG undefined FUN_140f4e410(void)

void FUN_140f4e410(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x630) != 0) {
    uVar1 = FUN_140ad4b30();
    *(undefined4 *)(param_1 + 0x688) = uVar1;
    uVar1 = FUN_140ad61c0(*(undefined8 *)(param_1 + 0x630));
    *(undefined4 *)(param_1 + 0x68c) = uVar1;
  }
  return;
}



// FUNCTION 140f4e450 FUN_140f4e450 body=262 status=ok
// SIG undefined FUN_140f4e450(void)

void FUN_140f4e450(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  if ((*(longlong *)(param_1 + 0x310) != 0) && (*(longlong *)(param_1 + 0x318) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x318) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x308,param_3,1,0);
    }
  }
  if (((param_2 != 0) &&
      (*(longlong *)(param_1 + 0x338) = param_2, *(longlong *)(param_1 + 0x328) != 0)) &&
     (*(longlong *)(param_1 + 0x330) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x330) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 800,param_2 + 0x48,1,0);
      FUN_142f0bf30(param_1 + 800,param_4,1);
    }
  }
  plVar3 = *(longlong **)(param_3 + 8);
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
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 140f4e560 FUN_140f4e560 body=480 status=ok
// SIG undefined FUN_140f4e560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f4e560(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40 [4];
  undefined8 local_20;
  longlong local_18 [2];
  
  if (param_2 != 0) {
    local_18[1] = DAT_1468387a8 ^ (ulonglong)auStack_68;
    local_40[0] = *(longlong *)(param_1 + 0xb40);
    local_40[1] = *(longlong *)(param_1 + 0xb48);
    if (local_40[1] != 0) {
      LOCK();
      *(int *)(local_40[1] + 0xc) = *(int *)(local_40[1] + 0xc) + 1;
      UNLOCK();
    }
    local_40[2] = *(undefined8 *)(param_1 + 0xb50);
    local_40[3] = *(longlong *)(param_1 + 0xb58);
    if (local_40[3] != 0) {
      LOCK();
      *(int *)(local_40[3] + 0xc) = *(int *)(local_40[3] + 0xc) + 1;
      UNLOCK();
    }
    local_20 = *(undefined8 *)(param_1 + 0xb60);
    local_18[0] = *(longlong *)(param_1 + 0xb68);
    if (local_18[0] != 0) {
      LOCK();
      *(int *)(local_18[0] + 0xc) = *(int *)(local_18[0] + 0xc) + 1;
      UNLOCK();
    }
    plVar2 = *(longlong **)(param_1 + 0xdb8);
    for (plVar5 = plVar2; plVar5 != plVar2 + *(int *)(param_1 + 0xdc0); plVar5 = plVar5 + 1) {
      if (*plVar5 == param_2) {
        uVar4 = (uint)((longlong)plVar5 - (longlong)plVar2 >> 3);
        goto LAB_140f4e623;
      }
    }
    uVar4 = 0xffffffff;
LAB_140f4e623:
    if ((uVar4 != 0xffffffff) && (uVar4 < 3)) {
      plVar2 = (longlong *)local_40[(longlong)(int)uVar4 * 2 + 1];
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar3 = (int)plVar2[1];
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(plVar2 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (!bVar8) {
          LOCK();
          bVar8 = iVar3 == (int)plVar2[1];
          if (bVar8) {
            *(int *)(plVar2 + 1) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar8) {
            if (plVar2 != (longlong *)0x0) {
              lVar6 = local_40[(longlong)(int)uVar4 * 2];
              if (lVar6 != 0) {
                if (param_3 == '\0') {
                  FUN_14203e4e0(lVar6,&DAT_144612030);
                }
                else {
                  FUN_14203e030(lVar6,&DAT_144612024);
                }
              }
              LOCK();
              plVar5 = plVar2 + 1;
              lVar6 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
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
            break;
          }
          LOCK();
          iVar3 = (int)plVar2[1];
          bVar8 = iVar3 == 0;
          if (bVar8) {
            *(int *)(plVar2 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
      }
    }
    lVar6 = 3;
    puVar7 = &stack0xfffffffffffffff8;
    do {
      plVar2 = *(longlong **)(puVar7 + -0x10);
      puVar7 = puVar7 + -0x10;
      lVar6 = lVar6 + -1;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 140f4e740 FUN_140f4e740 body=65 status=ok
// SIG undefined FUN_140f4e740(void)

void FUN_140f4e740(longlong *param_1,char param_2)

{
  char cVar1;
  
  FUN_142ed5b90();
  cVar1 = FUN_142088620(param_1);
  if ((param_2 != '\0') && (param_2 == cVar1)) {
    (**(code **)(*param_1 + 0x348))(param_1);
  }
  return;
}



// FUNCTION 140f4e790 FUN_140f4e790 body=4616 status=ok
// SIG undefined FUN_140f4e790(void)

void FUN_140f4e790(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong local_res18;
  undefined8 in_stack_fffffffffffffca8;
  longlong *plVar12;
  undefined4 uVar13;
  longlong local_338;
  undefined8 local_330;
  longlong local_328;
  undefined8 local_320;
  longlong local_318;
  undefined8 local_310;
  longlong *local_308;
  int local_300;
  longlong *local_2f8;
  int local_2f0;
  longlong *local_2e8;
  int local_2e0;
  longlong local_2d8 [18];
  undefined1 local_248 [8];
  undefined8 local_240;
  longlong local_238;
  int local_230;
  undefined4 local_22c;
  undefined1 local_228 [8];
  undefined8 local_220;
  undefined1 local_218 [8];
  undefined8 local_210;
  undefined1 local_208 [8];
  undefined8 local_200;
  longlong local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  longlong local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
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
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [16];
  
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffca8 >> 0x20);
  *(char *)(param_1 + 0x868) = param_2;
  *(undefined8 *)(param_1 + 0x848) = param_3;
  local_res18 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (local_res18 == 0) {
LAB_140f4e80f:
    local_res18 = 0;
  }
  else {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(local_res18 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res18 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140f4e80f;
  }
  if (*(longlong *)(param_1 + 0x848) != 0) {
    FUN_141132350(*(longlong *)(param_1 + 0x848),0);
  }
  if ((((local_res18 == 0) || (*(longlong *)(param_1 + 0x2b8) == 0)) ||
      (*(longlong *)(param_1 + 0x838) == 0)) ||
     ((*(longlong *)(param_1 + 0x828) == 0 || (*(longlong *)(param_1 + 0x830) == 0)))) {
    *(undefined1 *)(param_1 + 0x867) = 1;
    return;
  }
  FUN_142ecffe0();
  FUN_140f25440(param_1,param_4);
  if (DAT_146b17150 == 0) {
    plVar6 = (longlong *)0x0;
LAB_140f4eedc:
    FUN_140d122c0(local_res18,2);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar6 + 0x2f8))(plVar6), cVar4 == '\0')) {
      (**(code **)(**(longlong **)(param_1 + 0x828) + 0x2b0))
                (*(longlong **)(param_1 + 0x828),param_1 + 0x728,1,0);
      lVar5 = param_1 + 0x740;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x828) + 0x2b0))
                (*(longlong **)(param_1 + 0x828),param_1 + 0x688,1,0);
      lVar5 = param_1 + 0x6a0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2b0))
              (*(longlong **)(param_1 + 0x830),lVar5,1,0);
    local_2d8[10] = 0;
    local_2d8[0xb] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2d8 + 10,0);
    FGenericPlatformString::Memcpy(local_2d8[10],L"NumberListItem",0x1e);
    lVar5 = FUN_140f143b0(*(undefined8 *)(param_1 + 0x838),local_2d8 + 10,0);
    if (local_2d8[10] != 0) {
      FMemory::Free();
    }
    if (lVar5 != 0) {
      FWeakObjectPtr::operator=(local_218,0);
      local_210 = 0;
      puVar8 = (undefined8 *)FName::FName(local_168,L"OnBrightnessChanged",1);
      FWeakObjectPtr::operator=(local_218,param_1);
      local_210 = *puVar8;
      puVar8 = (undefined8 *)FName::FName(local_178,L"OnBrightnessFocused",1);
      FWeakObjectPtr::operator=(lVar5 + 0x1d0,param_1);
      *(undefined8 *)(lVar5 + 0x1d8) = *puVar8;
      uVar7 = CONCAT44(uVar13,*(undefined4 *)(local_res18 + 0x1238));
      FUN_142ebca00(lVar5,param_1 + 0x728,*(undefined4 *)(param_1 + 0x85c),
                    *(undefined4 *)(local_res18 + 0x1234),uVar7,*(undefined4 *)(param_1 + 0x758),0,
                    local_218);
      uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FName::FName(&local_1d0,L"Numeric_Slider",1);
      *(undefined8 *)(lVar5 + 0x338) = local_1d0;
      FName::FName(&local_1a8,L"Navigate",1);
      *(undefined8 *)(lVar5 + 0x1a0) = local_1a8;
      *(undefined1 *)(lVar5 + 0x198) = 1;
    }
    local_2d8[2] = 0;
    local_2d8[3] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2d8 + 2,0);
    FGenericPlatformString::Memcpy(local_2d8[2],L"NumberListItem",0x1e);
    lVar5 = FUN_140f143b0(*(undefined8 *)(param_1 + 0x838),local_2d8 + 2,0);
    if (local_2d8[2] != 0) {
      FMemory::Free();
    }
    if (lVar5 != 0) {
      FWeakObjectPtr::operator=(local_208,0);
      local_200 = 0;
      puVar8 = (undefined8 *)FName::FName(local_110,L"OnBlackLevelChanged",1);
      FWeakObjectPtr::operator=(local_208,param_1);
      local_200 = *puVar8;
      puVar8 = (undefined8 *)FName::FName(local_170,L"OnBlackLevelFocused",1);
      FWeakObjectPtr::operator=(lVar5 + 0x1d0,param_1);
      *(undefined8 *)(lVar5 + 0x1d8) = *puVar8;
      FUN_142ebca00(lVar5,param_1 + 0x760,*(undefined4 *)(param_1 + 0x860),
                    *(undefined4 *)(local_res18 + 0x123c),
                    CONCAT44(uVar13,*(undefined4 *)(local_res18 + 0x1240)),
                    *(undefined4 *)(param_1 + 0x790),0,local_208);
      FName::FName(&local_1c8,L"Numeric_Slider",1);
      *(undefined8 *)(lVar5 + 0x338) = local_1c8;
      FName::FName(&local_1c0,L"Navigate",1);
      local_1d8 = local_1c0;
LAB_140f4f220:
      *(undefined1 *)(lVar5 + 0x198) = 1;
      *(undefined8 *)(lVar5 + 0x1a0) = local_1d8;
    }
  }
  else {
    plVar6 = (longlong *)FUN_142874ac0();
    if ((plVar6 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar6 + 0x2f8))(plVar6), cVar4 == '\0')) goto LAB_140f4eedc;
    local_2d8[8] = 0;
    local_2d8[9] = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2d8 + 8,0);
    FGenericPlatformString::Memcpy(local_2d8[8],L"SpinnerListItem",0x20);
    lVar5 = FUN_140f14440(*(undefined8 *)(param_1 + 0x838),local_2d8 + 8,0);
    if (local_2d8[8] != 0) {
      FMemory::Free();
    }
    if (lVar5 != 0) {
      local_320 = 1;
      local_328 = 0;
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_108,&DAT_1446079d8,L"GFxHDRCalibrationMenu",L"OffText");
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_328,0);
      FText::FText(local_328,uVar7);
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_100 + 1;
        lVar9 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)local_100 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_100 + 8))(local_100,1);
          }
        }
      }
      local_1a0 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_f0,&DAT_1446070f4,L"GFxHDRCalibrationMenu",L"OnText");
      uVar3 = local_320;
      lVar9 = (longlong)(int)local_320;
      iVar11 = (int)local_320 + 1;
      local_320 = CONCAT44(local_320._4_4_,iVar11);
      if (local_320._4_4_ < iVar11) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_328,uVar3 & 0xffffffff);
        iVar11 = (int)local_320;
      }
      FText::FText(local_328 + lVar9 * 0x18,local_1a0);
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_e8 + 1;
        lVar9 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar1 = (int *)((longlong)local_e8 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
        iVar11 = (int)local_320;
      }
      local_2e8 = (longlong *)0x0;
      local_2e0 = 0;
      uVar7 = FName::FName(local_138,L"OnHDROptionChanged",1);
      FUN_140f13040(&local_2e8,param_1,uVar7);
      puVar8 = (undefined8 *)FName::FName(local_140,L"OnHDROptionButtonFocused",1);
      FWeakObjectPtr::operator=(lVar5 + 0x1d0,param_1);
      *(undefined8 *)(lVar5 + 0x1d8) = *puVar8;
      FName::FName(&local_198,L"Numeric_Slider",1);
      *(undefined8 *)(lVar5 + 0x318) = local_198;
      local_238 = 0;
      local_230 = iVar11;
      if (iVar11 == 0) {
        local_22c = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_238,iVar11,0);
        lVar9 = local_328;
        lVar10 = local_238;
        do {
          FText::FText(lVar10,lVar9);
          lVar10 = lVar10 + 0x18;
          lVar9 = lVar9 + 0x18;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      plVar12 = &local_238;
      FUN_142ebc020(lVar5,param_1 + 0x688,*(undefined1 *)(param_1 + 0x850),&local_2e8,plVar12);
      uVar13 = (undefined4)((ulonglong)plVar12 >> 0x20);
      if (local_2e0 == 0) {
LAB_140f4eb8c:
        if (local_2e8 != (longlong *)0x0) {
          FMemory::Free(local_2e8);
        }
      }
      else if (local_2e8 != (longlong *)0x0) {
        (**(code **)(*local_2e8 + 0x28))(local_2e8,0);
        if (local_2e8 != (longlong *)0x0) {
          local_2e8 = (longlong *)FMemory::Realloc(local_2e8,0,0);
        }
        local_2e0 = 0;
        goto LAB_140f4eb8c;
      }
      TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
      ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_328);
    }
    cVar4 = FUN_142486990(plVar6);
    if (cVar4 == '\0') goto LAB_140f4eedc;
    FUN_140d122c0(local_res18,1);
    (**(code **)(**(longlong **)(param_1 + 0x828) + 0x2b0))
              (*(longlong **)(param_1 + 0x828),param_1 + 0x688,1,0);
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2b0))
              (*(longlong **)(param_1 + 0x830),param_1 + 0x6a0,1,0);
    local_2d8[7] = 0xf;
    local_2d8[6] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2d8 + 6,0);
    FGenericPlatformString::Memcpy(local_2d8[6],L"NumberListItem",0x1e);
    lVar5 = FUN_140f143b0(*(undefined8 *)(param_1 + 0x838),local_2d8 + 6,0);
    if (local_2d8[6] != 0) {
      FMemory::Free();
    }
    if (lVar5 != 0) {
      FWeakObjectPtr::operator=(local_248,0);
      local_240 = 0;
      puVar8 = (undefined8 *)FName::FName(local_148,L"OnHDRBrightnessChanged",1);
      FWeakObjectPtr::operator=(local_248,param_1);
      local_240 = *puVar8;
      puVar8 = (undefined8 *)FName::FName(local_150,L"OnHDRBrightnessFocused",1);
      FWeakObjectPtr::operator=(lVar5 + 0x1d0,param_1);
      *(undefined8 *)(lVar5 + 0x1d8) = *puVar8;
      uVar7 = CONCAT44(uVar13,*(undefined4 *)(local_res18 + 0x1224));
      FUN_142ebca00(lVar5,param_1 + 0x6b8,*(undefined4 *)(param_1 + 0x854),
                    *(undefined4 *)(local_res18 + 0x1220),uVar7,*(undefined4 *)(param_1 + 0x718),0,
                    local_248);
      uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FUN_140f36fe0(param_1,lVar5);
      FName::FName(&local_190,L"Numeric_Slider",1);
      *(undefined8 *)(lVar5 + 0x338) = local_190;
      FName::FName(&local_188,L"Navigate",1);
      *(undefined8 *)(lVar5 + 0x1a0) = local_188;
      *(undefined1 *)(lVar5 + 0x198) = 1;
    }
    local_2d8[4] = 0;
    local_2d8[5] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2d8 + 4,0);
    FGenericPlatformString::Memcpy(local_2d8[4],L"NumberListItem",0x1e);
    lVar5 = FUN_140f143b0(*(undefined8 *)(param_1 + 0x838),local_2d8 + 4,0);
    if (local_2d8[4] != 0) {
      FMemory::Free();
    }
    if (lVar5 != 0) {
      FWeakObjectPtr::operator=(local_228,0);
      local_220 = 0;
      puVar8 = (undefined8 *)FName::FName(local_158,L"OnHDRMenuBrightnessChanged",1);
      FWeakObjectPtr::operator=(local_228,param_1);
      local_220 = *puVar8;
      puVar8 = (undefined8 *)FName::FName(local_160,L"OnHDRMenuBrightnessFocused",1);
      FWeakObjectPtr::operator=(lVar5 + 0x1d0,param_1);
      *(undefined8 *)(lVar5 + 0x1d8) = *puVar8;
      FUN_142ebca00(lVar5,param_1 + 0x6e8,*(undefined4 *)(param_1 + 0x858),
                    *(undefined4 *)(local_res18 + 0x1228),
                    CONCAT44(uVar13,*(undefined4 *)(local_res18 + 0x122c)),
                    *(undefined4 *)(local_res18 + 0x1230),0,local_228);
      FUN_140f37160(param_1,lVar5);
      FName::FName(&local_180,L"Numeric_Slider",1);
      *(undefined8 *)(lVar5 + 0x338) = local_180;
      FName::FName(&local_1d8,L"Navigate",1);
      goto LAB_140f4f220;
    }
  }
  if (param_2 == '\0') {
    local_2d8[0xc] = 0;
    local_2d8[0xd] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2d8 + 0xc);
    FGenericPlatformString::Memcpy(local_2d8[0xc],L"firstBoot",0x14);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x2b8),local_2d8 + 0xc);
    if (local_2d8[0xc] != 0) {
      FMemory::Free();
    }
    goto LAB_140f4f91d;
  }
  local_2d8[0] = 0;
  local_2d8[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2d8);
  FGenericPlatformString::Memcpy(local_2d8[0],L"firstBoot",0x14);
  FUN_142088cf0(*(undefined8 *)(param_1 + 0x2b8),local_2d8);
  if (local_2d8[0] != 0) {
    FMemory::Free();
  }
  local_2d8[0x10] = 0;
  local_2d8[0x11] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2d8 + 0x10,0);
  FGenericPlatformString::Memcpy(local_2d8[0x10],L"SpinnerListItem",0x20);
  lVar5 = FUN_140f14440(*(undefined8 *)(param_1 + 0x838),local_2d8 + 0x10,0);
  if (local_2d8[0x10] != 0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    local_318 = 0;
    local_310 = 1;
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d8,&DAT_1446085b8,L"GFxHDRCalibrationMenu",L"OffText");
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_318,0);
    FText::FText(local_318,uVar7);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_d0 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c0,&DAT_144607834,L"GFxHDRCalibrationMenu",L"OnText");
    uVar3 = local_310;
    lVar9 = (longlong)(int)local_310;
    iVar11 = (int)local_310 + 1;
    local_310 = CONCAT44(local_310._4_4_,iVar11);
    if (local_310._4_4_ < iVar11) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_318,uVar3 & 0xffffffff);
      iVar11 = (int)local_310;
    }
    FText::FText(local_318 + lVar9 * 0x18,uVar7);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_b8 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
      iVar11 = (int)local_310;
    }
    local_2f8 = (longlong *)0x0;
    local_2f0 = 0;
    uVar7 = FName::FName(local_118,L"OnSubtitlesSettingChanged",1);
    FUN_140f13040(&local_2f8,param_1,uVar7);
    puVar8 = (undefined8 *)FName::FName(local_120,L"OnSubtitlesSettingFocused",1);
    FWeakObjectPtr::operator=(lVar5 + 0x1d0,param_1);
    *(undefined8 *)(lVar5 + 0x1d8) = *puVar8;
    FName::FName(&local_1b8,L"Numeric_Slider",1);
    *(undefined8 *)(lVar5 + 0x318) = local_1b8;
    local_1f8 = 0;
    local_1f0 = iVar11;
    if (iVar11 == 0) {
      local_1ec = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_1f8,iVar11,0);
      lVar9 = local_318;
      lVar10 = local_1f8;
      do {
        FText::FText(lVar10,lVar9);
        lVar10 = lVar10 + 0x18;
        lVar9 = lVar9 + 0x18;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a8,L"Subtitles",L"GFxHDRCalibrationMenu",L"SubtitlesSettingText");
    FUN_142ebc020(lVar5,uVar7,*(undefined1 *)(param_1 + 0x865),&local_2f8,&local_1f8);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_a0 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    if (local_2f0 == 0) {
LAB_140f4f592:
      if (local_2f8 != (longlong *)0x0) {
        FMemory::Free(local_2f8);
      }
    }
    else if (local_2f8 != (longlong *)0x0) {
      (**(code **)(*local_2f8 + 0x28))(local_2f8,0);
      if (local_2f8 != (longlong *)0x0) {
        local_2f8 = (longlong *)FMemory::Realloc(local_2f8,0,0);
      }
      local_2f0 = 0;
      goto LAB_140f4f592;
    }
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_318);
  }
  local_2d8[0xe] = 0;
  local_2d8[0xf] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2d8 + 0xe,0);
  FGenericPlatformString::Memcpy(local_2d8[0xe],L"SpinnerListItem",0x20);
  lVar5 = FUN_140f14440(*(undefined8 *)(param_1 + 0x838),local_2d8 + 0xe,0);
  if (local_2d8[0xe] != 0) {
    FMemory::Free();
  }
  if (lVar5 == 0) goto LAB_140f4f91d;
  local_338 = 0;
  local_330 = 1;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_90,&DAT_144608970,L"GFxHDRCalibrationMenu",L"OffText");
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
            (&local_338,0);
  FText::FText(local_338,uVar7);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_88 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_78,&DAT_144608a7c,L"GFxHDRCalibrationMenu",L"OnText");
  uVar3 = local_330;
  lVar9 = (longlong)(int)local_330;
  iVar11 = (int)local_330 + 1;
  local_330 = CONCAT44(local_330._4_4_,iVar11);
  if (local_330._4_4_ < iVar11) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_338,uVar3 & 0xffffffff);
    iVar11 = (int)local_330;
  }
  FText::FText(local_338 + lVar9 * 0x18,uVar7);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_70 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
    iVar11 = (int)local_330;
  }
  local_308 = (longlong *)0x0;
  local_300 = 0;
  uVar7 = FName::FName(local_128,L"OnClosedCaptionsSettingChanged",1);
  FUN_140f13040(&local_308,param_1,uVar7);
  puVar8 = (undefined8 *)FName::FName(local_130,L"OnClosedCaptionsSettingFocused",1);
  FWeakObjectPtr::operator=(lVar5 + 0x1d0,param_1);
  *(undefined8 *)(lVar5 + 0x1d8) = *puVar8;
  FName::FName(&local_1b0,L"Numeric_Slider",1);
  *(undefined8 *)(lVar5 + 0x318) = local_1b0;
  local_1e8 = 0;
  local_1e0 = iVar11;
  if (iVar11 == 0) {
    local_1dc = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_1e8,iVar11,0);
    lVar9 = local_338;
    lVar10 = local_1e8;
    do {
      FText::FText(lVar10,lVar9);
      lVar10 = lVar10 + 0x18;
      lVar9 = lVar9 + 0x18;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_60,L"Closed Captions",L"GFxHDRCalibrationMenu",L"ClosedCaptionText");
  FUN_142ebc020(lVar5,uVar7,*(undefined1 *)(param_1 + 0x866),&local_308,&local_1e8);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_58 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if (local_300 == 0) {
LAB_140f4f8bb:
    if (local_308 != (longlong *)0x0) {
      FMemory::Free(local_308);
    }
  }
  else if (local_308 != (longlong *)0x0) {
    (**(code **)(*local_308 + 0x28))(local_308,0);
    if (local_308 != (longlong *)0x0) {
      local_308 = (longlong *)FMemory::Realloc(local_308,0,0);
    }
    local_300 = 0;
    goto LAB_140f4f8bb;
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_338);
LAB_140f4f91d:
  uVar7 = TScriptInterface<IBlendableInterface>::
          TScriptInterface<IBlendableInterface><UMaterialInterface>
                    (local_48,*(undefined8 *)(param_1 + 0x838));
  FUN_142ed36d0(param_1,uVar7,0);
  (**(code **)(**(longlong **)(param_1 + 0x838) + 0x2b8))(*(longlong **)(param_1 + 0x838),0,0,0);
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return;
}



// FUNCTION 140f4f9a0 FUN_140f4f9a0 body=2713 status=ok
// SIG undefined FUN_140f4f9a0(void)

void FUN_140f4f9a0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_378 [2];
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 local_308 [8];
  longlong *local_300;
  undefined1 local_2f8 [8];
  longlong *local_2f0;
  undefined1 local_2e8 [8];
  longlong *local_2e0;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_298 [24];
  undefined1 local_280 [24];
  undefined1 local_268 [24];
  undefined1 local_250 [24];
  undefined1 local_238 [24];
  undefined1 local_220 [24];
  undefined1 local_208 [24];
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [24];
  undefined1 local_1c0 [24];
  undefined1 local_1a8 [24];
  undefined1 local_190 [24];
  undefined1 local_178 [24];
  undefined1 local_160 [24];
  undefined1 local_148 [24];
  undefined1 local_130 [24];
  undefined1 local_118 [24];
  undefined1 local_100 [24];
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  local_368 = (undefined4)param_1[0x1af];
  uStack_364 = *(undefined4 *)((longlong)param_1 + 0xd7c);
  uStack_360 = (undefined4)param_1[0x1b0];
  uStack_35c = *(undefined4 *)((longlong)param_1 + 0xd84);
  lVar5 = FText::FText(local_298,param_1 + 0x17f);
  if ((param_1[0x109] != 0) && (param_1[0x10a] != 0)) {
    piVar1 = (int *)(param_1[0x10a] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x108,lVar5,1,0);
      FUN_142f0bf30(param_1 + 0x108,&local_368,1);
    }
  }
  plVar3 = *(longlong **)(lVar5 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  local_358 = (undefined4)param_1[0x1af];
  uStack_354 = *(undefined4 *)((longlong)param_1 + 0xd7c);
  uStack_350 = (undefined4)param_1[0x1b0];
  uStack_34c = *(undefined4 *)((longlong)param_1 + 0xd84);
  lVar5 = FText::FText(local_280,param_1 + 0x17f);
  if ((param_1[0xf7] != 0) && (param_1[0xf8] != 0)) {
    piVar1 = (int *)(param_1[0xf8] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xf6,lVar5,1,0);
      FUN_142f0bf30(param_1 + 0xf6,&local_358,1);
    }
  }
  plVar3 = *(longlong **)(lVar5 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  local_348 = (undefined4)param_1[0x1b1];
  uStack_344 = *(undefined4 *)((longlong)param_1 + 0xd8c);
  uStack_340 = (undefined4)param_1[0x1b2];
  uStack_33c = *(undefined4 *)((longlong)param_1 + 0xd94);
  lVar5 = FText::FText(local_268,param_1 + 0x182);
  if ((param_1[0x10f] != 0) && (param_1[0x110] != 0)) {
    piVar1 = (int *)(param_1[0x110] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x10e,lVar5,1,0);
      FUN_142f0bf30(param_1 + 0x10e,&local_348,1);
    }
  }
  plVar3 = *(longlong **)(lVar5 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  local_338 = (undefined4)param_1[0x1b1];
  uStack_334 = *(undefined4 *)((longlong)param_1 + 0xd8c);
  uStack_330 = (undefined4)param_1[0x1b2];
  uStack_32c = *(undefined4 *)((longlong)param_1 + 0xd94);
  lVar5 = FText::FText(local_250,param_1 + 0x182);
  if ((param_1[0xfd] != 0) && (param_1[0xfe] != 0)) {
    piVar1 = (int *)(param_1[0xfe] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xfc,lVar5,1,0);
      FUN_142f0bf30(param_1 + 0xfc,&local_338,1);
    }
  }
  plVar3 = *(longlong **)(lVar5 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  local_328 = (undefined4)param_1[0x1b3];
  uStack_324 = *(undefined4 *)((longlong)param_1 + 0xd9c);
  uStack_320 = (undefined4)param_1[0x1b4];
  uStack_31c = *(undefined4 *)((longlong)param_1 + 0xda4);
  lVar5 = FText::FText(local_238);
  if ((param_1[0x115] != 0) && (param_1[0x116] != 0)) {
    piVar1 = (int *)(param_1[0x116] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x114,lVar5,1,0);
      FUN_142f0bf30(param_1 + 0x114,&local_328,1);
    }
  }
  plVar3 = *(longlong **)(lVar5 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  local_318 = (undefined4)param_1[0x1b3];
  uStack_314 = *(undefined4 *)((longlong)param_1 + 0xd9c);
  uStack_310 = (undefined4)param_1[0x1b4];
  uStack_30c = *(undefined4 *)((longlong)param_1 + 0xda4);
  lVar5 = FText::FText(local_220);
  if ((param_1[0x103] != 0) && (param_1[0x104] != 0)) {
    piVar1 = (int *)(param_1[0x104] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x102,lVar5,1,0);
      FUN_142f0bf30(param_1 + 0x102,&local_318,1);
    }
  }
  plVar3 = *(longlong **)(lVar5 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  uVar6 = FText::FText(local_208,param_1 + 0x17f);
  FUN_140f4d150(param_1 + 0x10b,uVar6);
  uVar6 = FText::FText(local_1f0,param_1 + 0x17f);
  FUN_140f4d150(param_1 + 0xf9,uVar6);
  uVar6 = FText::FText(local_1d8,param_1 + 0x182);
  FUN_140f4d150(param_1 + 0x111,uVar6);
  uVar6 = FText::FText(local_1c0,param_1 + 0x182);
  FUN_140f4d150(param_1 + 0xff,uVar6);
  uVar6 = FText::FText(local_1a8,param_1 + 0x185);
  FUN_140f4d150(param_1 + 0x117,uVar6);
  uVar6 = FText::FText(local_190,param_1 + 0x185);
  FUN_140f4d150(param_1 + 0x105,uVar6);
  uVar6 = FText::FText(local_178,param_1 + 0x188);
  FUN_140f4d150(param_1 + 0xf0,uVar6);
  uVar6 = FText::FText(local_160,param_1 + 0x188);
  FUN_140f4d150(param_1 + 0xf3,uVar6);
  uVar6 = FText::FText(local_148,param_1 + 0x18b);
  FUN_140f4d150(param_1 + 0x11a,uVar6);
  uVar6 = FText::FText(local_130,param_1 + 0x18b);
  FUN_140f4d150(param_1 + 0x11d,uVar6);
  uVar6 = FText::FText(local_118,param_1 + 0x18b);
  FUN_140f4d150(param_1 + 0x120,uVar6);
  if (param_1[0x151] != 0) {
    uVar6 = FUN_142085870(param_1[0x151],local_308,L"rewardsTitle");
    FUN_142ede260(param_1 + 0x13b,uVar6);
    if (local_300 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_300 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_300)(local_300);
        LOCK();
        piVar1 = (int *)((longlong)local_300 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_300 + 8))(local_300,1);
        }
      }
    }
    if ((param_1[0x13c] != 0) && (param_1[0x13d] != 0)) {
      piVar1 = (int *)(param_1[0x13d] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        uVar6 = FText::FText(local_100,param_1 + 0x19a);
        FUN_140f4d150(param_1 + 0x13b,uVar6);
      }
    }
    uVar6 = FUN_142085870(param_1[0x151],local_2f8,L"rewardsTitleShadow");
    FUN_142ede260(param_1 + 0x13e,uVar6);
    if (local_2f0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_2f0 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_2f0)(local_2f0);
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_2f0 + 8))(local_2f0,1);
        }
      }
    }
    if ((param_1[0x13f] != 0) && (param_1[0x140] != 0)) {
      piVar1 = (int *)(param_1[0x140] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        uVar6 = FText::FText(local_e8,param_1 + 0x19a);
        FUN_140f4d150(param_1 + 0x13e,uVar6);
      }
    }
  }
  uVar6 = FText::FText(local_d0,param_1 + 0x19d);
  FUN_140f4d150(param_1 + 0x135,uVar6);
  uVar6 = FText::FText(local_b8,param_1 + 0x19d);
  FUN_140f4d150(param_1 + 0x138,uVar6);
  uVar6 = (**(code **)(*param_1 + 0x4a8))(param_1,local_2e8,L"unlockMenuName");
  FUN_142ede260(param_1 + 0x141,uVar6);
  if (local_2e0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2e0 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_2e0)(local_2e0);
      LOCK();
      piVar1 = (int *)((longlong)local_2e0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_2e0 + 8))(local_2e0,1);
      }
    }
  }
  if ((param_1[0x142] != 0) && (param_1[0x143] != 0)) {
    piVar1 = (int *)(param_1[0x143] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      uVar6 = FText::FText(local_a0,param_1 + 0x1a0);
      FUN_140f4d150(param_1 + 0x141,uVar6);
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x4a8))(param_1,local_2d8,L"unlockMenuNameGlow1");
  FUN_142ede260(param_1 + 0x144,uVar6);
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2d0 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar1 = (int *)((longlong)local_2d0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_2d0 + 8))(local_2d0,1);
      }
    }
  }
  if ((param_1[0x145] != 0) && (param_1[0x146] != 0)) {
    piVar1 = (int *)(param_1[0x146] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      uVar6 = FText::FText(local_88,param_1 + 0x1a0);
      FUN_140f4d150(param_1 + 0x144,uVar6);
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x4a8))(param_1,local_2c8,L"unlockMenuNameGlow2");
  FUN_142ede260(param_1 + 0x147,uVar6);
  if (local_2c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2c0 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_2c0)(local_2c0);
      LOCK();
      piVar1 = (int *)((longlong)local_2c0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_2c0 + 8))(local_2c0,1);
      }
    }
  }
  if ((param_1[0x148] != 0) && (param_1[0x149] != 0)) {
    piVar1 = (int *)(param_1[0x149] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      uVar6 = FText::FText(local_70,param_1 + 0x1a0);
      FUN_140f4d150(param_1 + 0x147,uVar6);
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x4a8))(param_1,local_2b8,L"menuUnlockedText");
  FUN_142ede260(param_1 + 0x14a,uVar6);
  if (local_2b0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2b0 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_2b0)(local_2b0);
      LOCK();
      piVar1 = (int *)((longlong)local_2b0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_2b0 + 8))(local_2b0,1);
      }
    }
  }
  if ((param_1[0x14b] != 0) && (param_1[0x14c] != 0)) {
    piVar1 = (int *)(param_1[0x14c] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      uVar6 = FText::FText(local_58,param_1 + 0x1a3);
      FUN_140f4d150(param_1 + 0x14a,uVar6);
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x4a8))(param_1,local_2a8,L"unlockedTitle");
  FUN_142ede260(param_1 + 0x14d,uVar6);
  if (local_2a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2a0 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_2a0)(local_2a0);
      LOCK();
      piVar1 = (int *)((longlong)local_2a0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_2a0 + 8))(local_2a0,1);
      }
    }
  }
  if ((param_1[0x14e] != 0) && (param_1[0x14f] != 0)) {
    piVar1 = (int *)(param_1[0x14f] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      uVar6 = FText::FText(local_40,param_1 + 0x1a6);
      FUN_140f4d150(param_1 + 0x14d,uVar6);
    }
  }
  if (param_1[0x158] != 0) {
    local_378[0] = 0;
    local_378[1] = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_378,0);
    FGenericPlatformString::Memcpy(local_378[0],L"redeemButtonLabel",0x24);
    FUN_142f100e0(param_1[0x158],local_378,param_1 + 0x197);
    if (local_378[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f50440 FUN_140f50440 body=837 status=ok
// SIG undefined FUN_140f50440(void)

void FUN_140f50440(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  if (((*(longlong *)(param_1 + 0xdb0) != 0) && (0 < *(int *)(param_1 + 0xa08))) &&
     (lVar9 = **(longlong **)(param_1 + 0xa00), lVar9 != 0)) {
    uVar4 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>(&local_48);
    FUN_142ed3200(param_1,uVar4,0,lVar9,0,0);
  }
  iVar1 = *(int *)(param_1 + 0xa08);
  if (0 < iVar1) {
    lVar9 = -0x1b0;
    iVar6 = -2;
    do {
      lVar5 = 0;
      lVar3 = *(longlong *)(param_1 + 0xa00);
      if (*(longlong *)(lVar3 + 0x1b0 + lVar9) != 0) {
        iVar2 = *(int *)(lVar3 + 0x278 + lVar9);
        local_res10 = 0;
        local_res8 = 0;
        lVar11 = 0;
        local_res18 = 0;
        lVar7 = 0;
        lVar8 = lVar7;
        lVar12 = lVar5;
        if (iVar2 == 0) {
          if ((iVar6 + 2 < 1) || (iVar1 <= iVar6 + 1)) {
            lVar10 = *(longlong *)(param_1 + 0xdb0);
          }
          else {
            lVar10 = *(longlong *)(lVar9 + 0xd8 + lVar3);
          }
          iVar2 = iVar6 + 3;
          if ((-1 < iVar2) && (iVar2 < iVar1)) {
            lVar12 = *(longlong *)(lVar9 + 0x288 + lVar3);
          }
          lVar11 = *(longlong *)(lVar3 + 0x1b8 + lVar9);
          if (lVar11 != 0) {
            if ((iVar6 + 2 < 1) || (iVar1 <= iVar6 + 1)) {
              local_res10 = *(undefined8 *)(param_1 + 0xdb0);
            }
            else {
              local_res10 = *(undefined8 *)(lVar9 + 0xe0 + lVar3);
            }
            if ((iVar2 < 0) || (iVar1 <= iVar2)) {
              local_res8 = 0;
            }
            else {
              local_res8 = *(undefined8 *)(lVar9 + 0x290 + lVar3);
            }
            local_res18 = *(undefined8 *)(lVar9 + 0x1b0 + lVar3);
          }
        }
        else if (iVar2 == 1) {
          if (((iVar6 < 0) || (iVar1 <= iVar6)) || (*(int *)(lVar3 + 200 + lVar9) != 1)) {
            if ((iVar6 + 2 < 1) || (iVar1 <= iVar6 + 1)) {
              lVar10 = *(longlong *)(param_1 + 0xdb0);
            }
            else {
              lVar10 = *(longlong *)(lVar9 + 0xd8 + lVar3);
            }
          }
          else {
            lVar10 = *(longlong *)(lVar3 + lVar9);
          }
          if ((-1 < iVar6 + 4) && (iVar6 + 4 < iVar1)) {
            lVar12 = *(longlong *)(lVar9 + 0x360 + lVar3);
          }
          if ((-1 < iVar6 + 3) && (iVar6 + 3 < iVar1)) {
            lVar8 = *(longlong *)(lVar9 + 0x288 + lVar3);
          }
        }
        else {
          lVar8 = lVar5;
          lVar10 = lVar5;
          lVar11 = lVar5;
          if (iVar2 == 2) {
            if ((iVar6 < 0) || (iVar1 <= iVar6)) {
              lVar10 = *(longlong *)(param_1 + 0xdb0);
            }
            else {
              lVar10 = *(longlong *)(lVar3 + lVar9);
            }
            if ((-1 < iVar6 + 4) && (iVar6 + 4 < iVar1)) {
              lVar12 = *(longlong *)(lVar9 + 0x360 + lVar3);
            }
            if ((0 < iVar6 + 2) && (iVar6 + 1 < iVar1)) {
              lVar11 = *(longlong *)(lVar9 + 0xd8 + lVar3);
              lVar8 = lVar7;
            }
          }
        }
        lVar3 = *(longlong *)(lVar9 + 0x1b0 + lVar3);
        local_50 = 0;
        local_58 = lVar3;
        if (lVar3 != 0) {
          uVar4 = UBlendableInterface::GetPrivateStaticClass();
          lVar5 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
        }
        local_50 = lVar5;
        FUN_142ed3200(param_1,&local_58,lVar10,lVar12,lVar11,lVar8);
        lVar3 = *(longlong *)(lVar9 + 0x1b8 + *(longlong *)(param_1 + 0xa00));
        if (lVar3 != 0) {
          local_40 = 0;
          local_48 = lVar3;
          uVar4 = UBlendableInterface::GetPrivateStaticClass();
          local_40 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
          FUN_142ed3200(param_1,&local_48,local_res10,local_res8,0,local_res18);
        }
      }
      iVar1 = *(int *)(param_1 + 0xa08);
      lVar9 = lVar9 + 0xd8;
      iVar2 = iVar6 + 3;
      iVar6 = iVar6 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}



// FUNCTION 140f50790 FUN_140f50790 body=88 status=ok
// SIG undefined FUN_140f50790(void)

bool FUN_140f50790(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146872838;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 140f507f0 FUN_140f507f0 body=88 status=ok
// SIG undefined FUN_140f507f0(void)

bool FUN_140f507f0(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146872928;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 140f50850 FUN_140f50850 body=282 status=ok
// SIG undefined FUN_140f50850(void)

void FUN_140f50850(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FWeakObjectPtr::operator=(local_48,0);
  local_40 = 0;
  uVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_20,L"You are not allowed to drop this item.",L"GFxInventoryMenu",
                     L"CannotDrop");
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"Inventory",L"GFxInventoryMenu",L"DialogHeader");
  FUN_1410f3960(uVar5,uVar7,uVar6,local_48,1,0,0);
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
  return;
}



// FUNCTION 140f50970 FUN_140f50970 body=55 status=ok
// SIG undefined FUN_140f50970(void)

void FUN_140f50970(longlong *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872890,&local_18);
  FUN_14109ee70(param_1);
  return;
}



// FUNCTION 140f509b0 FUN_140f509b0 body=488 status=ok
// SIG undefined FUN_140f509b0(void)

void FUN_140f509b0(longlong *param_1,char param_2,undefined1 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  longlong local_28 [2];
  
  lVar5 = param_1[0x86];
  if (lVar5 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = FUN_140cff1b0(lVar5);
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0x7c0) != '\0')) {
        FUN_140f54e20(param_1);
        return;
      }
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x480))();
  if (cVar3 == '\0') {
    pwVar8 = L"initializeNewWidget";
    if (param_2 != '\0') {
      pwVar8 = L"firstBoot";
    }
    plVar1 = param_1 + 0xe6;
    if ((wchar_t *)*plVar1 != pwVar8) {
      iVar6 = 0;
      if (*pwVar8 == L'\0') {
        iVar7 = 0;
      }
      else {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (pwVar8[lVar5] != L'\0');
        iVar7 = (int)lVar5 + 1;
      }
      *(undefined4 *)(param_1 + 0xe7) = 0;
      if (*(int *)((longlong)param_1 + 0x73c) != iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,iVar7);
        iVar6 = (int)param_1[0xe7];
      }
      *(int *)(param_1 + 0xe7) = iVar6 + iVar7;
      if (*(int *)((longlong)param_1 + 0x73c) < iVar6 + iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
      }
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop((void *)*plVar1,pwVar8,(longlong)iVar7 * 2);
      }
    }
    *(undefined1 *)(param_1 + 0xe8) = param_3;
    return;
  }
  FUN_140f4ce30(param_1,param_3);
  if (param_1[0xe3] != 0) {
    FUN_140f533c0();
    local_28[0] = 0;
    if (param_2 == '\0') {
      local_28[1] = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      uVar9 = 0x28;
      pwVar8 = L"initializeNewWidget";
    }
    else {
      local_28[1] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      uVar9 = 0x14;
      pwVar8 = L"firstBoot";
    }
    FGenericPlatformString::Memcpy(local_28[0],pwVar8,uVar9);
    FUN_142088910(param_1[0xe3],local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f50ba0 FUN_140f50ba0 body=636 status=ok
// SIG undefined FUN_140f50ba0(void)

char FUN_140f50ba0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined1 local_458 [272];
  undefined1 local_348 [220];
  undefined1 local_26c [52];
  undefined1 local_238 [220];
  undefined1 local_15c [52];
  undefined1 local_128 [272];
  
  uVar4 = 0;
  cVar6 = '\0';
  if (param_2 != (longlong *)0x0) {
    if (param_3 == (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(local_458,0,0x110);
      FUN_140ed0240(local_458);
    }
    else {
      uVar2 = (**(code **)(*param_3 + 0x340))(param_3);
      FUN_140e9a4f0(local_128,uVar2);
    }
    FUN_140e9a4f0(local_348);
    if (param_3 == (longlong *)0x0) {
      FUN_140e9c360(local_458);
    }
    else {
      FUN_140e9c360(local_128);
    }
    if (param_4 == (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(local_458,0,0x110);
      uVar2 = FUN_140ed0240(local_458);
    }
    else {
      uVar2 = (**(code **)(*param_4 + 0x340))(param_4);
      uVar2 = FUN_140e9a4f0(local_128,uVar2);
    }
    FUN_140e9a4f0(local_238,uVar2);
    if (param_4 == (longlong *)0x0) {
      FUN_140e9c360(local_458);
    }
    else {
      FUN_140e9c360(local_128);
    }
    cVar1 = FWeakObjectPtr::IsValid(local_26c);
    if (cVar1 == '\0') {
      plVar3 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
      (**(code **)(*plVar3 + 0x20))(plVar3,1);
    }
    else {
      cVar6 = '\x01';
      cVar1 = FWeakObjectPtr::IsValid(local_26c);
      uVar2 = uVar4;
      if (cVar1 != '\0') {
        plVar3 = (longlong *)FWeakObjectPtr::Get(local_26c);
        uVar2 = FUN_14301f8f0();
        uVar2 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar2);
      }
      cVar1 = FWeakObjectPtr::IsValid(local_15c);
      if (cVar1 != '\0') {
        plVar3 = (longlong *)FWeakObjectPtr::Get(local_15c);
        uVar4 = FUN_14301f8f0();
        uVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
      }
      plVar3 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
      (**(code **)(*plVar3 + 0x18))(plVar3,0);
      plVar3 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
      (**(code **)(*plVar3 + 8))(plVar3,uVar2,uVar4,0);
    }
    FUN_140e9c360(local_238);
    FUN_140e9c360(local_348);
    if ((cVar6 != '\0') && (param_3 != (longlong *)0x0)) {
      lVar5 = (**(code **)(*param_2 + 0x2b0))(param_2);
      FUN_140f49990(param_3,lVar5 + 0x178);
    }
  }
  return cVar6;
}



// FUNCTION 140f50e20 FUN_140f50e20 body=289 status=ok
// SIG undefined FUN_140f50e20(void)

undefined4 FUN_140f50e20(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_28 [3];
  undefined8 local_10;
  
  FUN_142ecd4d0();
  lVar3 = *(longlong *)(param_1 + 0x600);
  uVar2 = 0;
  if (lVar3 != 0) {
    local_28[0] = 0;
    local_28[1] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"inventoryIntro",0x1e);
    FUN_142088910(lVar3,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    *(undefined1 *)(param_1 + 0xe30) = 0;
  }
  if (*(longlong *)(param_1 + 0xdb0) != 0) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0xdb0) + 0x170);
    (**(code **)(*plVar4 + 0x38))(plVar4,1);
    lVar3 = *(longlong *)(param_1 + 0xdb0);
    local_28[2] = lVar3;
    if (lVar3 != 0) {
      uVar2 = UBlendableInterface::GetPrivateStaticClass();
      uVar2 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
    }
    local_10 = uVar2;
    FUN_142ed36d0(param_1,local_28 + 2,0);
  }
  FUN_140f07d80(param_1 + 0xa80);
  FUN_140f07da0(param_1 + 0xa80);
  FUN_140f53310(param_1);
  lVar3 = FUN_142eb65a0(param_1);
  if (lVar3 == 0) {
    FUN_142ed3b10(param_1,*(undefined8 *)(param_1 + 0xdb0));
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0xfac);
  *(undefined4 *)(param_1 + 0xfac) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140f50f50 FUN_140f50f50 body=2483 status=ok
// SIG undefined FUN_140f50f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f50f50(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined1 auStack_248 [32];
  longlong *local_228;
  undefined1 local_218;
  undefined1 local_217 [7];
  undefined8 local_210;
  undefined8 local_208;
  longlong local_1f8;
  longlong *plStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  longlong local_1d0 [2];
  code *local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  longlong local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong *local_188;
  longlong local_180;
  longlong *local_178;
  longlong local_168;
  longlong *plStack_160;
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  longlong local_120 [2];
  longlong *local_110;
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined2 local_d8 [2];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [24];
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  int local_70;
  longlong *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_d8[0] = 0;
  local_cc = 0;
  local_c0 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_1d8 = param_3;
  FText::FText(local_a0);
  local_210._0_4_ = (float)local_1d8;
  local_210._4_4_ = local_1d8._4_4_;
  local_208 = local_1d8;
  local_88 = 0;
  local_80 = 0;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  local_68 = (longlong *)0x0;
  local_60 = 0;
  local_d8[0] = CONCAT11(local_d8[0]._1_1_,1);
  cVar6 = FUN_142ebdd70(param_1);
  if (cVar6 == '\0') {
    fVar2 = *(float *)(param_1 + 0xd1);
    local_210 = CONCAT44(local_210._4_4_ + *(float *)((longlong)param_1 + 0x684),
                         (float)local_210 + *(float *)(param_1 + 0xd0));
    fVar3 = *(float *)((longlong)param_1 + 0x68c);
  }
  else {
    fVar2 = *(float *)(param_1 + 0xd4);
    local_210 = CONCAT44(local_210._4_4_ + *(float *)((longlong)param_1 + 0x69c),
                         (float)local_210 + *(float *)(param_1 + 0xd3));
    fVar3 = *(float *)((longlong)param_1 + 0x6a4);
  }
  local_208 = CONCAT44(local_208._4_4_ + fVar3,(float)local_208 + fVar2);
  local_228._0_4_ = (**(code **)(*param_1 + 0x558))(param_1);
  puVar9 = (undefined8 *)
           FUN_14110cb50(&local_1d8,param_1[0xd9],&local_210,(longlong)param_1 + 0x1ec);
  local_210 = *puVar9;
  uVar8 = (**(code **)(*param_1 + 0x558))(param_1);
  local_228 = (longlong *)CONCAT44(local_228._4_4_,uVar8);
  puVar9 = (undefined8 *)FUN_14110cb50(local_158,param_1[0xd9],&local_208,(longlong)param_1 + 0x1ec)
  ;
  local_208 = *puVar9;
  local_d4 = (float)local_210;
  local_c8 = (undefined4)local_208;
  local_c4 = (undefined4)((ulonglong)local_208 >> 0x20);
  local_d0 = local_210._4_4_;
  local_cc = 1;
  local_c0 = 1;
  if (param_1 + 0xd2 != (longlong *)&local_bc) {
    local_bc = (undefined4)param_1[0xd2];
    local_b8 = *(undefined4 *)((longlong)param_1 + 0x694);
    local_b4 = 1;
  }
  uStack_1e0 = (longlong *)param_2[1];
  plVar14 = param_1 + 0xd7;
  local_1e8 = *param_2;
  if (uStack_1e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_1e0 + 1) = (int)uStack_1e0[1] + 1;
    UNLOCK();
  }
  if (&local_1e8 != plVar14) {
    local_1e8._4_4_ = (undefined4)((ulonglong)local_1e8 >> 0x20);
    uStack_1e0._4_4_ = (undefined4)((ulonglong)uStack_1e0 >> 0x20);
    lVar10 = *plVar14;
    plVar12 = (longlong *)param_1[0xd8];
    local_58 = (undefined4)local_1e8;
    uStack_54 = local_1e8._4_4_;
    uStack_50 = (undefined4)uStack_1e0;
    uStack_4c = uStack_1e0._4_4_;
    *(undefined4 *)plVar14 = (undefined4)local_1e8;
    *(undefined4 *)((longlong)param_1 + 0x6bc) = local_1e8._4_4_;
    *(undefined4 *)(param_1 + 0xd8) = (undefined4)uStack_1e0;
    *(undefined4 *)((longlong)param_1 + 0x6c4) = uStack_1e0._4_4_;
    local_1e8 = lVar10;
    uStack_1e0 = plVar12;
  }
  plVar14 = uStack_1e0;
  if (uStack_1e0 != (longlong *)0x0) {
    LOCK();
    plVar12 = uStack_1e0 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*uStack_1e0)(uStack_1e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_1e0 + 8))(uStack_1e0,1);
      }
    }
  }
  lVar10 = FWeakObjectPtr::Get((longlong)param_1 + 0x5cc);
  if (lVar10 != 0) {
    lVar11 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      plVar14 = (longlong *)*param_2;
      local_1f8 = 0;
      plStack_1f0 = (longlong *)0x0;
      plVar12 = (longlong *)FName::FName(local_150,L"SPARK",1);
      plVar13 = (longlong *)(**(code **)(*plVar14 + 8))(plVar14,local_148);
      lVar11 = *param_2;
      plVar14 = (longlong *)param_2[1];
      if (*plVar13 == *plVar12) {
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        local_1b0 = lVar11;
        local_1a8 = plVar14;
        plVar14 = (longlong *)FUN_140bbb2b0(lVar10,local_140,&local_1b0);
        if (&local_1f8 != plVar14) {
          local_1f8 = *plVar14;
          *plVar14 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_1f0,plVar14 + 1);
        }
        plVar14 = local_1a8;
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_138 + 1;
          lVar11 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar1 = (int *)((longlong)local_138 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar14 = local_1a8;
            if (iVar4 == 1) {
              (**(code **)(*local_138 + 8))(local_138,1);
              plVar14 = local_1a8;
            }
          }
        }
      }
      else {
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        local_1a0 = lVar11;
        local_198 = plVar14;
        plVar14 = (longlong *)FUN_140bbc6f0(lVar10,local_130,&local_1a0);
        if (&local_1f8 != plVar14) {
          local_1f8 = *plVar14;
          *plVar14 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_1f0,plVar14 + 1);
        }
        plVar14 = local_198;
        if (local_128 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_128 + 1;
          lVar11 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar14 = local_198;
            if (iVar4 == 1) {
              (**(code **)(*local_128 + 8))(local_128,1);
              plVar14 = local_198;
            }
          }
        }
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar14 + 1;
        lVar11 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      if (local_1f8 != 0) {
        local_168 = local_1f8;
        plStack_160 = plStack_1f0;
        local_1d0[0] = 0;
        local_1d0[1] = 0;
        if (plStack_1f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_1f0 + 1) = (int)plStack_1f0[1] + 1;
          UNLOCK();
        }
        local_228 = local_1d0;
        FUN_140d79f00(*(undefined8 *)(lVar10 + 0x478),&local_168,1);
        plVar14 = plStack_160;
        if (plStack_160 != (longlong *)0x0) {
          LOCK();
          plVar12 = plStack_160 + 1;
          lVar11 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plStack_160)(plStack_160);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        uVar15 = FText::FromString(local_f0,local_1d0);
        FText::operator=(local_a0,uVar15);
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar14 = local_e8 + 1;
          lVar11 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar1 = (int *)((longlong)local_e8 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_e8 + 8))(local_e8,1);
            }
          }
        }
        local_190 = *param_2;
        local_188 = (longlong *)param_2[1];
        if (local_188 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_188 + 1) = (int)local_188[1] + 1;
          UNLOCK();
        }
        uVar7 = FUN_140bbd2a0(lVar10,&local_190);
        plVar14 = local_188;
        if (local_188 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_188 + 1;
          lVar11 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_188)(local_188);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        plVar14 = (longlong *)FUN_1411f1490(local_120,uVar7);
        if (&local_88 != plVar14) {
          if (local_88 != 0) {
            FMemory::Free();
          }
          local_88 = *plVar14;
          *plVar14 = 0;
          local_80 = plVar14[1];
          plVar14[1] = 0;
        }
        if (local_120[0] != 0) {
          FMemory::Free();
        }
        if (local_1d0[0] != 0) {
          FMemory::Free();
        }
      }
      local_218 = 1;
      uVar15 = FUN_1404b03b0();
      FUN_142eaf930(local_d8,&local_218,uVar15);
      local_180 = *param_2;
      local_178 = (longlong *)param_2[1];
      if (local_178 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_178 + 1) = (int)local_178[1] + 1;
        UNLOCK();
      }
      cVar6 = FUN_140ba7eb0(lVar10,&local_180);
      plVar14 = local_178;
      if (local_178 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_178 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      if (cVar6 != '\0') {
        local_217[0] = 10;
        uVar15 = FUN_1404b03b0();
        FUN_142eaf930(local_d8,local_217,uVar15);
      }
      plVar14 = plStack_1f0;
      if (plStack_1f0 != (longlong *)0x0) {
        LOCK();
        plVar12 = plStack_1f0 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_1f0)(plStack_1f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_1f0 + 8))(plStack_1f0,1);
          }
        }
      }
    }
  }
  uStack_1b8 = 0;
  local_1c0 = FUN_140f43c50;
  plVar14 = (longlong *)FMemory::Realloc(0,0x30);
  local_110 = plVar14;
  if (plVar14 == (longlong *)0x0) {
    if ((local_70 != 0) && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x28))(local_78,0);
      if (local_78 != (longlong *)0x0) {
        local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
      }
      local_70 = 0;
    }
  }
  else {
    *plVar14 = (longlong)&PTR_FUN_1443193b0;
    FWeakObjectPtr::operator=(plVar14 + 1,param_1);
    plVar14[2] = (longlong)local_1c0;
    plVar14[3] = CONCAT44(uStack_1b4,uStack_1b8);
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar14[5] = lVar10;
    *plVar14 = (longlong)&PTR_FUN_1443193f8;
    FUN_140bac550(plVar14,&local_78);
    (**(code **)(*plVar14 + 0x28))(plVar14,0);
    local_110 = (longlong *)FMemory::Realloc(plVar14,0,0);
    if (local_110 != (longlong *)0x0) {
      FMemory::Free(local_110);
    }
  }
  uStack_1b8 = 0;
  local_1c0 = FUN_140f43d20;
  plVar14 = (longlong *)FMemory::Realloc(0,0x30);
  local_100 = plVar14;
  if (plVar14 == (longlong *)0x0) {
    if ((local_60 != 0) && (local_68 != (longlong *)0x0)) {
      (**(code **)(*local_68 + 0x28))(local_68,0);
      if (local_68 != (longlong *)0x0) {
        local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
      }
      local_60 = 0;
    }
  }
  else {
    *plVar14 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar14 + 1,param_1);
    plVar14[2] = (longlong)local_1c0;
    plVar14[3] = CONCAT44(uStack_1b4,uStack_1b8);
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar14[5] = lVar10;
    *plVar14 = (longlong)&PTR_FUN_143f77bd0;
    FUN_1404c8680(plVar14,&local_68);
    (**(code **)(*plVar14 + 0x28))(plVar14,0);
    local_100 = (longlong *)FMemory::Realloc(plVar14,0,0);
    if (local_100 != (longlong *)0x0) {
      FMemory::Free(local_100);
    }
  }
  lVar10 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar10 != 0) {
    lVar11 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140f51876;
  }
  lVar10 = 0;
LAB_140f51876:
  lVar10 = FUN_142ed8770(lVar10,local_d8);
  param_1[0xaf] = lVar10;
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  FUN_140f184a0(local_d8);
  plVar14 = (longlong *)param_2[1];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar14 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  return;
}



// FUNCTION 140f51910 FUN_140f51910 body=88 status=ok
// SIG undefined FUN_140f51910(void)

bool FUN_140f51910(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_1468728f8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 140f51970 FUN_140f51970 body=578 status=ok
// SIG undefined FUN_140f51970(void)

void FUN_140f51970(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_48 [4];
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xbb);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_140cf6ca0(lVar5);
    }
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xb9);
  if (lVar5 != 0) {
    lVar6 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar7 = FUN_140e10600(param_1);
      FUN_142f02570(uVar7,param_1[0xd0],0);
    }
  }
  FUN_140f32040(param_1,0);
  FUN_140f4b910(param_1);
  if ((param_1[0xc6] == 0) || (*(char *)(param_1[0xc6] + 0x1338) == '\0')) {
    (**(code **)(*param_1 + 0x578))(param_1,0);
  }
  if (param_1[200] != 0) {
    local_48[0] = 0;
    local_48[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"dying",0xc);
    FUN_142088910(param_1[200],local_48);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if (param_1[0xc9] != 0) {
    local_48[2] = 0;
    local_48[3] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 2,0);
    FGenericPlatformString::Memcpy(local_48[2],L"dying",0xc);
    FUN_142088910(param_1[0xc9],local_48 + 2);
    if (local_48[2] != 0) {
      FMemory::Free();
    }
  }
  if ((longlong *)param_1[0xca] != (longlong *)0x0) {
    lVar5 = *(longlong *)param_1[0xca];
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"FIGHT FOR YOUR LIFE!",L"GFxFightForYourLifeWidget",
                       L"FightForYourLife");
    (**(code **)(lVar5 + 0x2b0))(param_1[0xca],uVar7,1,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
  }
  FUN_140f4ccf0(param_1,0);
  return;
}



// FUNCTION 140f51bc0 FUN_140f51bc0 body=2023 status=ok
// SIG undefined FUN_140f51bc0(void)

void FUN_140f51bc0(longlong param_1,char *param_2)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong local_res20;
  longlong *local_a0;
  uint local_98;
  int iStack_94;
  undefined8 local_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [20];
  undefined1 local_5c [28];
  
  if (*(longlong *)(param_1 + 0x9e0) == 0) {
    return;
  }
  cVar4 = FUN_1410875b0();
  if (cVar4 == '\0') {
    return;
  }
  if (*param_2 == '\0') {
    return;
  }
  cVar4 = FUN_140f27b50(param_1,param_2);
  if (cVar4 == '\0') {
    return;
  }
  bVar2 = *(float *)(param_1 + 0x944) <= 0.0;
  cVar4 = *param_2;
  pcVar1 = param_2 + 4;
  plVar6 = (longlong *)FWeakObjectPtr::Get(pcVar1);
  if (cVar4 == '\x02') {
    cVar4 = FUN_140f258f0(param_1,plVar6);
    if (cVar4 == '\0') {
      return;
    }
    if (bVar2) {
      if (*(char *)(param_1 + 0x9c0) != '\0') {
        FUN_140f29a60(param_1,0);
      }
      FUN_140f259b0(param_1,0,1,0);
      puVar7 = (undefined1 *)FUN_140f16950(local_70,0,0);
      *(undefined1 *)(param_1 + 0xea4) = *puVar7;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(puVar7 + 4);
      *(undefined4 *)(param_1 + 0xeac) = *(undefined4 *)(puVar7 + 8);
      *(undefined4 *)(param_1 + 0xeb0) = *(undefined4 *)(puVar7 + 0xc);
      *(undefined4 *)(param_1 + 0xeb4) = *(undefined4 *)(puVar7 + 0x10);
    }
    else {
      *(char *)(param_1 + 0xea4) = *param_2;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)pcVar1;
      *(undefined4 *)(param_1 + 0xeac) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0xeb0) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(param_1 + 0xeb4) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0x944);
    }
    FUN_142ed9eb0(*(undefined8 *)(param_1 + 0x9e0),*(undefined8 *)(param_1 + 0xe28),param_1,bVar2);
    LOCK();
    *(undefined4 *)(param_1 + 0xfbc) = 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x588) = 1;
    UNLOCK();
    *(undefined1 *)(param_1 + 0xebc) = 0;
    lVar8 = FUN_1410833d0(param_1);
    if (((lVar8 != 0) && (lVar8 = FUN_1410833d0(param_1), *(longlong *)(lVar8 + 0xa88) != 0)) &&
       (lVar8 = FUN_142eee1b0(), lVar8 != 0)) {
      iStack_78 = 0;
      local_80 = (longlong *)&LAB_140f3cea0;
      local_90 = (longlong *)0x0;
      plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
      iStack_88 = 3;
      local_90 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_80;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_80._4_4_;
        *(int *)(plVar6 + 3) = iStack_78;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_74;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar9;
        *plVar6 = (longlong)&PTR_FUN_143fcff08;
      }
      FUN_142ee1c00(lVar8,PTR_s_mouseUp_14629dce0,param_1 + 0xf90,&local_90);
      if (iStack_88 != 0) {
        if (local_90 == (longlong *)0x0) goto LAB_140f51e59;
        (**(code **)(*local_90 + 0x28))(local_90,0);
        if (local_90 != (longlong *)0x0) {
          local_90 = (longlong *)FMemory::Realloc(local_90,0,0);
        }
        iStack_88 = 0;
      }
      if (local_90 != (longlong *)0x0) {
        FMemory::Free(local_90);
      }
    }
LAB_140f51e59:
    uVar10 = FUN_140f2b5e0(param_1);
    lVar8 = FUN_140f2b510(param_2,uVar10);
    plVar6 = *(longlong **)(param_1 + 0xa00);
    plVar11 = plVar6 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
    for (; plVar6 != plVar11; plVar6 = plVar6 + 0x1b) {
      if (((longlong *)*plVar6 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*(longlong *)*plVar6 + 0x388))(), cVar4 == '\0')) {
        lVar9 = 0;
        if (plVar6[0xb] != 0) {
          lVar9 = *(longlong *)(plVar6[0xb] + 0x70);
        }
        if ((lVar8 == 0) || (lVar8 != lVar9)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_142eaf850(*(undefined8 *)(param_1 + 0x9e0),*plVar6);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0xe28) != 0) && (lVar8 = FWeakObjectPtr::Get(pcVar1), lVar8 != 0))
    {
      lVar9 = FUN_1413565b0();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_140f4ced0(*(undefined8 *)(param_1 + 0xe28),lVar8);
      }
    }
    return;
  }
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  lVar8 = FUN_1413565b0();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  cVar4 = FUN_140f2ecf0(plVar6);
  if (cVar4 == '\0') {
    return;
  }
  plVar13 = (longlong *)0x0;
  local_98 = 0;
  iStack_94 = 0;
  local_a0 = (longlong *)0x0;
  (**(code **)(*plVar6 + 0x390))(plVar6,&local_res20);
  plVar11 = *(longlong **)(param_1 + 0xa00);
  plVar19 = plVar11 + (longlong)*(int *)(param_1 + 0xa08) * 0x1b;
  plVar15 = plVar13;
  iVar18 = iStack_94;
  for (; iVar14 = (int)plVar15, plVar11 != plVar19; plVar11 = plVar11 + 0x1b) {
    lVar8 = *plVar11;
    if ((lVar8 != 0) && (plVar11[0xc] == local_res20)) {
      for (plVar12 = plVar13; plVar12 != plVar13 + iVar14; plVar12 = plVar12 + 1) {
        if (*plVar12 == lVar8) {
          if ((int)((longlong)plVar12 - (longlong)plVar13 >> 3) != -1) goto LAB_140f52059;
          break;
        }
      }
      local_98 = iVar14 + 1;
      if (iVar18 < (int)local_98) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a0,plVar15);
        plVar13 = local_a0;
        iVar18 = iStack_94;
      }
      plVar15 = (longlong *)(ulonglong)local_98;
      plVar13[iVar14] = lVar8;
    }
LAB_140f52059:
  }
  iVar18 = 0;
  lVar8 = 0xc18;
  if (*(char *)(param_1 + 0xe31) != '\x01') {
    lVar8 = 0xa80;
  }
  cVar4 = FUN_140ee10a0(lVar8 + param_1);
  if (((cVar4 != '\0') && (lVar8 = *(longlong *)(param_1 + 0xbf0), lVar8 != 0)) &&
     (iVar5 = FUN_142eb7440(lVar8), iVar17 = iStack_94, 0 < iVar5)) {
    do {
      lVar9 = FUN_142eb6a30(lVar8,iVar18);
      if (lVar9 != 0) {
        iVar14 = (int)plVar15;
        for (plVar11 = plVar13; plVar11 != plVar13 + iVar14; plVar11 = plVar11 + 1) {
          if (*plVar11 == lVar9) {
            if ((int)((longlong)plVar11 - (longlong)plVar13 >> 3) != -1) goto LAB_140f52118;
            break;
          }
        }
        local_98 = iVar14 + 1;
        if (iVar17 < (int)local_98) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a0,plVar15);
          plVar13 = local_a0;
          iVar17 = iStack_94;
        }
        plVar15 = (longlong *)(ulonglong)local_98;
        plVar13[iVar14] = lVar9;
      }
LAB_140f52118:
      iVar14 = (int)plVar15;
      iVar18 = iVar18 + 1;
      iVar5 = FUN_142eb7440(lVar8);
    } while (iVar18 < iVar5);
  }
  if (iVar14 < 1) {
    FUN_140f50970(param_1);
    goto LAB_140f5236e;
  }
  uVar16 = 0;
  uVar20 = (ulonglong)((longlong)(plVar13 + iVar14) + (7 - (longlong)plVar13)) >> 3;
  if (plVar13 + iVar14 < plVar13) {
    uVar20 = uVar16;
  }
  if (uVar20 != 0) {
    do {
      FUN_142eaf850(*(undefined8 *)(param_1 + 0x9e0),*plVar13);
      plVar13 = plVar13 + 1;
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar20);
  }
  if (bVar2) {
    FUN_140f259b0(param_1,0,1,0);
    puVar7 = (undefined1 *)FUN_140f16950(local_5c,0,0);
    *(undefined1 *)(param_1 + 0xea4) = *puVar7;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(puVar7 + 4);
    *(undefined4 *)(param_1 + 0xeac) = *(undefined4 *)(puVar7 + 8);
    *(undefined4 *)(param_1 + 0xeb0) = *(undefined4 *)(puVar7 + 0xc);
    *(undefined4 *)(param_1 + 0xeb4) = *(undefined4 *)(puVar7 + 0x10);
  }
  else {
    *(char *)(param_1 + 0xea4) = *param_2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0xeac) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xeb0) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xeb4) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0x944);
  }
  FUN_142ed9eb0(*(undefined8 *)(param_1 + 0x9e0),*(undefined8 *)(param_1 + 0xe28),param_1,bVar2);
  LOCK();
  *(undefined4 *)(param_1 + 0xfbc) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  lVar8 = FUN_1410833d0(param_1);
  if (((lVar8 != 0) && (lVar8 = FUN_1410833d0(param_1), *(longlong *)(lVar8 + 0xa88) != 0)) &&
     (lVar8 = FUN_142eee1b0(), lVar8 != 0)) {
    iStack_88 = 0;
    local_80 = (longlong *)0x0;
    local_90 = (longlong *)&LAB_140f3cea0;
    plVar11 = (longlong *)FMemory::Realloc(0,0x30);
    iStack_78 = 3;
    local_80 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar11 + 1,param_1);
      *(undefined4 *)(plVar11 + 2) = (undefined4)local_90;
      *(undefined4 *)((longlong)plVar11 + 0x14) = local_90._4_4_;
      *(int *)(plVar11 + 3) = iStack_88;
      *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_84;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar11[5] = lVar9;
      *plVar11 = (longlong)&PTR_FUN_143fcff08;
    }
    FUN_142ee1c00(lVar8,PTR_s_mouseUp_14629dce0,param_1 + 0xf90,&local_80);
    if (iStack_78 != 0) {
      if (local_80 == (longlong *)0x0) goto LAB_140f5234b;
      (**(code **)(*local_80 + 0x28))(local_80,0);
      if (local_80 != (longlong *)0x0) {
        local_80 = (longlong *)FMemory::Realloc(local_80,0,0);
      }
      iStack_78 = 0;
    }
    if (local_80 != (longlong *)0x0) {
      FMemory::Free(local_80);
    }
  }
LAB_140f5234b:
  plVar13 = local_a0;
  if (*(longlong *)(param_1 + 0xe28) != 0) {
    FUN_140f4ced0(*(longlong *)(param_1 + 0xe28),plVar6);
    plVar13 = local_a0;
  }
LAB_140f5236e:
  if (plVar13 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar13);
  return;
}



// FUNCTION 140f523b0 FUN_140f523b0 body=419 status=ok
// SIG undefined FUN_140f523b0(void)

void FUN_140f523b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_48 [4];
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x630) != 0) {
    *(undefined1 *)(param_1 + 0x638) = *(undefined1 *)(*(longlong *)(param_1 + 0x630) + 0x10e6);
    if (*(longlong *)(param_1 + 0x640) != 0) {
      local_48[0] = 0;
      local_48[1] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
      FGenericPlatformString::Memcpy(local_48[0],L"revive",0xe);
      FUN_142088910(*(undefined8 *)(param_1 + 0x640),local_48);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x648) != 0) {
      local_48[2] = 0;
      local_48[3] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 2,0);
      FGenericPlatformString::Memcpy(local_48[2],L"revive",0xe);
      FUN_142088910(*(undefined8 *)(param_1 + 0x648),local_48 + 2);
      if (local_48[2] != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong **)(param_1 + 0x650) != (longlong *)0x0) {
      lVar4 = **(longlong **)(param_1 + 0x650);
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_28,L"BEING REVIVED BY ALLY!",L"GFxFightForYourLifeWidget",
                         L"RevivedByAlly");
      (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x650),uVar5,1,0);
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
    FUN_140f4ccf0(param_1,1);
    if (*(longlong *)(param_1 + 0x660) != 0) {
      FUN_142f0ead0(*(longlong *)(param_1 + 0x660),1.0 - *(float *)(param_1 + 0x68c));
      return;
    }
  }
  return;
}



// FUNCTION 140f52560 FUN_140f52560 body=389 status=ok
// SIG undefined FUN_140f52560(void)

undefined4 FUN_140f52560(longlong *param_1,char *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 local_28;
  undefined8 local_20;
  
  if (*param_2 == '\x01') {
    if ((char)param_1[0x138] != '\x02') {
      if ((char)param_1[0x138] != '\x01') goto LAB_140f52688;
      uVar1 = FWeakObjectPtr::Get(param_2 + 4);
      uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x9c4);
      lVar5 = FUN_140f2ad20(param_2);
      if (lVar5 == 0) {
        lVar5 = FUN_140f2ad20(param_1 + 0x138);
        if (lVar5 == 0) goto LAB_140f5268d;
      }
      FUN_140f526f0(param_1,uVar2,uVar1);
      FUN_140f29a60(param_1,param_3);
      goto LAB_140f526b9;
    }
    pcVar7 = (char *)((longlong)param_1 + 0x9c4);
    param_2 = param_2 + 4;
LAB_140f5261d:
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_2);
    plVar4 = (longlong *)FWeakObjectPtr::Get(pcVar7);
    if ((plVar4 != (longlong *)0x0) && (plVar3 != (longlong *)0x0)) {
      lVar5 = (**(code **)(*plVar4 + 0x340))(plVar4);
      lVar6 = (**(code **)(*plVar3 + 0x370))(plVar3);
      if ((lVar6 != 0) &&
         ((*(longlong *)(lVar5 + 0xa8) != 0 &&
          (*(longlong *)(lVar5 + 0xa8) == *(longlong *)(lVar6 + 0x70))))) {
        FUN_140f2a520(param_1,plVar4,plVar3);
        FUN_140f29a60(param_1,param_3);
        goto LAB_140f526b9;
      }
    }
  }
  else {
    if ((*param_2 == '\x02') && ((char)param_1[0x138] == '\x01')) {
      pcVar7 = param_2 + 4;
      param_2 = (char *)((longlong)param_1 + 0x9c4);
      goto LAB_140f5261d;
    }
LAB_140f52688:
    FUN_140f50850();
  }
LAB_140f5268d:
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872890,&local_28);
  FUN_14109ee70(param_1);
LAB_140f526b9:
  LOCK();
  lVar5 = param_1[0x1f6];
  *(undefined4 *)(param_1 + 0x1f6) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0xfac) = 1;
  UNLOCK();
  return (int)lVar5;
}



// FUNCTION 140f526f0 FUN_140f526f0 body=759 status=ok
// SIG undefined FUN_140f526f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_140f526f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0 [2];
  longlong local_d8;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x594);
  if (lVar4 != 0) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140f5276c;
  }
  lVar4 = 0;
LAB_140f5276c:
  if (((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) && (lVar4 != 0)) {
    lVar5 = (**(code **)(*param_2 + 0x340))(param_2);
    iVar1 = *(int *)(lVar5 + 0xd8);
    local_d0 = iVar1;
    lVar5 = (**(code **)(*param_3 + 0x340))(param_3);
    iVar2 = *(int *)(lVar5 + 0xd8);
    local_cc = iVar2;
    local_d8 = (**(code **)(*param_2 + 0x370))(param_2);
    lVar5 = (**(code **)(*param_3 + 0x370))(param_3);
    if ((local_d8 != 0) && (lVar5 != 0)) {
      if (iVar1 != -1) {
        (**(code **)(*param_3 + 0x398))(param_3);
        FUN_140f437b0(param_1,&local_d0);
      }
      if (iVar2 != -1) {
        (**(code **)(*param_2 + 0x398))(param_2);
        FUN_140f437b0(param_1,&local_cc);
      }
      local_e0[0] = 0xffffffff;
      FUN_14170c210(local_e0,lVar5);
      local_e4 = 0xffffffff;
      FUN_14170c210(&local_e4,local_d8);
      local_e8 = 0xffffffff;
      FUN_14170c210(&local_e8,lVar4);
      FWeakObjectPtr::operator=(&local_c8,param_1);
      uVar8 = local_e0[0];
      uVar10 = local_e4;
      uVar9 = local_e8;
      local_d8 = CONCAT44(local_d8._4_4_,local_c4);
      local_b4 = local_c4;
      local_b8 = local_c8;
      local_e8 = 0xffffffff;
      local_b0 = CONCAT44(local_e4,uVar9);
      local_e4 = 0xffffffff;
      local_a8 = local_e0[0];
      local_e0[0] = 0xffffffff;
      local_68 = (longlong *)0x0;
      local_58 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x30,local_88);
      if (puVar6 != (undefined8 *)0x0) {
        local_b0 = 0xffffffffffffffff;
        *puVar6 = &PTR_FUN_14461b860;
        puVar6[1] = param_1;
        *(undefined4 *)(puVar6 + 2) = local_c8;
        *(undefined4 *)((longlong)puVar6 + 0x14) = (undefined4)local_d8;
        *(undefined4 *)(puVar6 + 3) = uVar9;
        uVar9 = 0xffffffff;
        *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar10;
        uVar10 = 0xffffffff;
        *(undefined4 *)(puVar6 + 4) = uVar8;
        uVar8 = 0xffffffff;
        local_a8 = 0xffffffff;
        *(int *)((longlong)puVar6 + 0x24) = iVar1;
        *(int *)(puVar6 + 5) = iVar2;
      }
      local_98[0] = &LAB_140f26b00;
      FUN_14208c260(param_1,local_98);
      if (local_58 != 0) {
        plVar7 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar7 = local_68;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      FUN_1416f8340(uVar8);
      FUN_1416f8340(uVar10);
      FUN_1416f8340(uVar9);
      FUN_1416f8340(local_e8);
      FUN_1416f8340(local_e4);
      FUN_1416f8340(local_e0[0]);
      FUN_14109ed60(param_1);
    }
  }
  LOCK();
  uVar9 = *(undefined4 *)(param_1 + 0xfb0);
  *(undefined4 *)(param_1 + 0xfb0) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0xfac) = 1;
  UNLOCK();
  return uVar9;
}



// FUNCTION 140f529f0 FUN_140f529f0 body=1319 status=ok
// SIG undefined FUN_140f529f0(void)

void FUN_140f529f0(longlong param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong local_d8 [18];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [24];
  
  *(undefined8 *)(param_1 + 0xb30) = 0;
  *(undefined8 *)(param_1 + 0xb38) = 0;
  if (*(char *)(param_1 + 0xdc8) == param_2) {
    return;
  }
  if (param_2 == '\x01') {
    if (*(longlong *)(param_1 + 0xa88) != 0) {
      local_d8[0xe] = 0;
      local_d8[0xf] = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 0xe,0);
      FGenericPlatformString::Memcpy(local_d8[0xe],L"unlockDescription",0x24);
      FUN_142088910(*(undefined8 *)(param_1 + 0xa88),local_d8 + 0xe);
      if (local_d8[0xe] != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x2c0) != 0) {
      local_d8[0x10] = 0;
      local_d8[0x11] = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 0x10,0);
      FGenericPlatformString::Memcpy(local_d8[0x10],L"lockedDescription",0x24);
      FUN_142088910(*(undefined8 *)(param_1 + 0x2c0),local_d8 + 0x10);
      if (local_d8[0x10] != 0) {
        FMemory::Free();
      }
    }
    if ((*(longlong *)(param_1 + 0x6e0) != 0) && (*(longlong *)(param_1 + 0x6e8) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x6e8) + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x6d8,param_1 + 0xd48,1,0);
      }
    }
  }
  else {
    if (param_2 != '\x02') {
      if (param_2 == '\x03') {
        if (*(longlong *)(param_1 + 0x2c0) != 0) {
          local_d8[8] = 0;
          local_d8[9] = 9;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 8,0);
          FGenericPlatformString::Memcpy(local_d8[8],L"menuIdle",0x12);
          FUN_142088910(*(undefined8 *)(param_1 + 0x2c0),local_d8 + 8);
          if (local_d8[8] != 0) {
            FMemory::Free();
          }
        }
      }
      else if (param_2 == '\x04') {
        if (*(longlong *)(param_1 + 0xa88) != 0) {
          local_d8[4] = 0;
          local_d8[5] = 0x12;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 4,0);
          FGenericPlatformString::Memcpy(local_d8[4],L"cosmeticInfoPanel",0x24);
          FUN_142088910(*(undefined8 *)(param_1 + 0xa88),local_d8 + 4);
          if (local_d8[4] != 0) {
            FMemory::Free();
          }
        }
        if (*(longlong *)(param_1 + 0x2c0) != 0) {
          local_d8[6] = 0;
          local_d8[7] = 10;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 6,0);
          FGenericPlatformString::Memcpy(local_d8[6],L"focusPerk",0x14);
          FUN_142088910(*(undefined8 *)(param_1 + 0x2c0),local_d8 + 6);
          if (local_d8[6] != 0) {
            FMemory::Free();
          }
        }
      }
      else if (param_2 == '\x05') {
        if (*(longlong *)(param_1 + 0xa88) != 0) {
          local_d8[0] = 0;
          local_d8[1] = 0xd;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
          FGenericPlatformString::Memcpy(local_d8[0],L"rewardsPanel",0x1a);
          FUN_142088910(*(undefined8 *)(param_1 + 0xa88),local_d8);
          if (local_d8[0] != 0) {
            FMemory::Free();
          }
        }
        if (*(longlong *)(param_1 + 0x2c0) != 0) {
          local_d8[2] = 0;
          local_d8[3] = 0xc;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 2,0);
          FGenericPlatformString::Memcpy(local_d8[2],L"focusReward",0x18);
          FUN_142088910(*(undefined8 *)(param_1 + 0x2c0),local_d8 + 2);
          if (local_d8[2] != 0) {
            FMemory::Free();
          }
        }
      }
      goto LAB_140f52eed;
    }
    if (*(longlong *)(param_1 + 0x2c0) != 0) {
      local_d8[10] = 0;
      local_d8[0xb] = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 10,0);
      FGenericPlatformString::Memcpy(local_d8[10],L"allLockedOn",0x18);
      FUN_142088910(*(undefined8 *)(param_1 + 0x2c0),local_d8 + 10);
      if (local_d8[10] != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0xa88) != 0) {
      local_d8[0xc] = 0;
      local_d8[0xd] = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 0xc,0);
      FGenericPlatformString::Memcpy(local_d8[0xc],L"unlockDescription",0x24);
      FUN_142088910(*(undefined8 *)(param_1 + 0xa88),local_d8 + 0xc);
      if (local_d8[0xc] != 0) {
        FMemory::Free();
      }
    }
    if ((*(longlong *)(param_1 + 0xa70) != 0) && (*(longlong *)(param_1 + 0xa78) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xa78) + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) {
        uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_30,L"Guardian System Disabled",L"GFxGuardianRankMenu",
                           L"GuardianDisabledHeader");
        FUN_140f4d150(param_1 + 0xa68,uVar4);
      }
    }
    if ((*(longlong *)(param_1 + 0x6e0) != 0) && (*(longlong *)(param_1 + 0x6e8) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x6e8) + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) {
        uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_48,L"All Guardian Stats and Perks are currently Disabled",
                           L"GFxGuardianRankMenu",L"GuardianDisabledText");
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x6d8,uVar4,1,0);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_40 + 1;
          lVar2 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
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
      }
    }
  }
  if (*(longlong *)(param_1 + 0xae0) != 0) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0xae0) + 0x170);
    (**(code **)(*plVar5 + 0x38))(plVar5,0);
  }
  if (*(longlong *)(param_1 + 0xac0) != 0) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0xac0) + 0x170);
    (**(code **)(*plVar5 + 0x38))(plVar5,0);
  }
LAB_140f52eed:
  *(char *)(param_1 + 0xdc8) = param_2;
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return;
}



// FUNCTION 140f52f20 FUN_140f52f20 body=1005 status=ok
// SIG undefined FUN_140f52f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140f52f20(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8 [272];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = (**(code **)(*param_2 + 0x370))(param_2);
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = FUN_140e97230(param_1);
  if (lVar4 == 0) {
    return 0;
  }
  local_1d4 = 0xffffffff;
  FUN_14170c210(&local_1d4,lVar3);
  local_1d8 = 0xffffffff;
  FUN_14170c210(&local_1d8,lVar4);
  uVar11 = local_1d4;
  uVar12 = local_1d8;
  local_1d8 = 0xffffffff;
  local_1d4 = 0xffffffff;
  local_68 = (longlong *)0x0;
  local_58 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_88);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_14461b890;
    *(undefined4 *)(puVar5 + 1) = uVar12;
    uVar12 = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0xc) = uVar11;
    uVar11 = 0xffffffff;
  }
  local_98[0] = &LAB_140f26e40;
  FUN_14208c260(param_1,local_98);
  if (local_58 != 0) {
    plVar10 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar10 = local_68;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar11);
  FUN_1416f8340(uVar12);
  FUN_1416f8340(local_1d8);
  FUN_1416f8340(local_1d4);
  lVar6 = (**(code **)(*param_2 + 0x340))(param_2);
  lVar7 = FUN_140c42900(lVar4,lVar3);
  lVar8 = FUN_140f2b5e0(param_1);
  if (lVar8 != 0) {
    uVar9 = FUN_140f2b5e0(param_1);
    cVar2 = FUN_143003580(uVar9);
    if (cVar2 == '\0') {
      bVar1 = true;
      goto LAB_140f530e2;
    }
  }
  bVar1 = false;
LAB_140f530e2:
  if (((lVar7 == 0) || (*(int *)(lVar6 + 0xd8) == -1)) || (!bVar1)) {
    local_1d0 = 0;
    local_1c8 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872890,&local_1d0);
    FUN_14109ee70(param_1);
    uVar9 = 0;
  }
  else {
    local_1d8 = 0xffffffff;
    FUN_14170c210(&local_1d8,lVar3);
    local_1d4 = 0xffffffff;
    FUN_14170c210(&local_1d4,lVar4);
    local_1c0 = param_1;
    FUN_140e9a4f0(local_1b8,lVar6);
    local_a8 = local_1d4;
    local_a4 = local_1d8;
    local_1d8 = 0xffffffff;
    local_1d4 = 0xffffffff;
    local_68 = (longlong *)0x0;
    local_58 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x128,local_88);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_14461b8a8;
      puVar5[1] = local_1c0;
      FUN_140e9a4f0(puVar5 + 2,local_1b8);
      *(undefined4 *)(puVar5 + 0x24) = local_a8;
      local_a8 = 0xffffffff;
      *(undefined4 *)((longlong)puVar5 + 0x124) = local_a4;
      local_a4 = 0xffffffff;
    }
    local_98[0] = &LAB_140f26b40;
    FUN_14208c260(param_1);
    if (local_58 != 0) {
      plVar10 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar10 = local_68;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(local_a4);
    FUN_1416f8340(local_a8);
    FUN_140e9c360(local_1b8);
    FUN_1416f8340(local_1d4);
    FUN_1416f8340(local_1d8);
    _guard_xfg_dispatch_icall_nop(&local_1c0,0,0x110);
    lVar3 = *param_2;
    uVar9 = FUN_140ed0240(&local_1c0);
    (**(code **)(lVar3 + 0x330))(param_2,uVar9);
    FUN_140e9c360(&local_1c0);
    local_1d0 = 0;
    local_1c8 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468728a0,&local_1d0);
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 140f53310 FUN_140f53310 body=161 status=ok
// SIG undefined FUN_140f53310(void)

void FUN_140f53310(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0xdb0) != 0) {
    if (*(longlong *)(param_1 + 0x430) != 0) {
      cVar1 = FUN_142dd3d20();
      if (cVar1 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0xdb0) + 0x278))(*(longlong **)(param_1 + 0xdb0),1);
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0xdb0) + 0x170);
                    /* WARNING: Could not recover jumptable at 0x000140f53366. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x38))(plVar2,1);
        return;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xdb0) + 0x278))(*(longlong **)(param_1 + 0xdb0),0);
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0xdb0) + 0x170);
    (**(code **)(*plVar2 + 0x38))(plVar2,0);
    local_18 = 0;
    uStack_10 = 0;
    FUN_142ed36d0(param_1,&local_18,0);
  }
  return;
}



// FUNCTION 140f533c0 FUN_140f533c0 body=419 status=ok
// SIG undefined FUN_140f533c0(void)

void FUN_140f533c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x58c);
  if (cVar6 == '\0') {
    lVar7 = 0;
  }
  else {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
    lVar7 = *(longlong *)(lVar7 + 0x840);
  }
  if (lVar7 != 0) {
    uVar8 = FUN_142e43690();
    lVar7 = AGameStateBase::OnRep_GameModeClass(lVar7,uVar8);
    if (lVar7 != 0) {
      lVar9 = FUN_142e43690();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_140f53450;
    }
  }
  lVar7 = 0;
LAB_140f53450:
  FText::FText(local_28,param_1 + 0x680);
  if (*(longlong *)(param_1 + 0x720) != 0) {
    if (lVar7 != 0) {
      lVar9 = *(longlong *)(lVar7 + 0x2a0);
      lVar7 = lVar9 + (longlong)*(int *)(lVar7 + 0x2a8) * 0x28;
      for (; lVar9 != lVar7; lVar9 = lVar9 + 0x28) {
        lVar4 = *(longlong *)(lVar9 + 0x10);
        if (lVar4 != 0) {
          lVar10 = UCircularThrobber::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            FText::operator=(local_28,lVar4 + 0x168);
            break;
          }
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x720) + 0x2b0))
              (*(longlong **)(param_1 + 0x720),local_28,1,0);
  }
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
  return;
}



// FUNCTION 140f53570 FUN_140f53570 body=199 status=ok
// SIG undefined FUN_140f53570(void)

void FUN_140f53570(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined2 *puVar7;
  longlong local_18;
  longlong *local_10;
  
  cVar6 = UNF_CustomizationStatics::IsWeaponType(param_2);
  FUN_140f2b890(param_1,&local_18);
  if (local_18 != 0) {
    puVar7 = (undefined2 *)PTR_u_yellow_14629e110;
    if ((cVar6 == '\0') &&
       (cVar6 = AGameSession::RequiresPushToTalk(param_1),
       puVar7 = (undefined2 *)PTR_u_gray_14629e118, cVar6 != '\x01')) {
      if (*(int *)(param_1 + 0x368) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = *(undefined2 **)(param_1 + 0x360);
      }
    }
    FUN_14203e030(local_18,puVar7);
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



// FUNCTION 140f53660 FUN_140f53660 body=277 status=ok
// SIG undefined FUN_140f53660(void)

void FUN_140f53660(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    if (*(longlong **)(param_1 + 0x4d8) != (longlong *)0x0) {
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      lVar4 = **(longlong **)(param_1 + 0x4d8);
      uVar6 = FText::AsNumber(local_28,param_2,0,&local_38);
      (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x4d8),uVar6,0,0);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_20 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      plVar5 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_30 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_30)(plStack_30);
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
    plVar5 = *(longlong **)(param_1 + 0x2b8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x278))(plVar5,(int)param_2 != 0);
    }
    return;
  }
  *(int *)(param_1 + 0x4e0) = (int)param_2;
  return;
}



// FUNCTION 140f53780 FUN_140f53780 body=276 status=ok
// SIG undefined FUN_140f53780(void)

void FUN_140f53780(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong **)(param_1 + 0x768) != (longlong *)0x0) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    lVar5 = **(longlong **)(param_1 + 0x768);
    uVar6 = FText::AsNumber(local_28,param_2,0,&local_38);
    (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x768),uVar6,1,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
    plVar1 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_30 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
    if (*(longlong *)(param_1 + 0x760) != 0) {
      FUN_142088910(*(longlong *)(param_1 + 0x760),param_1 + 0x738);
    }
    if (((int)param_2 == 0) && (*(longlong *)(param_1 + 0x758) != 0)) {
      FUN_142088910(*(longlong *)(param_1 + 0x758),param_1 + 0x728);
    }
  }
  return;
}



// FUNCTION 140f538a0 FUN_140f538a0 body=292 status=ok
// SIG undefined FUN_140f538a0(void)

void FUN_140f538a0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  float fVar6;
  
  cVar1 = FUN_142d52a00(param_2);
  if (cVar1 == '\0') {
    return;
  }
  uVar2 = FUN_142d52a20(param_2);
  uVar2 = FArchive::operator<<(uVar2);
  fVar6 = (float)FUN_142d5fed0(uVar2);
  iVar5 = (int)fVar6;
  if (iVar5 == (int)param_1[199]) {
    return;
  }
  if (((int)param_1[199] == 0) && (0 < iVar5)) {
    if ((char)param_1[0xee] == '\0') {
      cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xba);
      if (cVar1 != '\0') {
        uVar2 = FWeakObjectPtr::Get(param_1 + 0xba);
        cVar1 = FUN_142ebe1d0(uVar2,param_1);
        if ((cVar1 != '\0') && (cVar1 = FUN_142ebd920(param_1), cVar1 != '\0')) {
          (**(code **)(*param_1 + 0x578))(param_1,1);
        }
      }
      lVar3 = FUN_140eccbe0(param_1);
      if (lVar3 != 0) {
        FUN_140ccad40(lVar3,5);
        *(undefined1 *)(param_1 + 0xee) = 1;
      }
      goto LAB_140f539a9;
    }
    lVar3 = param_1[0xeb];
    if (lVar3 == 0) goto LAB_140f539a9;
    plVar4 = param_1 + 0xd9;
  }
  else {
    if ((iVar5 != 0) || (lVar3 = param_1[0xeb], lVar3 == 0)) goto LAB_140f539a9;
    plVar4 = param_1 + 0xdb;
  }
  FUN_142088910(lVar3,plVar4);
LAB_140f539a9:
  *(int *)(param_1 + 199) = iVar5;
  FUN_140f53780(param_1,iVar5);
  return;
}



// FUNCTION 140f539d0 FUN_140f539d0 body=423 status=ok
// SIG undefined FUN_140f539d0(void)

void FUN_140f539d0(longlong param_1,undefined8 param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  fVar8 = *(float *)(param_1 + 0x6c0);
  if ((param_3 != fVar8) || ((int)param_2 != *(int *)(param_1 + 0x6c4))) {
    if (*(longlong *)(param_1 + 0x660) != 0) {
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      uVar7 = FText::AsNumber(local_38,param_2,0,&local_48);
      FUN_142f0c7d0(*(undefined8 *)(param_1 + 0x660),uVar7);
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
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      plVar1 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_40 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_40)(plStack_40);
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
      FUN_142ef4810(*(undefined8 *)(param_1 + 0x660),param_3);
      fVar8 = *(float *)(param_1 + 0x6c0);
    }
    if (fVar8 <= param_3) {
      if ((fVar8 < param_3) && (*(longlong *)(param_1 + 0x660) != 0)) {
        FUN_142f03c80();
      }
    }
    else {
      cVar6 = FUN_14208d120(param_1,param_1 + 0x668,L"edgeFlash");
      if (cVar6 != '\0') {
        FUN_14203e030(*(undefined8 *)(param_1 + 0x668),&DAT_14460b584);
      }
      cVar6 = FUN_14208d120(param_1,param_1 + 0x678,L"hitDetectAnim");
      if (cVar6 != '\0') {
        FUN_14203e030(*(undefined8 *)(param_1 + 0x678),&DAT_14460bb24);
      }
      if (*(longlong *)(param_1 + 0x660) != 0) {
        FUN_142f12c40();
      }
    }
    *(float *)(param_1 + 0x6c0) = param_3;
    *(int *)(param_1 + 0x6c4) = (int)param_2;
  }
  return;
}



// FUNCTION 140f53b80 FUN_140f53b80 body=655 status=ok
// SIG undefined FUN_140f53b80(void)

void FUN_140f53b80(longlong param_1,undefined8 param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined4 uVar11;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar10 = (float)param_2;
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar14 = fVar10 * 0.017453292;
  if (fVar14 < 0.0) {
    fVar12 = fVar14 * 0.15915494 - 0.5;
  }
  else {
    fVar12 = fVar14 * 0.15915494 + 0.5;
  }
  fVar14 = fVar14 - (float)(int)fVar12 * 6.2831855;
  if (fVar14 <= 1.5707964) {
    fVar12 = param_3;
    if (-1.5707964 <= fVar14) goto LAB_140f53c35;
    auVar7 = ZEXT812(0xc0490fdb);
  }
  else {
    auVar7 = ZEXT812(0x40490fdb);
  }
  fVar14 = auVar7._0_4_ - fVar14;
  uVar11 = 0;
  in_XMM1_Dc = auVar7._8_4_;
  in_XMM1_Dd = 0;
  fVar12 = -param_3;
LAB_140f53c35:
  fVar13 = fVar14 * fVar14;
  auVar8._4_4_ = uVar11;
  auVar8._0_4_ = fVar13;
  auVar8._8_4_ = in_XMM1_Dc;
  auVar8._12_4_ = in_XMM1_Dd;
  auVar9._4_12_ = auVar8._4_12_;
  auVar9._0_4_ = fVar13 * 2.3889859e-08;
  FUN_14208ff10(auVar9._0_8_,
                ((0.16666667 -
                 (((2.7525562e-06 - auVar9._0_4_) * fVar13 - 0.00019840874) * fVar13 + 0.008333331)
                 * fVar13) * fVar13 - 1.0) * fVar14 * param_3,
                ((0.5 - (((2.4760495e-05 - fVar13 * 2.6051615e-07) * fVar13 - 0.0013888378) * fVar13
                        + 0.041666638) * fVar13) * fVar13 - 1.0) * fVar12);
  plVar3 = *(longlong **)(param_1 + 0x1d8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar6) {
      LOCK();
      bVar6 = iVar5 == (int)plVar3[1];
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar6) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x1d0) != 0) {
            FUN_142054b00(*(longlong *)(param_1 + 0x1d0),(double)-fVar10);
          }
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
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x1a8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar6) {
      LOCK();
      bVar6 = iVar5 == (int)plVar3[1];
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar6) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        if (*(longlong *)(param_1 + 0x1a0) != 0) {
          FUN_142054b00(*(longlong *)(param_1 + 0x1a0),(double)-fVar10);
        }
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return;
        }
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 != 1) {
          return;
        }
        (**(code **)(*plVar3 + 8))(plVar3,1);
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 140f53e10 FUN_140f53e10 body=275 status=ok
// SIG undefined FUN_140f53e10(void)

void FUN_140f53e10(longlong param_1,char param_2,char param_3)

{
  longlong local_18 [2];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((param_2 == '\x05') || (param_2 == '\x06')) {
    if (*(longlong *)(param_1 + 0x758) != 0) {
      FUN_142088cf0(*(longlong *)(param_1 + 0x758),param_1 + 0x748);
    }
    if (param_3 == '\0') {
      if (*(longlong *)(param_1 + 0x5f0) == 0) {
        return;
      }
      local_18[1] = 0x11;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"reinitializeAnim",0x22);
      FUN_142088910(*(undefined8 *)(param_1 + 0x5f0),local_18);
    }
    else {
      *(undefined1 *)(param_1 + 0x5f9) = 1;
      if (*(longlong *)(param_1 + 0x5f0) == 0) {
        return;
      }
      local_18[1] = 4;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],&DAT_144613768,8);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x5f0),local_18);
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f53f30 FUN_140f53f30 body=304 status=ok
// SIG undefined FUN_140f53f30(void)

void FUN_140f53f30(longlong param_1,char param_2,char param_3)

{
  longlong local_18 [2];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_2 != '\x01') {
    if ((param_2 == '\x02') || (param_2 == '\x03')) {
      if (param_3 != '\0') {
        return;
      }
    }
    else if (param_2 != '\x06') {
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x660) != 0) {
    local_18[0] = 0;
    local_18[1] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"initialization",0x1e);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x660),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if (param_3 == '\0') {
    if (*(longlong *)(param_1 + 0x5f0) != 0) {
      local_18[0] = 0;
      local_18[1] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"reinitializeAnim",0x22);
      FUN_142088910(*(undefined8 *)(param_1 + 0x5f0),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x5f9) = 1;
  return;
}



// FUNCTION 140f54060 FUN_140f54060 body=781 status=ok
// SIG undefined FUN_140f54060(void)

void FUN_140f54060(longlong param_1)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_142ecd4d0();
  uVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
  uVar14 = 0;
  if (uVar9 != 0) {
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140f540d5;
  }
  uVar9 = uVar14;
LAB_140f540d5:
  local_68 = 0;
  local_60 = 0;
  if ((*(longlong *)(param_1 + 0x6a0) != 0) && (uVar15 = uVar14, 0 < *(int *)(param_1 + 0x6c8))) {
    do {
      cVar7 = FUN_142c48f90(*(undefined8 *)(uVar15 + *(longlong *)(param_1 + 0x6c0)),uVar9,
                            *(undefined8 *)(param_1 + 0x698));
      iVar13 = (int)uVar14;
      if (cVar7 != '\0') {
        puVar11 = (undefined8 *)
                  FText::ToString(*(longlong *)(param_1 + 0x6c0) + 8 + (longlong)iVar13 * 0x20);
        uVar14 = local_60;
        pvVar3 = (void *)*puVar11;
        iVar16 = *(int *)(puVar11 + 1) + -1;
        if (*(int *)(puVar11 + 1) == 0) {
          iVar16 = 0;
        }
        if (iVar16 != 0) {
          iVar6 = (int)local_60;
          lVar10 = (longlong)(int)local_60;
          iVar8 = (uint)((int)local_60 == 0) + (int)local_60 + iVar16;
          local_60 = CONCAT44(local_60._4_4_,iVar8);
          if (local_60._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar14 & 0xffffffff);
          }
          pvVar2 = (void *)(local_68 + (lVar10 - (ulonglong)(iVar6 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar16 * 2);
          *(undefined2 *)((longlong)iVar16 * 2 + (longlong)pvVar2) = 0;
        }
        if (iVar13 < *(int *)(param_1 + 0x6c8) + -1) {
          local_58 = (void *)0x0;
          local_50 = 2;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          pvVar3 = local_58;
          FGenericPlatformString::Memcpy(local_58,&DAT_14460783c,4);
          uVar14 = local_60;
          if (((int)local_50 != 0) && (iVar16 = (int)local_50 + -1, iVar16 != 0)) {
            iVar6 = (int)local_60;
            lVar10 = (longlong)(int)local_60;
            iVar8 = (uint)((int)local_60 == 0) + (int)local_60 + iVar16;
            local_60 = CONCAT44(local_60._4_4_,iVar8);
            if (local_60._4_4_ < iVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar14 & 0xffffffff);
            }
            pvVar2 = (void *)(local_68 + (lVar10 - (ulonglong)(iVar6 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar16 * 2);
            *(undefined2 *)((longlong)iVar16 * 2 + (longlong)pvVar2) = 0;
          }
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
        }
      }
      uVar14 = (ulonglong)(iVar13 + 1U);
      uVar15 = uVar15 + 0x20;
    } while ((int)(iVar13 + 1U) < *(int *)(param_1 + 0x6c8));
  }
  plVar4 = *(longlong **)(param_1 + 0x6a8);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_1 + 0x6d0,1,0);
  }
  if (*(longlong **)(param_1 + 0x6a0) != (longlong *)0x0) {
    lVar10 = **(longlong **)(param_1 + 0x6a0);
    uVar12 = FText::FromString(local_48,&local_68);
    (**(code **)(lVar10 + 0x2b0))(*(undefined8 *)(param_1 + 0x6a0),uVar12,1,0);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  if (local_68 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f54370 FUN_140f54370 body=895 status=ok
// SIG undefined FUN_140f54370(void)

void FUN_140f54370(longlong param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong local_res8 [2];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  float local_a8;
  float local_a4;
  int local_a0 [2];
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  float *local_70;
  float *local_68;
  int *local_60;
  uint *local_58;
  longlong *local_50;
  undefined1 *local_48;
  
  local_res18[0] = param_3;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xdb0);
  if (cVar1 != '\0') {
    if (param_2 != '\0') {
      local_res8[0] = param_1;
      uVar6 = FUN_140f23790(local_res8,0,param_1 + 0x918,param_1 + 0x930,
                            *(undefined8 *)(param_1 + 0xb18));
      *(undefined4 *)(param_1 + 0xdd0) = uVar6;
      uVar6 = FUN_140f23790(local_res8,1,param_1 + 0x948,param_1 + 0x960,
                            *(undefined8 *)(param_1 + 0xb20));
      *(undefined4 *)(param_1 + 0xdd4) = uVar6;
      uVar6 = FUN_140f23790(local_res8,2,param_1 + 0x978,param_1 + 0x990,
                            *(undefined8 *)(param_1 + 0xb28));
      *(undefined4 *)(param_1 + 0xdd8) = uVar6;
    }
    if (*(longlong *)(param_1 + 0xae0) != 0) {
      iVar2 = FUN_142eb7450();
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      local_res8[0] = CONCAT44(local_res8[0]._4_4_,iVar2);
      iVar2 = FUN_142eb62e0(*(undefined8 *)(param_1 + 0xae0));
      local_80 = 0xb;
      local_88 = 0;
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 0xdcc) = iVar2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      FGenericPlatformString::Memcpy(local_88,L"perkTreeMC",0x16);
      local_98 = (longlong *)0x0;
      local_90 = 0;
      cVar1 = FUN_140ecf270(param_1,param_1 + 0xa80,&local_88,0,6,&local_98);
      plVar5 = local_98;
      for (iVar2 = (int)local_90; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_98 != (longlong *)0x0) {
        FMemory::Free(local_98);
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        cVar1 = FUN_14208d2d0(*(undefined8 *)(param_1 + 0xa80),param_1 + 0xb70,L"upArrow");
        if (cVar1 != '\0') {
          if (((int)local_res8[0] < 2) || (*(int *)(param_1 + 0xdcc) == 0)) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
          FUN_142056670(*(undefined8 *)(param_1 + 0xb70),uVar3);
        }
        cVar1 = FUN_14208d2d0(*(undefined8 *)(param_1 + 0xa80),param_1 + 0xb80,L"downArrow");
        if (cVar1 != '\0') {
          if (((int)local_res8[0] < 2) || ((int)local_res8[0] + -1 <= *(int *)(param_1 + 0xdcc))) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
          FUN_142056670(*(undefined8 *)(param_1 + 0xb80),uVar3);
        }
      }
      cVar1 = FUN_142ebe030(param_1);
      if (cVar1 == '\0') {
        local_res20[0] = *(uint *)(param_1 + 0xda8);
      }
      else {
        local_res20[0] = *(uint *)(param_1 + 0xdac);
      }
      if (*(longlong *)(param_1 + 0xae0) == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_142eb7480(*(longlong *)(param_1 + 0xae0));
      }
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      uVar4 = (longlong)iVar2 % (longlong)(int)local_res20[0] & 0xffffffff;
      local_70 = &local_a8;
      if ((int)((longlong)iVar2 % (longlong)(int)local_res20[0]) == 0) {
        uVar4 = (ulonglong)local_res20[0];
      }
      local_68 = &local_a4;
      local_a0[0] = (int)uVar4;
      local_60 = local_a0;
      local_58 = local_res20;
      local_50 = local_res8;
      local_48 = local_res18;
      local_a8 = (float)(int)local_res20[0] * (1.0 / (float)iVar2);
      local_a4 = (float)local_a0[0] * (1.0 / (float)iVar2);
      local_78 = param_1;
      FUN_140f21330(&local_78,uVar4,*(undefined8 *)(param_1 + 0xb18));
      FUN_140f21330(&local_78);
      FUN_140f21330(&local_78);
    }
  }
  return;
}



// FUNCTION 140f546f0 FUN_140f546f0 body=80 status=ok
// SIG undefined FUN_140f546f0(void)

void FUN_140f546f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_140f26d20;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 140f54740 FUN_140f54740 body=669 status=ok
// SIG undefined FUN_140f54740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f54740(undefined8 param_1,undefined4 *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  longlong *local_138;
  undefined4 local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  longlong *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_148 = 0xffffffff;
  uVar5 = FUN_1416f8720(*param_2);
  FUN_14170c210(&local_148,uVar5);
  local_144 = 0xffffffff;
  uVar5 = FUN_1416f8720(param_2[1]);
  FUN_14170c210(&local_144,uVar5);
  local_140 = *(undefined8 *)(param_2 + 2);
  local_138 = *(longlong **)(param_2 + 4);
  if (local_138 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_138 + 1) = (int)local_138[1] + 1;
    UNLOCK();
  }
  local_130 = param_2[6];
  local_128 = *(longlong *)(param_2 + 8);
  if (local_128 != 0) {
    LOCK();
    *(int *)(local_128 + 0x48) = *(int *)(local_128 + 0x48) + 1;
    UNLOCK();
  }
  FWeakObjectPtr::operator=(&local_120,param_1);
  local_110 = local_120;
  local_10c = local_11c;
  local_108 = 0xffffffff;
  local_118 = param_1;
  uVar5 = FUN_1416f8720(local_148);
  FUN_14170c210(&local_108,uVar5);
  local_104 = 0xffffffff;
  uVar5 = FUN_1416f8720(local_144);
  FUN_14170c210(&local_104,uVar5);
  local_100 = local_140;
  local_f8 = local_138;
  if (local_138 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_138 + 1) = (int)local_138[1] + 1;
    UNLOCK();
  }
  local_f0 = local_130;
  local_e8 = local_128;
  if (local_128 != 0) {
    LOCK();
    *(int *)(local_128 + 0x48) = *(int *)(local_128 + 0x48) + 1;
    UNLOCK();
  }
  local_98 = (longlong *)0x0;
  local_88 = 0;
  local_e0 = param_3;
  puVar6 = (undefined8 *)FUN_140438ef0(0x48,local_b8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_14461b7d0;
    puVar6[1] = local_118;
    *(undefined4 *)(puVar6 + 2) = local_110;
    *(undefined4 *)((longlong)puVar6 + 0x14) = local_10c;
    FUN_140f16ab0(puVar6 + 3,&local_108);
    *(undefined1 *)(puVar6 + 8) = local_e0;
  }
  local_c8[0] = &LAB_140f26a10;
  uVar5 = FUN_1420849a0(param_1,local_78,local_c8);
  FUN_14208c300(param_1,uVar5);
  if (local_38 != 0) {
    plVar7 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar7 = local_48;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    plVar7 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar7 = local_98;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_140ddef50(&local_108);
  if (local_128 != 0) {
    LOCK();
    piVar1 = (int *)(local_128 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  plVar7 = local_138;
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_138 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_138)(local_138);
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
  FUN_1416f8340(local_144);
  FUN_1416f8340(local_148);
  return;
}



// FUNCTION 140f549e0 FUN_140f549e0 body=479 status=ok
// SIG undefined FUN_140f549e0(void)

void FUN_140f549e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  FUN_140ad4c90(param_1,&local_c0);
  uVar8 = 0xffffffff;
  if (local_c0 != 0) {
    cVar6 = FTcpMessageTransportConnection::Init(local_c0);
    if (cVar6 != '\0') {
      local_res20[0] = 0xffffffff;
      if (*(longlong *)(param_1 + 0x6c0) != 0) {
        FUN_14170c210(local_res20);
      }
      local_res18[0] = 0xffffffff;
      if (*(longlong *)(param_1 + 0x650) != 0) {
        FUN_14170c210(local_res18);
      }
      local_res10[0] = 0xffffffff;
      if (*(longlong *)(param_1 + 0x638) != 0) {
        FUN_14170c210(local_res10);
      }
      FWeakObjectPtr::operator=(&local_b0,param_1);
      uVar9 = local_res20[0];
      uVar11 = local_res18[0];
      uVar10 = local_res10[0];
      local_9c = local_ac;
      local_a0 = local_b0;
      local_res10[0] = 0xffffffff;
      local_98 = CONCAT44(local_res18[0],uVar10);
      local_res18[0] = 0xffffffff;
      local_90 = local_res20[0];
      local_res20[0] = 0xffffffff;
      local_58 = 0;
      local_48 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x28,local_78);
      if (puVar7 != (undefined8 *)0x0) {
        local_98 = 0xffffffffffffffff;
        *puVar7 = &PTR_FUN_14461b788;
        puVar7[1] = param_1;
        *(undefined4 *)(puVar7 + 2) = local_b0;
        *(undefined4 *)((longlong)puVar7 + 0x14) = local_ac;
        *(undefined4 *)(puVar7 + 3) = uVar10;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar11;
        *(undefined4 *)(puVar7 + 4) = uVar9;
        local_90 = 0xffffffff;
        uVar10 = uVar8;
        uVar11 = uVar8;
        uVar9 = uVar8;
      }
      local_88[0] = &LAB_140f26e90;
      FUN_14204c370(local_c0,local_88);
      FUN_1416f8340(uVar9);
      FUN_1416f8340(uVar11);
      FUN_1416f8340(uVar10);
      FUN_1416f8340(local_res10[0]);
      FUN_1416f8340(local_res18[0]);
      FUN_1416f8340(local_res20[0]);
    }
  }
  plVar5 = local_b8;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  return;
}



// FUNCTION 140f54bc0 FUN_140f54bc0 body=596 status=ok
// SIG undefined FUN_140f54bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f54bc0(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  longlong local_e8;
  undefined4 uStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  undefined4 uStack_c4;
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar1 = FWeakObjectPtr::IsValid(param_1 + 0x1f0);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x1f0);
  if (cVar2 == '\0') {
    uVar7 = (undefined4)_DAT_1468b5d90;
    uVar8 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
    local_100 = DAT_1468b5d98;
  }
  else {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x1f0);
    lVar3 = *(longlong *)(lVar3 + 0x168);
    if (lVar3 == 0) {
      uVar7 = (undefined4)_DAT_1468b5d90;
      uVar8 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
      local_100 = DAT_1468b5d98;
    }
    else {
      uVar7 = *(undefined4 *)(lVar3 + 0x220);
      uVar8 = *(undefined4 *)(lVar3 + 0x224);
      local_100 = *(float *)(lVar3 + 0x228);
    }
  }
  local_108 = CONCAT44(uVar8,uVar7);
  local_f8 = local_108;
  local_f0 = local_100;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x1f0);
  if (cVar2 == '\0') {
    fStack_d0 = 0.0;
  }
  else {
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x1f0);
    fStack_d0 = (float)FUN_1409d4e20(uVar4);
  }
  fStack_dc = (float)local_108 - *(float *)(param_1 + 0x1f8);
  local_f0 = local_100 - *(float *)(param_1 + 0x200);
  fStack_d8 = -(local_108._4_4_ - *(float *)(param_1 + 0x1fc));
  uStack_e0 = CONCAT31(uStack_e0._1_3_,uVar1);
  local_c8 = fStack_d0 * fStack_d0;
  local_38 = (longlong *)0x0;
  fStack_cc = fStack_d8 * fStack_d8 + fStack_dc * fStack_dc + local_f0 * local_f0;
  local_28 = 0;
  local_e8 = param_1;
  fStack_d4 = local_f0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x30,local_58);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143f4d098;
    puVar5[1] = local_e8;
    puVar5[2] = CONCAT44(fStack_dc,uStack_e0);
    puVar5[3] = CONCAT44(fStack_d4,fStack_d8);
    puVar5[4] = CONCAT44(fStack_cc,fStack_d0);
    puVar5[5] = CONCAT44(uStack_c4,local_c8);
  }
  local_68[0] = &LAB_140f26a60;
  uVar4 = FUN_1420849a0(param_1,local_b8,local_68);
  FUN_14208c5d0(param_1,uVar4);
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



// FUNCTION 140f54e20 FUN_140f54e20 body=364 status=ok
// SIG undefined FUN_140f54e20(void)

void FUN_140f54e20(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  puVar6 = (undefined8 *)FUN_140ad4c90(param_1,local_b8);
  uVar4 = *puVar6;
  plVar7 = (longlong *)puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  local_78 = 0;
  local_68 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_98);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_14461b758;
    puVar6[1] = uVar4;
    puVar6[2] = plVar7;
    plVar7 = (longlong *)0x0;
  }
  local_28 = 0;
  local_a8[0] = &LAB_140f270e0;
  local_18 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_1444f8920;
    puVar6[1] = param_1;
    *(undefined4 *)(puVar6 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar6 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_140f27030;
  FUN_14208c800(param_1,local_58,local_a8);
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
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_b0 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  return;
}



// FUNCTION 140f54f90 FUN_140f54f90 body=152 status=ok
// SIG undefined FUN_140f54f90(void)

void FUN_140f54f90(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142edc290();
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
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
      *(undefined1 *)(param_1 + 0x770) = *(undefined1 *)(lVar2 + 0x1954);
    }
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    lVar2 = 0x6f8;
    if (*(int *)(param_1 + 0x638) < 1) {
      lVar2 = 0x708;
    }
    FUN_142088910(*(longlong *)(param_1 + 0x758),lVar2 + param_1);
  }
  return;
}



// FUNCTION 140f55030 FUN_140f55030 body=113 status=ok
// SIG undefined FUN_140f55030(void)

void FUN_140f55030(longlong param_1)

{
  longlong local_18 [2];
  
  FUN_142edc290();
  if (*(longlong *)(param_1 + 0x660) != 0) {
    local_18[1] = 8;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"default",0x10);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x660),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f550b0 FUN_140f550b0 body=88 status=ok
// SIG undefined FUN_140f550b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f550b0(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x750) != 0) && (*(longlong **)(param_1 + 0x748) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x750) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f550f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x748) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140f550fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 140f55130 FUN_140f55130 body=83 status=ok
// SIG undefined FUN_140f55130(void)

undefined8 * FUN_140f55130(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77b70;
    puVar1[1] = *param_2;
  }
  *param_1 = &LAB_140f62c80;
  return param_1;
}



// FUNCTION 140f55190 TScriptInterface<IBlendableInterface><UMaterialInterface> body=82 status=ok
// SIG undefined TScriptInterface<IBlendableInterface><UMaterialInterface>(void)

longlong *
TScriptInterface<IBlendableInterface>::TScriptInterface<IBlendableInterface><UMaterialInterface>
          (longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  if (param_2 != 0) {
    uVar1 = UBlendableInterface::GetPrivateStaticClass();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    param_1[1] = lVar2;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 140f551f0 FUN_140f551f0 body=168 status=ok
// SIG undefined FUN_140f551f0(void)

void FUN_140f551f0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar4 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + iVar1) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo();
      iVar4 = (int)param_1[1];
    }
    puVar2 = (undefined8 *)((longlong)iVar4 * 0x40 + *param_1);
    puVar3 = (undefined8 *)*param_2;
    iVar4 = iVar1;
    do {
      *puVar2 = *puVar3;
      FText::FText(puVar2 + 1,puVar3 + 1);
      FText::FText(puVar2 + 4,puVar3 + 4);
      *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(puVar3 + 7);
      *(undefined1 *)((longlong)puVar2 + 0x3c) = *(undefined1 *)((longlong)puVar3 + 0x3c);
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + 8;
      puVar3 = puVar3 + 8;
    } while (iVar4 != 0);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 140f552a0 FUN_140f552a0 body=986 status=ok
// SIG undefined FUN_140f552a0(void)

longlong FUN_140f552a0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
LAB_140f5534f:
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
      if (iVar13 < 1) goto LAB_140f5534f;
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
            goto LAB_140f55364;
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
LAB_140f55364:
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
      if (lVar10 == lVar9) goto LAB_140f554ed;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_4 = FUN_141352c60();
LAB_140f554ed:
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
    lVar9 = FUN_141352c60();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140f5557a;
  }
  lVar10 = 0;
LAB_140f5557a:
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



// FUNCTION 140f55680 FUN_140f55680 body=986 status=ok
// SIG undefined FUN_140f55680(void)

longlong FUN_140f55680(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
LAB_140f5572f:
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
      if (iVar13 < 1) goto LAB_140f5572f;
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
            goto LAB_140f55744;
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
LAB_140f55744:
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
      if (lVar10 == lVar9) goto LAB_140f558cd;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_4 = FUN_141387000();
LAB_140f558cd:
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
    lVar9 = FUN_141387000();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140f5595a;
  }
  lVar10 = 0;
LAB_140f5595a:
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



// FUNCTION 140f55a60 FUN_140f55a60 body=333 status=ok
// SIG undefined FUN_140f55a60(void)

void FUN_140f55a60(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  int *piVar4;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FSimpleLinkNavModifier,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4)
  ;
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    piVar4 = (int *)(param_2 + 0x50);
    do {
      *param_1 = 0;
      param_1[1] = 0;
      *param_1 = *(undefined8 *)(piVar4 + -0x14);
      uVar3 = 0;
      if (*(longlong *)(piVar4 + -0x14) != 0) {
        uVar3 = *(undefined8 *)(piVar4 + -0x12);
      }
      param_1[1] = uVar3;
      uVar3 = *(undefined8 *)(piVar4 + -0xe);
      param_1[2] = *(undefined8 *)(piVar4 + -0x10);
      param_1[3] = uVar3;
      *(int *)(param_1 + 4) = piVar4[-0xc];
      *(int *)((longlong)param_1 + 0x24) = piVar4[-0xb];
      param_1[5] = *(undefined8 *)(piVar4 + -10);
      *(int *)(param_1 + 6) = piVar4[-8];
      *(int *)((longlong)param_1 + 0x34) = piVar4[-7];
      param_1[7] = *(undefined8 *)(piVar4 + -6);
      param_1[8] = *(undefined8 *)(piVar4 + -4);
      param_1[9] = 0;
      iVar2 = *piVar4;
      _Src = *(void **)(piVar4 + -2);
      *(int *)(param_1 + 10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x54) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 9,iVar2,0);
        _guard_xfg_dispatch_icall_nop((void *)param_1[9],_Src,(longlong)iVar2 << 3);
      }
      *(int *)(param_1 + 0xb) = piVar4[2];
      *(int *)((longlong)param_1 + 0x5c) = piVar4[3];
      *(char *)(param_1 + 0xc) = (char)piVar4[4];
      piVar1 = piVar4 + 6;
      piVar4 = piVar4 + 0x1c;
      param_1[0xd] = *(undefined8 *)piVar1;
      param_1 = param_1 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f55bb0 FUN_140f55bb0 body=491 status=ok
// SIG undefined FUN_140f55bb0(void)

longlong FUN_140f55bb0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

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
  longlong lVar10;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar7 = FUN_142056870();
  if (cVar7 != '\0') {
    return 0;
  }
  if (param_3 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar10 = param_3;
    do {
      if (lVar10 == lVar8) goto LAB_140f55c0a;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_3 = FUN_14135a630();
LAB_140f55c0a:
  puVar9 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
  plVar4 = (longlong *)puVar9[1];
  local_58 = *puVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = *(undefined8 *)(param_1 + 0x78);
  plVar5 = *(longlong **)(param_1 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  local_48 = local_58;
  lVar10 = FUN_14203b750(local_38,param_3,param_2,&local_58,param_4,param_5);
  if (lVar10 != 0) {
    lVar8 = FUN_14135a630();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140f55cc6;
  }
  lVar10 = 0;
LAB_140f55cc6:
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
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar10;
}



// FUNCTION 140f55da0 FUN_140f55da0 body=491 status=ok
// SIG undefined FUN_140f55da0(void)

longlong FUN_140f55da0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

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
  longlong lVar10;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar7 = FUN_142056870();
  if (cVar7 != '\0') {
    return 0;
  }
  if (param_3 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar10 = param_3;
    do {
      if (lVar10 == lVar8) goto LAB_140f55dfa;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_3 = UPlatformGameInstance::StaticClass();
LAB_140f55dfa:
  puVar9 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
  plVar4 = (longlong *)puVar9[1];
  local_58 = *puVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = *(undefined8 *)(param_1 + 0x78);
  plVar5 = *(longlong **)(param_1 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  local_48 = local_58;
  lVar10 = FUN_14203b750(local_38,param_3,param_2,&local_58,param_4,param_5);
  if (lVar10 != 0) {
    lVar8 = UPlatformGameInstance::StaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140f55eb6;
  }
  lVar10 = 0;
LAB_140f55eb6:
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
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar10;
}



// FUNCTION 140f55f90 FUN_140f55f90 body=917 status=ok
// SIG undefined FUN_140f55f90(void)

longlong FUN_140f55f90(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
LAB_140f5603f:
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
      if (iVar9 < 1) goto LAB_140f5603f;
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
            goto LAB_140f56054;
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
LAB_140f56054:
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
      if (lVar12 == lVar11) goto LAB_140f561dd;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_141334660();
LAB_140f561dd:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_141334660();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140f5625a;
  }
  lVar12 = 0;
LAB_140f5625a:
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



// FUNCTION 140f56330 FUN_140f56330 body=666 status=ok
// SIG undefined FUN_140f56330(void)

longlong FUN_140f56330(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140f56496;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
LAB_140f56496:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140f56509;
  }
  lVar7 = 0;
LAB_140f56509:
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
  return lVar7;
}



// FUNCTION 140f565d0 FUN_140f565d0 body=666 status=ok
// SIG undefined FUN_140f565d0(void)

longlong FUN_140f565d0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140f56736;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_141359f20();
LAB_140f56736:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_141359f20();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140f567a9;
  }
  lVar7 = 0;
LAB_140f567a9:
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
  return lVar7;
}



// FUNCTION 140f56870 FUN_140f56870 body=666 status=ok
// SIG undefined FUN_140f56870(void)

longlong FUN_140f56870(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140f569d6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_14135a1b0();
LAB_140f569d6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_14135a1b0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140f56a49;
  }
  lVar7 = 0;
LAB_140f56a49:
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
  return lVar7;
}



// FUNCTION 140f56b10 FUN_140f56b10 body=666 status=ok
// SIG undefined FUN_140f56b10(void)

longlong FUN_140f56b10(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140f56c76;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_14135a4d0();
LAB_140f56c76:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_14135a4d0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140f56ce9;
  }
  lVar7 = 0;
LAB_140f56ce9:
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
  return lVar7;
}



// FUNCTION 140f56db0 FUN_140f56db0 body=917 status=ok
// SIG undefined FUN_140f56db0(void)

longlong FUN_140f56db0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
LAB_140f56e5f:
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
      if (iVar9 < 1) goto LAB_140f56e5f;
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
            goto LAB_140f56e74;
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
LAB_140f56e74:
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
      if (lVar12 == lVar11) goto LAB_140f56ffd;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_1413621e0();
LAB_140f56ffd:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_1413621e0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140f5707a;
  }
  lVar12 = 0;
LAB_140f5707a:
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



// FUNCTION 140f57150 FUN_140f57150 body=491 status=ok
// SIG undefined FUN_140f57150(void)

longlong FUN_140f57150(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

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
  longlong lVar10;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar7 = FUN_142056870();
  if (cVar7 != '\0') {
    return 0;
  }
  if (param_3 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar10 = param_3;
    do {
      if (lVar10 == lVar8) goto LAB_140f571aa;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_3 = AGameModeTitleScene::GetPrivateStaticClass();
LAB_140f571aa:
  puVar9 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
  plVar4 = (longlong *)puVar9[1];
  local_58 = *puVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = *(undefined8 *)(param_1 + 0x78);
  plVar5 = *(longlong **)(param_1 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  local_48 = local_58;
  lVar10 = FUN_14203b750(local_38,param_3,param_2,&local_58,param_4,param_5);
  if (lVar10 != 0) {
    lVar8 = AGameModeTitleScene::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140f57266;
  }
  lVar10 = 0;
LAB_140f57266:
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
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar10;
}



// FUNCTION 140f57340 FUN_140f57340 body=666 status=ok
// SIG undefined FUN_140f57340(void)

longlong FUN_140f57340(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140f574a6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_141362060();
LAB_140f574a6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_141362060();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140f57519;
  }
  lVar7 = 0;
LAB_140f57519:
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
  return lVar7;
}



// FUNCTION 140f575e0 FUN_140f575e0 body=666 status=ok
// SIG undefined FUN_140f575e0(void)

longlong FUN_140f575e0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140f57746;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_140f57746:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140f577b9;
  }
  lVar7 = 0;
LAB_140f577b9:
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
  return lVar7;
}



// FUNCTION 140f57880 FUN_140f57880 body=93 status=ok
// SIG undefined FUN_140f57880(void)

longlong FUN_140f57880(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5e0);
  if (lVar2 != 0) {
    lVar3 = FUN_1413f82e0();
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140f578e0 FUN_140f578e0 body=93 status=ok
// SIG undefined FUN_140f578e0(void)

longlong FUN_140f578e0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x594);
  if (lVar2 != 0) {
    lVar3 = FUN_1413ffe00();
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140f57940 HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_> body=443 status=ok
// SIG undefined HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar8 = iVar6;
    iVar9 = iVar5;
joined_r0x000140f57986:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          cVar4 = FUN_140f5efc0(param_4,param_1 + (iVar6 + 2),param_1 + iVar7);
          if (cVar4 != '\0') {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar10 = param_1 + iVar7;
        puVar1 = param_1 + iVar5;
        cVar4 = FUN_140f5efc0(param_4,puVar1,puVar10);
        if (cVar4 != '\0') {
          if (puVar1 != puVar10) {
            uVar3 = *puVar1;
            *puVar1 = *puVar10;
            *puVar10 = uVar3;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x000140f57986;
        }
      }
      iVar6 = iVar8 + -2;
      iVar5 = iVar9 + -1;
      iVar8 = iVar6;
      iVar9 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + param_2;
    do {
      if (param_1 != puVar10) {
        uVar3 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar6 = iVar5 * 2;
          iVar8 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            cVar4 = FUN_140f5efc0(param_4,param_1 + (iVar6 + 2),param_1 + iVar8);
            if (cVar4 != '\0') {
              iVar8 = iVar6;
            }
            iVar8 = iVar8 + 1;
          }
          puVar1 = param_1 + iVar8;
          puVar2 = param_1 + iVar5;
          cVar4 = FUN_140f5efc0(param_4,puVar2,puVar1);
          if (cVar4 == '\0') break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar5 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140f57b00 IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_> body=706 status=ok
// SIG undefined IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar8 = &local_348;
    do {
      puVar6 = (undefined8 *)*plVar8;
      puVar10 = (undefined8 *)plVar8[1];
      local_358 = plVar8[2];
      lVar3 = ((longlong)puVar10 - (longlong)puVar6 >> 3) + 1;
      puVar9 = puVar6;
      iVar7 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_140f57be0:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar6 = puVar9 + (lVar3 >> 1);
          if (puVar6 != puVar9) {
            uVar1 = *puVar6;
            *puVar6 = *puVar9;
            *puVar9 = uVar1;
          }
          puVar4 = puVar10 + 1;
          puVar6 = puVar9;
LAB_140f57c17:
          puVar6 = puVar6 + 1;
          if (puVar6 <= puVar10) goto code_r0x000140f57c20;
          goto LAB_140f57c32;
        }
        for (; puVar4 = puVar9, puVar6 = puVar9, puVar9 < puVar10; puVar10 = puVar10 + -1) {
          while (puVar6 = puVar6 + 1, puVar6 <= puVar10) {
            cVar2 = FUN_140f5efc0(param_4,puVar4,puVar6);
            if (cVar2 != '\0') {
              puVar4 = puVar6;
            }
          }
          if (puVar4 != puVar10) {
            uVar1 = *puVar4;
            *puVar4 = *puVar10;
            *puVar10 = uVar1;
          }
        }
        goto LAB_140f57d0f;
      }
LAB_140f57d00:
      HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
                (puVar6,lVar3,param_3,param_4);
LAB_140f57d0f:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  return;
code_r0x000140f57c20:
  cVar2 = FUN_140f5efc0(param_4,puVar9,puVar6);
  if (cVar2 == '\0') goto LAB_140f57c17;
LAB_140f57c32:
  do {
    puVar5 = puVar4;
    puVar4 = puVar5 + -1;
    if (puVar4 <= puVar9) break;
    cVar2 = FUN_140f5efc0(param_4,puVar4,puVar9);
  } while (cVar2 == '\0');
  if (puVar6 <= puVar4) {
    if (puVar6 != puVar4) {
      uVar1 = *puVar6;
      *puVar6 = *puVar4;
      *puVar4 = uVar1;
    }
    goto LAB_140f57c17;
  }
  if (puVar9 != puVar4) {
    uVar1 = *puVar9;
    *puVar9 = *puVar4;
    *puVar4 = uVar1;
  }
  iVar7 = iVar7 + -1;
  if ((longlong)((longlong)puVar4 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar10 - (longlong)puVar6 & 0xfffffffffffffff8U)) {
    if (puVar6 < puVar10) {
      *plVar8 = (longlong)puVar6;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar7;
      plVar8 = plVar8 + 3;
    }
    if (puVar4 <= puVar9 + 1) goto LAB_140f57d0f;
    puVar10 = puVar5 + -2;
    puVar6 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar4) {
      *plVar8 = (longlong)puVar9;
      plVar8[1] = (longlong)(puVar5 + -2);
      *(int *)(plVar8 + 2) = iVar7;
      plVar8 = plVar8 + 3;
    }
    if (puVar10 <= puVar6) goto LAB_140f57d0f;
  }
  lVar3 = ((longlong)puVar10 - (longlong)puVar6 >> 3) + 1;
  puVar9 = puVar6;
  if (iVar7 == 0) goto LAB_140f57d00;
  goto LAB_140f57be0;
}



// FUNCTION 140f57dd0 FUN_140f57dd0 body=69 status=ok
// SIG undefined FUN_140f57dd0(void)

ulonglong FUN_140f57dd0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_14145f370();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140f57e20 FUN_140f57e20 body=69 status=ok
// SIG undefined FUN_140f57e20(void)

ulonglong FUN_140f57e20(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UXGameInstance::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140f57e70 IsA<UTexture2D> body=69 status=ok
// SIG undefined IsA<UTexture2D>(void)

ulonglong UObjectBaseUtility::IsA<UTexture2D>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UTextureRenderTarget2D::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140f57ec0 FUN_140f57ec0 body=89 status=ok
// SIG undefined FUN_140f57ec0(void)

void FUN_140f57ec0(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_142e27720();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140f57f20 FUN_140f57f20 body=879 status=ok
// SIG undefined FUN_140f57f20(void)

bool FUN_140f57f20(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f57fdf:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f57fdf;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140f57ff4;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140f57ff4:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140f5822f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140f5817d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141334660();
LAB_140f5817d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140f581f6:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_141334660();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140f581f6;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_140f5822f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140f58290 FUN_140f58290 body=879 status=ok
// SIG undefined FUN_140f58290(void)

bool FUN_140f58290(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f5834f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f5834f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140f58364;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140f58364:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140f5859f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140f584ed;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141340f60();
LAB_140f584ed:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140f58566:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_141340f60();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140f58566;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_140f5859f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140f58600 FUN_140f58600 body=879 status=ok
// SIG undefined FUN_140f58600(void)

bool FUN_140f58600(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f586bf:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f586bf;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140f586d4;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140f586d4:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140f5890f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140f5885d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UMobBaseAnim::GetPrivateStaticClass();
LAB_140f5885d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140f588d6:
    lVar11 = 0;
  }
  else {
    lVar10 = UMobBaseAnim::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140f588d6;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_140f5890f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140f58970 FUN_140f58970 body=879 status=ok
// SIG undefined FUN_140f58970(void)

bool FUN_140f58970(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f58a2f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f58a2f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140f58a44;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140f58a44:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140f58c7f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140f58bcd;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141362bb0();
LAB_140f58bcd:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140f58c46:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_141362bb0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140f58c46;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_140f58c7f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140f58ce0 FUN_140f58ce0 body=879 status=ok
// SIG undefined FUN_140f58ce0(void)

bool FUN_140f58ce0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f58d9f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f58d9f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140f58db4;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140f58db4:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140f58fef;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140f58f3d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
LAB_140f58f3d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140f58fb6:
    lVar11 = 0;
  }
  else {
    lVar10 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140f58fb6;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_140f58fef:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140f59050 FUN_140f59050 body=491 status=ok
// SIG undefined FUN_140f59050(void)

bool FUN_140f59050(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

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
  longlong lVar10;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*param_2 != 0) goto LAB_140f59223;
  cVar7 = FUN_142056870(param_1,param_3);
  if (cVar7 != '\0') goto LAB_140f59223;
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar10 = param_4;
    do {
      if (lVar10 == lVar8) goto LAB_140f590b6;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_4 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_140f590b6:
  puVar9 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
  plVar4 = (longlong *)puVar9[1];
  local_58 = *puVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = *(undefined8 *)(param_1 + 0x78);
  plVar5 = *(longlong **)(param_1 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  local_48 = local_58;
  lVar10 = FUN_14203b750(local_38,param_4,param_3,&local_58,param_5,param_6);
  if (lVar10 == 0) {
LAB_140f59172:
    lVar10 = 0;
  }
  else {
    lVar8 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140f59172;
  }
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
  *param_2 = lVar10;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
LAB_140f59223:
  return *param_2 != 0;
}



// FUNCTION 140f59240 FUN_140f59240 body=879 status=ok
// SIG undefined FUN_140f59240(void)

bool FUN_140f59240(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f592ff:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f592ff;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140f59314;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140f59314:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140f5954f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140f5949d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141362a50();
LAB_140f5949d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140f59516:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_141362a50();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140f59516;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_140f5954f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140f595b0 FUN_140f595b0 body=879 status=ok
// SIG undefined FUN_140f595b0(void)

bool FUN_140f595b0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f5966f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f5966f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140f59684;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140f59684:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140f598bf;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140f5980d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_142f20520();
LAB_140f5980d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140f59886:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_142f20520();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140f59886;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_140f598bf:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140f59920 FUN_140f59920 body=491 status=ok
// SIG undefined FUN_140f59920(void)

bool FUN_140f59920(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

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
  longlong lVar10;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*param_2 != 0) goto LAB_140f59af3;
  cVar7 = FUN_142056870(param_1,param_3);
  if (cVar7 != '\0') goto LAB_140f59af3;
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar10 = param_4;
    do {
      if (lVar10 == lVar8) goto LAB_140f59986;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_4 = UAnimSharingStateInstance::GetPrivateStaticClass();
LAB_140f59986:
  puVar9 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
  plVar4 = (longlong *)puVar9[1];
  local_58 = *puVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = *(undefined8 *)(param_1 + 0x78);
  plVar5 = *(longlong **)(param_1 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  local_48 = local_58;
  lVar10 = FUN_14203b750(local_38,param_4,param_3,&local_58,param_5,param_6);
  if (lVar10 == 0) {
LAB_140f59a42:
    lVar10 = 0;
  }
  else {
    lVar8 = UAnimSharingStateInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140f59a42;
  }
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
  *param_2 = lVar10;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
LAB_140f59af3:
  return *param_2 != 0;
}



// FUNCTION 140f59b10 FUN_140f59b10 body=603 status=ok
// SIG undefined FUN_140f59b10(void)

int FUN_140f59b10(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  int local_res18;
  undefined **local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined **local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  iVar2 = (int)param_1[1];
  lVar9 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  lVar10 = *param_1;
  iVar11 = 0;
  local_b8 = *(undefined8 *)(lVar10 + 8);
  local_b0 = *(longlong *)(lVar10 + 0x10);
  local_res18 = 0;
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
    UNLOCK();
  }
  local_98 = *(undefined4 *)(lVar10 + 0x28);
  uStack_94 = *(undefined4 *)(lVar10 + 0x2c);
  uStack_90 = *(undefined4 *)(lVar10 + 0x30);
  uStack_8c = *(undefined4 *)(lVar10 + 0x34);
  local_a8 = 0;
  local_c0 = &PTR_FUN_143f740c8;
  local_a0 = 0;
  cVar4 = FUniqueNetIdWrapper::operator==(&local_c0);
  FUN_1404bf980(&local_c0);
  bVar12 = cVar4 == '\0';
  lVar10 = 0;
  iVar5 = iVar11;
  do {
    iVar6 = iVar5 + 1;
    lVar10 = lVar10 + 1;
    if (lVar10 < lVar9) {
      lVar8 = lVar10 * 0x38;
      do {
        lVar3 = *param_1;
        local_80 = *(undefined8 *)(lVar3 + 8 + lVar8);
        local_78 = *(longlong *)(lVar3 + 0x10 + lVar8);
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
          UNLOCK();
        }
        puVar1 = (undefined4 *)(lVar3 + 0x28 + lVar8);
        local_60 = *puVar1;
        uStack_5c = puVar1[1];
        uStack_58 = puVar1[2];
        uStack_54 = puVar1[3];
        local_70 = 0;
        local_88 = &PTR_FUN_143f740c8;
        local_68 = 0;
        cVar4 = FUniqueNetIdWrapper::operator==(&local_88);
        FUN_1404bf980(&local_88);
        iVar11 = local_res18;
        if (bVar12 != (cVar4 == '\0')) break;
        iVar6 = iVar6 + 1;
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 0x38;
      } while (lVar10 < lVar9);
    }
    iVar7 = iVar6 - iVar5;
    if (bVar12 == false) {
      lVar8 = (longlong)iVar5 * 0x38 + *param_1;
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        FUN_1404bf980(lVar8);
        lVar8 = lVar8 + 0x38;
      }
    }
    else {
      if (iVar11 != iVar5) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 * 0x38 + *param_1),
                   (void *)((longlong)iVar5 * 0x38 + *param_1),(longlong)iVar7 * 0x38);
      }
      iVar11 = iVar11 + iVar7;
      local_res18 = iVar11;
    }
    bVar12 = (bool)(bVar12 ^ 1);
    iVar5 = iVar6;
    if (lVar9 <= lVar10) {
      *(int *)(param_1 + 1) = iVar11;
      return iVar2 - iVar11;
    }
  } while( true );
}



// FUNCTION 140f59d70 FSharedReferencer<1> body=59 status=ok
// SIG undefined FSharedReferencer<1>(void)

longlong *
SharedPointerInternals::FSharedReferencer<1>::FSharedReferencer<1>
          (longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    iVar2 = *(int *)(lVar1 + 8);
    bVar3 = iVar2 == 0;
    if (bVar3) {
      *(int *)(lVar1 + 8) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    while (!bVar3) {
      LOCK();
      bVar3 = iVar2 == *(int *)(lVar1 + 8);
      if (bVar3) {
        *(int *)(lVar1 + 8) = iVar2 + 1;
      }
      UNLOCK();
      if (bVar3) {
        return param_1;
      }
      LOCK();
      iVar2 = *(int *)(lVar1 + 8);
      bVar3 = iVar2 == 0;
      if (bVar3) {
        *(int *)(lVar1 + 8) = 0;
        iVar2 = 0;
      }
      UNLOCK();
    }
    *param_1 = 0;
  }
  return param_1;
}



// FUNCTION 140f59db0 FBoxSphereBounds body=181 status=ok
// SIG undefined FBoxSphereBounds(void)

undefined8 * FBoxSphereBounds::FBoxSphereBounds(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[5];
  fVar2 = param_2[2];
  *(ulonglong *)((longlong)param_1 + 0xc) =
       CONCAT44((param_2[4] - param_2[1]) * 0.5,(param_2[3] - *param_2) * 0.5);
  *(float *)((longlong)param_1 + 0x14) = (fVar1 - fVar2) * 0.5;
  fVar1 = param_2[2];
  *param_1 = CONCAT44(*(float *)(param_1 + 2) + param_2[1],
                      *(float *)((longlong)param_1 + 0xc) + *param_2);
  *(float *)(param_1 + 1) = *(float *)((longlong)param_1 + 0x14) + fVar1;
  *(float *)(param_1 + 3) =
       SQRT(*(float *)((longlong)param_1 + 0xc) * *(float *)((longlong)param_1 + 0xc) +
            *(float *)(param_1 + 2) * *(float *)(param_1 + 2) +
            *(float *)((longlong)param_1 + 0x14) * *(float *)((longlong)param_1 + 0x14));
  return param_1;
}



// FUNCTION 140f59e70 FUN_140f59e70 body=212 status=ok
// SIG undefined FUN_140f59e70(void)

undefined1 * FUN_140f59e70(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[8];
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = param_2[0x51];
  param_1[0x52] = param_2[0x52];
  param_1[0x53] = param_2[0x53];
  param_1[0x54] = param_2[0x54];
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  return param_1;
}



// FUNCTION 140f59f50 FUN_140f59f50 body=138 status=ok
// SIG undefined FUN_140f59f50(void)

longlong FUN_140f59f50(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (*(undefined8 *)(param_1 + 0x38),0xe,"elementalIcon",0xe,0x3f);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  FText::FText(param_1 + 0x58);
  return param_1;
}



// FUNCTION 140f59fe0 FUN_140f59fe0 body=398 status=ok
// SIG undefined FUN_140f59fe0(void)

undefined8 * FUN_140f59fe0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140f5a170();
  lVar2 = 7;
  *param_1 = &PTR_FUN_144630a68;
  lVar1 = (longlong)param_1 + 0x644;
  do {
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined8 *)(lVar1 + 4) = 0;
    *(undefined8 *)(lVar1 + 0xc) = 0;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined8 *)(lVar1 + 0x1c) = 0;
    *(undefined8 *)(lVar1 + 0x24) = 0;
    *(undefined8 *)(lVar1 + 0x2c) = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(lVar1 + 0x24,0);
    FGenericPlatformString::Convert<char,wchar_t>
              (*(undefined8 *)(lVar1 + 0x24),0xe,"elementalIcon",0xe,0x3f);
    *(undefined8 *)(lVar1 + 0x34) = 0;
    *(undefined8 *)(lVar1 + 0x3c) = 0;
    FText::FText(lVar1 + 0x44);
    lVar1 = lVar1 + 0x70;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x12a,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x12a],0x14,"leftContainerWidget",0x14,0x3f)
  ;
  param_1[300] = 0;
  param_1[0x12d] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 300,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[300],0x15,"rightContainerWidget",0x15,0x3f);
  *(undefined1 *)(param_1 + 0xc6) = 0;
  *(undefined1 *)(param_1 + 0xd4) = 1;
  *(undefined1 *)(param_1 + 0xe2) = 2;
  *(undefined1 *)(param_1 + 0xf0) = 3;
  *(undefined1 *)(param_1 + 0xfe) = 4;
  *(undefined1 *)(param_1 + 0x10c) = 5;
  *(undefined1 *)(param_1 + 0x11a) = 6;
  return param_1;
}



// FUNCTION 140f5a170 FUN_140f5a170 body=548 status=ok
// SIG undefined FUN_140f5a170(void)

undefined8 * FUN_140f5a170(undefined8 *param_1)

{
  FUN_140e9ac50();
  *param_1 = &PTR__scalar_deleting_destructor__1446301d8;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4d9) = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0x9e] = AK::MemoryMgr::StartProfileThreadUsage;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x564) = 0x40000000;
  *(undefined4 *)(param_1 + 0xad) = 0xffffffff;
  param_1[0xae] = 0;
  param_1[0xaf] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xae,0);
  FGenericPlatformString::Memcpy(param_1[0xae],&DAT_144603cf8,10);
  param_1[0xb0] = 0;
  param_1[0xb1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb0,0);
  FGenericPlatformString::Memcpy(param_1[0xb0],&DAT_1446307a0,10);
  param_1[0xb2] = 0;
  param_1[0xb3] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb2,0);
  FGenericPlatformString::Memcpy(param_1[0xb2],&DAT_144603d04,6);
  param_1[0xb4] = 0;
  param_1[0xb5] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb4,0);
  FGenericPlatformString::Memcpy(param_1[0xb4],&DAT_14461a048,8);
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined4 *)(param_1 + 0xba) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5dc) = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xbf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5fa) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5fc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x604) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x614) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x61c) = 0;
  *(undefined1 *)(param_1 + 0xc4) = 1;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  return param_1;
}



// FUNCTION 140f5a3a0 ~TArray<FCollisionNotifyInfo,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FCollisionNotifyInfo,FDefaultAllocator>(void)

void TArray<FCollisionNotifyInfo,FDefaultAllocator>::~TArray<FCollisionNotifyInfo,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x48);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xe;
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



// FUNCTION 140f5a400 ~TArray<FLILeaderboardDataRequestUE4,TSizedDefaultAllocator<32>_> body=173 status=ok
// SIG undefined ~TArray<FLILeaderboardDataRequestUE4,TSizedDefaultAllocator<32>_>(void)

void TArray<FLILeaderboardDataRequestUE4,TSizedDefaultAllocator<32>_>::
     ~TArray<FLILeaderboardDataRequestUE4,TSizedDefaultAllocator<32>_>(longlong *param_1)

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
      plVar7 = plVar7 + 7;
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



// FUNCTION 140f5a4b0 FUN_140f5a4b0 body=171 status=ok
// SIG undefined FUN_140f5a4b0(void)

void FUN_140f5a4b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x60);
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
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140f5a560 FUN_140f5a560 body=192 status=ok
// SIG undefined FUN_140f5a560(void)

void FUN_140f5a560(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x530) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x520);
    if (*(longlong **)(param_1 + 0x520) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x500);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x520) != 0) {
    FMemory::Free();
  }
  TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
  ::
  ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
            (param_1 + 0x4e0);
  FUN_140e9c6b0(param_1);
  return;
}



// FUNCTION 140f5a620 FUN_140f5a620 body=661 status=ok
// SIG undefined FUN_140f5a620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f5a620(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b4 = (undefined4)param_1[1];
  local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_b8);
  FUN_14172a400(local_b8);
  cVar3 = FWeakObjectPtr::IsValid(&local_b4);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_b4);
    lVar7 = 0;
    iVar2 = *(int *)(lVar5 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar8 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar8;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    if ((((*(uint *)(lVar7 + 8) & 0x30000000) == 0) &&
        (plVar6 = (longlong *)FUN_140eccbe0(*param_1), plVar6 != (longlong *)0x0)) &&
       (lVar7 = (**(code **)(*plVar6 + 0x148))(plVar6), lVar7 != 0)) {
      lVar5 = *param_1;
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar6 + 1,lVar5);
        plVar6[2] = (longlong)FUN_140f69da0;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar6[4] = lVar5;
        *plVar6 = (longlong)&PTR_FUN_143f4d1b8;
      }
      if (*(longlong *)(lVar7 + 400) == 0) {
        uVar9 = *(undefined8 *)(lVar7 + 0x3f8);
      }
      else {
        uVar9 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
      }
      lVar7 = *param_1;
      local_a8 = 0;
      local_a0 = 0;
      uVar1 = *(undefined4 *)(lVar7 + 0x80c);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_c0 = 0xbf800000;
      local_c8 = 1;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar9,lVar7 + 0x810,&local_a8,uVar1);
      if (local_48 != 0) {
        plVar10 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar10 = local_58;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar7 = FMemory::Realloc(plVar6,0,0);
        if (lVar7 != 0) {
          FMemory::Free(lVar7);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f5a8c0 FUN_140f5a8c0 body=1362 status=ok
// SIG undefined FUN_140f5a8c0(void)

void FUN_140f5a8c0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  wchar_t *pwVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  wchar_t *pwVar15;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 uStackX_14;
  int local_48;
  int local_44;
  longlong local_40;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  uStackX_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  pwVar15 = (wchar_t *)0x0;
  if (cVar6 != '\0') {
    lVar8 = FWeakObjectPtr::Get(&local_res10);
    iVar2 = *(int *)(lVar8 + 0xc);
    pwVar11 = pwVar15;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar12 = iVar2 >> 0x1f & 0xffff;
      uVar7 = iVar2 + uVar12;
      pwVar11 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18);
    }
    if ((*(uint *)(pwVar11 + 4) & 0x30000000) == 0) {
      bVar4 = true;
      goto LAB_140f5a94e;
    }
  }
  bVar4 = false;
LAB_140f5a94e:
  if (bVar4) {
    cVar6 = FWeakObjectPtr::IsValid(param_1 + 3);
    if ((cVar6 != '\0') && (lVar8 = FWeakObjectPtr::Get(param_1 + 3), lVar8 != 0)) {
      lVar9 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_1407665e0(lVar8 + 0x1050,*param_1);
        FUN_1407665e0(lVar8 + 0x1090,*param_1);
        FUN_1407665e0(lVar8 + 0x10a0,*param_1);
      }
    }
    lVar8 = FUN_140eccca0(*param_1);
    if (lVar8 != 0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&UGFxItemCardAbbreviated::OnWeaponChanged",L"::");
      pwVar11 = pwVar15;
      while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar11 = pwVar5;
      }
      FName::FName(&local_res10,pwVar11 + 2,1);
      lVar9 = CONCAT44(uStackX_14,local_res10);
      uVar3 = *param_1;
      plVar1 = (longlong *)(lVar8 + 0x1050);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,uVar3);
      local_res8 = 0;
      local_40 = lVar9;
      if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_40);
      }
      piVar13 = (int *)*plVar1;
      iVar2 = *(int *)(lVar8 + 0x1058);
      for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar2 * 4; piVar14 = piVar14 + 4) {
        if (((*piVar14 == local_48) && (piVar14[1] == local_44)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar14), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((bVar4) && (*(longlong *)(piVar14 + 2) == local_40)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140f5ab44;
          break;
        }
      }
      iVar2 = *(int *)(lVar8 + 0x1058);
      *(int *)(lVar8 + 0x1058) = iVar2 + 1;
      if (*(int *)(lVar8 + 0x105c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar13 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar13 = local_48;
      piVar13[1] = local_44;
      *(longlong *)(piVar13 + 2) = local_40;
LAB_140f5ab44:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      pwVar10 = _guard_xfg_dispatch_icall_nop
                          (L"&UGFxItemCardAbbreviated::OnCompareToEquippedItem",L"::");
      pwVar11 = pwVar15;
      while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar11 = pwVar5;
      }
      FName::FName(&local_res10,pwVar11 + 2,1);
      lVar9 = CONCAT44(uStackX_14,local_res10);
      uVar3 = *param_1;
      plVar1 = (longlong *)(lVar8 + 0x1090);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,uVar3);
      local_res8 = 0;
      local_40 = lVar9;
      if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_40);
      }
      piVar13 = (int *)*plVar1;
      iVar2 = *(int *)(lVar8 + 0x1098);
      for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar2 * 4; piVar14 = piVar14 + 4) {
        if (((*piVar14 == local_48) && (piVar14[1] == local_44)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar14), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((bVar4) && (*(longlong *)(piVar14 + 2) == local_40)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140f5ac94;
          break;
        }
      }
      iVar2 = *(int *)(lVar8 + 0x1098);
      *(int *)(lVar8 + 0x1098) = iVar2 + 1;
      if (*(int *)(lVar8 + 0x109c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar13 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar13 = local_48;
      piVar13[1] = local_44;
      *(longlong *)(piVar13 + 2) = local_40;
LAB_140f5ac94:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      pwVar11 = _guard_xfg_dispatch_icall_nop
                          (L"&UGFxItemCardAbbreviated::OnEndCompareToEquippedItem",L"::");
      while (pwVar10 = pwVar11, pwVar10 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
        pwVar15 = pwVar10;
      }
      FName::FName(&local_res10,pwVar15 + 2,1);
      lVar9 = CONCAT44(uStackX_14,local_res10);
      uVar3 = *param_1;
      plVar1 = (longlong *)(lVar8 + 0x10a0);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,uVar3);
      local_res8 = 0;
      local_40 = lVar9;
      if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_40);
      }
      piVar13 = (int *)*plVar1;
      iVar2 = *(int *)(lVar8 + 0x10a8);
      for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar2 * 4; piVar14 = piVar14 + 4) {
        if (((*piVar14 == local_48) && (piVar14[1] == local_44)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar14), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((bVar4) && (*(longlong *)(piVar14 + 2) == local_40)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140f5ade4;
          break;
        }
      }
      iVar2 = *(int *)(lVar8 + 0x10a8);
      *(int *)(lVar8 + 0x10a8) = iVar2 + 1;
      if (*(int *)(lVar8 + 0x10ac) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar13 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar13 = local_48;
      piVar13[1] = local_44;
      *(longlong *)(piVar13 + 2) = local_40;
LAB_140f5ade4:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    }
  }
  return;
}



// FUNCTION 140f5ae20 FUN_140f5ae20 body=122 status=ok
// SIG undefined FUN_140f5ae20(void)

void FUN_140f5ae20(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x788));
  *(undefined8 *)(lVar1 + 0x780) = 0;
  *(undefined8 *)(lVar1 + 0x790) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x788));
  *(undefined1 *)(*param_1 + 0xc2c) = 0;
  if (*(char *)(*param_1 + 0xc20) != '\0') {
    *(undefined1 *)(*param_1 + 0xc21) = 1;
    (**(code **)(*(longlong *)*param_1 + 0x580))((longlong *)*param_1,0);
  }
  return;
}



// FUNCTION 140f5aea0 FUN_140f5aea0 body=432 status=ok
// SIG undefined FUN_140f5aea0(void)

void FUN_140f5aea0(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 local_res10;
  
  lVar7 = *param_1;
  local_res8 = *(undefined4 *)(lVar7 + 0x1088);
  uStackX_c = *(undefined4 *)(lVar7 + 0x108c);
  cVar2 = FWeakObjectPtr::IsValid(lVar7 + 0xf38);
  if (cVar2 != '\0') {
    puVar1 = (undefined8 *)(lVar7 + 0x1000);
    *puVar1 = 0;
    *(undefined8 *)(lVar7 + 0x1008) = 0;
    *(undefined8 *)(lVar7 + 0x1010) = 0;
    *(undefined4 *)(lVar7 + 0x1018) = 0;
    cVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (cVar2 == '\0') {
      FUN_140f60770(&local_res10,lVar7 + 0xf40);
      lVar5 = *(longlong *)(lVar7 + 0xff0);
      lVar7 = (longlong)*(int *)(lVar7 + 0xff8) * 0xb0 + lVar5;
      if (lVar5 != lVar7) {
        lVar6 = lVar5 + 0x40;
        do {
          cVar2 = FWeakObjectPtr::IsValid(lVar5);
          if ((cVar2 != '\0') && (cVar2 = FWeakObjectPtr::IsValid(lVar6), cVar2 != '\0')) {
            uVar3 = FWeakObjectPtr::Get(lVar5);
            uVar4 = FWeakObjectPtr::Get(lVar6);
            FUN_1424a3300(uVar4,uVar3,lVar6 + 8);
            uVar3 = FWeakObjectPtr::Get(lVar5);
            FUN_1423424e0(uVar3);
          }
          cVar2 = FWeakObjectPtr::IsValid(lVar6 + 0x18);
          if (cVar2 != '\0') {
            uVar3 = FWeakObjectPtr::Get(lVar6 + 0x18);
            FUN_142397540(uVar3,1);
          }
          lVar5 = lVar5 + 0xb0;
          lVar6 = lVar6 + 0xb0;
        } while (lVar5 != lVar7);
      }
    }
    else {
      local_res10 = CONCAT44(uStackX_c,local_res8);
      FUN_140f5e5c0(&local_res10,lVar7 + 0xf40,puVar1);
      lVar5 = *(longlong *)(lVar7 + 0xff0);
      lVar7 = (longlong)*(int *)(lVar7 + 0xff8) * 0xb0 + lVar5;
      if (lVar5 != lVar7) {
        do {
          FUN_140f5e5c0(&local_res10,lVar5,puVar1);
          lVar5 = lVar5 + 0xb0;
        } while (lVar5 != lVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140f5b050 FUN_140f5b050 body=196 status=ok
// SIG undefined FUN_140f5b050(void)

void FUN_140f5b050(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
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
    if (((*(uint *)(lVar4 + 8) & 0x30000000) == 0) &&
       (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x28), cVar2 != '\0')) {
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x28);
      (**(code **)(*plVar5 + 0x2b0))(plVar5,param_1 + 0x10,1,0);
    }
  }
  return;
}



// FUNCTION 140f5b120 FUN_140f5b120 body=419 status=ok
// SIG undefined FUN_140f5b120(void)

void FUN_140f5b120(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res10;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0x18;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"itemCard.itemCardLoader",0x30);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  cVar5 = FUN_140e97ee0(*(undefined8 *)(*param_1 + 0x600),*param_1 + 0x988,&local_28,0,6,&local_38);
  plVar8 = local_38;
  for (iVar9 = (int)local_30; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (cVar5 != '\0') {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxItemTradingMenu::OnItemCardReady",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar1 = *(longlong *)(*param_1 + 0x988);
    FWeakObjectPtr::operator=(lVar1 + 0x198);
    *(longlong *)(lVar1 + 0x1a0) = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar1 + 0x198), lVar7 != 0)) {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar1 + 0x1a0));
    }
    lVar1 = *(longlong *)(*param_1 + 0x988);
    uVar2 = *(undefined8 *)(*param_1 + 0x778);
    if (*(char *)(lVar1 + 0x1a8) == '\0') {
      *(undefined1 *)(lVar1 + 0x1a8) = 1;
      FUN_142ef5f70(lVar1,uVar2);
    }
  }
  return;
}



// FUNCTION 140f5b2d0 FUN_140f5b2d0 body=236 status=ok
// SIG undefined FUN_140f5b2d0(void)

void FUN_140f5b2d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  lVar3 = *param_1;
  lVar2 = *(longlong *)(lVar3 + 0x640);
  if (lVar2 == 0) {
    dVar8 = (double)*(float *)(param_1 + 1);
  }
  else {
    dVar8 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
    lVar2 = local_res8.QuadPart - lVar2;
    dVar9 = (double)lVar2;
    if (lVar2 < 0) {
      dVar9 = dVar9 + 1.8446744073709552e+19;
    }
    lVar3 = *param_1;
    dVar8 = dVar8 * dVar9;
  }
  ((LARGE_INTEGER *)(lVar3 + 0x640))->QuadPart = (LONGLONG)local_res8;
  FUN_140f873e0(*param_1);
  FUN_140f867b0(*param_1,(float)dVar8,1);
  uVar7 = 0;
  plVar5 = *(longlong **)(*param_1 + 0x708);
  uVar4 = (ulonglong)*(int *)(*param_1 + 0x710);
  uVar6 = uVar4 & 0x1fffffffffffffff;
  if (plVar5 + uVar4 < plVar5) {
    uVar6 = uVar7;
  }
  if (uVar6 != 0) {
    do {
      plVar1 = (longlong *)*plVar5;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2a0))(plVar1,(float)dVar8);
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  return;
}



// FUNCTION 140f5b3c0 FUN_140f5b3c0 body=122 status=ok
// SIG undefined FUN_140f5b3c0(void)

void FUN_140f5b3c0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x594);
  if (lVar2 != 0) {
    lVar3 = FUN_1413ffe00();
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
      lVar2 = FUN_140e21bd0(lVar2);
      if (lVar2 != 0) {
        FUN_140e37120(lVar2,(char)param_1[1]);
      }
    }
  }
  return;
}



// FUNCTION 140f5b440 FUN_140f5b440 body=540 status=ok
// SIG undefined FUN_140f5b440(void)

void FUN_140f5b440(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  
  lVar3 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
  pwVar7 = (wchar_t *)0x0;
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
    if (bVar1) {
      lVar3 = FUN_140cff1b0(lVar3);
      if (lVar3 != 0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop
                           (L"&UGFxIronbearExitAnimationWidget::OnInputDeviceChanged",L"::");
        pwVar6 = pwVar7;
        while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar6 = pwVar2;
        }
        FName::FName(&local_res8,pwVar6 + 2,1);
        FUN_14074ba20(lVar3 + 0x5f8,*param_1,FUN_140f77260,local_res8);
      }
      FUN_140f77260(*param_1);
    }
  }
  lVar3 = FWeakObjectPtr::Get(*param_1 + 0x5e0);
  if (lVar3 != 0) {
    lVar4 = FUN_1413ffd50();
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
      pwVar5 = _guard_xfg_dispatch_icall_nop
                         (L"&UGFxIronbearExitAnimationWidget::OnExitStarted",L"::");
      pwVar6 = pwVar7;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar6 = pwVar2;
      }
      FName::FName(&local_res8,pwVar6 + 2,1);
      FUN_14074ba20(lVar3 + 0x22a8,*param_1,&LAB_140ee4340,local_res8);
      pwVar6 = _guard_xfg_dispatch_icall_nop
                         (L"&UGFxIronbearExitAnimationWidget::OnExitCanceled",L"::");
      while (pwVar5 = pwVar6, pwVar5 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar7 = pwVar5;
      }
      FName::FName(&local_res8,pwVar7 + 2,1);
      FUN_14074ba20(lVar3 + 0x22b8,*param_1,&LAB_140ee4050,local_res8);
    }
  }
  return;
}



// FUNCTION 140f5b660 FUN_140f5b660 body=229 status=ok
// SIG undefined FUN_140f5b660(void)

void FUN_140f5b660(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  longlong *local_28;
  longlong local_18;
  
  if (param_2 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_2 + 0x340))(param_2);
    uVar5 = FWeakObjectPtr::Get(lVar4 + 0xdc);
    lVar4 = (**(code **)(*param_2 + 0x340))(param_2);
    FUN_140f665a0(*param_1,&local_38,uVar5,*(undefined8 *)(lVar4 + 0xa8));
    (**(code **)(*param_2 + 0x358))(param_2,&local_38,0);
    if (local_18 != 0) {
      LOCK();
      piVar1 = (int *)(local_18 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    FUN_1416f8340(local_34);
    FUN_1416f8340(local_38);
  }
  return;
}



// FUNCTION 140f5b750 FUN_140f5b750 body=598 status=ok
// SIG undefined FUN_140f5b750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f5b750(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b4 = (undefined4)param_1[1];
  local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_b8);
  FUN_14172a400(local_b8);
  cVar2 = FWeakObjectPtr::IsValid(&local_b4);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_b4);
    lVar5 = 0;
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
       (lVar5 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar5 != 0)) {
      lVar4 = *param_1;
      local_a8 = FUN_140f90d10;
      uStack_a0 = 0;
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar6 + 1,lVar4);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(plVar6 + 3) = uStack_a0;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_9c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar4;
        *plVar6 = (longlong)&PTR_FUN_143f77bd0;
      }
      if (*(longlong *)(lVar5 + 400) == 0) {
        uVar8 = *(undefined8 *)(lVar5 + 0x3f8);
      }
      else {
        uVar8 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
      }
      lVar5 = *param_1;
      local_98 = 0;
      local_90 = 0;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_c0 = 0xbf800000;
      local_c8 = 1;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar8,lVar5 + 0x678,&local_98,0x3f000000);
      if (local_38 != 0) {
        plVar9 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar9 = local_48;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar5 = FMemory::Realloc(plVar6,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f5b9b0 FUN_140f5b9b0 body=954 status=ok
// SIG undefined FUN_140f5b9b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f5b9b0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined4 local_b0;
  float local_a8;
  float local_a4;
  longlong local_a0;
  longlong *local_98;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_b4 = (undefined4)param_1[1];
  local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_b8);
  FUN_14172a400(local_b8);
  cVar6 = FWeakObjectPtr::IsValid(&local_b4);
  if (cVar6 == '\0') {
    return;
  }
  lVar8 = FWeakObjectPtr::Get(&local_b4);
  iVar4 = *(int *)(lVar8 + 0xc);
  if (iVar4 < (int)DAT_1469e91c4) {
    uVar10 = iVar4 >> 0x1f & 0xffff;
    uVar7 = iVar4 + uVar10;
    lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
            (longlong)(int)((uVar7 & 0xffff) - uVar10) * 0x18;
  }
  else {
    lVar8 = 0;
  }
  if ((*(uint *)(lVar8 + 8) & 0x30000000) != 0) {
    return;
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 2);
  if (cVar6 == '\0') {
    return;
  }
  lVar8 = *param_1;
  local_68 = *(undefined8 *)(lVar8 + 0xbf0);
  uStack_60 = *(undefined8 *)(lVar8 + 0xbf8);
  local_48 = *(float *)(lVar8 + 0xc10);
  fStack_44 = *(float *)(lVar8 + 0xc14);
  uStack_40 = *(undefined4 *)(lVar8 + 0xc18);
  uStack_3c = *(undefined4 *)(lVar8 + 0xc1c);
  if (*(float *)(lVar8 + 0xbd8) <= *(float *)(lVar8 + 0xbdc)) {
    fVar14 = *(float *)(lVar8 + 0xbd8) / *(float *)(lVar8 + 0xb94);
  }
  else {
    fVar14 = *(float *)(lVar8 + 0xbdc) / *(float *)(lVar8 + 0xb98);
  }
  if ((*(longlong *)(lVar8 + 0xbc0) != 0) && (1e-08 < *(float *)(lVar8 + 0xbd4))) {
    fVar11 = (float)UCurveFloat::GetFloatValue(*(longlong *)(lVar8 + 0xbc0));
    lVar8 = *param_1;
    local_88 = *(float *)(lVar8 + 0xc10);
    fStack_84 = *(float *)(lVar8 + 0xc14);
    uStack_80 = *(undefined4 *)(lVar8 + 0xc18);
    uStack_7c = *(undefined4 *)(lVar8 + 0xc1c);
    local_48 = local_88 * fVar11 * fVar14;
    fStack_44 = fStack_84 * fVar11 * fVar14;
    uStack_40 = 0;
    uStack_3c = 0;
  }
  FUN_142edae50(lVar8,&local_a8,lVar8 + 0xbe0,1);
  lVar8 = *param_1;
  fVar11 = 0.0;
  cVar6 = *(char *)(lVar8 + 0xb70);
  if (cVar6 != '\0') {
    local_78 = local_48;
    fStack_74 = fStack_44;
    uStack_70 = uStack_40;
    uStack_6c = uStack_3c;
    fVar11 = (*(float *)(lVar8 + 0xb88) + *(float *)(lVar8 + 0x840)) * fStack_44;
  }
  fVar12 = *(float *)((longlong)param_1 + 0x24);
  cVar3 = (char)param_1[3];
  local_a8 = fVar12 + local_a8;
  fVar11 = local_a4 + *(float *)(param_1 + 5) + fVar11;
  if (cVar3 == '\x02') {
    fVar14 = fVar12 + *(float *)(lVar8 + 0xb9c);
    fVar12 = fVar12 + *(float *)(lVar8 + 0xba4);
    if ((fVar14 <= local_a8) && (fVar14 = local_a8, fVar12 <= local_a8)) {
      fVar14 = fVar12;
    }
    fVar12 = *(float *)(param_1 + 5) + *(float *)(lVar8 + 0xba0);
    fVar13 = *(float *)(param_1 + 5) + *(float *)(lVar8 + 0xba8);
    local_a8 = fVar14;
  }
  else {
    if (cVar3 != '\x03') {
      if (cVar3 == '\x01') {
        if (cVar6 == '\0') {
          fVar12 = 50.0;
        }
        else {
          fVar12 = -10.0;
        }
      }
      else {
        fVar12 = fVar11;
        if (cVar6 == '\0') goto LAB_140f5bcb1;
        fVar12 = -10.0;
      }
      fVar13 = *(float *)(param_1 + 5);
      fVar12 = fVar12 * fVar14 + fVar13;
      if (fVar12 <= fVar11) {
        fVar12 = fVar11;
      }
      if ((cVar3 == '\x01') &&
         (fVar14 = ((fVar13 - fVar14 * 10.0) + *(float *)(param_1 + 4)) -
                   (fVar13 + local_a4 + fVar14 * 1200.0), fVar14 < 0.0)) {
        fVar12 = fVar12 + fVar14;
      }
      goto LAB_140f5bcb1;
    }
    fVar14 = fVar12 + *(float *)(lVar8 + 0xbac);
    fVar12 = fVar12 + *(float *)(lVar8 + 0xbb4);
    if ((fVar14 <= local_a8) && (fVar14 = local_a8, fVar12 <= local_a8)) {
      fVar14 = fVar12;
    }
    fVar12 = *(float *)(param_1 + 5) + *(float *)(lVar8 + 0xbb0);
    fVar13 = *(float *)(param_1 + 5) + *(float *)(lVar8 + 3000);
    local_a8 = fVar14;
  }
  if ((fVar12 <= fVar11) && (fVar12 = fVar11, fVar13 <= fVar11)) {
    fVar12 = fVar13;
  }
LAB_140f5bcb1:
  local_58 = CONCAT44(fVar12,local_a8);
  uStack_50 = 0;
  uVar9 = FWeakObjectPtr::Get(param_1 + 2);
  FUN_14208e4e0(uVar9,&local_68);
  FUN_140ad4c90(*param_1,&local_a0);
  if (local_a0 != 0) {
    FUN_142033230();
  }
  plVar5 = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_98 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  return;
}



// FUNCTION 140f5bd70 FUN_140f5bd70 body=165 status=ok
// SIG undefined FUN_140f5bd70(void)

void FUN_140f5bd70(longlong *param_1)

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
    if (((*(uint *)(lVar4 + 8) & 0x30000000) == 0) && (((longlong *)*param_1)[0xf0] == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000140f5be08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*param_1 + 0x5c8))();
      return;
    }
  }
  return;
}



// FUNCTION 140f5be20 FUN_140f5be20 body=212 status=ok
// SIG undefined FUN_140f5be20(void)

void FUN_140f5be20(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
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
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))();
      if (lVar4 != 0) {
        if (*(longlong *)(lVar4 + 400) == 0) {
          uVar5 = *(undefined8 *)(lVar4 + 0x3f8);
        }
        else {
          uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
        }
        lVar4 = *param_1;
        FUN_142880530(uVar5,lVar4 + 0x678);
        *(undefined8 *)(lVar4 + 0x678) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140f5bf00 FUN_140f5bf00 body=318 status=ok
// SIG undefined FUN_140f5bf00(void)

void FUN_140f5bf00(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong local_38 [3];
  undefined4 local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  cVar5 = FUN_142057ba0();
  if (cVar5 != '\0') {
    local_38[0] = 0;
    local_38[1] = 0x20;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"RequestAsyncLoad SingleDelegate",0x40);
    lVar4 = *param_1;
    local_38[2] = 0;
    local_20 = 0;
    puVar6 = (undefined8 *)operator_new(0x20,local_38 + 2);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_GetPoolName_144631440;
      puVar6[2] = lVar4;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[3] = uVar7;
      *puVar6 = &PTR_GetPoolName_144631488;
    }
    FStreamableManager::RequestAsyncLoad
              (DAT_146accf98,local_18,*param_1 + 0x1b8,local_38 + 2,0,0,0,local_38);
    if (local_38[0] != 0) {
      FMemory::Free();
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
  }
  return;
}



// FUNCTION 140f5c040 FUN_140f5c040 body=150 status=ok
// SIG undefined FUN_140f5c040(void)

void FUN_140f5c040(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
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
      FUN_140f89b20(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140f5c0e0 FUN_140f5c0e0 body=544 status=ok
// SIG undefined FUN_140f5c0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f5c0e0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  lVar2 = FUN_1416f8720((int)param_1[1]);
  if (lVar2 != 0) {
    uVar3 = FUN_1416f8720((int)param_1[1]);
    FUN_141356780(*param_1,uVar3);
    lVar4 = FUN_1416f8720((int)param_1[1]);
    lVar2 = *param_1;
    lVar5 = (longlong)*(int *)(lVar2 + 0x710);
    if (*(int *)(lVar2 + 0x710) != 0) {
      iVar10 = 0;
      bVar11 = **(longlong **)(lVar2 + 0x708) != lVar4;
      lVar7 = 0;
      iVar8 = 0;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar8 + 1;
        if (lVar7 < lVar5) {
          plVar6 = (longlong *)(*(longlong *)(lVar2 + 0x708) + lVar7 * 8);
          do {
            if (bVar11 != (*plVar6 != lVar4)) break;
            iVar9 = iVar9 + 1;
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
          } while (lVar7 < lVar5);
        }
        if (bVar11 != false) {
          if (iVar10 != iVar8) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar2 + 0x708) + (longlong)iVar10 * 8),
                       (void *)(*(longlong *)(lVar2 + 0x708) + (longlong)iVar8 * 8),
                       (longlong)(iVar9 - iVar8) << 3);
          }
          iVar10 = iVar10 + (iVar9 - iVar8);
        }
        bVar11 = (bool)(bVar11 ^ 1);
        iVar8 = iVar9;
      } while (lVar7 < lVar5);
      *(int *)(lVar2 + 0x710) = iVar10;
    }
    plVar6 = (longlong *)FUN_1416f8720((int)param_1[1]);
    (**(code **)(*plVar6 + 0x2a8))(plVar6,0);
    uVar3 = FUN_1416f8720((int)param_1[1]);
    FUN_140f8ef30(uVar3,0);
    uVar1 = DAT_1468b5d98;
    uVar3 = _DAT_1468b5d90;
    lVar2 = FUN_1416f8720((int)param_1[1]);
    *(undefined8 *)(lVar2 + 0x230) = uVar3;
    *(undefined4 *)(lVar2 + 0x238) = uVar1;
    lVar2 = FUN_1416f8720((int)param_1[1]);
    *(undefined8 *)(lVar2 + 0x1b8) = _DAT_1468b5d90;
    *(undefined4 *)(lVar2 + 0x1c0) = DAT_1468b5d98;
    *(undefined1 *)(lVar2 + 0x1f7) = 1;
    lVar2 = FUN_1416f8720((int)param_1[1]);
    if (*(longlong *)(lVar2 + 0x1a8) != 0) {
      *(undefined8 *)(lVar2 + 0x1a8) = 0;
    }
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x23c,0);
    uVar3 = FUN_1416f8720((int)param_1[1]);
    FUN_142f06500(uVar3,1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    if (lVar2 == *(longlong *)(*param_1 + 0x748)) {
      *(undefined8 *)(*param_1 + 0x748) = 0;
    }
  }
  return;
}



// FUNCTION 140f5c300 FUN_140f5c300 body=1377 status=ok
// SIG undefined FUN_140f5c300(void)

void FUN_140f5c300(longlong *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong **pplVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong ***ppplVar8;
  longlong *plVar9;
  longlong **pplVar10;
  longlong *plVar11;
  longlong **pplVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int *piVar15;
  longlong **pplVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong ***ppplVar20;
  longlong lVar21;
  longlong *_Src_00;
  undefined8 local_res20;
  longlong ***local_68;
  longlong **local_60;
  longlong ***local_58;
  longlong *local_50;
  undefined8 local_48;
  
  plVar11 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  lVar3 = FWeakObjectPtr::Get(*param_1 + 8);
  local_68 = (longlong ***)(lVar3 + 0x220);
  _Src_00 = plVar11;
  if (0 < *(int *)(param_2 + 0x58) + 1) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_50);
    plVar11 = (longlong *)(local_48 & 0xffffffff);
    _Src_00 = local_50;
  }
  lVar3 = *(longlong *)(param_2 + 0x48);
  local_res20 = 0;
  if (lVar3 != 0) {
    iVar17 = (int)plVar11;
    uVar18 = iVar17 + 1;
    local_48 = CONCAT44(local_48._4_4_,uVar18);
    if (local_48._4_4_ < (int)uVar18) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_50,plVar11);
      lVar3 = *(longlong *)(param_2 + 0x48);
      _Src_00 = local_50;
      uVar18 = (uint)local_48;
    }
    plVar11 = (longlong *)(ulonglong)uVar18;
    _Src_00[iVar17] = lVar3;
  }
  plVar14 = *(longlong **)(param_2 + 0x50);
  plVar4 = plVar14 + *(int *)(param_2 + 0x58);
  if (plVar14 != plVar4) {
    local_res20 = 0;
    do {
      if (*plVar14 != 0) {
        iVar17 = (int)plVar11;
        for (plVar9 = _Src_00; plVar9 != _Src_00 + iVar17; plVar9 = plVar9 + 1) {
          if (*plVar9 == *plVar14) {
            if ((int)((longlong)plVar9 - (longlong)_Src_00 >> 3) != -1) goto LAB_140f5c415;
            break;
          }
        }
        uVar18 = iVar17 + 1;
        local_48 = CONCAT44(local_48._4_4_,uVar18);
        if (local_48._4_4_ < (int)uVar18) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_50,plVar11);
          _Src_00 = local_50;
          uVar18 = (uint)local_48;
        }
        plVar11 = (longlong *)(ulonglong)uVar18;
        _Src_00[iVar17] = *plVar14;
      }
LAB_140f5c415:
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar4);
  }
  iVar17 = (int)plVar11;
  piVar15 = *(int **)(param_2 + 0x60);
  piVar1 = piVar15 + (longlong)*(int *)(param_2 + 0x68) * 10;
joined_r0x000140f5c435:
  if (piVar15 == piVar1) goto LAB_140f5c5d0;
  if (*piVar15 != param_3) goto code_r0x000140f5c445;
  plVar14 = *(longlong **)(piVar15 + 2);
  plVar4 = plVar14 + piVar15[4];
  if (plVar14 != plVar4) {
    local_res20 = 0;
    do {
      if (*plVar14 != 0) {
        iVar17 = (int)plVar11;
        for (plVar9 = _Src_00; plVar9 != _Src_00 + iVar17; plVar9 = plVar9 + 1) {
          if (*plVar9 == *plVar14) {
            if ((int)((longlong)plVar9 - (longlong)_Src_00 >> 3) != -1) goto LAB_140f5c4cc;
            break;
          }
        }
        uVar18 = iVar17 + 1;
        local_48 = CONCAT44(local_48._4_4_,uVar18);
        if (local_48._4_4_ < (int)uVar18) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_50,plVar11);
          _Src_00 = local_50;
          uVar18 = (uint)local_48;
        }
        plVar11 = (longlong *)(ulonglong)uVar18;
        _Src_00[iVar17] = *plVar14;
      }
LAB_140f5c4cc:
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar4);
  }
  iVar17 = (int)plVar11;
  ppplVar8 = *(longlong ****)(piVar15 + 6);
  local_60 = (longlong **)(ppplVar8 + (longlong)piVar15[8] * 4);
  if (ppplVar8 == (longlong ***)local_60) goto LAB_140f5c5d0;
LAB_140f5c4f1:
  pplVar16 = *ppplVar8;
  pplVar12 = pplVar16 + *(int *)(ppplVar8 + 1);
  for (; pplVar16 != pplVar12; pplVar16 = pplVar16 + 1) {
    if (*pplVar16 != (longlong *)0x0) {
      pplVar10 = *local_68;
      pplVar2 = pplVar10 + *(int *)(local_68 + 1);
      for (; pplVar10 != pplVar2; pplVar10 = pplVar10 + 1) {
        if (*pplVar10 == *pplVar16) {
          pplVar16 = ppplVar8[2];
          pplVar12 = pplVar16 + *(int *)(ppplVar8 + 3);
          if (pplVar16 == pplVar12) goto LAB_140f5c5be;
          local_res20 = 0;
          goto LAB_140f5c557;
        }
      }
    }
  }
  goto LAB_140f5c5be;
code_r0x000140f5c445:
  piVar15 = piVar15 + 10;
  goto joined_r0x000140f5c435;
LAB_140f5c557:
  do {
    if (*pplVar16 != (longlong *)0x0) {
      iVar17 = (int)plVar11;
      for (plVar4 = _Src_00; plVar4 != _Src_00 + iVar17; plVar4 = plVar4 + 1) {
        if ((longlong *)*plVar4 == *pplVar16) {
          if ((int)((longlong)plVar4 - (longlong)_Src_00 >> 3) != -1) goto LAB_140f5c5b5;
          break;
        }
      }
      uVar18 = iVar17 + 1;
      local_48 = CONCAT44(local_48._4_4_,uVar18);
      if (local_48._4_4_ < (int)uVar18) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_50,plVar11);
        _Src_00 = local_50;
        uVar18 = (uint)local_48;
      }
      plVar11 = (longlong *)(ulonglong)uVar18;
      _Src_00[iVar17] = (longlong)*pplVar16;
    }
LAB_140f5c5b5:
    pplVar16 = pplVar16 + 1;
  } while (pplVar16 != pplVar12);
LAB_140f5c5be:
  iVar17 = (int)plVar11;
  ppplVar8 = ppplVar8 + 4;
  if (ppplVar8 == (longlong ***)local_60) {
LAB_140f5c5d0:
    if (iVar17 != 0) {
      FWeakObjectPtr::operator=(&local_60,param_2);
      local_68 = (longlong ***)local_60;
      lVar3 = *param_1;
      TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
      ::FindId(lVar3 + 0x70,&local_res20,&local_68);
      if ((int)local_res20 == -1) {
        lVar3 = 0;
      }
      else {
        lVar3 = (longlong)(int)local_res20 * 0x20 + *(longlong *)(lVar3 + 0x70);
      }
      lVar19 = lVar3 + 8;
      if (lVar3 == 0) {
        lVar19 = 0;
      }
      if (lVar19 == 0) {
        FWeakObjectPtr::operator=(&local_60,param_2);
        lVar3 = *param_1;
        local_68 = &local_60;
        FUN_14061dff0(lVar3 + 0x70,&local_res20,&local_68,0);
        pplVar12 = (longlong **)
                   (*(longlong *)(lVar3 + 0x70) + (longlong)(int)local_res20 * 0x20 + 8);
        if (pplVar12 != &local_50) {
          *(int *)(pplVar12 + 1) = iVar17;
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (pplVar12,iVar17,*(undefined4 *)((longlong)pplVar12 + 0xc));
          _guard_xfg_dispatch_icall_nop(*pplVar12,_Src_00,(longlong)iVar17 << 3);
        }
      }
      else {
        for (plVar11 = _Src_00; plVar11 != _Src_00 + iVar17; plVar11 = plVar11 + 1) {
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar19,plVar11);
        }
      }
    }
    uVar5 = (ulonglong)*(int *)(*(longlong *)param_1[1] + 0x378);
    plVar11 = *(longlong **)(*(longlong *)param_1[1] + 0x370);
    ppplVar20 = (longlong ***)0x0;
    ppplVar8 = (longlong ***)(uVar5 & 0x1fffffffffffffff);
    if (plVar11 + uVar5 < plVar11) {
      ppplVar8 = ppplVar20;
    }
    local_68 = ppplVar8;
    if (ppplVar8 != (longlong ***)0x0) {
      do {
        lVar3 = *plVar11;
        if (((*(longlong *)(lVar3 + 0x20) == param_2) && (*(longlong *)(lVar3 + 0x38) != 0)) &&
           (0 < *(int *)(lVar3 + 0x50))) {
          lVar19 = *(longlong *)(*param_1 + 0xc0);
          lVar21 = (longlong)*(int *)(*param_1 + 200) * 0xb0 + lVar19;
          for (; ppplVar8 = local_68, lVar19 != lVar21; lVar19 = lVar19 + 0xb0) {
            lVar6 = FWeakObjectPtr::Get(lVar19);
            lVar7 = FVoicePacketImpl::GetSampleCounter(*(undefined8 *)(lVar3 + 0x38));
            if (*(longlong *)(lVar6 + 0x718) == lVar7) {
              FWeakObjectPtr::operator=(lVar19 + 0x40,*(undefined8 *)(lVar3 + 0x38));
              FWeakObjectPtr::operator=(&local_60,param_2);
              local_58 = &local_60;
              FUN_14061dff0(lVar19 + 0x60,&local_res20,&local_58,0);
              puVar13 = (undefined8 *)
                        (*(longlong *)(lVar19 + 0x60) + (longlong)(int)local_res20 * 0x20 + 8);
              ppplVar8 = local_68;
              if (puVar13 != (undefined8 *)(lVar3 + 0x48)) {
                iVar17 = *(int *)(lVar3 + 0x50);
                _Src = *(void **)(lVar3 + 0x48);
                *(int *)(puVar13 + 1) = iVar17;
                if ((iVar17 == 0) && (*(int *)((longlong)puVar13 + 0xc) == 0)) {
                  *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
                }
                else {
                  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                            (puVar13,iVar17);
                  _guard_xfg_dispatch_icall_nop((void *)*puVar13,_Src,(longlong)iVar17 << 3);
                  ppplVar8 = local_68;
                }
              }
              break;
            }
          }
        }
        plVar11 = plVar11 + 1;
        ppplVar20 = (longlong ***)((longlong)ppplVar20 + 1);
        _Src_00 = local_50;
      } while (ppplVar20 != ppplVar8);
    }
    if (_Src_00 != (longlong *)0x0) {
      FMemory::Free(_Src_00);
    }
    return;
  }
  goto LAB_140f5c4f1;
}



// FUNCTION 140f5c870 FUN_140f5c870 body=671 status=ok
// SIG undefined FUN_140f5c870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f5c870(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  void *_Src;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  void **ppvVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0 [8];
  void *local_b8;
  ulonglong local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  code *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar10 = *param_2;
  lVar12 = (longlong)(int)param_2[1] * 0x110 + lVar10;
  if (lVar10 != lVar12) {
    lVar10 = lVar10 + 0xec;
    do {
      lVar3 = *param_1;
      if (*(char *)(param_1[1] + 0x18) == '\x01') {
        lVar6 = FWeakObjectPtr::Get(lVar10 + -0x10);
        if (lVar6 != 0) {
          lVar7 = FUN_1430b3b80();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            puVar9 = *(undefined8 **)(lVar3 + 0x948);
            puVar1 = puVar9 + (longlong)*(int *)(lVar3 + 0x950) * 3;
            for (; puVar9 != puVar1; puVar9 = puVar9 + 3) {
              if ((puVar9[1] != 0) && (puVar9[1] == *(longlong *)(lVar6 + 0x478))) {
                local_c8 = *puVar9;
                goto LAB_140f5c978;
              }
            }
          }
        }
      }
      else if (*(char *)(param_1[1] + 0x18) == '\x03') {
        puVar9 = *(undefined8 **)(lVar3 + 0x958);
        puVar1 = puVar9 + (longlong)*(int *)(lVar3 + 0x960) * 3;
        for (; puVar9 != puVar1; puVar9 = puVar9 + 3) {
          if ((puVar9[2] != 0) &&
             (cVar5 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                                (puVar9[2],lVar10), cVar5 != '\0')) {
            local_c8 = *puVar9;
            goto LAB_140f5c978;
          }
        }
      }
      local_c8 = 0;
LAB_140f5c978:
      *(undefined8 *)(lVar10 + 0x14) = local_c8;
      lVar3 = lVar10 + 0x24;
      lVar10 = lVar10 + 0x110;
    } while (lVar3 != lVar12);
  }
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_c0[0] = *(undefined1 *)(param_1[1] + 0x18);
  ppvVar8 = (void **)(*param_1 + 0x6f0);
  if (&local_b8 != ppvVar8) {
    uVar2 = *(uint *)(*param_1 + 0x6f8);
    _Src = *ppvVar8;
    local_b0 = (ulonglong)uVar2;
    if (uVar2 != 0) {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_b8,uVar2,0);
      _guard_xfg_dispatch_icall_nop(local_b8,_Src,(longlong)(int)uVar2 * 0x18);
    }
  }
  local_68 = (longlong *)0x0;
  local_98[0] = FRollingHash::GetWindowSize;
  local_58 = 0;
  FUN_1411fc8c0(param_2,local_c0,0,local_98);
  if (local_58 != 0) {
    plVar11 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar11 = local_68;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f5cb10 FUN_140f5cb10 body=183 status=ok
// SIG undefined FUN_140f5cb10(void)

void FUN_140f5cb10(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140f8ba00(*param_1,*param_1 + 0x698);
  iVar1 = *(int *)(*param_1 + 0x710);
  if ((iVar1 + -1 < 0) || (iVar1 <= iVar1 + -1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x708) + -8 + (longlong)iVar1 * 8);
  if (lVar4 != 0) {
    lVar3 = FUN_141387000();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140f5cb95;
  }
  lVar4 = 0;
LAB_140f5cb95:
  *(longlong *)(*param_1 + 0x748) = lVar4;
  if (*(longlong *)(*param_1 + 0x748) == 0) {
    return;
  }
  FUN_141019060(*(longlong *)(*param_1 + 0x748),param_1 + 1);
  return;
}



// FUNCTION 140f5cbd0 FUN_140f5cbd0 body=436 status=ok
// SIG undefined FUN_140f5cbd0(void)

void FUN_140f5cbd0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_18;
  undefined8 local_10;
  
  lVar3 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
  if (lVar3 != 0) {
    lVar4 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FWeakObjectPtr::operator=(&local_res8,0);
      *(undefined4 *)(lVar3 + 0x730) = local_res8;
      *(undefined4 *)(lVar3 + 0x734) = local_resc;
      FUN_140483870(lVar3 + 0x7a8,*param_1);
      FUN_140483870(lVar3 + 0x830,*param_1);
      FUN_140483870(lVar3 + 0x848,*param_1);
    }
  }
  lVar3 = FUN_140eccca0(*param_1);
  if (lVar3 != 0) {
    FUN_1407665e0(lVar3 + 0x1d40,*param_1);
    FUN_1407665e0(lVar3 + 0x1d50,*param_1);
  }
  lVar3 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if (lVar3 != 0) {
    lVar4 = FUN_142f6c9f0(lVar3);
    if (lVar4 != 0) {
      lVar1 = *param_1;
      local_18 = lVar1;
      if (lVar1 == 0) {
        local_10 = 0;
      }
      else {
        uVar5 = FUN_142f768a0();
        local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar5);
      }
      FUN_142f6e000(lVar4,&local_18);
      lVar1 = *param_1;
      local_18 = lVar1;
      if (lVar1 == 0) {
        local_10 = 0;
      }
      else {
        uVar5 = FUN_142f772d0();
        local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar5);
      }
      FUN_142f6dea0(lVar4,&local_18);
    }
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    lVar3 = *param_1;
    FUN_142880530(uVar5,lVar3 + 0x718);
    *(undefined8 *)(lVar3 + 0x718) = 0;
  }
  return;
}



// FUNCTION 140f5cd90 FUN_140f5cd90 body=482 status=ok
// SIG undefined FUN_140f5cd90(void)

void FUN_140f5cd90(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar14 = *(int *)(lVar6 + 0xc);
    pwVar7 = (wchar_t *)0x0;
    if (iVar14 < (int)DAT_1469e91c4) {
      uVar12 = iVar14 >> 0x1f & 0xffff;
      uVar5 = iVar14 + uVar12;
      pwVar7 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)((uVar5 & 0xffff) - uVar12) * 0x18);
    }
    if (((*(uint *)(pwVar7 + 4) & 0x30000000) == 0) &&
       (lVar6 = FUN_1416f8720((int)param_1[2]), lVar6 != 0)) {
      uVar8 = FUN_1416f8720((int)param_1[2]);
      lVar6 = FUN_140cff1b0(uVar8);
      if (lVar6 != 0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&UGFxIronbearWeaponWidget::OnInputDeviceChanged",L"::");
        pwVar7 = (wchar_t *)0x0;
        while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar7 = pwVar3;
        }
        FName::FName(&local_res8,pwVar7 + 2,1);
        plVar16 = (longlong *)(lVar6 + 0x5f8);
        lVar1 = *param_1;
        lVar2 = *plVar16;
        iVar14 = *(int *)(lVar6 + 0x600);
        for (lVar15 = lVar2; lVar15 != (longlong)iVar14 * 0x10 + lVar2; lVar15 = lVar15 + 0x10) {
          if (((*(longlong *)(lVar15 + 8) == local_res8) && (lVar1 != 0)) &&
             (lVar10 = FWeakObjectPtr::GetEvenIfUnreachable(lVar15), lVar1 == lVar10)) {
            iVar14 = (int)(lVar15 - lVar2 >> 4);
            if (iVar14 != -1) {
              iVar13 = *(int *)(lVar6 + 0x600);
              iVar11 = (iVar13 - iVar14) + -1;
              if (0 < iVar11) {
                iVar11 = 1;
              }
              if (iVar11 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar14 * 0x10 + *plVar16),
                           (void *)((longlong)(iVar13 - iVar11) * 0x10 + *plVar16),
                           (longlong)iVar11 << 4);
                iVar13 = *(int *)(lVar6 + 0x600);
              }
              *(int *)(lVar6 + 0x600) = iVar13 + -1;
            }
            break;
          }
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar16);
      }
    }
  }
  return;
}



// FUNCTION 140f5cf80 FUN_140f5cf80 body=127 status=ok
// SIG undefined FUN_140f5cf80(void)

void FUN_140f5cf80(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x5e0);
  if (lVar2 != 0) {
    lVar3 = FUN_1413ffd50();
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
      FUN_1407665e0(lVar2 + 0x22a8,*param_1);
      FUN_1407665e0(lVar2 + 0x22b8,*param_1);
    }
  }
  return;
}



// FUNCTION 140f5d000 FUN_140f5d000 body=373 status=ok
// SIG undefined FUN_140f5d000(void)

void FUN_140f5d000(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    lVar10 = 0;
    iVar5 = *(int *)(lVar6 + 0xc);
    if (iVar5 < (int)DAT_1469e91c4) {
      uVar9 = iVar5 >> 0x1f & 0xffff;
      uVar4 = iVar5 + uVar9;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    if (((*(uint *)(lVar10 + 8) & 0x30000000) == 0) && (*(longlong *)(*param_1 + 0x630) != 0)) {
      local_48 = 0;
      local_40 = 0;
      uVar7 = FUN_1404b03b0();
      FText::FText(local_38,uVar7);
      uVar2 = local_40;
      local_18 = 0;
      lVar10 = (longlong)(int)local_40;
      local_10 = 1;
      local_20 = 1;
      iVar5 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar5);
      if (local_40._4_4_ < iVar5) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_48,uVar2 & 0xffffffff);
      }
      *(undefined8 *)(local_48 + lVar10 * 8) = DAT_146872c80;
      plVar8 = (longlong *)(*(longlong *)(*param_1 + 0x630) + 0x308);
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_48,1);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_30 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140f5d180 FUN_140f5d180 body=1035 status=ok
// SIG undefined FUN_140f5d180(void)

void FUN_140f5d180(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong *local_e8;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong *local_c0;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong *local_98;
  longlong local_88;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  lVar9 = *param_1;
  uVar12 = 0;
  lVar6 = *(longlong *)(lVar9 + 0x990);
  if (lVar6 != 0) {
    plVar10 = *(longlong **)(lVar6 + 0x180);
    uVar13 = (longlong)*(int *)(lVar6 + 0x188) & 0x1fffffffffffffff;
    if (plVar10 + *(int *)(lVar6 + 0x188) < plVar10) {
      uVar13 = uVar12;
    }
    uVar11 = uVar12;
    if (uVar13 != 0) {
      do {
        plVar4 = (longlong *)*plVar10;
        if (plVar4 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar4 + 0x340))(plVar4);
          uVar7 = FWeakObjectPtr::Get(lVar6 + 0xdc);
          lVar6 = (**(code **)(*plVar4 + 0x340))(plVar4);
          FUN_140f665a0(*param_1,&local_f8,uVar7,*(undefined8 *)(lVar6 + 0xa8));
          (**(code **)(*plVar4 + 0x358))(plVar4,&local_f8,1);
          if (local_d8 != 0) {
            LOCK();
            piVar1 = (int *)(local_d8 + 0x48);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar4 = local_e8;
          if (local_e8 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_e8 + 1;
            lVar6 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_e8)(local_e8);
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
          FUN_1416f8340(local_f4);
          FUN_1416f8340(local_f8);
        }
        plVar10 = plVar10 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar13);
      lVar9 = *param_1;
    }
  }
  lVar6 = *(longlong *)(lVar9 + 0x998);
  if (lVar6 != 0) {
    plVar10 = *(longlong **)(lVar6 + 0x180);
    uVar13 = (longlong)*(int *)(lVar6 + 0x188) & 0x1fffffffffffffff;
    if (plVar10 + *(int *)(lVar6 + 0x188) < plVar10) {
      uVar13 = uVar12;
    }
    uVar11 = uVar12;
    if (uVar13 != 0) {
      do {
        plVar4 = (longlong *)*plVar10;
        if (plVar4 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar4 + 0x340))(plVar4);
          uVar7 = FWeakObjectPtr::Get(lVar6 + 0xdc);
          lVar6 = (**(code **)(*plVar4 + 0x340))(plVar4);
          FUN_140f665a0(*param_1,&local_d0,uVar7,*(undefined8 *)(lVar6 + 0xa8));
          (**(code **)(*plVar4 + 0x358))(plVar4,&local_d0,1);
          if (local_b0 != 0) {
            LOCK();
            piVar1 = (int *)(local_b0 + 0x48);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar4 = local_c0;
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_c0 + 1;
            lVar6 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_c0)(local_c0);
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
          FUN_1416f8340(local_cc);
          FUN_1416f8340(local_d0);
        }
        plVar10 = plVar10 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar13);
      lVar9 = *param_1;
    }
  }
  lVar6 = *(longlong *)(lVar9 + 0x9a0);
  if (lVar6 != 0) {
    plVar10 = *(longlong **)(lVar6 + 0x180);
    uVar13 = (longlong)*(int *)(lVar6 + 0x188) & 0x1fffffffffffffff;
    if (plVar10 + *(int *)(lVar6 + 0x188) < plVar10) {
      uVar13 = uVar12;
    }
    if (uVar13 != 0) {
      do {
        plVar4 = (longlong *)*plVar10;
        if (plVar4 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar4 + 0x340))(plVar4);
          uVar7 = FWeakObjectPtr::Get(lVar6 + 0xdc);
          lVar6 = (**(code **)(*plVar4 + 0x340))(plVar4);
          FUN_140f665a0(*param_1,&local_a8,uVar7,*(undefined8 *)(lVar6 + 0xa8));
          (**(code **)(*plVar4 + 0x358))(plVar4,&local_a8,1);
          if (local_88 != 0) {
            LOCK();
            piVar1 = (int *)(local_88 + 0x48);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar4 = local_98;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_98 + 1;
            lVar6 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_98)(local_98);
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
          FUN_1416f8340(local_a4);
          FUN_1416f8340(local_a8);
        }
        plVar10 = plVar10 + 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar13);
    }
  }
  puVar5 = (undefined8 *)param_1[1];
  local_48 = 0;
  local_38 = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_FUN_143f77b70;
    puVar8[1] = *puVar5;
  }
  local_78[0] = &LAB_140f62aa0;
  FUN_140f06ba0(*param_1 + 0x9a8,local_78);
  return;
}



// FUNCTION 140f5d590 FUN_140f5d590 body=146 status=ok
// SIG undefined FUN_140f5d590(void)

void FUN_140f5d590(longlong *param_1)

{
  longlong lVar1;
  undefined2 local_res8 [16];
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0xb68) != 0) {
    FUN_140f0abd0(*(longlong *)(lVar1 + 0xb68),*(undefined8 *)(lVar1 + 0x6a8),(int)param_1[1],1);
    lVar1 = *param_1;
  }
  if ((*(longlong *)(lVar1 + 0x990) != 0) && (*(longlong *)(lVar1 + 0x9a0) != 0)) {
    FUN_140f8fb60(*(longlong *)(lVar1 + 0x990),*(longlong *)(lVar1 + 0x9a0),(int)param_1[1]);
    FUN_140f90750(*(undefined8 *)(*param_1 + 0x9a0),*(undefined8 *)(*param_1 + 0x990));
    lVar1 = *param_1;
  }
  if (local_res8 != (undefined2 *)(lVar1 + 0xba1)) {
    *(undefined2 *)(lVar1 + 0xba1) = 0x100;
  }
  FUN_142ecd4d0(*param_1);
  FUN_140f704b0(*param_1);
  return;
}



// FUNCTION 140f5d630 FUN_140f5d630 body=947 status=ok
// SIG undefined FUN_140f5d630(void)

void FUN_140f5d630(longlong *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_48 [2];
  longlong local_38 [2];
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar6 == '\0') {
    return;
  }
  lVar8 = FWeakObjectPtr::Get(&local_res10);
  plVar10 = (longlong *)0x0;
  iVar3 = *(int *)(lVar8 + 0xc);
  plVar9 = plVar10;
  if (iVar3 < (int)DAT_1469e91c4) {
    uVar12 = iVar3 >> 0x1f & 0xffff;
    uVar7 = iVar3 + uVar12;
    plVar9 = (longlong *)
             (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
             (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18);
  }
  if ((*(uint *)(plVar9 + 1) & 0x30000000) != 0) {
    return;
  }
  if (param_1[2] == 0) {
    return;
  }
  if (*(char *)(param_1[2] + 0x80) != '\0') {
    plVar13 = *(longlong **)(*param_1 + 0x708);
    plVar9 = plVar13 + *(int *)(*param_1 + 0x710);
    for (; plVar13 != plVar9; plVar13 = plVar13 + 1) {
      lVar8 = *plVar13;
      if (((lVar8 != 0) && (cVar6 = FUN_140f700b0(lVar8,param_1 + 2), cVar6 != '\0')) &&
         (*(longlong *)(lVar8 + 0x1a8) == param_1[2])) {
        *(int *)(lVar8 + 0x180) = *(int *)(lVar8 + 0x180) + 1;
        FUN_1413567c0(lVar8,*(undefined4 *)(lVar8 + 0x180));
        return;
      }
    }
  }
  lVar8 = *param_1;
  if (*(longlong *)(lVar8 + 0x680) == 0) {
    return;
  }
  lVar4 = param_1[2];
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x48) == '\0')) {
    if (*(char *)(lVar4 + 0x50) == '\0') {
      FString::PrintfImpl(local_38,L"IconInst_%u",*(undefined4 *)(lVar8 + 0x674));
      plVar10 = (longlong *)
                FUN_140f552a0(*(undefined8 *)(lVar8 + 0x680),PTR_s_AllIcons_14629e600,local_38,0);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (plVar10 != (longlong *)0x0) {
        FUN_142088cf0(plVar10,lVar4 + 0x30);
      }
    }
    else {
      if (*(char *)(lVar4 + 0x50) != '\x01') goto LAB_140f5d835;
      FString::PrintfImpl(local_48,L"IconInst_%u",*(undefined4 *)(lVar8 + 0x674));
      plVar10 = (longlong *)
                FUN_140f55680(*(undefined8 *)(lVar8 + 0x680),PTR_s_OverheadNameplate_14629e608,
                              local_48,0);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
    *(int *)(lVar8 + 0x674) = *(int *)(lVar8 + 0x674) + 1;
  }
LAB_140f5d835:
  *(int *)(*param_1 + 0x674) = *(int *)(*param_1 + 0x674) + 1;
  if (plVar10 != (longlong *)0x0) {
    fVar1 = *(float *)(*param_1 + 0x66c);
    uVar2 = *(undefined4 *)(*param_1 + 0x670);
    *(undefined1 *)(plVar10 + 0x3f) = 0;
    *(undefined4 *)(plVar10 + 0x40) = uVar2;
    *(undefined1 *)((longlong)plVar10 + 0x1dc) = 0;
    *(float *)((longlong)plVar10 + 0x1fc) = fVar1 * fVar1;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x44);
    lVar8 = param_1[9];
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x4c);
    *(int *)((longlong)plVar10 + 0x1cc) = (int)param_1[8];
    *(undefined4 *)(plVar10 + 0x3a) = uVar2;
    *(int *)((longlong)plVar10 + 0x1d4) = (int)lVar8;
    *(undefined4 *)(plVar10 + 0x3b) = uVar5;
    (**(code **)(*plVar10 + 0x2a8))(plVar10,param_1[3]);
    FUN_140f8ef30(plVar10,param_1[4]);
    plVar10[0x46] = param_1[6];
    *(int *)(plVar10 + 0x47) = (int)param_1[7];
    if (param_1[2] != plVar10[0x35]) {
      plVar10[0x35] = param_1[2];
    }
    plVar10[0x36] = param_1[5];
    *(undefined4 *)(plVar10 + 0x3e) = *(undefined4 *)((longlong)param_1 + 0x3c);
    plVar10[0x37] = param_1[0xb];
    *(int *)(plVar10 + 0x38) = (int)param_1[0xc];
    *(undefined1 *)((longlong)plVar10 + 0x1f7) = 1;
    if (1e-08 < *(float *)(param_1[2] + 0x5c)) {
      *(float *)((longlong)plVar10 + 0x1ec) = *(float *)(param_1[2] + 0x5c);
      *(undefined1 *)(plVar10 + 0x3d) = 1;
    }
    (**(code **)(*plVar10 + 0x2b8))(plVar10,*(undefined1 *)((longlong)param_1 + 100));
    *(undefined1 *)((longlong)plVar10 + 0x1f5) = *(undefined1 *)((longlong)param_1 + 0x65);
    (**(code **)(*plVar10 + 0x2c0))(plVar10,*(undefined1 *)((longlong)param_1 + 0x66));
    lVar8 = param_1[10];
    *(undefined4 *)(plVar10 + 0x31) = *(undefined4 *)((longlong)param_1 + 0x54);
    *(int *)((longlong)plVar10 + 0x184) = (int)lVar8;
    lVar8 = *param_1;
    uVar11 = FUN_140eccbe0(lVar8);
    FWeakObjectPtr::operator=((longlong)plVar10 + 0x23c,uVar11);
    iVar3 = *(int *)(lVar8 + 0x710);
    *(int *)(lVar8 + 0x710) = iVar3 + 1;
    if (*(int *)(lVar8 + 0x714) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar8 + 0x708,iVar3);
    }
    *(longlong **)(*(longlong *)(lVar8 + 0x708) + (longlong)iVar3 * 8) = plVar10;
    FUN_141356740(lVar8,plVar10);
  }
  return;
}



// FUNCTION 140f5d9f0 FUN_140f5d9f0 body=836 status=ok
// SIG undefined FUN_140f5d9f0(void)

void FUN_140f5d9f0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong *local_c0;
  longlong local_b0;
  longlong local_a8 [2];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_58;
  longlong local_48;
  
  iVar7 = (**(code **)(*(longlong *)*param_1 + 0x2d8))();
  uVar12 = (ulonglong)iVar7;
  iVar7 = FUN_142eed990(*param_1);
  if ((param_2 != 0) && (lVar13 = (longlong)iVar7, 0 < iVar7)) {
    lVar14 = uVar12 * 8;
    do {
      iVar7 = (int)uVar12;
      FUN_142eed030(*param_1,local_a8,uVar12 & 0xffffffff);
      lVar5 = local_a8[0];
      if (local_a8[0] != 0) {
        lVar8 = FUN_1413625a0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if ((iVar7 < 0) || (*(int *)(*param_1 + 0x3c0) <= iVar7)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            local_e0 = 0;
            local_d8 = 0;
            local_f8 = 0xffffffff;
            local_f4 = 0;
            local_e8 = 0;
            lVar8 = *(longlong *)(lVar14 + *(longlong *)(*param_1 + 0x3b8));
            if (lVar8 == 0) {
              lVar8 = *(longlong *)(*param_1 + 0x38);
              if (lVar8 != 0) {
                lVar9 = FUN_141358f70();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  local_f8 = *(undefined4 *)(lVar8 + 0xe80);
                  local_f4 = *(undefined8 *)(lVar8 + 0xe84);
                  local_80 = *(undefined8 *)(lVar8 + 0xe90);
                  FString::FString(local_78,lVar8 + 0xe98);
                  puVar11 = &local_80;
                  goto LAB_140f5dbd0;
                }
              }
            }
            else {
              local_f8 = *(undefined4 *)(lVar8 + 0x90);
              local_f4 = *(undefined8 *)(lVar8 + 0x94);
              local_98 = *(undefined8 *)(lVar8 + 0xa0);
              FString::FString(local_90,lVar8 + 0xa8);
              puVar11 = &local_98;
LAB_140f5dbd0:
              FSoftObjectPath::operator=(&local_e8,puVar11);
            }
            FUN_1411e23f0(param_2,&local_d0,&local_f8);
            FUN_140f8d880(lVar5,&local_d0);
            if (local_b0 != 0) {
              LOCK();
              piVar1 = (int *)(local_b0 + 0x48);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                FGraphEvent::Recycle();
              }
            }
            plVar6 = local_c0;
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_c0 + 1;
              lVar5 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_c0)(local_c0);
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
            FUN_1416f8340(local_cc);
            FUN_1416f8340(local_d0);
            if (local_e0 != 0) {
              FMemory::Free();
            }
          }
          else {
            uVar10 = FUN_1411c87b0(&local_68);
            FUN_140f8d880(lVar5,uVar10);
            if (local_48 != 0) {
              LOCK();
              piVar1 = (int *)(local_48 + 0x48);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                FGraphEvent::Recycle();
              }
            }
            plVar6 = local_58;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_58 + 1;
              lVar5 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_58)(local_58);
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
            FUN_1416f8340(local_64);
            FUN_1416f8340(local_68);
          }
        }
      }
      uVar12 = (ulonglong)(iVar7 + 1);
      lVar14 = lVar14 + 8;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}


