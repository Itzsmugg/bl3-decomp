// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140ff3230 FUN_140ff3230 body=273 status=ok
// SIG undefined FUN_140ff3230(void)

void FUN_140ff3230(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [8];
  longlong *local_18;
  longlong *local_10;
  
  puVar5 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
  FUN_140bbd560(&local_18,*puVar5);
  if ((local_18 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x90) != 0)) {
    (**(code **)(*local_18 + 0xd0))(local_18,param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_140ff3da0(param_1 + 0x40,0);
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x98) = local_res8;
  *(undefined4 *)(param_1 + 0x9c) = local_resc;
  lVar6 = FWeakObjectPtr::Get();
  if (lVar6 != 0) {
    FUN_140483870(*(longlong *)(lVar6 + 0x478) + 0x1e0,param_1);
  }
  TSet<TTuple<TSharedRef<FString,1>,unsigned_short>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,unsigned_short,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0xa0,0);
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 140ff3350 FUN_140ff3350 body=532 status=ok
// SIG undefined FUN_140ff3350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ff3350(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_148 [32];
  void **local_128;
  undefined4 local_118;
  undefined4 local_114;
  void *local_110;
  ulonglong local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [80];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  if (param_2 != 0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
    pvVar4 = (void *)0x0;
    *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(param_2 + 0x48);
    local_128 = &local_110;
    local_110 = (void *)0x0;
    local_108 = 0;
    FUN_140ff6140(param_2,*(undefined4 *)(param_1 + 0x680),*(undefined4 *)(param_1 + 0x6d8),
                  param_1 + 0x688);
    FWeakObjectPtr::operator=(&local_100,param_1);
    lVar6 = (longlong)(int)local_108;
    local_118 = local_100;
    local_f0 = local_100;
    local_114 = local_fc;
    local_ec = local_fc;
    local_e8 = (void *)0x0;
    local_e0 = (int)local_108;
    local_f8 = param_1;
    if ((int)local_108 == 0) {
      local_dc = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_108 & 0xffffffff,0);
      pvVar4 = local_e8;
      _guard_xfg_dispatch_icall_nop(local_e8,local_110,lVar6 * 2);
    }
    iVar1 = local_e0;
    lVar6 = local_f8;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_118 = local_f0;
    local_114 = local_ec;
    puVar2 = (undefined8 *)FUN_140438ef0(0x28,local_78);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_14465fb08;
      puVar2[1] = lVar6;
      *(undefined4 *)(puVar2 + 2) = local_118;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_114;
      puVar2[3] = pvVar4;
      pvVar4 = (void *)0x0;
      *(int *)(puVar2 + 4) = iVar1;
      *(undefined4 *)((longlong)puVar2 + 0x24) = local_dc;
    }
    local_88[0] = &LAB_140ff1d80;
    uVar3 = FUN_1420849a0(param_1,local_d8,local_88);
    FUN_14208c4f0(param_1,uVar3);
    if (local_48 != 0) {
      plVar5 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar5 = local_58;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    if (local_110 != (void *)0x0) {
      FMemory::Free(local_110);
    }
  }
  return;
}



// FUNCTION 140ff3570 FUN_140ff3570 body=482 status=ok
// SIG undefined FUN_140ff3570(void)

void FUN_140ff3570(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x614);
  if (lVar3 != 0) {
    lVar4 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar3 + 0xf30) != 0)) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xdf));
      FUN_140ff4330(param_1,param_1 + 0xd5);
      param_1[0xd5] = *(longlong *)(lVar3 + 0xf30);
      FText::operator=(param_1 + 0xd8,param_2);
      *(undefined4 *)(param_1 + 0xd7) = *(undefined4 *)(*(longlong *)(lVar3 + 0xf30) + 0x48);
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xdf));
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146873958) {
        _Init_thread_header(&DAT_146873958);
        if (DAT_146873958 == -1) {
          FName::FName(&DAT_146873950,L"Generic_Error",1);
          _Init_thread_footer(&DAT_146873958);
        }
      }
      local_18 = 0;
      local_10 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146873950,&local_18);
      lVar3 = FUN_140eccbe0(param_1);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x5e8) != 0)) {
        cVar2 = FUN_142ebe1f0(*(longlong *)(lVar3 + 0x5e8),param_1);
        if (cVar2 != '\0') {
          AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xdf));
          FUN_140ff1150(param_1,param_1 + 0xd5);
          ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xdf));
        }
      }
      cVar2 = FUN_142ebe180(param_1);
      if (cVar2 == '\0') {
        (**(code **)(*param_1 + 0x578))(param_1,1);
      }
    }
  }
  return;
}



// FUNCTION 140ff3760 FUN_140ff3760 body=153 status=ok
// SIG undefined FUN_140ff3760(void)

void FUN_140ff3760(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_res8;
  
  FUN_1405499a0(param_1 + 0xa0,&local_res8,param_2);
  if ((int)local_res8 != -1) {
    uVar1 = *(undefined8 *)((longlong)(int)local_res8 * 0x20 + 0x10 + *(longlong *)(param_1 + 0xa0))
    ;
    FUN_140be6fe0(param_1 + 0xa0);
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x98);
    if (lVar2 != 0) {
      TBaseMulticastDelegate<void>::Remove(*(longlong *)(lVar2 + 0x478) + 0x1e0,uVar1);
    }
    local_res8 = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x28,&local_res8);
  }
  return;
}



// FUNCTION 140ff3800 FUN_140ff3800 body=261 status=ok
// SIG undefined FUN_140ff3800(void)

void FUN_140ff3800(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined1 local_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  
  plVar3 = *(longlong **)(param_1 + 0x738);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar6) {
      while( true ) {
        LOCK();
        bVar6 = iVar5 == (int)plVar3[1];
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar6) break;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar6 = iVar5 == 0;
        if (bVar6) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar6) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        if ((*(longlong *)(param_1 + 0x730) != 0) && (0 < *(int *)(param_1 + 0x7e8))) {
          lVar4 = *(longlong *)(param_1 + 0x7e0);
          FUN_140ce0f90(local_38,lVar4);
          local_18 = *(undefined8 *)(lVar4 + 0x20);
          local_10 = *(undefined4 *)(lVar4 + 0x28);
          local_c = *(undefined1 *)(lVar4 + 0x2c);
          local_b = *(undefined1 *)(lVar4 + 0x2d);
          FUN_141015e50(param_1,local_38);
          *(undefined4 *)(*(longlong *)(param_1 + 0x7e0) + 0x28) = 0;
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
    }
  }
  return;
}



// FUNCTION 140ff3910 FUN_140ff3910 body=468 status=ok
// SIG undefined FUN_140ff3910(void)

void FUN_140ff3910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined4 local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined1 *local_158 [2];
  longlong local_148 [4];
  longlong *local_128;
  int local_118;
  undefined1 local_108 [80];
  undefined1 local_b8 [80];
  undefined1 local_68 [80];
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  FText::FText(local_190,param_3);
  local_170 = param_5;
  local_168 = param_6;
  local_128 = (longlong *)0x0;
  local_118 = 0;
  local_178 = param_4;
  puVar5 = (undefined8 *)FUN_140438ef0(0x50,local_148);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_14465fac0;
    puVar5[1] = param_1;
    *(undefined4 *)(puVar5 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_resc;
    puVar5[3] = param_2;
    FText::FText(puVar5 + 4,local_190);
    *(undefined4 *)(puVar5 + 7) = local_178;
    puVar5[8] = local_170;
    *(undefined1 *)(puVar5 + 9) = local_168;
  }
  local_158[0] = &LAB_140ff18b0;
  cVar4 = FUN_142059490();
  if (cVar4 == '\0') {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_158);
    FUN_14204c280(local_b8);
  }
  else {
    cVar4 = FUN_14207c770();
    if (cVar4 == '\0') {
      uVar6 = FUN_140fe1de0(local_68,local_158);
      FUN_14158fcd0(0x10ff,uVar6);
    }
    else {
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_108);
      FUN_14204cc40(local_108);
    }
  }
  if (local_118 != 0) {
    plVar7 = local_148;
    if (local_128 != (longlong *)0x0) {
      plVar7 = local_128;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_188 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_188 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_188)(local_188);
      LOCK();
      piVar1 = (int *)((longlong)local_188 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_188 + 8))(local_188,1);
      }
    }
  }
  return;
}



// FUNCTION 140ff3af0 FUN_140ff3af0 body=506 status=ok
// SIG undefined FUN_140ff3af0(void)

void FUN_140ff3af0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined4 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined1 local_15f;
  undefined1 *local_158 [2];
  longlong local_148 [4];
  longlong *local_128;
  int local_118;
  undefined1 local_108 [80];
  undefined1 local_b8 [80];
  undefined1 local_68 [80];
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  FText::FText(local_188,param_4);
  local_170 = param_5;
  local_168 = param_6;
  local_160 = param_7;
  local_15f = param_8;
  local_128 = (longlong *)0x0;
  local_118 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x58,local_148);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_14465fad8;
    puVar5[1] = param_1;
    *(undefined4 *)(puVar5 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_resc;
    puVar5[3] = param_2;
    *(undefined1 *)(puVar5 + 4) = param_3;
    FText::FText(puVar5 + 5,local_188);
    *(undefined4 *)(puVar5 + 8) = local_170;
    puVar5[9] = local_168;
    *(undefined1 *)(puVar5 + 10) = local_160;
    *(undefined1 *)((longlong)puVar5 + 0x51) = local_15f;
  }
  local_158[0] = &LAB_140ff1e70;
  cVar4 = FUN_142059490();
  if (cVar4 == '\0') {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_158);
    FUN_14204c280(local_b8);
  }
  else {
    cVar4 = FUN_14207c770();
    if (cVar4 == '\0') {
      uVar6 = FUN_140fe1de0(local_68,local_158);
      FUN_14158fcd0(0x10ff,uVar6);
    }
    else {
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_108);
      FUN_14204cc40(local_108);
    }
  }
  if (local_118 != 0) {
    plVar7 = local_148;
    if (local_128 != (longlong *)0x0) {
      plVar7 = local_128;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_180 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar1 = (int *)((longlong)local_180 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_180 + 8))(local_180,1);
      }
    }
  }
  return;
}



// FUNCTION 140ff3cf0 FUN_140ff3cf0 body=168 status=ok
// SIG undefined FUN_140ff3cf0(void)

void FUN_140ff3cf0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x20);
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
      plVar7 = plVar7 + 10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 140ff3da0 FUN_140ff3da0 body=248 status=ok
// SIG undefined FUN_140ff3da0(void)

void FUN_140ff3da0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x18);
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
      plVar7 = plVar7 + 7;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 140ff3ea0 FUN_140ff3ea0 body=117 status=ok
// SIG undefined FUN_140ff3ea0(void)

void FUN_140ff3ea0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_140ff3f20();
  cVar1 = TSet<TTuple<enum_EXRarity,FGOfferWidgetRaritySettings>,TDefaultMapHashableKeyFuncs<enum_EXRarity,FGOfferWidgetRaritySettings,0>,FDefaultSetAllocator>
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



// FUNCTION 140ff3f20 FUN_140ff3f20 body=400 status=ok
// SIG undefined FUN_140ff3f20(void)

void FUN_140ff3f20(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_140ff3ff1;
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
LAB_140ff3ff1:
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
      FUN_140fe63c0((longlong)iStack_1c * 0x78 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
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



// FUNCTION 140ff40b0 FUN_140ff40b0 body=637 status=ok
// SIG undefined FUN_140ff40b0(void)

void FUN_140ff40b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong local_38;
  undefined8 local_30;
  
  if ((*(longlong *)(param_1 + 0x6f0) != 0) && (lVar3 = FUN_140f578e0(), lVar3 != 0)) {
    plVar11 = *(longlong **)(lVar3 + 0x26d0);
    plVar7 = plVar11 + *(int *)(lVar3 + 0x26d8);
    for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
      if (*plVar11 == param_2) {
        return;
      }
    }
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x170);
    (**(code **)(*plVar7 + 0x38))(plVar7,0);
    uVar10 = 0;
    *(longlong *)(param_1 + 0xb78) = param_2;
    if (*(longlong *)(param_1 + 0x6e0) != 0) {
      local_38 = 0;
      local_30 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,L"emote",0xc);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x6e0),&local_38);
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
    bVar1 = true;
    plVar7 = *(longlong **)(param_1 + 0xb58);
    uVar12 = (longlong)*(int *)(param_1 + 0xb60) & 0x1fffffffffffffff;
    if (plVar7 + *(int *)(param_1 + 0xb60) < plVar7) {
      uVar12 = uVar10;
    }
    uVar8 = uVar10;
    if (uVar12 != 0) {
      do {
        lVar5 = *plVar7;
        if ((lVar5 != 0) &&
           ((**(code **)(*(longlong *)(lVar5 + 0x170) + 0x38))((longlong *)(lVar5 + 0x170),1), bVar1
           )) {
          local_30 = 0;
          local_38 = lVar5;
          uVar4 = UBlendableInterface::GetPrivateStaticClass();
          local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar4);
          FUN_142ed36d0(param_1,&local_38,0);
          bVar1 = false;
        }
        plVar7 = plVar7 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar12);
    }
    iVar2 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x6f0));
    if (0 < iVar2) {
      do {
        lVar5 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6f0),uVar10);
        if (lVar5 != 0) {
          lVar6 = FUN_14138e2b0();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            lVar6 = *(longlong *)(lVar5 + 0x308);
            if (lVar6 != 0) {
              plVar11 = *(longlong **)(lVar3 + 0x26d0);
              plVar7 = plVar11 + *(int *)(lVar3 + 0x26d8);
              for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
                if (*plVar11 == lVar6) {
                  uVar4 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
                  goto LAB_140ff42e0;
                }
              }
            }
            uVar4 = 0;
LAB_140ff42e0:
            FUN_142ed2820(lVar5,uVar4,1);
          }
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        iVar2 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x6f0));
      } while ((int)uVar9 < iVar2);
    }
    plVar7 = *(longlong **)(param_1 + 0xb70);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x278))(plVar7,1);
    }
  }
  return;
}



// FUNCTION 140ff4330 FUN_140ff4330 body=368 status=ok
// SIG undefined FUN_140ff4330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ff4330(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
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
  local_c8 = 0;
  if (param_2[7] != 0) {
    local_c8 = 0;
    local_c0 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,param_2[7],&local_c8);
  }
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[1] + 0x280))();
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)(param_2 + 8) = 0x41200000;
  *(undefined1 *)((longlong)param_2 + 0x44) = 0;
  param_2[1] = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = FUN_140ff1bf0;
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



// FUNCTION 140ff44a0 FUN_140ff44a0 body=97 status=ok
// SIG undefined FUN_140ff44a0(void)

void FUN_140ff44a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x48) = param_2;
  uVar1 = FUN_140e20800();
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  if (0 < *(int *)(param_1 + 0xa8)) {
    FUN_14101d2f0(param_1 + -0x680,**(undefined8 **)(param_1 + 0xa0));
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x494);
    if (*(char *)(param_1 + 0x58) != '\0') {
      FUN_140e91a60();
      return;
    }
  }
  return;
}



// FUNCTION 140ff4520 FUN_140ff4520 body=172 status=ok
// SIG undefined FUN_140ff4520(void)

void FUN_140ff4520(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  pcVar1 = *(code **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = FUN_140ce0f90(local_48,param_4);
  uVar5 = FUN_140ce0f90(local_28,param_3);
  (*pcVar1)((int)uVar2 + lVar3,param_2,uVar5,uVar4);
  FUN_140ce1790(param_3 + 0x10);
  FUN_140ce1790(param_4 + 0x10);
  return;
}



// FUNCTION 140ff45d0 FUN_140ff45d0 body=110 status=ok
// SIG undefined FUN_140ff45d0(void)

void FUN_140ff45d0(longlong param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140ff463b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140ff4640 FUN_140ff4640 body=20 status=ok
// SIG undefined FUN_140ff4640(void)

undefined1 FUN_140ff4640(longlong param_1)

{
  FUN_140feb090(param_1 + 8);
  return 1;
}



// FUNCTION 140ff4660 FUN_140ff4660 body=294 status=ok
// SIG undefined FUN_140ff4660(void)

bool FUN_140ff4660(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar3 == 0) {
    FUN_140ce1790(param_3 + 0x10);
    FUN_140ce1790(param_4 + 0x10);
  }
  else {
    lVar4 = FUN_140ce0f90(local_98,param_4);
    lVar5 = FUN_140ce0f90(local_78,param_3);
    lVar6 = FWeakObjectPtr::Get(param_1 + 8);
    pcVar1 = *(code **)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = FUN_140ce0f90(local_58,lVar4);
    uVar8 = FUN_140ce0f90(local_38,lVar5);
    (*pcVar1)((int)uVar2 + lVar6,param_2,uVar8,uVar7);
    FUN_140ce1790(lVar5 + 0x10);
    FUN_140ce1790(lVar4 + 0x10);
    FUN_140ce1790(param_3 + 0x10);
    FUN_140ce1790(param_4 + 0x10);
  }
  return lVar3 != 0;
}



// FUNCTION 140ff4790 FUN_140ff4790 body=138 status=ok
// SIG undefined FUN_140ff4790(void)

bool FUN_140ff4790(longlong param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                  undefined1 param_5)

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



// FUNCTION 140ff4820 FUN_140ff4820 body=44 status=ok
// SIG undefined FUN_140ff4820(void)

void FUN_140ff4820(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142ebd930(param_1 + -0x680);
  if (cVar1 != '\0') {
    FUN_142eb3990(param_1 + -0x680);
    return;
  }
  return;
}



// FUNCTION 140ff4850 FUN_140ff4850 body=113 status=ok
// SIG undefined FUN_140ff4850(void)

int * FUN_140ff4850(longlong *param_1,int *param_2,byte param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (ulonglong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(byte *)((longlong)iVar1 * 0x78 + *param_1) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x78 + 0x70 + *param_1);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140ff48d0 FUN_140ff48d0 body=2934 status=ok
// SIG undefined FUN_140ff48d0(void)

void FUN_140ff48d0(longlong param_1,int param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong *_Src;
  bool bVar11;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  
  uVar4 = 0;
  *(int *)(param_1 + 0x318) = param_2;
  *(undefined1 *)(param_1 + 0x314) = 1;
  local_68 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_60 = 1;
  local_40 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_48,9,"barArmor",9,0x3f);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  lVar2 = FUN_140ecbdf0(param_1,&local_48,0,6,&local_58);
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,0);
  _Src = local_68;
  *local_68 = lVar2;
  plVar7 = local_58;
  for (iVar9 = (int)local_50; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_58 = (longlong *)0x0;
  local_50 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_58,10,"barShield",10,0x3f);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  lVar2 = FUN_140ecbdf0(param_1,&local_58,0,6,&local_48);
  uVar3 = local_60;
  lVar8 = (longlong)(int)local_60;
  iVar9 = (int)local_60 + 1;
  local_60 = CONCAT44(local_60._4_4_,iVar9);
  if (local_60._4_4_ < iVar9) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,uVar3 & 0xffffffff);
    _Src = local_68;
    iVar9 = (int)local_60;
  }
  _Src[lVar8] = lVar2;
  plVar7 = local_48;
  for (iVar10 = (int)local_40; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_58 = (longlong *)0x0;
  local_50 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_58,10,"barHealth",10,0x3f);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  lVar2 = FUN_140ecbdf0(param_1,&local_58,0,6,&local_48);
  iVar10 = iVar9 + 1;
  local_60 = CONCAT44(local_60._4_4_,iVar10);
  if (local_60._4_4_ < iVar10) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,iVar9);
    _Src = local_68;
    iVar10 = (int)local_60;
  }
  _Src[iVar9] = lVar2;
  plVar7 = local_48;
  for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (param_2 == 0) {
    local_48 = (longlong *)0x0;
    local_40 = CONCAT44(local_40._4_4_,iVar10);
    if (iVar10 == 0) {
      local_40 = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,iVar10,0);
      _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar10 << 3);
    }
    local_58 = (longlong *)0x0;
    local_50 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_58,0xb,"botFocused",0xb,0x3f);
    FUN_141014410(param_1,&local_58,&local_48);
    uVar3 = uVar4;
    uVar6 = uVar4;
    if (*_Src != 0) {
      local_58 = (longlong *)0x0;
      local_50 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_58,7,"barTop",7,0x3f);
      local_48 = (longlong *)0x0;
      local_40 = 0;
      uVar3 = FUN_140ecc430(*_Src,&local_58,0,6,&local_48);
      uVar6 = 3;
    }
    *(ulonglong *)(param_1 + 0x230) = uVar3;
    if ((uVar6 & 2) != 0) {
      uVar6 = (ulonglong)((uint)uVar6 & 0xfffffffd);
      plVar7 = local_48;
      for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
    if (((uVar6 & 1) != 0) && (local_58 != (longlong *)0x0)) {
      FMemory::Free();
    }
    bVar11 = _Src[1] != 0;
    uVar3 = uVar4;
    if (bVar11) {
      local_58 = (longlong *)0x0;
      local_50 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_58,0xb,"barMidHigh",0xb,0x3f);
      local_48 = (longlong *)0x0;
      local_40 = 0;
      uVar3 = FUN_140ecc430(_Src[1],&local_58,0,6,&local_48);
    }
    *(ulonglong *)(param_1 + 0x208) = uVar3;
    if (bVar11) {
      plVar7 = local_48;
      for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
    if ((bVar11) && (local_58 != (longlong *)0x0)) {
      FMemory::Free();
    }
    bVar11 = _Src[2] != 0;
    if (bVar11) {
      local_58 = (longlong *)0x0;
      local_50 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_58,0xc,"barBotFocus",0xc,0x3f);
      local_48 = (longlong *)0x0;
      local_40 = 0;
      uVar4 = FUN_140ecc430(_Src[2],&local_58,0,6,&local_48);
    }
    *(ulonglong *)(param_1 + 0x1e0) = uVar4;
    if (bVar11) {
      plVar7 = local_48;
      for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
    bVar11 = !bVar11;
  }
  else if (param_2 == 1) {
    local_48 = (longlong *)0x0;
    local_40 = CONCAT44(local_40._4_4_,iVar10);
    if (iVar10 == 0) {
      local_40 = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,iVar10,0);
      _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar10 << 3);
    }
    local_58 = (longlong *)0x0;
    local_50 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_58,0xb,"midFocused",0xb,0x3f);
    FUN_141014410(param_1,&local_58,&local_48);
    uVar3 = uVar4;
    uVar6 = uVar4;
    if (*_Src != 0) {
      local_58 = (longlong *)0x0;
      local_50 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_58,7,"barTop",7,0x3f);
      local_48 = (longlong *)0x0;
      local_40 = 0;
      uVar3 = FUN_140ecc430(*_Src,&local_58,0,6,&local_48);
      uVar6 = 0xc0;
    }
    *(ulonglong *)(param_1 + 0x230) = uVar3;
    if ((char)uVar6 < '\0') {
      uVar6 = (ulonglong)((uint)uVar6 & 0xffffff7f);
      plVar7 = local_48;
      for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
    if (((uVar6 & 0x40) != 0) && (local_58 != (longlong *)0x0)) {
      FMemory::Free();
    }
    bVar11 = _Src[1] != 0;
    uVar3 = uVar4;
    if (bVar11) {
      local_58 = (longlong *)0x0;
      local_50 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_58,0xc,"barMidFocus",0xc,0x3f);
      local_48 = (longlong *)0x0;
      local_40 = 0;
      uVar3 = FUN_140ecc430(_Src[1],&local_58,0,6,&local_48);
    }
    *(ulonglong *)(param_1 + 0x208) = uVar3;
    if (bVar11) {
      plVar7 = local_48;
      for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
    if ((bVar11) && (local_58 != (longlong *)0x0)) {
      FMemory::Free();
    }
    bVar11 = _Src[2] != 0;
    if (bVar11) {
      local_58 = (longlong *)0x0;
      local_50 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_58,7,"barBot",7,0x3f);
      local_48 = (longlong *)0x0;
      local_40 = 0;
      uVar4 = FUN_140ecc430(_Src[2],&local_58,0,6,&local_48);
    }
    *(ulonglong *)(param_1 + 0x1e0) = uVar4;
    if (bVar11) {
      plVar7 = local_48;
      for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
    bVar11 = !bVar11;
  }
  else {
    if (param_2 != 2) goto LAB_140ff53d2;
    local_48 = (longlong *)0x0;
    local_40 = CONCAT44(local_40._4_4_,iVar10);
    if (iVar10 == 0) {
      local_40 = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,iVar10,0);
      _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar10 << 3);
    }
    local_58 = (longlong *)0x0;
    local_50 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_58,0xb,"topFocused",0xb,0x3f);
    FUN_141014410(param_1,&local_58,&local_48);
    uVar3 = uVar4;
    uVar6 = uVar4;
    if (*_Src != 0) {
      local_58 = (longlong *)0x0;
      local_50 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_58,0xc,"barTopFocus",0xc,0x3f);
      local_48 = (longlong *)0x0;
      local_40 = 0;
      uVar3 = FUN_140ecc430(*_Src,&local_58,0,6,&local_48);
      uVar6 = 0x3000;
    }
    *(ulonglong *)(param_1 + 0x230) = uVar3;
    uVar5 = (uint)uVar6;
    if (uVar5 >> 0xd != 0) {
      uVar5 = uVar5 & 0xffffdfff;
      plVar7 = local_48;
      for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
    if (((uVar5 >> 0xc & 1) != 0) && (local_58 != (longlong *)0x0)) {
      FMemory::Free();
    }
    bVar11 = _Src[1] != 0;
    uVar3 = uVar4;
    if (bVar11) {
      local_58 = (longlong *)0x0;
      local_50 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_58,10,"barMidLow",10,0x3f);
      local_48 = (longlong *)0x0;
      local_40 = 0;
      uVar3 = FUN_140ecc430(_Src[1],&local_58,0,6,&local_48);
    }
    *(ulonglong *)(param_1 + 0x208) = uVar3;
    if (bVar11) {
      plVar7 = local_48;
      for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
    if ((bVar11) && (local_58 != (longlong *)0x0)) {
      FMemory::Free();
    }
    bVar11 = _Src[2] != 0;
    if (bVar11) {
      local_58 = (longlong *)0x0;
      local_50 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_58,7,"barBot",7,0x3f);
      local_48 = (longlong *)0x0;
      local_40 = 0;
      uVar4 = FUN_140ecc430(_Src[2],&local_58,0,6,&local_48);
    }
    *(ulonglong *)(param_1 + 0x1e0) = uVar4;
    if (bVar11) {
      plVar7 = local_48;
      for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
    bVar11 = !bVar11;
  }
  if ((!bVar11) && (local_58 != (longlong *)0x0)) {
    FMemory::Free();
  }
LAB_140ff53d2:
  uVar1 = *(undefined1 *)(param_1 + 0x188);
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x1e0) + 0x2b0) = uVar1;
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x208) + 0x2b0) = uVar1;
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x230) + 0x2b0) = uVar1;
  }
  *(undefined1 *)(param_1 + 0x188) = uVar1;
  FUN_14101d440(param_1,0);
  if (_Src != (longlong *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 140ff5460 FUN_140ff5460 body=765 status=ok
// SIG undefined FUN_140ff5460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140ff5460(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  void **ppvVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  void *local_e8;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined4 *local_c8;
  ulonglong *puStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [16];
  undefined4 local_68 [2];
  undefined8 local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puVar6 = (undefined8 *)FText::ToString(param_2);
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(puVar6 + 1);
  lVar9 = (longlong)local_e0;
  pvVar4 = (void *)*puVar6;
  if (local_e0 == 0) {
    local_dc = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_e0,0);
    _guard_xfg_dispatch_icall_nop(local_e8,pvVar4,lVar9 * 2);
  }
  FString::ReplaceInline(&local_e8,&DAT_144648e74,&DAT_144648e1c,1);
  FString::ReplaceInline(&local_e8,&DAT_144648f14,&DAT_144648ebc,1);
  FString::ReplaceInline(&local_e8,&DAT_14464aa48,&DAT_14464aa40,1);
  puVar6 = (undefined8 *)FTextFormat::FromString(local_78,&local_e8);
  local_68[0] = 0;
  local_c8 = local_68;
  local_40 = '\0';
  puStack_c0 = local_38;
  lStack_d0 = puVar6[1];
  local_d8 = *puVar6;
  local_60 = 0;
  if (lStack_d0 != 0) {
    LOCK();
    *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
    UNLOCK();
  }
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
  uVar7 = FText::Format(local_90,&local_d8,uVar7);
  FText::FText(local_a8,uVar7);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_88 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_b8);
  if (local_40 != '\0') {
    local_40 = '\0';
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  plVar5 = (longlong *)puVar6[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  ppvVar8 = (void **)FText::ToString(local_a8);
  if (&local_e8 != ppvVar8) {
    local_e0 = *(int *)(ppvVar8 + 1);
    lVar9 = (longlong)local_e0;
    pvVar4 = *ppvVar8;
    if ((local_e0 == 0) && (local_dc == 0)) {
      local_dc = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_e0);
      _guard_xfg_dispatch_icall_nop(local_e8,pvVar4,lVar9 * 2);
    }
  }
  FString::ReplaceInline(&local_e8,&DAT_1446490ac,&DAT_144648f64,1);
  FString::ReplaceInline(&local_e8,&DAT_144649154,&DAT_14464912c,1);
  FText::FromString(param_1,&local_e8);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_a0 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (local_e8 != (void *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140ff5760 FUN_140ff5760 body=875 status=ok
// SIG undefined FUN_140ff5760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140ff5760(LARGE_INTEGER *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  LONGLONG *pLVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_138 [32];
  LARGE_INTEGER local_118;
  longlong *local_110;
  LONGLONG *local_108;
  longlong *local_100;
  LARGE_INTEGER local_f8 [2];
  LONGLONG *local_e8;
  longlong *local_e0;
  undefined1 local_d8 [16];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  QueryPerformanceCounter(local_f8);
  *param_1 = local_f8[0];
  pLVar4 = (LONGLONG *)operator_new(0x18);
  if (pLVar4 == (LONGLONG *)0x0) {
    pLVar4 = (LONGLONG *)0x0;
  }
  else {
    puVar5 = (undefined8 *)operator_new(0x70);
    puVar9 = (undefined8 *)0x0;
    puVar10 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      *(undefined4 *)(puVar5 + 8) = 0;
      *puVar5 = AK::MemoryMgr::StartProfileThreadUsage;
      uVar6 = FUN_1415ab270(1);
      puVar5[10] = uVar6;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      puVar10 = puVar5;
    }
    puVar5 = (undefined8 *)operator_new(0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 1;
      *puVar5 = &PTR_DestroyObject_144145d88;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
      puVar5[2] = puVar10;
      puVar9 = puVar5;
    }
    *pLVar4 = (LONGLONG)puVar10;
    pLVar4[1] = (LONGLONG)puVar9;
    SharedPointerInternals::EnableSharedFromThis(pLVar4,puVar10,puVar10);
    *(undefined1 *)(pLVar4 + 2) = 0;
  }
  plVar8 = (longlong *)0x0;
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)pLVar4;
    plVar8 = plVar7;
  }
  local_108 = pLVar4;
  local_100 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_108,pLVar4,pLVar4);
  *(undefined1 *)(local_108 + 2) = 1;
  local_110 = (longlong *)local_108[1];
  local_118.QuadPart = *local_108;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  if (param_1 + 0x18 != &local_118) {
    param_1[0x18].QuadPart = (LONGLONG)local_118;
    local_118.QuadPart = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x19,&local_110);
  }
  plVar8 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_110 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = param_1;
    *puVar9 = &PTR_FUN_143f77b70;
  }
  local_88[0] = &LAB_140ff1d40;
  local_e8 = local_108;
  local_e0 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x70,param_2 + 2);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_CopyToEmptyStorage_14465fc28;
    puVar9[2] = local_e8;
    puVar9[3] = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 4,local_d8);
  }
  *param_2 = &LAB_140ff19b0;
  if (local_98 != 0) {
    plVar8 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar8 = local_a8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_e0 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_e0)(local_e0);
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
  plVar8 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_100 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_100)(local_100);
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
  return param_2;
}



// FUNCTION 140ff5ad0 FUN_140ff5ad0 body=588 status=ok
// SIG undefined FUN_140ff5ad0(void)

longlong FUN_140ff5ad0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_18;
  int local_10;
  
  if (param_1 != (longlong *)0x0) {
    if ((longlong *)param_1[0x23] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140ff5b09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(*(longlong *)param_1[0x23] + 0x678))();
      return lVar3;
    }
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar3 != 0) {
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      iVar2 = FUN_1428cf800(uVar4);
      if (iVar2 == 3) {
        uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        UWorld::GetPawnIterator(uVar4,&local_18);
        do {
          if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) {
            return 0;
          }
          lVar3 = FWeakObjectPtr::Get();
          if ((lVar3 != 0) && (*(longlong **)(lVar3 + 0x478) == param_1)) {
            lVar5 = APostProcessVolume::GetPrivateStaticClass();
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
              return lVar3;
            }
            lVar5 = FUN_1414bbb50();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((bVar1) && (lVar5 = FUN_140e80df0(lVar3,0), lVar5 != 0)) {
              lVar6 = APostProcessVolume::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                return lVar5;
              }
            }
            lVar5 = FUN_14148cad0();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((bVar1) && (lVar3 = FUN_141227a00(lVar3,0), lVar3 != 0)) {
              lVar5 = APostProcessVolume::GetPrivateStaticClass();
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
                return lVar3;
              }
            }
          }
          local_10 = local_10 + 1;
        } while( true );
      }
    }
  }
  return 0;
}



// FUNCTION 140ff5d30 FUN_140ff5d30 body=267 status=ok
// SIG undefined FUN_140ff5d30(void)

undefined8 FUN_140ff5d30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_140cfd240(param_2,param_3);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x109) != '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar3 = FUN_140cfd840(param_2,param_3);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x109) == '\0')) {
    plVar4 = *(longlong **)(param_1 + 0x748);
    plVar1 = plVar4 + *(int *)(param_1 + 0x750);
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == lVar3) {
        if (lVar2 == lVar3) {
          return 0;
        }
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x109) != '\0')) {
          return 1;
        }
        return 2;
      }
    }
    plVar4 = *(longlong **)(param_1 + 0x758);
    plVar1 = plVar4 + *(int *)(param_1 + 0x760);
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == lVar3) {
        if (lVar2 == lVar3) {
          return uVar5;
        }
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x109) != '\0')) {
          return 0;
        }
        return 1;
      }
    }
  }
  return uVar5;
}



// FUNCTION 140ff5e40 FUN_140ff5e40 body=692 status=ok
// SIG undefined FUN_140ff5e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140ff5e40(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14687399c) && (_Init_thread_header(&DAT_14687399c), DAT_14687399c == -1))
  {
    _DAT_14629f180 = 0x10001;
    FUN_142741540(&DAT_14629f190);
    DAT_14629f794 = 0.25;
    DAT_14629f7ac = 500.0;
    DAT_14629f798 = 90.0;
    _DAT_14629f7c4 = 0x42c80000;
    _DAT_14629f7b0 = 0x3f80000000000000;
    _DAT_14629f7b8 = 0x3f800000;
    _DAT_14629f7d0 = 0x3f6147ae;
    _DAT_14629f7cc = 0x3e4ccccd;
    DAT_14629f7e8 = 0.5;
    _DAT_14629f7d8 = 0x3f0ccccd;
    DAT_14629f790 = 1.0;
    DAT_14629f79c = 0;
    _DAT_14629f7a0 = 0;
    DAT_14629f7a4 = 1.0;
    DAT_14629f7a8 = 1.0;
    DAT_14629f7c0 = 0;
    DAT_14629f7c8 = 1.0;
    DAT_14629f7d4 = 0;
    _DAT_14629f7dc = 0;
    DAT_14629f7e4 = 1.0;
    _DAT_14629f7ec = 0x1000101;
    atexit(FUN_143e5baf0);
    _Init_thread_footer(&DAT_14687399c);
  }
  fVar1 = 0.0;
  switch(*(undefined1 *)(param_2 + 0x18)) {
  case 1:
    fVar1 = DAT_14629f798;
    break;
  case 2:
    fVar1 = DAT_14629f7dc;
    break;
  case 4:
    fVar1 = DAT_14629f7a8;
    break;
  case 5:
    fVar1 = DAT_14629f7ac;
    break;
  case 6:
    fVar1 = DAT_14629f794;
    break;
  case 7:
    fVar1 = DAT_14629f790;
    break;
  case 8:
  case 10:
    fVar1 = DAT_14629f7c8;
    break;
  case 9:
    fVar1 = DAT_14629f7b8;
    break;
  case 0xb:
    fVar1 = DAT_14629f7e8;
    if (*(char *)(param_1 + 0x6d8) != '\0') {
      fVar1 = *(float *)(param_1 + 0x6dc);
    }
    break;
  case 0xd:
    fVar1 = DAT_14629f7bc;
    break;
  case 0xf:
    fVar1 = DAT_14629f7a4;
    break;
  case 0x10:
    fVar1 = DAT_14629f7e0;
    break;
  case 0x11:
    fVar1 = DAT_14629f7e4;
  }
  fVar2 = *(float *)(param_2 + 0x28) - *(float *)(param_2 + 0x24);
  if (1e-08 < ABS(fVar2)) {
    fVar2 = (fVar1 - *(float *)(param_2 + 0x24)) / fVar2;
    if (fVar2 < 0.0) goto LAB_140ff5f95;
  }
  else if (fVar1 < *(float *)(param_2 + 0x28)) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = 1.0;
  }
  fVar3 = fVar2;
  if (1.0 <= fVar2) {
    fVar3 = 1.0;
  }
LAB_140ff5f95:
  return (*(float *)(param_2 + 0x20) - *(float *)(param_2 + 0x1c)) * fVar3 +
         *(float *)(param_2 + 0x1c);
}



// FUNCTION 140ff6140 FUN_140ff6140 body=575 status=ok
// SIG undefined FUN_140ff6140(void)

void FUN_140ff6140(longlong param_1,int param_2,int param_3,undefined8 param_4,longlong *param_5)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *local_58;
  undefined8 local_50;
  longlong local_48 [2];
  
  iVar9 = param_3 + -1 + param_2;
  iVar10 = 0;
  iVar11 = iVar9;
  if (0 < param_2) {
    do {
      if ((-1 < iVar11) && (iVar11 < *(int *)(param_1 + 0x48))) {
        uVar4 = FWeakObjectPtr::Get(param_1 + 0x98);
        iVar2 = *(int *)(param_1 + 0x48);
        iVar7 = (iVar2 - iVar9) + iVar10;
        iVar8 = iVar7 + -1;
        if ((*(int *)(param_1 + 0x38) < 1) ||
           ((((iVar2 < 1 || (iVar7 < 1)) || (iVar2 <= iVar8)) ||
            ((iVar8 = (*(int *)(param_1 + 0x50) + iVar2 + iVar8) % iVar2, iVar8 < 0 ||
             (iVar2 <= iVar8)))))) {
          lVar6 = param_1 + 0x58;
        }
        else {
          lVar6 = (longlong)iVar8 * 0x38 + *(longlong *)(param_1 + 0x40);
        }
        puVar5 = (undefined8 *)FUN_140ff6450(lVar6,local_48,uVar4,param_4);
        pvVar3 = (void *)*puVar5;
        iVar8 = *(int *)(puVar5 + 1) + -1;
        if (*(int *)(puVar5 + 1) == 0) {
          iVar8 = 0;
        }
        if (iVar8 != 0) {
          iVar2 = (int)param_5[1];
          iVar7 = (uint)(iVar2 == 0) + iVar8 + iVar2;
          *(int *)(param_5 + 1) = iVar7;
          if (*(int *)((longlong)param_5 + 0xc) < iVar7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
          }
          pvVar1 = (void *)(*param_5 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar8 * 2);
          *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar1) = 0;
        }
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        if (iVar10 != param_2 + -1) {
          local_58 = (void *)0x0;
          local_50 = 2;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          pvVar3 = local_58;
          FGenericPlatformString::Memcpy(local_58,&DAT_144649214,4);
          if (((int)local_50 != 0) && (iVar8 = (int)local_50 + -1, iVar8 != 0)) {
            iVar2 = (int)param_5[1];
            iVar7 = (uint)(iVar2 == 0) + iVar2 + iVar8;
            *(int *)(param_5 + 1) = iVar7;
            if (*(int *)((longlong)param_5 + 0xc) < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
            }
            pvVar1 = (void *)(*param_5 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar8 * 2);
            *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar1) = 0;
          }
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
        }
      }
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar10 < param_2);
  }
  return;
}



// FUNCTION 140ff6390 FUN_140ff6390 body=190 status=ok
// SIG undefined FUN_140ff6390(void)

int FUN_140ff6390(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  longlong *plVar4;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x280));
  lVar2 = *(longlong *)(param_1 + 0x270);
  plVar4 = (longlong *)0x0;
  if (lVar2 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x278);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x280));
  if (lVar2 == 0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    iVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
    iVar1 = iVar1 + -1;
    lVar2 = (longlong)iVar1;
    if (-1 < iVar1) {
      pfVar3 = (float *)(param_1 + lVar2 * 0x28 + 0x200);
      do {
        if (1e-08 < *pfVar3 || *pfVar3 == 1e-08) {
          return iVar1;
        }
        iVar1 = iVar1 + -1;
        pfVar3 = pfVar3 + -10;
        lVar2 = lVar2 + -1;
      } while (-1 < lVar2);
    }
  }
  return -1;
}



// FUNCTION 140ff6450 FUN_140ff6450 body=1364 status=ok
// SIG undefined FUN_140ff6450(void)

longlong * FUN_140ff6450(longlong *param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined2 in_stack_ffffffffffffff18;
  undefined2 uVar16;
  undefined1 uVar17;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  void *local_78;
  int local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  
  uVar17 = (undefined1)((ushort)in_stack_ffffffffffffff18 >> 8);
  lVar14 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*param_1 == 0) || (param_3 == 0)) goto LAB_140ff6914;
  lVar10 = FUN_1424503b0(param_3);
  if (lVar10 == 0) {
LAB_140ff64e5:
    lVar10 = lVar14;
  }
  else {
    lVar11 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140ff64e5;
  }
  lVar11 = param_1[2];
  local_c8 = (void *)0x0;
  local_c0 = 0;
  if (lVar11 == 0) {
LAB_140ff654f:
    bVar7 = true;
  }
  else {
    lVar14 = 1;
    local_90 = (longlong *)param_1[3];
    if (local_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
    }
    uVar16 = CONCAT11(uVar17,1);
    local_98 = lVar11;
    cVar8 = FUN_140d7a1d0(*(undefined8 *)(param_3 + 0x478),&local_98,lVar10,0,uVar16,&local_c8,
                          0xbf800000);
    uVar17 = (undefined1)((ushort)uVar16 >> 8);
    if (cVar8 == '\0') goto LAB_140ff654f;
    bVar7 = false;
  }
  plVar3 = local_90;
  if ((lVar14 != 0) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_90 + 1;
    lVar14 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_90)(local_90);
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
  if (bVar7) {
    local_88 = *param_1;
    local_80 = (longlong *)param_1[1];
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    cVar8 = FUN_140d7a1d0(*(undefined8 *)(param_3 + 0x478),&local_88,lVar10,0,CONCAT11(uVar17,1),
                          &local_c8,0xbf800000);
    plVar3 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar14 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_80)(local_80);
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
    if (cVar8 == '\0') {
      uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_68,L"Player",L"PCTextChatBuffer",L"TextChatDefaultPlayerName");
      uVar12 = FText::ToString(uVar12);
      FString::operator=(&local_c8,uVar12);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_60 + 1;
        lVar14 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
  }
  if (1 < *(int *)(param_4 + 1)) {
    if (*(int *)(param_4 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*param_4;
    }
    FString::PrintfImpl(&local_78,L"<font color=\"%s\">",puVar15);
    pvVar6 = local_78;
    if (local_70 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = local_70 + -1;
    }
    if (iVar13 != 0) {
      iVar5 = (int)param_2[1];
      iVar9 = (uint)(iVar5 == 0) + iVar13 + iVar5;
      *(int *)(param_2 + 1) = iVar9;
      if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
      }
      pvVar4 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar4,pvVar6,(longlong)iVar13 * 2);
      *(undefined2 *)((longlong)pvVar4 + (longlong)iVar13 * 2) = 0;
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
  }
  pvVar6 = local_c8;
  iVar13 = 0;
  if ((int)local_c0 != 0) {
    iVar13 = (int)local_c0 + -1;
  }
  if (iVar13 != 0) {
    iVar5 = (int)param_2[1];
    iVar9 = (uint)(iVar5 == 0) + iVar13 + iVar5;
    *(int *)(param_2 + 1) = iVar9;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
    }
    pvVar4 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar4,pvVar6,(longlong)iVar13 * 2);
    *(undefined2 *)((longlong)pvVar4 + (longlong)iVar13 * 2) = 0;
  }
  local_b0 = 3;
  local_b8 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  pvVar6 = local_b8;
  FGenericPlatformString::Convert<char,wchar_t>(local_b8,3,&DAT_144649284,3,0x3f);
  if (((int)local_b0 != 0) && (iVar13 = (int)local_b0 + -1, iVar13 != 0)) {
    iVar5 = (int)param_2[1];
    iVar9 = (uint)(iVar5 == 0) + iVar13 + iVar5;
    *(int *)(param_2 + 1) = iVar9;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
    }
    pvVar4 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar4,pvVar6,(longlong)iVar13 * 2);
    *(undefined2 *)((longlong)pvVar4 + (longlong)iVar13 * 2) = 0;
  }
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (1 < *(int *)(param_4 + 1)) {
    local_a8 = (void *)0x0;
    local_a0 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    pvVar6 = local_a8;
    FGenericPlatformString::Memcpy(local_a8,L"</font>",0x10);
    if (((int)local_a0 != 0) && (iVar13 = (int)local_a0 + -1, iVar13 != 0)) {
      iVar5 = (int)param_2[1];
      iVar9 = (uint)(iVar5 == 0) + iVar13 + iVar5;
      *(int *)(param_2 + 1) = iVar9;
      if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
      }
      pvVar4 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar4,pvVar6,(longlong)iVar13 * 2);
      *(undefined2 *)((longlong)pvVar4 + (longlong)iVar13 * 2) = 0;
    }
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free();
  }
LAB_140ff6914:
  pvVar6 = (void *)param_1[4];
  iVar13 = (int)param_1[5] + -1;
  if ((int)param_1[5] == 0) {
    iVar13 = 0;
  }
  if (iVar13 != 0) {
    iVar5 = (int)param_2[1];
    iVar9 = (uint)(iVar5 == 0) + iVar13 + iVar5;
    *(int *)(param_2 + 1) = iVar9;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
    }
    pvVar4 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar4,pvVar6,(longlong)iVar13 * 2);
    *(undefined2 *)((longlong)pvVar4 + (longlong)iVar13 * 2) = 0;
  }
  return param_2;
}



// FUNCTION 140ff69b0 FUN_140ff69b0 body=123 status=ok
// SIG undefined FUN_140ff69b0(void)

undefined8 FUN_140ff69b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x280));
  lVar1 = *(longlong *)(param_1 + 0x270);
  plVar3 = (longlong *)0x0;
  if (lVar1 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x278);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x280));
  if (lVar1 == 0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return uVar2;
}



// FUNCTION 140ff6a30 FUN_140ff6a30 body=103 status=ok
// SIG undefined FUN_140ff6a30(void)

longlong FUN_140ff6a30(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return 0;
  }
  lVar2 = FUN_1420fc090();
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140ff6aa0 FUN_140ff6aa0 body=129 status=ok
// SIG undefined FUN_140ff6aa0(void)

ulonglong FUN_140ff6aa0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x650));
  plVar1 = *(longlong **)(param_1 + 0x640);
  plVar2 = plVar1;
  do {
    if (plVar2 == plVar1 + (longlong)*(int *)(param_1 + 0x648) * 2) {
      uVar3 = 0xffffffff;
LAB_140ff6af9:
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x650));
      return uVar3 & 0xffffffff;
    }
    if (*plVar2 == param_2) {
      uVar3 = (longlong)plVar2 - (longlong)plVar1 >> 4;
      goto LAB_140ff6af9;
    }
    plVar2 = plVar2 + 2;
  } while( true );
}



// FUNCTION 140ff6b30 FUN_140ff6b30 body=1623 status=ok
// SIG undefined FUN_140ff6b30(void)

undefined8 * FUN_140ff6b30(undefined1 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar1 < DAT_146873918) && (_Init_thread_header(&DAT_146873918), DAT_146873918 == -1)) {
    atexit((_func_5014 *)&LAB_143e5bb60);
    _Init_thread_footer(&DAT_146873918);
  }
  if ((*piVar1 < DAT_14687391c) && (_Init_thread_header(&DAT_14687391c), DAT_14687391c == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f0a8,0);
    FGenericPlatformString::Memcpy(DAT_14629f0a8,L"none",10);
    atexit((_func_5014 *)&LAB_143e5b8d0);
    _Init_thread_footer(&DAT_14687391c);
  }
  if ((*piVar1 < DAT_146873920) && (_Init_thread_header(&DAT_146873920), DAT_146873920 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f0b8,0);
    FGenericPlatformString::Memcpy(DAT_14629f0b8,L"slideIn",0x10);
    atexit((_func_5014 *)&LAB_143e5b8f0);
    _Init_thread_footer(&DAT_146873920);
  }
  if ((*piVar1 < DAT_146873924) && (_Init_thread_header(&DAT_146873924), DAT_146873924 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f0c8,0);
    FGenericPlatformString::Memcpy(DAT_14629f0c8,L"slideInChecked",0x1e);
    atexit((_func_5014 *)&LAB_143e5b910);
    _Init_thread_footer(&DAT_146873924);
  }
  if ((*piVar1 < DAT_146873928) && (_Init_thread_header(&DAT_146873928), DAT_146873928 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f0d8,0);
    FGenericPlatformString::Memcpy(DAT_14629f0d8,L"slideOut",0x12);
    atexit((_func_5014 *)&LAB_143e5b9b0);
    _Init_thread_footer(&DAT_146873928);
  }
  if ((*piVar1 < DAT_14687392c) && (_Init_thread_header(&DAT_14687392c), DAT_14687392c == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f0e8,0);
    FGenericPlatformString::Memcpy(DAT_14629f0e8,L"slideInFromAbove",0x22);
    atexit((_func_5014 *)&LAB_143e5b930);
    _Init_thread_footer(&DAT_14687392c);
  }
  if ((*piVar1 < DAT_146873930) && (_Init_thread_header(&DAT_146873930), DAT_146873930 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f0f8,0);
    FGenericPlatformString::Memcpy(DAT_14629f0f8,L"slideInFromBelow",0x22);
    atexit((_func_5014 *)&LAB_143e5b970);
    _Init_thread_footer(&DAT_146873930);
  }
  if ((*piVar1 < DAT_146873934) && (_Init_thread_header(&DAT_146873934), DAT_146873934 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f108,0);
    FGenericPlatformString::Memcpy(DAT_14629f108,L"slideInFromAboveChecked",0x30);
    atexit((_func_5014 *)&LAB_143e5b950);
    _Init_thread_footer(&DAT_146873934);
  }
  if ((*piVar1 < DAT_146873938) && (_Init_thread_header(&DAT_146873938), DAT_146873938 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f118,0);
    FGenericPlatformString::Memcpy(DAT_14629f118,L"slideInFromBelowChecked",0x30);
    atexit((_func_5014 *)&LAB_143e5b990);
    _Init_thread_footer(&DAT_146873938);
  }
  if ((*piVar1 < DAT_14687393c) && (_Init_thread_header(&DAT_14687393c), DAT_14687393c == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f128,0);
    FGenericPlatformString::Memcpy(DAT_14629f128,L"checked",0x10);
    atexit((_func_5014 *)&LAB_143e5b870);
    _Init_thread_footer(&DAT_14687393c);
  }
  if ((*piVar1 < DAT_146873940) && (_Init_thread_header(&DAT_146873940), DAT_146873940 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f138,0);
    FGenericPlatformString::Memcpy(DAT_14629f138,L"thwarted",0x12);
    atexit((_func_5014 *)&LAB_143e5b8b0);
    _Init_thread_footer(&DAT_146873940);
  }
  if ((*piVar1 < DAT_146873944) && (_Init_thread_header(&DAT_146873944), DAT_146873944 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f148,0);
    FGenericPlatformString::Memcpy(DAT_14629f148,L"thwartedCheck",0x1c);
    atexit((_func_5014 *)&LAB_143e5b890);
    _Init_thread_footer(&DAT_146873944);
  }
  if ((*piVar1 < DAT_146873948) && (_Init_thread_header(&DAT_146873948), DAT_146873948 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629f158,0);
    FGenericPlatformString::Memcpy(DAT_14629f158,L"slideOutThwarted",0x22);
    atexit((_func_5014 *)&LAB_143e5b9d0);
    _Init_thread_footer(&DAT_146873948);
  }
  switch(param_1) {
  default:
    return &DAT_146873908;
  case 1:
  case 2:
    return &DAT_14629f0b8;
  case 3:
    return &DAT_14629f0c8;
  case 4:
    return &DAT_14629f0d8;
  case 5:
    return &DAT_14629f0e8;
  case 6:
    return &DAT_14629f108;
  case 7:
    return &DAT_14629f0f8;
  case 8:
    return &DAT_14629f118;
  case 9:
    return &DAT_14629f128;
  case 10:
  case 0xb:
    return &DAT_14629f148;
  case 0xc:
    return &DAT_14629f158;
  }
}



// FUNCTION 140ff71e0 FUN_140ff71e0 body=275 status=ok
// SIG undefined FUN_140ff71e0(void)

undefined8 FUN_140ff71e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x2d8));
  if ((*(longlong *)(param_1 + 0x2e0) == 0) || (*(longlong *)(param_1 + 0x2e8) == 0)) {
    uVar7 = FUN_1404b03b0();
    uVar7 = FText::FText(local_38,uVar7);
    bVar5 = false;
    bVar4 = true;
  }
  else {
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x68))
                      (*(longlong **)(param_1 + 0x2e8),local_20);
    bVar5 = true;
    bVar4 = false;
  }
  FText::FText(param_2,uVar7);
  if (bVar4) {
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  if ((bVar5) && (local_18 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return param_2;
}



// FUNCTION 140ff7300 FUN_140ff7300 body=438 status=ok
// SIG undefined FUN_140ff7300(void)

void FUN_140ff7300(longlong param_1,longlong *param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  undefined8 *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  uVar7 = 0;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  if (*(longlong *)(param_1 + 0x698) != 0) {
    plVar4 = (longlong *)(param_1 + 0x688);
    if (*plVar4 != 0) {
      lVar3 = FUN_142f71d80();
      for (lVar2 = *plVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) {
          if (*plVar4 != 0) goto LAB_140ff7388;
          break;
        }
      }
    }
    plVar4 = (longlong *)FUN_142f5ed60(*(undefined8 *)(param_1 + 0x698),local_res8);
LAB_140ff7388:
    lVar2 = *plVar4;
    FUN_142f59720(*(undefined8 *)(param_1 + 0x698),lVar2,&local_68,param_3);
    uVar8 = (ulonglong)((longlong)(local_68 + (int)local_60) + (7 - (longlong)local_68)) >> 3;
    if (local_68 + (int)local_60 < local_68) {
      uVar8 = uVar7;
    }
    puVar6 = local_68;
    if (uVar8 != 0) {
      do {
        local_50 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0xffffffff;
        local_34 = 0;
        local_58 = &DAT_1441d2800;
        local_30 = 0;
        FUN_142f604c0(&local_58,lVar2,*puVar6);
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        uVar7 = uVar7 + 1;
        puVar5 = (undefined8 *)((longlong)iVar1 * 0x30 + *param_2);
        *puVar5 = &PTR_FUN_1441d26b8;
        puVar5[1] = local_50;
        *(undefined4 *)(puVar5 + 2) = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar5 + 0x14) = local_48._4_4_;
        *(undefined4 *)(puVar5 + 3) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_40._4_4_;
        *(undefined4 *)(puVar5 + 4) = local_38;
        *(undefined4 *)((longlong)puVar5 + 0x24) = local_34;
        *puVar5 = &DAT_1441d2800;
        puVar5[5] = local_30;
        puVar6 = puVar6 + 1;
      } while (uVar7 != uVar8);
    }
    if (local_68 != (undefined8 *)0x0) {
      FMemory::Free(local_68);
    }
  }
  return;
}



// FUNCTION 140ff74c0 FUN_140ff74c0 body=1560 status=ok
// SIG undefined FUN_140ff74c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140ff74c0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_278 [32];
  longlong local_258 [6];
  undefined1 local_228 [4];
  undefined1 local_224 [4];
  undefined1 local_220 [8];
  longlong *local_218;
  undefined4 *local_210;
  longlong *local_208;
  undefined4 *local_200;
  undefined8 local_1f8;
  longlong *plStack_1f0;
  longlong *local_1e8;
  undefined4 *local_1e0;
  undefined8 local_1d8;
  longlong *plStack_1d0;
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  if (*(longlong *)(param_1 + 0x688) != 0) {
    lVar5 = FUN_142f71d80();
    lVar9 = *(longlong *)(param_1 + 0x688);
    for (lVar7 = lVar9; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar5) {
        if (lVar9 != 0) goto LAB_140ff7555;
        break;
      }
    }
  }
  lVar9 = 0;
  if (*(longlong *)(param_1 + 0x698) != 0) {
    plVar6 = (longlong *)FUN_142f5ed60(*(longlong *)(param_1 + 0x698),local_1c8);
    lVar9 = *plVar6;
  }
LAB_140ff7555:
  if (lVar9 != 0) {
    lVar7 = FUN_142f71d80();
    do {
      if (lVar9 == lVar7) {
        if (param_3 != 0) {
          local_f8 = 0xffffffff;
          local_128 = 0;
          local_120 = 0;
          local_108 = 0;
          local_100 = 0;
          local_f4 = 0;
          local_e8 = 0;
          local_e0 = 0;
          uVar8 = ULiveLinkTimeSynchronizationSource::GetDisplayName(param_3,local_1c0);
          local_d8[0] = 4;
          FText::FText(local_c8,uVar8);
          local_b0 = '\x01';
          local_258[0] = 0;
          local_258[1] = 0x10;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_258,0);
          FGenericPlatformString::Memcpy(local_258[0],L"CurrentProgress",0x20);
          local_218 = local_258;
          local_210 = local_d8;
          FUN_1407484b0(&local_128,local_228,&local_218,0);
          if (local_258[0] != 0) {
            FMemory::Free();
          }
          if ((local_b0 != '\0') && (local_b0 = '\0', local_c0 != (longlong *)0x0)) {
            LOCK();
            plVar6 = local_c0 + 1;
            lVar7 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
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
          if (local_1b8 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_1b8 + 1;
            lVar7 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_1b8)(local_1b8);
              LOCK();
              piVar1 = (int *)((longlong)local_1b8 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_1b8 + 8))(local_1b8,1);
              }
            }
          }
          bVar4 = FUN_140472310(param_3);
          if (bVar4 < 2) {
            uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_160,L"{CurrentProgress}",L"MissionTrackerHUDWidget",
                               L"ObjectiveCountText");
            uVar8 = FTextFormat::FTextFormat(local_138,uVar8);
            FText::Format(param_2,uVar8,&local_128);
            if (local_158 != (longlong *)0x0) {
              LOCK();
              plVar6 = local_158 + 1;
              lVar7 = *plVar6;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_158)(local_158);
                LOCK();
                piVar1 = (int *)((longlong)local_158 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_158 + 8))(local_158,1);
                }
              }
            }
          }
          else {
            local_1f8 = 0;
            plStack_1f0 = (longlong *)0x0;
            uVar8 = FText::AsNumber(local_1a8,param_4,0,&local_1f8);
            local_a8[0] = 4;
            FText::FText(local_98,uVar8);
            local_80 = '\x01';
            local_258[2] = 0;
            local_258[3] = 0x12;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_258 + 2,0);
            FGenericPlatformString::Memcpy(local_258[2],L"CurrentObjectives",0x24);
            local_208 = local_258 + 2;
            local_200 = local_a8;
            FUN_1407484b0(&local_128,local_224,&local_208,0);
            if (local_258[2] != 0) {
              FMemory::Free();
            }
            if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
              LOCK();
              plVar6 = local_90 + 1;
              lVar7 = *plVar6;
              *(int *)plVar6 = (int)*plVar6 + -1;
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
            if (local_1a0 != (longlong *)0x0) {
              LOCK();
              plVar6 = local_1a0 + 1;
              lVar7 = *plVar6;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_1a0)(local_1a0);
                LOCK();
                piVar1 = (int *)((longlong)local_1a0 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_1a0 + 8))(local_1a0,1);
                }
              }
            }
            plVar6 = plStack_1f0;
            if (plStack_1f0 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_1f0 + 1;
              lVar7 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_1f0)(plStack_1f0);
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
            local_1d8 = 0;
            plStack_1d0 = (longlong *)0x0;
            uVar8 = FText::AsNumber(local_190,bVar4,0,&local_1d8);
            local_78[0] = 4;
            FText::FText(local_68,uVar8);
            local_50 = '\x01';
            local_258[4] = 0;
            local_258[5] = 0x10;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_258 + 4,0);
            FGenericPlatformString::Memcpy(local_258[4],L"TotalObjectives",0x20);
            local_1e8 = local_258 + 4;
            local_1e0 = local_78;
            FUN_1407484b0(&local_128,local_220,&local_1e8,0);
            if (local_258[4] != 0) {
              FMemory::Free();
            }
            if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
              LOCK();
              plVar6 = local_60 + 1;
              lVar7 = *plVar6;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar1 = (int *)((longlong)local_60 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_60 + 8))(local_60,1);
                }
              }
            }
            if (local_188 != (longlong *)0x0) {
              LOCK();
              plVar6 = local_188 + 1;
              lVar7 = *plVar6;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_188)(local_188);
                LOCK();
                piVar1 = (int *)((longlong)local_188 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_188 + 8))(local_188,1);
                }
              }
            }
            plVar6 = plStack_1d0;
            if (plStack_1d0 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_1d0 + 1;
              lVar7 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_1d0)(plStack_1d0);
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
            uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_178,
                               L"{CurrentProgress} : {CurrentObjectives} / {TotalObjectives}",
                               L"MissionTrackerHUDWidget",L"ObjectiveCountText_Multi");
            uVar8 = FTextFormat::FTextFormat(local_148,uVar8);
            FText::Format(param_2,uVar8,&local_128);
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
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_170 + 8))(local_170,1);
                }
              }
            }
          }
          local_e0 = 0;
          if (local_e8 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (&local_128);
          return param_2;
        }
        break;
      }
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  uVar8 = FUN_1404b03b0();
  FText::FText(param_2,uVar8);
  return param_2;
}



// FUNCTION 140ff7ae0 FUN_140ff7ae0 body=43 status=ok
// SIG undefined FUN_140ff7ae0(void)

void FUN_140ff7ae0(longlong param_1)

{
  if (*(longlong *)(param_1 + -0xd0) != 0) {
    FUN_142ee3e70();
  }
  FUN_141010350(param_1 + -0x680);
  return;
}



// FUNCTION 140ff7b10 FUN_140ff7b10 body=114 status=ok
// SIG undefined FUN_140ff7b10(void)

void FUN_140ff7b10(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + -0xd0) != 0) {
    FUN_142ee3e70();
  }
  FUN_141010350(param_1 + -0x680);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + 0x170);
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0xe0) + 0x170);
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return;
}



// FUNCTION 140ff7b90 FUN_140ff7b90 body=275 status=ok
// SIG undefined FUN_140ff7b90(void)

void FUN_140ff7b90(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  cVar2 = (**(code **)(param_1[0x130] + 0x20))(param_1 + 0x130);
  if (cVar2 == '\0') {
    return;
  }
  lVar3 = (**(code **)(*param_1 + 0xfa8))(param_1);
  lVar4 = (**(code **)(param_1[0x130] + 0x10))(param_1 + 0x130);
  if (lVar4 != 0) {
    lVar5 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140ff7c24;
  }
  lVar4 = 0;
LAB_140ff7c24:
  if (lVar3 == 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_140fe2a00(lVar3);
  if (lVar5 == 0) {
    lVar5 = FUN_142ee1f00(lVar3,*(undefined8 *)(lVar4 + 0x3d8));
    if (lVar5 == 0) {
      return;
    }
    lVar3 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
  }
  FUN_141014050(lVar5);
  return;
}



// FUNCTION 140ff7cb0 FUN_140ff7cb0 body=5143 status=ok
// SIG undefined FUN_140ff7cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ff7cb0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 auStack_968 [32];
  longlong **local_948;
  longlong **local_940;
  undefined4 local_938;
  undefined4 local_934;
  undefined4 local_930;
  undefined4 local_92c;
  undefined4 local_928;
  undefined4 local_924;
  longlong *local_920;
  undefined8 local_918;
  longlong *local_910;
  undefined8 local_908;
  longlong local_900;
  undefined8 local_8f8;
  longlong *local_8f0;
  undefined8 local_8e8;
  longlong local_8e0;
  undefined8 local_8d8;
  longlong local_8d0;
  undefined8 local_8c8;
  longlong *local_8c0;
  undefined8 local_8b8;
  longlong local_8b0;
  undefined8 local_8a8;
  longlong *local_8a0;
  undefined8 local_898;
  longlong local_890;
  undefined8 local_888;
  longlong *local_880;
  undefined8 local_878;
  longlong local_870;
  undefined8 local_868;
  longlong *local_860;
  undefined8 local_858;
  longlong local_850;
  undefined8 local_848;
  longlong *local_840;
  undefined8 local_838;
  longlong local_830;
  undefined8 local_828;
  undefined8 local_820;
  undefined8 local_818;
  undefined1 local_810 [8];
  undefined1 local_808 [8];
  undefined1 local_800 [8];
  undefined1 local_7f8 [8];
  undefined1 local_7f0 [8];
  longlong *local_7e8;
  undefined1 local_7d8 [8];
  longlong *local_7d0;
  undefined1 *local_7b8 [2];
  longlong local_7a8 [4];
  longlong *local_788;
  int local_778;
  undefined1 *local_768 [2];
  longlong local_758 [4];
  longlong *local_738;
  int local_728;
  undefined1 *local_718 [2];
  longlong local_708 [4];
  longlong *local_6e8;
  int local_6d8;
  undefined1 *local_6c8 [2];
  longlong local_6b8 [4];
  longlong *local_698;
  int local_688;
  undefined1 *local_678 [2];
  longlong local_668 [4];
  longlong *local_648;
  int local_638;
  undefined1 *local_628 [2];
  longlong local_618 [4];
  longlong *local_5f8;
  int local_5e8;
  undefined1 *local_5d8 [2];
  longlong local_5c8 [4];
  longlong *local_5a8;
  int local_598;
  undefined1 *local_588 [2];
  longlong local_578 [4];
  longlong *local_558;
  int local_548;
  undefined1 *local_538 [2];
  longlong local_528 [4];
  longlong *local_508;
  int local_4f8;
  undefined1 *local_4e8 [2];
  longlong local_4d8 [4];
  longlong *local_4b8;
  int local_4a8;
  undefined1 *local_498 [2];
  longlong local_488 [4];
  longlong *local_468;
  int local_458;
  undefined1 *local_448 [2];
  longlong local_438 [4];
  longlong *local_418;
  int local_408;
  undefined1 local_3f8 [16];
  longlong local_3e8 [4];
  longlong *local_3c8;
  int local_3b8;
  undefined1 local_3a8 [16];
  longlong local_398 [4];
  longlong *local_378;
  int local_368;
  undefined1 local_358 [16];
  longlong local_348 [4];
  longlong *local_328;
  int local_318;
  undefined1 local_308 [16];
  longlong local_2f8 [4];
  longlong *local_2d8;
  int local_2c8;
  undefined1 local_2b8 [16];
  longlong local_2a8 [4];
  longlong *local_288;
  int local_278;
  undefined1 local_268 [16];
  longlong local_258 [4];
  longlong *local_238;
  int local_228;
  undefined1 local_218 [16];
  longlong local_208 [4];
  longlong *local_1e8;
  int local_1d8;
  undefined1 local_1c8 [16];
  longlong local_1b8 [4];
  longlong *local_198;
  int local_188;
  undefined1 local_178 [16];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined1 local_128 [16];
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_968;
  local_8f8 = 0xb;
  local_900 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_900,0);
  FGenericPlatformString::Memcpy(local_900,L"skillLabel",0x16);
  local_940 = &local_910;
  local_910 = (longlong *)0x0;
  local_948 = (longlong **)CONCAT71(local_948._1_7_,6);
  local_908 = 0;
  local_818 = 0;
  cVar3 = FUN_140ecf4e0(param_1,param_1 + 0xf10,&local_900,0);
  plVar6 = local_910;
  for (iVar8 = (int)local_908; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_910 != (longlong *)0x0) {
    FMemory::Free(local_910);
  }
  if (local_900 != 0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    lVar2 = **(longlong **)(param_1 + 0xf10);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_7d8,L"SKILL SLOT",L"GFxOperativeSkillScreenTree",L"SkillSlotLabel");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0xf10),uVar4,1,0);
    if (local_7d0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_7d0 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_7d0)(local_7d0);
        LOCK();
        piVar1 = (int *)((longlong)local_7d0 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_7d0 + 8))(local_7d0,1);
        }
      }
    }
  }
  local_8e0 = 0;
  local_8d8 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_8e0,0);
  FGenericPlatformString::Memcpy(local_8e0,L"modsLabel",0x14);
  local_940 = &local_8f0;
  local_8f0 = (longlong *)0x0;
  local_948 = (longlong **)CONCAT71(local_948._1_7_,6);
  local_8e8 = 0;
  local_820 = 0;
  cVar3 = FUN_140ecf4e0(param_1,param_1 + 0xf18,&local_8e0,0);
  plVar6 = local_8f0;
  for (iVar8 = (int)local_8e8; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_8f0 != (longlong *)0x0) {
    FMemory::Free(local_8f0);
  }
  if (local_8e0 != 0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    lVar2 = **(longlong **)(param_1 + 0xf18);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_7f0,L"MODS",L"GFxOperativeSkillScreenTree",L"ModSlotsLabel");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0xf18),uVar4,1,0);
    if (local_7e8 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_7e8 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_7e8)(local_7e8);
        LOCK();
        piVar1 = (int *)((longlong)local_7e8 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_7e8 + 8))(local_7e8,1);
        }
      }
    }
  }
  local_8d0 = 0;
  local_8c8 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_8d0,0);
  FGenericPlatformString::Memcpy(local_8d0,L"topSkill",0x12);
  local_948 = &local_920;
  local_920 = (longlong *)0x0;
  local_918 = 0;
  uVar4 = FUN_140ecaa30(param_1,&local_8d0,0,6);
  *(undefined8 *)(param_1 + 0xf20) = uVar4;
  plVar6 = local_920;
  for (iVar8 = (int)local_918; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_920 != (longlong *)0x0) {
    FMemory::Free(local_920);
  }
  if (local_8d0 != 0) {
    FMemory::Free();
  }
  local_8b0 = 0;
  local_8a8 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_8b0,0);
  FGenericPlatformString::Memcpy(local_8b0,L"topMod0",0x10);
  local_948 = &local_8c0;
  local_8c0 = (longlong *)0x0;
  local_8b8 = 0;
  uVar4 = FUN_140ecaa30(param_1,&local_8b0,0,6);
  *(undefined8 *)(param_1 + 0xf28) = uVar4;
  plVar6 = local_8c0;
  for (iVar8 = (int)local_8b8; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_8c0 != (longlong *)0x0) {
    FMemory::Free(local_8c0);
  }
  if (local_8b0 != 0) {
    FMemory::Free();
  }
  local_890 = 0;
  local_888 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_890,0);
  FGenericPlatformString::Memcpy(local_890,L"topMod1",0x10);
  local_948 = &local_8a0;
  local_8a0 = (longlong *)0x0;
  local_898 = 0;
  uVar4 = FUN_140ecaa30(param_1,&local_890,0,6);
  *(undefined8 *)(param_1 + 0xf30) = uVar4;
  plVar6 = local_8a0;
  for (iVar8 = (int)local_898; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_8a0 != (longlong *)0x0) {
    FMemory::Free(local_8a0);
  }
  if (local_890 != 0) {
    FMemory::Free();
  }
  local_870 = 0;
  local_868 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_870,0);
  FGenericPlatformString::Memcpy(local_870,L"bottomSkill",0x18);
  local_948 = &local_880;
  local_880 = (longlong *)0x0;
  local_878 = 0;
  uVar4 = FUN_140ecaa30(param_1,&local_870,0,6);
  *(undefined8 *)(param_1 + 0xf38) = uVar4;
  plVar6 = local_880;
  for (iVar8 = (int)local_878; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_880 != (longlong *)0x0) {
    FMemory::Free(local_880);
  }
  if (local_870 != 0) {
    FMemory::Free();
  }
  local_850 = 0;
  local_848 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_850,0);
  FGenericPlatformString::Memcpy(local_850,L"bottomMod0",0x16);
  local_948 = &local_860;
  local_860 = (longlong *)0x0;
  local_858 = 0;
  uVar4 = FUN_140ecaa30(param_1,&local_850,0,6);
  *(undefined8 *)(param_1 + 0xf40) = uVar4;
  plVar6 = local_860;
  for (iVar8 = (int)local_858; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_860 != (longlong *)0x0) {
    FMemory::Free(local_860);
  }
  if (local_850 != 0) {
    FMemory::Free();
  }
  local_830 = 0;
  local_828 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_830,0);
  FGenericPlatformString::Memcpy(local_830,L"bottomMod1",0x16);
  local_948 = &local_840;
  local_840 = (longlong *)0x0;
  local_838 = 0;
  uVar4 = FUN_140ecaa30(param_1,&local_830,0,6);
  *(undefined8 *)(param_1 + 0xf48) = uVar4;
  plVar6 = local_840;
  for (iVar8 = (int)local_838; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_840 != (longlong *)0x0) {
    FMemory::Free(local_840);
  }
  if (local_830 != 0) {
    FMemory::Free();
  }
  FWeakObjectPtr::operator=(local_810,0);
  FWeakObjectPtr::operator=(local_808,0);
  FWeakObjectPtr::operator=(local_800,0);
  FWeakObjectPtr::operator=(local_7f8,0);
  plVar6 = (longlong *)(param_1 + 0xc30);
  *(undefined4 *)(param_1 + 0xc38) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc3c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar6,0);
  }
  if (*(longlong *)(param_1 + 0xf20) != 0) {
    local_788 = (longlong *)0x0;
    local_778 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_7a8);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_7b8[0] = &LAB_140ff1db0;
    uVar4 = FUN_1420849a0(param_1,local_3f8,local_7b8);
    FUN_14208c260(param_1,uVar4);
    if (local_3b8 != 0) {
      plVar7 = local_3e8;
      if (local_3c8 != (longlong *)0x0) {
        plVar7 = local_3c8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_3c8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_778 != 0) {
      plVar7 = local_7a8;
      if (local_788 != (longlong *)0x0) {
        plVar7 = local_788;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_788 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_938 = 0xffffffff;
    uVar9 = 0xffffffff;
    if (*(longlong *)(param_1 + 0xf20) != 0) {
      FUN_14170c210(&local_938);
      uVar9 = local_938;
    }
    local_938 = 0xffffffff;
    local_738 = (longlong *)0x0;
    local_728 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_758);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144266c70;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = uVar9;
      uVar9 = 0xffffffff;
    }
    local_768[0] = &LAB_140ff1e50;
    uVar4 = FUN_1420849a0(param_1,local_3a8,local_768);
    FUN_14208c940(param_1,uVar4);
    if (local_368 != 0) {
      plVar7 = local_398;
      if (local_378 != (longlong *)0x0) {
        plVar7 = local_378;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_378 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_728 != 0) {
      plVar7 = local_758;
      if (local_738 != (longlong *)0x0) {
        plVar7 = local_738;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_738 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar9);
    FUN_1416f8340(local_938);
    iVar8 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar8 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar8);
    }
    *(undefined8 *)(*plVar6 + (longlong)iVar8 * 8) = *(undefined8 *)(param_1 + 0xf20);
  }
  if (*(longlong *)(param_1 + 0xf38) != 0) {
    local_6e8 = (longlong *)0x0;
    local_6d8 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_708);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_718[0] = &LAB_140ff1d90;
    uVar4 = FUN_1420849a0(param_1,local_358,local_718);
    FUN_14208c260(param_1,uVar4);
    if (local_318 != 0) {
      plVar7 = local_348;
      if (local_328 != (longlong *)0x0) {
        plVar7 = local_328;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_328 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_6d8 != 0) {
      plVar7 = local_708;
      if (local_6e8 != (longlong *)0x0) {
        plVar7 = local_6e8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_6e8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_934 = 0xffffffff;
    uVar9 = 0xffffffff;
    if (*(longlong *)(param_1 + 0xf38) != 0) {
      FUN_14170c210(&local_934);
      uVar9 = local_934;
    }
    local_934 = 0xffffffff;
    local_698 = (longlong *)0x0;
    local_688 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_6b8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144266c70;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = uVar9;
      uVar9 = 0xffffffff;
    }
    local_6c8[0] = &LAB_140ff1b00;
    uVar4 = FUN_1420849a0(param_1,local_308,local_6c8);
    FUN_14208c940(param_1,uVar4);
    if (local_2c8 != 0) {
      plVar7 = local_2f8;
      if (local_2d8 != (longlong *)0x0) {
        plVar7 = local_2d8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_2d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_688 != 0) {
      plVar7 = local_6b8;
      if (local_698 != (longlong *)0x0) {
        plVar7 = local_698;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_698 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar9);
    FUN_1416f8340(local_934);
    iVar8 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar8 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar8);
    }
    *(undefined8 *)(*plVar6 + (longlong)iVar8 * 8) = *(undefined8 *)(param_1 + 0xf38);
  }
  if (*(longlong *)(param_1 + 0xf28) != 0) {
    local_648 = (longlong *)0x0;
    local_638 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_668);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_678[0] = &LAB_140ff1dc0;
    uVar4 = FUN_1420849a0(param_1,local_2b8,local_678);
    FUN_14208c260(param_1,uVar4);
    if (local_278 != 0) {
      plVar7 = local_2a8;
      if (local_288 != (longlong *)0x0) {
        plVar7 = local_288;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_288 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_638 != 0) {
      plVar7 = local_668;
      if (local_648 != (longlong *)0x0) {
        plVar7 = local_648;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_648 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_930 = 0xffffffff;
    uVar9 = 0xffffffff;
    if (*(longlong *)(param_1 + 0xf28) != 0) {
      FUN_14170c210(&local_930);
      uVar9 = local_930;
    }
    local_930 = 0xffffffff;
    local_5f8 = (longlong *)0x0;
    local_5e8 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_618);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144266c70;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = uVar9;
      uVar9 = 0xffffffff;
    }
    local_628[0] = &LAB_140ff1b50;
    uVar4 = FUN_1420849a0(param_1,local_268,local_628);
    FUN_14208c940(param_1,uVar4);
    if (local_228 != 0) {
      plVar7 = local_258;
      if (local_238 != (longlong *)0x0) {
        plVar7 = local_238;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_238 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_5e8 != 0) {
      plVar7 = local_618;
      if (local_5f8 != (longlong *)0x0) {
        plVar7 = local_5f8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_5f8 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar9);
    FUN_1416f8340(local_930);
    iVar8 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar8 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar8);
    }
    *(undefined8 *)(*plVar6 + (longlong)iVar8 * 8) = *(undefined8 *)(param_1 + 0xf28);
  }
  if (*(longlong *)(param_1 + 0xf40) != 0) {
    local_5a8 = (longlong *)0x0;
    local_598 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_5c8);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_5d8[0] = &LAB_140ff1ea0;
    uVar4 = FUN_1420849a0(param_1,local_218,local_5d8);
    FUN_14208c260(param_1,uVar4);
    if (local_1d8 != 0) {
      plVar7 = local_208;
      if (local_1e8 != (longlong *)0x0) {
        plVar7 = local_1e8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_1e8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_598 != 0) {
      plVar7 = local_5c8;
      if (local_5a8 != (longlong *)0x0) {
        plVar7 = local_5a8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_5a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_92c = 0xffffffff;
    uVar9 = 0xffffffff;
    if (*(longlong *)(param_1 + 0xf40) != 0) {
      FUN_14170c210(&local_92c);
      uVar9 = local_92c;
    }
    local_92c = 0xffffffff;
    local_558 = (longlong *)0x0;
    local_548 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_578);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144266c70;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = uVar9;
      uVar9 = 0xffffffff;
    }
    local_588[0] = &LAB_140ff1b50;
    uVar4 = FUN_1420849a0(param_1,local_1c8,local_588);
    FUN_14208c940(param_1,uVar4);
    if (local_188 != 0) {
      plVar7 = local_1b8;
      if (local_198 != (longlong *)0x0) {
        plVar7 = local_198;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_198 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_548 != 0) {
      plVar7 = local_578;
      if (local_558 != (longlong *)0x0) {
        plVar7 = local_558;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_558 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar9);
    FUN_1416f8340(local_92c);
    iVar8 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar8 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar8);
    }
    *(undefined8 *)(*plVar6 + (longlong)iVar8 * 8) = *(undefined8 *)(param_1 + 0xf40);
  }
  if (*(longlong *)(param_1 + 0xf30) != 0) {
    local_508 = (longlong *)0x0;
    local_4f8 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_528);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_538[0] = &LAB_140ff1bb0;
    uVar4 = FUN_1420849a0(param_1,local_178,local_538);
    FUN_14208c260(param_1,uVar4);
    if (local_138 != 0) {
      plVar7 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar7 = local_148;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_4f8 != 0) {
      plVar7 = local_528;
      if (local_508 != (longlong *)0x0) {
        plVar7 = local_508;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_508 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_928 = 0xffffffff;
    uVar9 = 0xffffffff;
    if (*(longlong *)(param_1 + 0xf30) != 0) {
      FUN_14170c210(&local_928);
      uVar9 = local_928;
    }
    local_928 = 0xffffffff;
    local_4b8 = (longlong *)0x0;
    local_4a8 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_4d8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144266c70;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = uVar9;
      uVar9 = 0xffffffff;
    }
    local_4e8[0] = &LAB_140ff1920;
    uVar4 = FUN_1420849a0(param_1,local_128,local_4e8);
    FUN_14208c940(param_1,uVar4);
    if (local_e8 != 0) {
      plVar7 = local_118;
      if (local_f8 != (longlong *)0x0) {
        plVar7 = local_f8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_4a8 != 0) {
      plVar7 = local_4d8;
      if (local_4b8 != (longlong *)0x0) {
        plVar7 = local_4b8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_4b8 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar9);
    FUN_1416f8340(local_928);
    iVar8 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar8 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar8);
    }
    *(undefined8 *)(*plVar6 + (longlong)iVar8 * 8) = *(undefined8 *)(param_1 + 0xf30);
  }
  if (*(longlong *)(param_1 + 0xf48) != 0) {
    local_468 = (longlong *)0x0;
    local_458 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_488);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_498[0] = &LAB_140ff1b70;
    uVar4 = FUN_1420849a0(param_1,local_d8,local_498);
    FUN_14208c260(param_1,uVar4);
    if (local_98 != 0) {
      plVar7 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar7 = local_a8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_458 != 0) {
      plVar7 = local_488;
      if (local_468 != (longlong *)0x0) {
        plVar7 = local_468;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_468 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_924 = 0xffffffff;
    uVar9 = 0xffffffff;
    if (*(longlong *)(param_1 + 0xf48) != 0) {
      FUN_14170c210(&local_924);
      uVar9 = local_924;
    }
    local_924 = 0xffffffff;
    local_418 = (longlong *)0x0;
    local_408 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_438);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144266c70;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = uVar9;
      uVar9 = 0xffffffff;
    }
    local_448[0] = &LAB_140ff1920;
    uVar4 = FUN_1420849a0(param_1,local_88,local_448);
    FUN_14208c940(param_1,uVar4);
    if (local_48 != 0) {
      plVar7 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar7 = local_58;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_408 != 0) {
      plVar7 = local_438;
      if (local_418 != (longlong *)0x0) {
        plVar7 = local_418;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_418 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar9);
    FUN_1416f8340(local_924);
    iVar8 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar8 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar8);
    }
    *(undefined8 *)(*plVar6 + (longlong)iVar8 * 8) = *(undefined8 *)(param_1 + 0xf48);
  }
  FUN_14103b390(param_1);
  return;
}



// FUNCTION 140ff90f0 FUN_140ff90f0 body=1053 status=ok
// SIG undefined FUN_140ff90f0(void)

void FUN_140ff90f0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  undefined8 local_res18;
  undefined1 local_res20;
  longlong local_128;
  longlong *plStack_120;
  undefined8 local_118;
  longlong local_110 [3];
  undefined8 local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8 [2];
  undefined1 local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  longlong local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  undefined8 *local_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *plStack_70;
  undefined1 local_68 [8];
  longlong *local_60;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_c0 = param_1;
  local_b8 = param_2;
  FUN_140fed9a0(&local_c0,&local_128);
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x98);
  if ((local_128 != 0) && (lVar6 != 0)) {
    local_a8 = local_128;
    plStack_a0 = plStack_120;
    local_110[0] = 0;
    local_110[1] = 0;
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
      UNLOCK();
    }
    cVar5 = FUN_140d79f00(*(undefined8 *)(lVar6 + 0x478),&local_a8,1,0,local_110);
    plVar7 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_a0 + 1;
      lVar4 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_a0)(plStack_a0);
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
    if (cVar5 == '\0') {
      lVar4 = *(longlong *)(lVar6 + 0x478);
      plVar10 = (longlong *)(lVar4 + 0x1e0);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      local_60 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143f4d290;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        plVar7[2] = (longlong)FUN_140ff3760;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[4] = lVar8;
        *plVar7 = (longlong)&PTR_FUN_143f4d2d8;
      }
      local_118 = 0;
      if (plVar7 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
        puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_68);
        iVar2 = *(int *)(lVar4 + 0x1e8);
        uVar3 = *puVar9;
        *(int *)(lVar4 + 0x1e8) = iVar2 + 1;
        if (*(int *)(lVar4 + 0x1ec) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar2);
        }
        puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar10);
        *puVar9 = plVar7;
        *(undefined4 *)(puVar9 + 1) = 3;
        local_118 = uVar3;
      }
      local_88 = local_128;
      plStack_80 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
        UNLOCK();
      }
      local_98 = &local_88;
      local_90 = &local_118;
      FUN_140fe2530(param_1 + 0xa0,local_res8,&local_98,0);
      plVar7 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar10 = plStack_80 + 1;
        lVar4 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_80)(plStack_80);
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
      local_78 = local_128;
      plStack_70 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
        UNLOCK();
      }
      FUN_140d938f0(*(undefined8 *)(lVar6 + 0x478),&local_78);
      plVar7 = plStack_70;
      param_2 = local_res10;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar10 = plStack_70 + 1;
        lVar6 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          param_2 = local_res10;
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
            param_2 = local_res10;
          }
        }
      }
    }
    param_3 = local_res18;
    param_4 = local_res20;
    if (local_110[0] != 0) {
      FMemory::Free();
      param_3 = local_res18;
      param_4 = local_res20;
    }
  }
  local_f8 = *param_2;
  local_f0 = (longlong *)param_2[1];
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
  }
  local_e8 = local_128;
  local_e0 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
    UNLOCK();
  }
  FString::FString(local_d8,param_3);
  local_c8 = param_4;
  FUN_140ff0690(param_1,&local_f8);
  local_110[2] = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x28,local_110 + 2);
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  plVar7 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_e0 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  plVar7 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_f0 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_120 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar1 = (int *)((longlong)plStack_120 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_120 + 8))(plStack_120,1);
      }
    }
  }
  return;
}



// FUNCTION 140ff9510 FUN_140ff9510 body=70 status=ok
// SIG undefined FUN_140ff9510(void)

undefined1 FUN_140ff9510(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140f69b00();
  if (cVar1 != '\0') {
    return 1;
  }
  if (((*(longlong *)(param_1 + 0x2e0) != 0) && (*(longlong *)(param_1 + 0x2e8) != 0)) &&
     (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x2d0), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140ff9560 FUN_140ff9560 body=234 status=ok
// SIG undefined FUN_140ff9560(void)

void FUN_140ff9560(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_14103cf30();
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x60c);
  if (lVar6 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      TBaseMulticastDelegate<void>::Remove(*(longlong *)(lVar6 + 0x478) + 0x208);
    }
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x9c8) != &local_18) {
    *(undefined8 *)(param_1 + 0x9c8) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x9d0,&local_10);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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



// FUNCTION 140ff9650 FUN_140ff9650 body=427 status=ok
// SIG undefined FUN_140ff9650(void)

void FUN_140ff9650(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  wchar_t *pwVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x9f8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar7 = iVar5 == 0;
    if (bVar7) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar5 == (int)plVar3[1];
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x9f0) != 0) {
            pwVar6 = L"hideProfileImage";
            if (*(char *)(param_1 + 0x9bc) != '\0') {
              pwVar6 = L"showProfileImage";
            }
            FUN_14203e030(*(longlong *)(param_1 + 0x9f0),pwVar6);
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
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x7b0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar7 = iVar5 == 0;
    if (bVar7) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar5 == (int)plVar3[1];
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x7a8) != 0) {
            *(undefined1 *)(param_1 + 0x9d8) = 0;
            FUN_14203de70(*(longlong *)(param_1 + 0x7a8),&DAT_14465da44);
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
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x9e8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar7 = iVar5 == 0;
    if (bVar7) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar5 == (int)plVar3[1];
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        if (*(longlong *)(param_1 + 0x9e0) != 0) {
          FUN_142056670(*(longlong *)(param_1 + 0x9e0),0);
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
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 140ff9800 FUN_140ff9800 body=408 status=ok
// SIG undefined FUN_140ff9800(void)

void FUN_140ff9800(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  longlong *local_28;
  int local_20;
  longlong *local_18;
  longlong *local_10;
  
  FWeakObjectPtr::operator=(param_1 + 0x98,param_3);
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_140ff3da0(param_1 + 0x40,param_2);
  puVar4 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  FUN_140bbd560(&local_18,*puVar4);
  if ((local_18 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x90) == 0)) {
    local_28 = (longlong *)0x0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_144605de8;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      plVar5[2] = (longlong)FUN_140ff90f0;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar6;
      *plVar5 = (longlong)&PTR_FUN_144605e30;
    }
    puVar4 = (undefined8 *)(**(code **)(*local_18 + 200))(local_18,local_res18,&local_28);
    *(undefined8 *)(param_1 + 0x90) = *puVar4;
    if (local_20 != 0) {
      if (local_28 == (longlong *)0x0) goto LAB_140ff9949;
      (**(code **)(*local_28 + 0x28))(local_28,0);
      if (local_28 != (longlong *)0x0) {
        local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
      }
      local_20 = 0;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
LAB_140ff9949:
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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



// FUNCTION 140ff99a0 FUN_140ff99a0 body=435 status=ok
// SIG undefined FUN_140ff99a0(void)

void FUN_140ff99a0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68 [6];
  
  plVar1 = (longlong *)(param_1 + 0x630);
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x638) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x63c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  plVar2 = (longlong *)(param_1 + 0x658);
  *(undefined4 *)(param_1 + 0x660) = 0;
  if ((*(int *)(param_1 + 0x664) < 0) && (*(int *)(param_1 + 0x664) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2,0);
  }
  bVar3 = true;
  do {
    local_78 = (longlong *)0x0;
    local_70 = 0;
    FString::PrintfImpl(local_68,L"passive%i",iVar7);
    lVar6 = FUN_140fe3760(param_1,local_68,0,6,&local_78);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    plVar9 = local_78;
    for (iVar8 = (int)local_70; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free(local_78);
    }
    if (lVar6 == 0) {
      bVar3 = false;
    }
    else {
      *(int *)(lVar6 + 0x170) = iVar7;
      iVar8 = *(int *)(param_1 + 0x638);
      *(int *)(param_1 + 0x638) = iVar8 + 1;
      if (*(int *)(param_1 + 0x63c) < iVar8 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
      }
      *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar6;
      FUN_142087ad0(lVar6,local_res10,local_res18);
      uVar5 = local_res18[0];
      uVar4 = local_res10[0];
      iVar8 = *(int *)(param_1 + 0x660);
      *(int *)(param_1 + 0x660) = iVar8 + 1;
      if (*(int *)(param_1 + 0x664) < iVar8 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar8);
      }
      lVar6 = *plVar2;
      *(undefined4 *)(lVar6 + (longlong)iVar8 * 8) = uVar4;
      *(undefined4 *)(lVar6 + 4 + (longlong)iVar8 * 8) = uVar5;
    }
    iVar7 = iVar7 + 1;
  } while (bVar3);
  return;
}



// FUNCTION 140ff9b60 FUN_140ff9b60 body=880 status=ok
// SIG undefined FUN_140ff9b60(void)

void FUN_140ff9b60(longlong *param_1,byte param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  int iVar11;
  undefined1 local_res8;
  longlong local_48 [2];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_1[0xdd] == 0) {
    return;
  }
  if (param_1[0xda] == 0) {
    return;
  }
  if (param_1[0xde] == 0) {
    return;
  }
  if ((int)param_1[0xe0] != *(int *)((longlong)param_1 + 0x72c)) {
    plVar6 = (longlong *)param_1[0xe7];
    if ((longlong *)param_1[0xe7] == (longlong *)0x0) {
      plVar6 = param_1 + 0xe6;
    }
    iVar5 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[0xe8] - 1U & (ulonglong)param_2) * 4
                    );
    if (iVar5 != -1) {
      do {
        pbVar10 = (byte *)((longlong)iVar5 * 0x78 + param_1[0xdf]);
        if (*pbVar10 == param_2) {
          if (iVar5 != -1) goto LAB_140ff9c01;
          break;
        }
        iVar5 = *(int *)(pbVar10 + 0x70);
      } while (iVar5 != -1);
    }
  }
  pbVar10 = (byte *)0x0;
LAB_140ff9c01:
  FUN_142088cf0(param_1[0xda],pbVar10 + 0x38);
  (**(code **)(*(longlong *)(param_1[0xdd] + 0x170) + 0x38))((longlong *)(param_1[0xdd] + 0x170),0);
  (**(code **)(*(longlong *)(param_1[0xde] + 0x170) + 0x38))((longlong *)(param_1[0xde] + 0x170),0);
  FUN_141013f30(param_1);
  FUN_142ecffe0(param_1[0xde]);
  switch(param_2) {
  case 0:
    FUN_14101a280(param_1);
    (**(code **)(*(longlong *)(param_1[0xdd] + 0x170) + 0x38))
              ((longlong *)(param_1[0xdd] + 0x170),1);
    FUN_14101af80(param_1);
    uVar9 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>(local_38,param_1[0xdd]);
    FUN_142ed36d0(param_1,uVar9,0);
    uVar4 = (**(code **)(*param_1 + 0x5a8))(param_1,(char)param_1[0xd9]);
    FUN_142ed1f10(param_1[0xdd],uVar4);
    plVar6 = (longlong *)param_1[0x170];
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x278))(plVar6,0);
    }
    bVar2 = true;
    iVar11 = 0;
    iVar5 = FUN_142eb7440(param_1[0xdd]);
    if (0 < iVar5) {
      do {
        lVar7 = FUN_142eb6a30(param_1[0xdd],iVar11);
        if (lVar7 == 0) {
LAB_140ff9d68:
          lVar7 = 0;
        }
        else {
          lVar8 = FUN_14138e2b0();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_140ff9d68;
        }
        cVar3 = (**(code **)(*param_1 + 0x598))(param_1,lVar7);
        if ((bVar2) && (cVar3 == '\0')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        (**(code **)(*(longlong *)(lVar7 + 0x170) + 0x38))((longlong *)(lVar7 + 0x170),cVar3);
        iVar11 = iVar11 + 1;
        iVar5 = FUN_142eb7440(param_1[0xdd]);
      } while (iVar11 < iVar5);
      if (!bVar2) break;
    }
    (**(code **)(*param_1 + 0x5a0))(param_1);
    break;
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
  case 8:
  case 9:
  case 10:
    lVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
    if (lVar7 != 0) {
      lVar8 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_48[1] = 0;
        local_48[0] = lVar7;
        AlgoImpl::
        IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
                  (param_1[0xe9],(longlong)(int)param_1[0xea],local_res8,local_48);
      }
    }
    (**(code **)(*(longlong *)(param_1[0xde] + 0x170) + 0x38))
              ((longlong *)(param_1[0xde] + 0x170),1);
    uVar9 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>(local_28,param_1[0xde]);
    FUN_142ed36d0(param_1,uVar9,0);
    (**(code **)(*param_1 + 0x590))(param_1,0,0,param_2);
    break;
  case 4:
  case 7:
    break;
  default:
    goto switchD_140ff9c7d_default;
  }
switchD_140ff9c7d_default:
  *(byte *)(param_1 + 0xd9) = param_2;
  FUN_14101dfa0(param_1);
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  *(undefined1 *)(param_1 + 0x183) = 1;
  FUN_14101bd20(param_1,(char)param_1[0xd9]);
  return;
}



// FUNCTION 140ff9f00 FUN_140ff9f00 body=2466 status=ok
// SIG undefined FUN_140ff9f00(void)

void FUN_140ff9f00(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  bool bVar12;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  lVar7 = 0;
  local_108 = (longlong *)0x0;
  local_100 = 0;
  lVar3 = FUN_140e96f30(param_1,param_1 + 0xb7,0,6,&local_108);
  plVar4 = local_108;
  for (iVar11 = (int)local_100; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  if (lVar3 != 0) {
    param_1[0x57] = lVar3;
    FUN_142087ad0(lVar3,param_1 + 0x59,(longlong)param_1 + 0x2cc);
    lVar3 = FUN_140eccc40(param_1);
    if (((lVar3 != 0) && (lVar3 = FUN_140cff1b0(lVar3), lVar3 != 0)) &&
       (*(longlong *)(lVar3 + 0x5e8) != 0)) {
      FUN_142ecf820(*(longlong *)(lVar3 + 0x5e8),param_1);
    }
    FUN_142ebd8f0(param_1);
  }
  if (param_1[0x57] == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x148))(param_1);
  plVar4 = (longlong *)UWorld::GetFirstPlayerController();
  if (plVar4 == (longlong *)0x0) {
LAB_140ffa074:
    bVar12 = false;
  }
  else {
    lVar3 = FUN_14145f370();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if ((!bVar12) || (lVar3 = (**(code **)(*plVar4 + 0xfa8))(), lVar3 == 0)) goto LAB_140ffa074;
    bVar12 = 0 < *(int *)(lVar3 + 0x48);
    if (0 < *(int *)(lVar3 + 0x48)) {
      plVar4 = param_1 + 0x142;
      goto LAB_140ffa087;
    }
  }
  plVar4 = param_1 + 0x144;
LAB_140ffa087:
  puVar10 = &DAT_143f3eda8;
  plVar5 = param_1 + 0x144;
  if (!bVar12) {
    plVar5 = param_1 + 0x142;
  }
  if ((int)plVar4[1] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*plVar4;
  }
  plVar4 = (longlong *)FUN_142085870(param_1[0x57],local_c8,puVar9);
  param_1[0x13e] = *plVar4;
  plVar4 = (longlong *)plVar4[1];
  plVar8 = (longlong *)param_1[0x13f];
  if (plVar4 != plVar8) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar8 = (longlong *)param_1[0x13f];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar11 == 1) && (plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    param_1[0x13f] = (longlong)plVar4;
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_c0 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  if ((int)plVar5[1] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*plVar5;
  }
  FUN_142085870(param_1[0x57],&local_d8,puVar9);
  if (local_d8 != 0) {
    FUN_142056670(local_d8,0);
    plVar5 = local_d0;
    param_1[0x140] = local_d8;
    plVar4 = (longlong *)param_1[0x141];
    if (local_d0 != plVar4) {
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_d0 + 0xc) = *(int *)((longlong)local_d0 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)param_1[0x141];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar11 == 1) && (plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1[0x141] = (longlong)plVar5;
    }
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d0 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar4 = (longlong *)param_1[0x13f];
  if (plVar4 == (longlong *)0x0) {
LAB_140ffa238:
    if (plVar4 != (longlong *)0x0) {
      lVar3 = param_1[0x13e];
      if (lVar3 != 0) {
        FUN_1420392d0(lVar3,&local_e8,L"userPicMC");
        if (local_e8 != 0) {
          FUN_142056670(local_e8,0);
          plVar8 = local_e0;
          param_1[0xf5] = local_e8;
          plVar5 = (longlong *)param_1[0xf6];
          if (local_e0 != plVar5) {
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)local_e0 + 0xc) = *(int *)((longlong)local_e0 + 0xc) + 1;
              UNLOCK();
              plVar5 = (longlong *)param_1[0xf6];
            }
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar11 == 1) && (plVar5 != (longlong *)0x0)) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
            param_1[0xf6] = (longlong)plVar8;
          }
          plVar5 = (longlong *)FUN_1420392d0(local_e8,local_b8,L"image");
          param_1[0x13c] = *plVar5;
          plVar5 = (longlong *)plVar5[1];
          plVar8 = (longlong *)param_1[0x13d];
          if (plVar5 != plVar8) {
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
              UNLOCK();
              plVar8 = (longlong *)param_1[0x13d];
            }
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar11 == 1) && (plVar8 != (longlong *)0x0)) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
            param_1[0x13d] = (longlong)plVar5;
          }
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_b0 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar1 = (int *)((longlong)local_b0 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*local_b0 + 8))(local_b0,1);
              }
            }
          }
        }
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_e0 + 1;
          lVar2 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar1 = (int *)((longlong)local_e0 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_e0 + 8))(local_e0,1);
            }
          }
        }
        if (1 < (int)param_1[0x124]) {
          if ((int)param_1[0x124] == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)param_1[0x123];
          }
          plVar5 = (longlong *)FUN_1420392d0(lVar3,local_a8,puVar9);
          param_1[0xf9] = *plVar5;
          plVar5 = (longlong *)plVar5[1];
          plVar8 = (longlong *)param_1[0xfa];
          if (plVar5 != plVar8) {
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
              UNLOCK();
              plVar8 = (longlong *)param_1[0xfa];
            }
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar11 == 1) && (plVar8 != (longlong *)0x0)) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
            param_1[0xfa] = (longlong)plVar5;
          }
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_a0 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
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
        }
        if (1 < (int)param_1[0x126]) {
          if ((int)param_1[0x126] == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)param_1[0x125];
          }
          plVar5 = (longlong *)FUN_1420392d0(lVar3,local_98,puVar9);
          param_1[0xfb] = *plVar5;
          plVar5 = (longlong *)plVar5[1];
          plVar8 = (longlong *)param_1[0xfc];
          if (plVar5 != plVar8) {
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
              UNLOCK();
              plVar8 = (longlong *)param_1[0xfc];
            }
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar11 == 1) && (plVar8 != (longlong *)0x0)) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
            param_1[0xfc] = (longlong)plVar5;
          }
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_90 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar1 = (int *)((longlong)local_90 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*local_90 + 8))(local_90,1);
              }
            }
          }
        }
        if (1 < (int)param_1[0x116]) {
          if ((int)param_1[0x116] == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)param_1[0x115];
          }
          plVar5 = (longlong *)FUN_1420392d0(lVar3,local_88,puVar9);
          param_1[0xf7] = *plVar5;
          plVar5 = (longlong *)plVar5[1];
          plVar8 = (longlong *)param_1[0xf8];
          if (plVar5 != plVar8) {
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
              UNLOCK();
              plVar8 = (longlong *)param_1[0xf8];
            }
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar11 == 1) && (plVar8 != (longlong *)0x0)) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
            param_1[0xf8] = (longlong)plVar5;
          }
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_80 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar1 = (int *)((longlong)local_80 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*local_80 + 8))(local_80,1);
              }
            }
          }
        }
        if (1 < (int)param_1[0x118]) {
          if ((int)param_1[0x118] == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)param_1[0x117];
          }
          uVar6 = FUN_1420392d0(lVar3,local_78,puVar9);
          FUN_142ede260(param_1 + 0xfd,uVar6);
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_70 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
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
          }
        }
        if (1 < (int)param_1[0x11a]) {
          if ((int)param_1[0x11a] == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)param_1[0x119];
          }
          uVar6 = FUN_1420392d0(lVar3,local_68,puVar9);
          FUN_142ede260(param_1 + 0x106,uVar6);
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_60 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)local_60 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*local_60 + 8))(local_60,1);
              }
            }
          }
        }
        if (1 < (int)param_1[0x11c]) {
          if ((int)param_1[0x11c] == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)param_1[0x11b];
          }
          uVar6 = FUN_1420392d0(lVar3,local_58,puVar9);
          FUN_142ede260(param_1 + 0x109,uVar6);
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_50 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)local_50 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*local_50 + 8))(local_50,1);
              }
            }
          }
        }
        bVar12 = 1 < (int)param_1[0x11e];
        if (bVar12) {
          local_f8 = (longlong *)0x0;
          local_f0 = 0;
          lVar7 = FUN_140f57150(lVar3,param_1 + 0x11d,0,6,&local_f8);
        }
        param_1[0x10c] = lVar7;
        if (bVar12) {
          plVar5 = local_f8;
          for (iVar11 = (int)local_f0; iVar11 != 0; iVar11 = iVar11 + -1) {
            if (*plVar5 != 0) {
              FMemory::Free();
            }
            plVar5 = plVar5 + 2;
          }
          if (local_f8 != (longlong *)0x0) {
            FMemory::Free(local_f8);
          }
        }
        if (1 < (int)param_1[0x122]) {
          if ((int)param_1[0x122] != 0) {
            puVar10 = (undefined2 *)param_1[0x121];
          }
          uVar6 = FUN_1420392d0(lVar3,local_48,puVar10);
          FUN_142ede260(param_1 + 0x100,uVar6);
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_40 + 1;
            lVar3 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar1 = (int *)((longlong)local_40 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*local_40 + 8))(local_40,1);
              }
            }
          }
        }
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffefff;
        if (param_1[0xf0] != 0) {
          (**(code **)(*param_1 + 0x5e0))(param_1,param_1 + 200);
        }
      }
      LOCK();
      plVar5 = plVar4 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  else {
    LOCK();
    iVar11 = (int)plVar4[1];
    bVar12 = iVar11 == 0;
    if (bVar12) {
      *(int *)(plVar4 + 1) = 0;
      iVar11 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar11 == (int)plVar4[1];
      if (bVar12) {
        *(int *)(plVar4 + 1) = iVar11 + 1;
      }
      UNLOCK();
      if (bVar12) goto LAB_140ffa238;
      LOCK();
      iVar11 = (int)plVar4[1];
      bVar12 = iVar11 == 0;
      if (bVar12) {
        *(int *)(plVar4 + 1) = 0;
        iVar11 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 140ffa8b0 FUN_140ffa8b0 body=241 status=ok
// SIG undefined FUN_140ffa8b0(void)

undefined8 FUN_140ffa8b0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x108) == 0) {
    return 0;
  }
  iVar6 = 0;
  iVar3 = FUN_142eb7440();
  if (iVar3 < 1) {
    return 0;
  }
  do {
    lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x108),iVar6);
    if (lVar4 != 0) {
      lVar5 = FUN_141387af0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (cVar2 = FUN_142ebe190(lVar4), cVar2 != '\0')) {
        uVar7 = 1;
      }
    }
    iVar6 = iVar6 + 1;
    iVar3 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x108));
  } while (iVar6 < iVar3);
  return uVar7;
}



// FUNCTION 140ffa9b0 FUN_140ffa9b0 body=144 status=ok
// SIG undefined FUN_140ffa9b0(void)

undefined1 FUN_140ffa9b0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((((param_2 != 0) && (param_2 == *(longlong *)(param_1 + 0xf38))) &&
      (lVar1 = SDockingTabStack::ToggleTabWellVisibility(), lVar1 == 0)) &&
     ((*(longlong *)(param_1 + 0xf20) != 0 &&
      ((lVar1 = SDockingTabStack::ToggleTabWellVisibility(), lVar1 == 0 ||
       (lVar1 = SDockingTabStack::ToggleTabWellVisibility(*(undefined8 *)(param_1 + 0xf20)),
       *(longlong *)(lVar1 + 0x458) == param_3)))))) {
    return 0;
  }
  uVar2 = FUN_14103ee60(param_1,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 140ffaa40 FUN_140ffaa40 body=705 status=ok
// SIG undefined FUN_140ffaa40(void)

void FUN_140ffaa40(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(param_1 + 0xbec);
  if (((param_2 != iVar7) || (param_3 != *(int *)(param_1 + 0xbf0))) &&
     (param_3 - param_2 < *(int *)(param_1 + 0xbc4))) {
    for (; iVar7 < param_2; iVar7 = iVar7 + 1) {
      lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6f0),iVar7);
      if (lVar4 != 0) {
        lVar5 = FUN_14138e2b0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (lVar5 = *(longlong *)(lVar4 + 0x360), lVar5 != 0)) {
          iVar8 = *(int *)(param_1 + 0xc10);
          *(int *)(param_1 + 0xc10) = iVar8 + 1;
          if (*(int *)(param_1 + 0xc14) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xc08,iVar8)
            ;
          }
          *(longlong *)(*(longlong *)(param_1 + 0xc08) + (longlong)iVar8 * 8) = lVar5;
          *(undefined8 *)(lVar4 + 0x360) = 0;
        }
      }
    }
    iVar8 = param_3 + 1;
    iVar7 = param_2;
    if (iVar8 <= *(int *)(param_1 + 0xbf0)) {
      do {
        lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6f0),iVar8);
        if (lVar4 != 0) {
          lVar5 = FUN_14138e2b0();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (lVar5 = *(longlong *)(lVar4 + 0x360), lVar5 != 0)) {
            iVar6 = *(int *)(param_1 + 0xc10);
            *(int *)(param_1 + 0xc10) = iVar6 + 1;
            if (*(int *)(param_1 + 0xc14) < iVar6 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0xc08,iVar6);
            }
            *(longlong *)(*(longlong *)(param_1 + 0xc08) + (longlong)iVar6 * 8) = lVar5;
            *(undefined8 *)(lVar4 + 0x360) = 0;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= *(int *)(param_1 + 0xbf0));
    }
    for (; iVar7 <= param_3; iVar7 = iVar7 + 1) {
      lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6f0),iVar7);
      if (lVar4 != 0) {
        lVar5 = FUN_14138e2b0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (((bVar2) && (*(longlong *)(lVar4 + 0x360) == 0)) && (0 < *(int *)(param_1 + 0xc10))) {
          iVar6 = *(int *)(param_1 + 0xc10);
          lVar5 = *(longlong *)(param_1 + 0xc08);
          iVar8 = iVar6 + -1;
          uVar1 = *(undefined8 *)(lVar5 + (longlong)iVar8 * 8);
          iVar3 = (iVar6 - iVar8) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar5 + (longlong)iVar8 * 8),(void *)(lVar5 + (longlong)iVar6 * 8),
                       (longlong)iVar3 << 3);
            iVar6 = *(int *)(param_1 + 0xc10);
          }
          *(int *)(param_1 + 0xc10) = iVar6 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0xc08);
          *(undefined8 *)(lVar4 + 0x360) = uVar1;
          FUN_14101c0d0(lVar4);
        }
      }
    }
    *(int *)(param_1 + 0xbec) = param_2;
    *(int *)(param_1 + 0xbf0) = param_3;
  }
  return;
}



// FUNCTION 140ffad10 FUN_140ffad10 body=654 status=ok
// SIG undefined FUN_140ffad10(void)

void FUN_140ffad10(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  lVar5 = FWeakObjectPtr::Get(param_1 + -0x68);
  lVar12 = 0;
  if (lVar5 == 0) {
LAB_140ffad77:
    lVar5 = lVar12;
  }
  else {
    lVar6 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140ffad77;
  }
  lVar6 = lVar12;
  if (param_3 == '\x03') {
    if (((*(longlong *)(param_1 + 0x68) == 0) ||
        (cVar3 = FUN_140c28b90(*(longlong *)(param_1 + 0x68),param_2), cVar3 == '\0')) ||
       ((lVar5 == 0 || (*(longlong *)(param_1 + 8) == 0)))) goto LAB_140ffae85;
    if (param_2 != 0) {
      lVar7 = FUN_142f71d80();
      lVar10 = param_2;
      do {
        lVar6 = param_2;
        if (lVar10 == lVar7) break;
        lVar10 = *(longlong *)(lVar10 + 0x30);
        lVar6 = lVar12;
      } while (lVar10 != 0);
    }
    lVar10 = *(longlong *)(param_1 + 8);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"New Mission Discovered",L"MissionTrackerHUDWidget",
                       L"MissionDiscovered");
    uVar11 = *(undefined8 *)(param_1 + 8);
  }
  else {
    if (((param_3 != '\x04') || (lVar5 == 0)) || (*(longlong *)(param_1 + 0x10) == 0))
    goto LAB_140ffae85;
    if (param_2 != 0) {
      lVar7 = FUN_142f71d80();
      lVar10 = param_2;
      do {
        lVar6 = param_2;
        if (lVar10 == lVar7) break;
        lVar10 = *(longlong *)(lVar10 + 0x30);
        lVar6 = lVar12;
      } while (lVar10 != 0);
    }
    lVar10 = *(longlong *)(param_1 + 0x10);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Mission Completed",L"MissionTrackerHUDWidget",L"MissionCompleted")
    ;
    uVar11 = *(undefined8 *)(param_1 + 0x10);
  }
  FUN_140c70250(lVar5,uVar11,uVar8,*(undefined4 *)(lVar10 + 0x48),lVar6,0);
LAB_140ffae85:
  if (*(longlong *)(param_1 + 0x68) != 0) {
    plVar9 = (longlong *)FUN_142f5ed60(*(longlong *)(param_1 + 0x68),local_res8);
    lVar5 = lVar12;
    if (*plVar9 != 0) {
      lVar10 = FUN_142f71d80();
      for (lVar6 = *plVar9; (lVar5 = lVar12, lVar6 != 0 && (lVar5 = *plVar9, lVar6 != lVar10));
          lVar6 = *(longlong *)(lVar6 + 0x30)) {
      }
    }
    lVar6 = lVar12;
    if (param_2 != 0) {
      lVar7 = FUN_142f71d80();
      lVar10 = param_2;
      do {
        lVar6 = param_2;
        if (lVar10 == lVar7) break;
        lVar10 = *(longlong *)(lVar10 + 0x30);
        lVar6 = lVar12;
      } while (lVar10 != 0);
    }
    if (lVar5 == lVar6) {
      lVar5 = param_1 + -0x630;
      FUN_141015cd0(lVar5,param_3 == '\x05');
      if (param_3 == '\x03') {
        if (*(char *)(param_1 + 0x50) == '\0') {
          *(undefined1 *)(param_1 + 0x51) = 1;
        }
        else {
          FUN_1410196e0(lVar5);
        }
        FUN_141003280(lVar5);
      }
      else if (param_3 == '\x04') {
        if ((*(longlong *)(param_1 + 0x98) != 0) && (*(longlong *)(param_1 + 0xa0) != 0)) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 8);
          LOCK();
          iVar4 = *piVar1;
          if (iVar4 == 0) {
            *piVar1 = 0;
            iVar4 = 0;
          }
          UNLOCK();
          if (0 < iVar4) {
            FUN_142f10d20(param_1 + 0x90,1);
          }
        }
        FUN_141003280(lVar5);
        FUN_140ff25d0(lVar5);
      }
    }
  }
  return;
}



// FUNCTION 140ffafa0 FUN_140ffafa0 body=1034 status=ok
// SIG undefined FUN_140ffafa0(void)

void FUN_140ffafa0(longlong *param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 *local_90;
  undefined8 local_88;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  cVar4 = FUN_142f63b20(param_2,0);
  if ((((cVar4 != '\0') && (lVar5 = FUN_142f5f490(param_2), lVar5 != 0)) &&
      (*(char *)(lVar5 + 0xa4) == '\0')) &&
     ((*(char *)(lVar5 + 0xa5) == '\0' && (param_1[0xd] != 0)))) {
    plVar6 = (longlong *)FUN_142f5ed60(param_1[0xd],&local_98);
    lVar5 = 0;
    if (*plVar6 != 0) {
      lVar7 = FUN_142f71d80();
      lVar8 = *plVar6;
joined_r0x000140ffb041:
      if (lVar8 != 0) {
        if (lVar8 != lVar7) goto code_r0x000140ffb048;
        if (*plVar6 != 0) {
          plVar6 = (longlong *)FUN_142f5ed60(param_1[0xd],&local_98);
          lVar8 = lVar5;
          if (*plVar6 != 0) {
            lVar9 = FUN_142f71d80();
            for (lVar7 = *plVar6; (lVar8 = lVar5, lVar7 != 0 && (lVar8 = *plVar6, lVar7 != lVar9));
                lVar7 = *(longlong *)(lVar7 + 0x30)) {
            }
          }
          plVar6 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2,&local_90);
          lVar7 = lVar5;
          if (*plVar6 != 0) {
            lVar10 = FUN_142f71d80();
            for (lVar9 = *plVar6; (lVar7 = lVar5, lVar9 != 0 && (lVar7 = *plVar6, lVar9 != lVar10));
                lVar9 = *(longlong *)(lVar9 + 0x30)) {
            }
          }
          if (lVar8 == lVar7) goto LAB_140ffb051;
          lVar8 = lVar5;
          if (param_1[0xb] != 0) {
            lVar9 = FUN_142f71d80();
            for (lVar7 = param_1[0xb];
                (lVar8 = lVar5, lVar7 != 0 && (lVar8 = param_1[0xb], lVar7 != lVar9));
                lVar7 = *(longlong *)(lVar7 + 0x30)) {
            }
          }
          plVar6 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2,&local_90);
          lVar7 = lVar5;
          if (*plVar6 != 0) {
            lVar10 = FUN_142f71d80();
            for (lVar9 = *plVar6; (lVar7 = lVar5, lVar9 != 0 && (lVar7 = *plVar6, lVar9 != lVar10));
                lVar9 = *(longlong *)(lVar9 + 0x30)) {
            }
          }
          if (lVar8 != lVar7) {
            plVar6 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2,&local_90);
            param_1[0xb] = *plVar6;
            (**(code **)(*param_1 + 0x40))(param_1);
          }
          goto LAB_140ffb1b2;
        }
      }
    }
LAB_140ffb051:
    if (param_1[0xb] != 0) {
      lVar8 = FUN_142f71d80();
      for (lVar5 = param_1[0xb]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar8) {
          if (param_1[0xb] != 0) {
            param_1[0xb] = 0;
            puVar11 = (undefined8 *)FUN_142f5ed60(param_1[0xd],&local_90);
            (**(code **)(*param_1 + 0x40))(param_1,*puVar11);
          }
          break;
        }
      }
    }
LAB_140ffb1b2:
    switch(param_3) {
    case 4:
      FUN_141006300(param_1 + -0xc6,param_2,param_4);
      break;
    case 5:
    case 6:
      FUN_141006720(param_1 + -0xc6,param_2,param_4);
      break;
    case 7:
    case 8:
      FUN_141006b70(param_1 + -0xc6,param_2,param_4);
      break;
    case 9:
      local_90 = (undefined8 *)0x0;
      local_88 = 0;
      FUN_140ff7300(param_1 + -0xc6,&local_90,0);
      puVar3 = local_90;
      uVar13 = (uint)local_88;
      uVar14 = (ulonglong)(int)(uint)local_88;
      puVar12 = local_90 + uVar14 * 6;
      for (puVar11 = local_90; puVar2 = puVar3, puVar11 != puVar12; puVar11 = puVar11 + 6) {
        cVar4 = FUN_142f4ff30(puVar11,param_2);
        if (cVar4 != '\0') {
          if ((((puVar11 != puVar12) &&
               (iVar1 = (int)(((longlong)puVar11 - (longlong)puVar3) / 0x30), -1 < iVar1)) &&
              (iVar1 < (int)param_1[0x1e])) &&
             (lVar5 = *(longlong *)(param_1[0x1d] + (longlong)iVar1 * 8), lVar5 != 0)) {
            FWeakObjectPtr::operator=(&local_98,lVar5);
            local_48 = 0;
            local_38 = 0;
            puVar11 = (undefined8 *)FUN_140438ef0(0x18,local_68);
            if (puVar11 != (undefined8 *)0x0) {
              *puVar11 = &PTR_FUN_1444f8920;
              puVar11[1] = lVar5;
              *(undefined4 *)(puVar11 + 2) = local_98;
              *(undefined4 *)((longlong)puVar11 + 0x14) = local_94;
            }
            local_78[0] = &LAB_140ff18a0;
            FUN_14208c5d0(lVar5,local_78);
          }
          break;
        }
      }
      while (uVar13 != 0) {
        *puVar2 = &PTR_FUN_1441d26b8;
        uVar13 = (int)uVar14 - 1;
        uVar14 = (ulonglong)uVar13;
        puVar2 = puVar2 + 6;
      }
      if (puVar3 != (undefined8 *)0x0) {
        FMemory::Free(puVar3);
      }
      break;
    case 10:
      FUN_141006520(param_1 + -0xc6,param_2,param_4);
    }
    FUN_141013470(param_1 + -0xc6,0);
  }
  return;
code_r0x000140ffb048:
  lVar8 = *(longlong *)(lVar8 + 0x30);
  goto joined_r0x000140ffb041;
}



// FUNCTION 140ffb3d0 FUN_140ffb3d0 body=694 status=ok
// SIG undefined FUN_140ffb3d0(void)

void FUN_140ffb3d0(longlong *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_res8;
  undefined1 local_res20 [8];
  
  if (param_1[0xd] != 0) {
    FUN_142f5af50(param_2,&local_res8);
    plVar3 = (longlong *)FUN_142f5ed60(param_1[0xd],local_res20);
    lVar9 = 0;
    if (*plVar3 != 0) {
      lVar4 = FUN_142f71d80();
      lVar6 = *plVar3;
joined_r0x000140ffb42b:
      if (lVar6 != 0) {
        if (lVar6 != lVar4) goto code_r0x000140ffb435;
        if (*plVar3 != 0) {
          plVar3 = (longlong *)FUN_142f5ed60(param_1[0xd],local_res20);
          lVar6 = lVar9;
          if (*plVar3 != 0) {
            lVar7 = FUN_142f71d80();
            for (lVar4 = *plVar3; (lVar6 = lVar9, lVar4 != 0 && (lVar6 = *plVar3, lVar4 != lVar7));
                lVar4 = *(longlong *)(lVar4 + 0x30)) {
            }
          }
          lVar4 = lVar9;
          if (local_res8 != 0) {
            lVar5 = FUN_142f71d80();
            for (lVar7 = local_res8;
                (lVar4 = lVar9, lVar7 != 0 && (lVar4 = local_res8, lVar7 != lVar5));
                lVar7 = *(longlong *)(lVar7 + 0x30)) {
            }
          }
          if (lVar6 == lVar4) goto LAB_140ffb43e;
          lVar6 = lVar9;
          if (param_1[0xb] != 0) {
            lVar7 = FUN_142f71d80();
            for (lVar4 = param_1[0xb];
                (lVar6 = lVar9, lVar4 != 0 && (lVar6 = param_1[0xb], lVar4 != lVar7));
                lVar4 = *(longlong *)(lVar4 + 0x30)) {
            }
          }
          lVar4 = lVar9;
          if (local_res8 != 0) {
            lVar5 = FUN_142f71d80();
            for (lVar7 = local_res8;
                (lVar4 = lVar9, lVar7 != 0 && (lVar4 = local_res8, lVar7 != lVar5));
                lVar7 = *(longlong *)(lVar7 + 0x30)) {
            }
          }
          if (lVar6 != lVar4) {
            param_1[0xb] = local_res8;
            (**(code **)(*param_1 + 0x40))(param_1);
          }
          goto LAB_140ffb58b;
        }
      }
    }
LAB_140ffb43e:
    if (param_1[0xb] != 0) {
      lVar4 = FUN_142f71d80();
      for (lVar6 = param_1[0xb]; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar4) {
          if (param_1[0xb] != 0) {
            param_1[0xb] = 0;
            lVar6 = *param_1;
            puVar8 = (undefined8 *)FUN_142f5ed60(param_1[0xd],local_res20);
            (**(code **)(lVar6 + 0x40))(param_1,*puVar8);
          }
          break;
        }
      }
    }
LAB_140ffb58b:
    if (param_3 == '\x03') {
      cVar2 = FUN_142f638e0(param_2,param_1 + -0xc6);
      lVar6 = lVar9;
      if (cVar2 != '\0') {
        lVar6 = CAkSrcBaseEx::StopStream(param_2);
      }
      plVar3 = (longlong *)FUN_142f5af50(param_2,local_res20);
      if (*plVar3 != 0) {
        lVar7 = FUN_142f71d80();
        for (lVar4 = *plVar3; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
          if (lVar4 == lVar7) {
            if ((*plVar3 != 0) && (lVar6 != 0)) {
              lVar6 = IMessageToken::ToText(lVar6);
              iVar1 = *(int *)(lVar6 + 8);
              puVar8 = (undefined8 *)FUN_142f5af50(param_2,local_res20);
              FUN_14101e570(param_1 + -0xc6,*puVar8,0 < iVar1);
            }
            break;
          }
        }
      }
      FUN_141011ec0(param_1 + -0xc6,param_2);
      cVar2 = FUN_142f638e0(param_2,param_1 + -0xc6);
      if (cVar2 != '\0') {
        lVar9 = CAkSrcBaseEx::StopStream(param_2);
      }
      param_1[0x38] = lVar9;
    }
    FUN_141013470(param_1 + -0xc6,0);
  }
  return;
code_r0x000140ffb435:
  lVar6 = *(longlong *)(lVar6 + 0x30);
  goto joined_r0x000140ffb42b;
}



// FUNCTION 140ffb690 FUN_140ffb690 body=479 status=ok
// SIG undefined FUN_140ffb690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ffb690(longlong param_1,undefined8 param_2,char param_3,uint param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  float fVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_3 == '\0') {
    param_1 = param_1 + -0x630;
    FUN_140ff2050(param_1);
    FUN_140ff1f70(param_1);
    uStack_cc = param_5;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_d8 = param_1;
    uStack_d0 = param_4;
    local_c8 = param_2;
    puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_58);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 1) = (undefined4)local_d8;
      *(undefined4 *)((longlong)puVar1 + 0xc) = local_d8._4_4_;
      *(uint *)(puVar1 + 2) = uStack_d0;
      *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_cc;
      *puVar1 = &PTR_FUN_143f4d0b0;
      puVar1[3] = local_c8;
    }
    local_68[0] = &LAB_140ff1ec0;
    uVar2 = FUN_1420849a0(param_1,local_b8,local_68);
    FUN_14208c4f0(param_1,uVar2);
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
  }
  else if (param_3 == '\x01') {
    FUN_140ff2050(param_1 + -0x630);
    FUN_140ff1f70(param_1 + -0x630);
  }
  else if (param_3 == '\x02') {
    fVar4 = (float)param_4;
    if (*(float *)(param_1 + 0x1dc) <= fVar4 && fVar4 != *(float *)(param_1 + 0x1dc)) {
      *(float *)(param_1 + 0x1e0) = fVar4;
    }
    *(float *)(param_1 + 0x1dc) = fVar4;
    if ((1e-08 < fVar4) && (1e-08 < *(float *)(param_1 + 0x1e0))) {
      FUN_14101ace0(param_1 + -0x630,(int)fVar4);
      FUN_14101abf0(param_1 + -0x630,*(float *)(param_1 + 0x1dc) / *(float *)(param_1 + 0x1e0));
    }
  }
  return;
}



// FUNCTION 140ffb870 FUN_140ffb870 body=2781 status=ok
// SIG undefined FUN_140ffb870(void)

void FUN_140ffb870(longlong param_1,longlong *param_2,undefined1 param_3,int param_4)

{
  PSRWLOCK SRWLock;
  byte bVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  wchar_t *pwVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  int *piVar17;
  wchar_t *pwVar18;
  uint uVar19;
  wchar_t *pwVar20;
  longlong **pplVar21;
  int local_res8 [2];
  longlong *local_res10;
  undefined1 local_res18;
  int local_res20 [2];
  int local_108;
  int local_104;
  longlong local_100;
  uint local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong *local_a0 [2];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  longlong *local_78;
  longlong *local_68;
  longlong *local_58;
  
  local_res20[0] = *(int *)(param_1 + 0x288);
  *(int *)(param_1 + 0x288) = param_4;
  pwVar20 = (wchar_t *)0x0;
  pwVar18 = pwVar20;
  if (*param_2 != 0) {
    pwVar18 = (wchar_t *)param_2[1];
  }
  cVar6 = '\x03';
  uVar19 = 0;
  uVar7 = uVar19;
  local_res10 = param_2;
  local_res18 = param_3;
  if ((*param_2 != 0) && (pwVar18 != (wchar_t *)0x0)) {
    lVar9 = *(longlong *)(param_1 + 0x38);
    uVar11 = 0;
    if (lVar9 != 0) {
      lVar8 = UGSquadMemberWidget::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (lVar9 = FUN_140fe3d70(lVar9), lVar9 != 0)) {
        if ((*(char *)(lVar9 + 0x464) == '\0') || (*(int *)(param_1 + 0x288) != 0)) {
          uVar11 = 0;
        }
        else {
          uVar11 = 1;
        }
      }
    }
    uVar7 = (**(code **)(*(longlong *)pwVar18 + 0x10))(pwVar18);
    lVar9 = *(longlong *)pwVar18;
    uVar10 = FUN_140ff6a30(param_1);
    cVar6 = (**(code **)(lVar9 + 0x88))(pwVar18,uVar11,uVar10);
  }
  plVar14 = local_res10;
  if (((*(char *)(param_1 + 0x2b0) != '\0') || (*(char *)(param_1 + 0x2b1) != cVar6)) ||
     (*(uint *)(param_1 + 0x304) != uVar7)) {
    FUN_14101add0(param_1,cVar6);
  }
  SRWLock = (PSRWLOCK)(param_1 + 0x280);
  AcquireSRWLockShared(SRWLock);
  lVar9 = *(longlong *)(param_1 + 0x270);
  pwVar18 = pwVar20;
  if (lVar9 != 0) {
    pwVar18 = *(wchar_t **)(param_1 + 0x278);
  }
  ReleaseSRWLockShared(SRWLock);
  pwVar16 = pwVar20;
  if (*plVar14 != 0) {
    pwVar16 = (wchar_t *)plVar14[1];
  }
  pwVar12 = pwVar18;
  if (lVar9 == 0) {
    pwVar12 = pwVar20;
  }
  if ((pwVar16 == pwVar12) && (*plVar14 == lVar9)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((!bVar4) && (local_res20[0] == param_4)) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x2b2);
  *(undefined4 *)(param_1 + 0x310) = 0xbf800000;
  if ((lVar9 != 0) && (pwVar18 != (wchar_t *)0x0)) {
    lVar9 = (**(code **)(*(longlong *)pwVar18 + 0x98))(pwVar18);
    *(longlong *)(param_1 + 0x290) = lVar9;
    if (lVar9 != 0) {
      FUN_140483870(lVar9 + 0x268,param_1);
      lVar9 = *(longlong *)(param_1 + 0x290);
      if (lVar9 != 0) {
        lVar8 = AGFreezeCharacterCue::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (((((bVar4) && (*(int *)(lVar9 + 0x960) != 0)) &&
             (plVar14 = *(longlong **)(lVar9 + 0x958), plVar14 != (longlong *)0x0)) &&
            ((cVar6 = (**(code **)(*plVar14 + 8))(plVar14,param_1), cVar6 != '\0' &&
             (*(int *)(lVar9 + 0x960) != 0)))) &&
           (plVar14 = *(longlong **)(lVar9 + 0x958), plVar14 != (longlong *)0x0)) {
          (**(code **)(*plVar14 + 0x28))(plVar14,0);
          if (*(longlong *)(lVar9 + 0x958) != 0) {
            uVar11 = FMemory::Realloc(*(longlong *)(lVar9 + 0x958),0,0);
            *(undefined8 *)(lVar9 + 0x958) = uVar11;
          }
          *(undefined4 *)(lVar9 + 0x960) = 0;
        }
      }
    }
    lVar9 = (**(code **)(*(longlong *)pwVar18 + 0xa8))(pwVar18);
    if (lVar9 != 0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxNameplate::OnLevelChanged",L"::");
      pwVar16 = pwVar20;
      while (pwVar5 = pwVar12, pwVar5 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar16 = pwVar5;
      }
      FName::FName(&local_c0,pwVar16 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar9,param_1,local_c0);
    }
    lVar9 = (**(code **)(*(longlong *)pwVar18 + 0xb0))(pwVar18);
    if (lVar9 != 0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxNameplate::OnNameUpdated",L"::");
      pwVar16 = pwVar20;
      while (pwVar5 = pwVar12, pwVar5 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar16 = pwVar5;
      }
      FName::FName(&local_b8,pwVar16 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar9,param_1,local_b8);
    }
    lVar9 = (**(code **)(*(longlong *)pwVar18 + 0xa0))(pwVar18);
    plVar14 = local_res10;
    if (lVar9 != 0) {
      FUN_140483870(lVar9 + 400,param_1);
      plVar14 = local_res10;
    }
  }
  *(undefined1 *)(param_1 + 0x2f8) = local_res18;
  AcquireSRWLockExclusive(SRWLock);
  *(longlong *)(param_1 + 0x270) = *plVar14;
  *(longlong *)(param_1 + 0x278) = plVar14[1];
  ReleaseSRWLockExclusive(SRWLock);
  AcquireSRWLockShared(SRWLock);
  lVar9 = *(longlong *)(param_1 + 0x270);
  pwVar18 = pwVar20;
  if (lVar9 != 0) {
    pwVar18 = *(wchar_t **)(param_1 + 0x278);
  }
  ReleaseSRWLockShared(SRWLock);
  if (((lVar9 == 0) || (pwVar18 == (wchar_t *)0x0)) ||
     (cVar6 = (**(code **)(*(longlong *)pwVar18 + 0x80))(pwVar18), cVar6 == '\0')) {
    uVar7 = (uint)bVar1;
    if (*(char *)(param_1 + 0x2b2) != '\x03') {
      uVar7 = uVar19;
    }
    goto LAB_140ffc32e;
  }
  local_f8 = CONCAT31(local_f8._1_3_,2);
  lVar9 = (**(code **)(*(longlong *)pwVar18 + 0x98))(pwVar18);
  if (lVar9 != 0) {
    plVar14 = (longlong *)(lVar9 + 0x268);
    plVar13 = (longlong *)FMemory::Realloc(0,0x30);
    local_68 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      *plVar13 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar13 + 1,param_1);
      plVar13[2] = (longlong)FUN_14100e3f0;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar13[4] = lVar8;
      *plVar13 = (longlong)&PTR_FUN_143f4d2d8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar14,1);
      (**(code **)(*plVar13 + 0x20))(plVar13,local_90);
      iVar2 = *(int *)(lVar9 + 0x270);
      *(int *)(lVar9 + 0x270) = iVar2 + 1;
      if (*(int *)(lVar9 + 0x274) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar2);
      }
      lVar8 = *plVar14;
      *(longlong **)(lVar8 + (longlong)iVar2 * 0x10) = plVar13;
      *(undefined4 *)(lVar8 + 8 + (longlong)iVar2 * 0x10) = 3;
    }
    lVar8 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pplVar21 = (longlong **)(lVar9 + 0x958);
      plVar14 = (longlong *)FMemory::Realloc(0,0x30);
      local_a0[0] = plVar14;
      if (plVar14 != (longlong *)0x0) {
        *plVar14 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar14 + 1,param_1);
        plVar14[2] = (longlong)&LAB_140ff5450;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar14[4] = lVar8;
        *plVar14 = (longlong)&PTR_FUN_143f4d1b8;
      }
      if (local_a0 != pplVar21) {
        if (plVar14 == (longlong *)0x0) {
          if ((*(int *)(lVar9 + 0x960) != 0) && (plVar14 = *pplVar21, plVar14 != (longlong *)0x0)) {
            (**(code **)(*plVar14 + 0x28))(plVar14,0);
            if (*pplVar21 != (longlong *)0x0) {
              plVar14 = (longlong *)FMemory::Realloc(*pplVar21,0,0);
              *pplVar21 = plVar14;
            }
            *(undefined4 *)(lVar9 + 0x960) = 0;
          }
          goto LAB_140ffbe0d;
        }
        (**(code **)(*plVar14 + 0x30))(plVar14,pplVar21);
      }
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x28))(plVar14,0);
        local_a0[0] = (longlong *)FMemory::Realloc(plVar14,0,0);
        if (local_a0[0] != (longlong *)0x0) {
          FMemory::Free(local_a0[0]);
        }
      }
    }
  }
LAB_140ffbe0d:
  lVar9 = (**(code **)(*(longlong *)pwVar18 + 0xa8))(pwVar18);
  if (lVar9 != 0) {
    pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxNameplate::OnLevelChanged",L"::");
    pwVar16 = pwVar20;
    while (pwVar5 = pwVar12, pwVar5 != (wchar_t *)0x0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar16 = pwVar5;
    }
    FName::FName(&local_b0,pwVar16 + 2,1);
    FUN_14074ba20(lVar9,param_1,FUN_140ffdd40,local_b0);
  }
  plVar14 = (longlong *)(**(code **)(*(longlong *)pwVar18 + 0xb0))(pwVar18);
  if (plVar14 != (longlong *)0x0) {
    pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxNameplate::OnNameUpdated",L"::");
    pwVar16 = pwVar20;
    while (pwVar5 = pwVar12, pwVar5 != (wchar_t *)0x0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar16 = pwVar5;
    }
    FName::FName(&local_a8,pwVar16 + 2,1);
    FWeakObjectPtr::operator=(&local_108,0);
    local_100 = 0;
    FWeakObjectPtr::operator=(&local_108,param_1);
    local_100 = local_a8;
    local_res10 = (longlong *)0x0;
    if ((local_a8 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_108), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_100);
    }
    piVar3 = (int *)*plVar14;
    lVar9 = plVar14[1];
    for (piVar17 = piVar3; piVar17 != piVar3 + (longlong)(int)lVar9 * 4; piVar17 = piVar17 + 4) {
      if (((*piVar17 == local_108) && (piVar17[1] == local_104)) ||
         ((cVar6 = FWeakObjectPtr::IsValid(piVar17), cVar6 == '\0' &&
          (cVar6 = FWeakObjectPtr::IsValid(&local_108), cVar6 == '\0')))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) && (*(longlong *)(piVar17 + 2) == local_100)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        if ((int)((longlong)piVar17 - (longlong)piVar3 >> 4) != -1) goto LAB_140ffc035;
        break;
      }
    }
    iVar2 = (int)plVar14[1];
    lVar9 = (longlong)iVar2;
    *(int *)(plVar14 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar14 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar2);
    }
    lVar8 = *plVar14;
    *(int *)(lVar8 + lVar9 * 0x10) = local_108;
    *(int *)(lVar8 + 4 + lVar9 * 0x10) = local_104;
    *(longlong *)(lVar8 + 8 + lVar9 * 0x10) = local_100;
LAB_140ffc035:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
  }
  lVar9 = (**(code **)(*(longlong *)pwVar18 + 0xa0))(pwVar18);
  if (lVar9 != 0) {
    plVar14 = (longlong *)(lVar9 + 400);
    plVar13 = (longlong *)FMemory::Realloc(0,0x30);
    local_58 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      *plVar13 = (longlong)&PTR_FUN_1441c0108;
      FWeakObjectPtr::operator=(plVar13 + 1,param_1);
      plVar13[2] = (longlong)FUN_14100e460;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar13[4] = lVar8;
      *plVar13 = (longlong)&PTR_FUN_1441c0150;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar14,1);
      (**(code **)(*plVar13 + 0x20))(plVar13,local_88);
      iVar2 = *(int *)(lVar9 + 0x198);
      *(int *)(lVar9 + 0x198) = iVar2 + 1;
      if (*(int *)(lVar9 + 0x19c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar2);
      }
      lVar9 = *plVar14;
      *(longlong **)(lVar9 + (longlong)iVar2 * 0x10) = plVar13;
      *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0x10) = 3;
    }
  }
  uVar11 = (**(code **)(*(longlong *)pwVar18 + 0x68))(pwVar18,local_80);
  FText::operator=(param_1 + 0x298,uVar11);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_78 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar3 = (int *)((longlong)local_78 + 0xc);
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  pwVar18 = *(wchar_t **)(param_1 + 0x38);
  if (pwVar18 == (wchar_t *)0x0) {
LAB_140ffc187:
    pwVar18 = pwVar20;
  }
  else {
    lVar9 = UGSquadMemberWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar18 + 8) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar18 + 8) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140ffc187;
  }
  FUN_140ff17c0(param_1);
  FUN_141007af0(param_1,0);
  FUN_14101ce20(param_1);
  if ((pwVar18 != (wchar_t *)0x0) && (lVar9 = FUN_140fe3d70(pwVar18), lVar9 != 0)) {
    iVar2 = *(int *)(param_1 + 0x288);
    if (iVar2 == 0) {
      local_d0 = 0;
      local_c8 = 0x1a;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d0,0);
      lVar8 = local_d0;
      FGenericPlatformString::Memcpy(local_d0,L"Nameplate_Friendly_Slight",0x34);
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::FindId(lVar9 + 0xa8,local_res8,&local_d0);
      lVar15 = (longlong)local_res8[0];
    }
    else if (iVar2 == 1) {
      local_e0 = 0;
      local_d8 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
      lVar8 = local_e0;
      FGenericPlatformString::Memcpy(local_e0,L"Nameplate_Neutral",0x24);
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::FindId(lVar9 + 0xa8,&local_res10,&local_e0);
      lVar15 = (longlong)(int)local_res10;
    }
    else {
      if (iVar2 != 2) goto LAB_140ffc300;
      local_f0 = 0;
      local_e8 = 0x17;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0,0);
      lVar8 = local_f0;
      FGenericPlatformString::Memcpy(local_f0,L"Nameplate_Enemy_Slight",0x2e);
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::FindId(lVar9 + 0xa8,local_res20,&local_f0);
      lVar15 = (longlong)local_res20[0];
    }
    if (((int)lVar15 != -1) && (lVar9 = lVar15 * 0x30 + *(longlong *)(lVar9 + 0xa8), lVar9 != 0)) {
      pwVar20 = (wchar_t *)(lVar9 + 0x10);
    }
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
    if (pwVar20 != (wchar_t *)0x0) {
      FString::operator=(param_1 + 0x2b8,pwVar20);
    }
  }
LAB_140ffc300:
  FUN_14101dd20(param_1);
  FUN_14101d6f0(param_1);
  FUN_14101d440(param_1,0);
  uVar7 = local_f8;
LAB_140ffc32e:
  FUN_14101de30(param_1,uVar7 & 0xff);
  return;
}



// FUNCTION 140ffc350 FUN_140ffc350 body=154 status=ok
// SIG undefined FUN_140ffc350(void)

void FUN_140ffc350(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [32];
  
  FUN_142ebee70();
  if (*(longlong *)(param_1 + 0x688) != 0) {
    lVar3 = FUN_142f71d80();
    lVar1 = *(longlong *)(param_1 + 0x688);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) {
        if (lVar1 != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x630) + 0x40))((longlong *)(param_1 + 0x630),lVar1);
          return;
        }
        break;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x698) == 0) {
    (**(code **)(*(longlong *)(param_1 + 0x630) + 0x40))((longlong *)(param_1 + 0x630),0);
    return;
  }
  puVar4 = (undefined8 *)FUN_142f5ed60(*(longlong *)(param_1 + 0x698),local_res8);
  (**(code **)(*(longlong *)(param_1 + 0x630) + 0x40))((longlong *)(param_1 + 0x630),*puVar4);
  return;
}



// FUNCTION 140ffc3f0 FUN_140ffc3f0 body=40 status=ok
// SIG undefined FUN_140ffc3f0(void)

void FUN_140ffc3f0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x278))(param_1,1);
  FUN_14101de30(param_1,*(undefined1 *)((longlong)param_1 + 0x2b2));
  return;
}



// FUNCTION 140ffc420 FUN_140ffc420 body=99 status=ok
// SIG undefined FUN_140ffc420(void)

void FUN_140ffc420(longlong *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_142ebee70();
  if (1e-08 < *(float *)((longlong)param_1 + 0x6bc)) {
    (**(code **)(*param_1 + 0x578))();
    local_18 = 0;
    local_10 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0xd5],&local_18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140ffc47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x580))(param_1,0);
  return;
}



// FUNCTION 140ffc490 FUN_140ffc490 body=141 status=ok
// SIG undefined FUN_140ffc490(void)

void FUN_140ffc490(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142ebee70();
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xbb);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
    iVar1 = *(int *)(lVar4 + 0x90);
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (*(char *)(lVar3 + 0xcb8) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140ffc503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x578))(param_1,0);
        return;
      }
      (**(code **)(*param_1 + 0x580))(param_1,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
    }
  }
  return;
}



// FUNCTION 140ffc520 FUN_140ffc520 body=338 status=ok
// SIG undefined FUN_140ffc520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ffc520(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
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
  FUN_142ebee70();
  (**(code **)(*param_1 + 0x580))(param_1,1);
  FWeakObjectPtr::operator=(&local_c8,param_1);
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_c8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_c4;
  }
  local_b8[0] = &LAB_140ff1d60;
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



// FUNCTION 140ffc680 FUN_140ffc680 body=581 status=ok
// SIG undefined FUN_140ffc680(void)

void FUN_140ffc680(longlong *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  FUN_142ebee70();
  plVar7 = (longlong *)param_1[0xc6];
  bVar1 = false;
  plVar10 = plVar7 + (int)param_1[199];
  do {
    if (plVar7 == plVar10) {
LAB_140ffc6df:
      if (bVar1) {
        (**(code **)(*param_1 + 0x578))(param_1,0);
      }
      else {
        (**(code **)(*param_1 + 0x580))(param_1,CONCAT71((int7)((ulonglong)plVar7 >> 8),1));
      }
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca));
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0xc9) = 0;
      if ((*(int *)((longlong)param_1 + 0x64c) < 0) && (*(int *)((longlong)param_1 + 0x64c) != 0)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 200,0);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca));
      plVar10 = (longlong *)param_1[0xc6];
      uVar11 = (longlong)(int)param_1[199] & 0x1fffffffffffffff;
      if (plVar10 + (int)param_1[199] < plVar10) {
        uVar11 = uVar9;
      }
      if (uVar11 != 0) {
        do {
          lVar8 = *plVar10;
          FUN_141017130(lVar8,0);
          FUN_141014570(lVar8,0);
          FUN_141016b60(lVar8,0);
          FWeakObjectPtr::operator=(&local_res10,lVar8);
          uVar3 = local_res14;
          uVar2 = local_res10;
          local_58 = 0;
          local_48 = 0;
          puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_78);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &PTR_FUN_144605c50;
            puVar5[1] = lVar8;
            *(undefined4 *)(puVar5 + 2) = uVar2;
            *(undefined4 *)((longlong)puVar5 + 0x14) = uVar3;
            *(undefined4 *)(puVar5 + 3) = 0xffffffff;
          }
          FUN_14208c5d0(lVar8);
          FUN_1416f8340(0xffffffff);
          FUN_1416f8340(0xffffffff);
          plVar10 = plVar10 + 1;
          *(undefined4 *)(lVar8 + 0x174) = 0xffffffff;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar11);
      }
      cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xcd);
      if (cVar4 != '\0') {
        lVar6 = FWeakObjectPtr::Get(param_1 + 0xcd);
        lVar8 = *(longlong *)(lVar6 + 0x618);
        lVar6 = (longlong)*(int *)(lVar6 + 0x620) * 0x38 + lVar8;
        for (; lVar8 != lVar6; lVar8 = lVar8 + 0x38) {
          if (*(char *)(lVar8 + 0x30) != '\0') {
            FUN_140ff0820(param_1,lVar8);
          }
        }
      }
      return;
    }
    if ((*plVar7 != 0) && (*(char *)(*plVar7 + 0x1c8) != '\0')) {
      bVar1 = true;
      goto LAB_140ffc6df;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 140ffc8d0 FUN_140ffc8d0 body=186 status=ok
// SIG undefined FUN_140ffc8d0(void)

void FUN_140ffc8d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ebee70();
  cVar5 = FUN_142ebe180(param_1);
  if (cVar5 == '\0') {
    FUN_141012490(param_1,1);
  }
  if (*(longlong **)(param_1 + 0x658) != (longlong *)0x0) {
    local_38[0] = 0;
    local_38[1] = 0;
    lVar4 = **(longlong **)(param_1 + 0x658);
    uVar6 = FText::FromString(local_28,local_38);
    (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x658),uVar6,1,0);
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
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ffc9b0 FUN_140ffc9b0 body=76 status=ok
// SIG undefined FUN_140ffc9b0(void)

undefined1 FUN_140ffc9b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x1d0) != 0) && (cVar1 = FUN_142eef530(), cVar1 != '\0')) {
    return 1;
  }
  cVar1 = FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}



// FUNCTION 140ffca00 FUN_140ffca00 body=197 status=ok
// SIG undefined FUN_140ffca00(void)

undefined1 FUN_140ffca00(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_2 + 8) == DAT_146873708) &&
     ((*(char *)(param_1 + 0x1d0) != '\0' || (0.1 < ABS(*(float *)(param_2 + 4)))))) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
    if (cVar1 != '\0') {
      lVar3 = FWeakObjectPtr::Get(param_1 + 0xc4);
      if (*(char *)(lVar3 + 0xb8) == '\x01') {
        *(uint *)(param_1 + 0x1c4) = *(uint *)(param_2 + 4) ^ 0x80000000;
        FUN_142dbedb0(param_1 + 0x1c0);
      }
    }
  }
  uVar2 = FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  FUN_140eaffa0(param_1 + 0x658,param_2 + 8,*(undefined4 *)(param_2 + 4));
  return uVar2;
}



// FUNCTION 140ffcad0 FUN_140ffcad0 body=109 status=ok
// SIG undefined FUN_140ffcad0(void)

void FUN_140ffcad0(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  undefined1 local_res18 [16];
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x580))(param_1,0);
    pwVar3 = L"Out_Of_Bounds_Stop";
  }
  else {
    (**(code **)(*param_1 + 0x578))(param_1,0);
    pwVar3 = L"Out_Of_Bounds_Start";
  }
  lVar1 = *param_1;
  local_18 = 0;
  local_10 = 0;
  puVar2 = (undefined8 *)FName::FName(local_res18,pwVar3,1);
  (**(code **)(lVar1 + 0x4e8))(param_1,*puVar2,&local_18);
  return;
}



// FUNCTION 140ffcb40 FUN_140ffcb40 body=41 status=ok
// SIG undefined FUN_140ffcb40(void)

void FUN_140ffcb40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FUN_140e93cc0();
  }
  FUN_141010a00(param_1,1);
  return;
}



// FUNCTION 140ffcb70 FUN_140ffcb70 body=138 status=ok
// SIG undefined FUN_140ffcb70(void)

void FUN_140ffcb70(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x59c);
    lVar3 = FUN_140cddc40(uVar1);
    if (lVar3 != 0) {
      FUN_142eb3990(lVar3);
      cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
      if (cVar2 == '\0') {
        return;
      }
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x59c);
      FUN_142f06bc0(uVar1,param_1);
      return;
    }
  }
  uVar1 = FUN_140e971d0(param_1);
  FUN_14100fed0(uVar1);
  return;
}



// FUNCTION 140ffcc00 FUN_140ffcc00 body=97 status=ok
// SIG undefined FUN_140ffcc00(void)

void FUN_140ffcc00(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142eb3990();
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x58c);
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
      *(undefined1 *)(lVar2 + 0x1aa8) = 0;
    }
  }
  return;
}



// FUNCTION 140ffcc70 FUN_140ffcc70 body=401 status=ok
// SIG undefined FUN_140ffcc70(void)

void FUN_140ffcc70(longlong param_1,uint param_2,undefined1 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uStack_74;
  undefined7 uStack_5f;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if ((*(char *)(param_1 + 0x838) != '\x02') && (lVar3 = *(longlong *)(param_1 + 0x808), lVar3 != 0)
     ) {
    lVar2 = FUN_141404840();
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
      lVar3 = *(longlong *)(lVar3 + 0x2298);
      goto LAB_140ffcd4c;
    }
  }
  lVar3 = 0;
LAB_140ffcd4c:
  if (lVar3 != 0) {
    uStack_74 = CONCAT31(uStack_74._1_3_,param_3);
    local_28 = 0;
    local_18 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x38,local_48);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_1442e7fc0;
      puVar4[1] = param_1;
      puVar4[2] = lVar3;
      puVar4[3] = CONCAT44(uStack_74,param_4);
      puVar4[4] = CONCAT44((float)(param_2 >> 8 & 0xff) * 0.003921569,
                           (float)(param_2 >> 0x10 & 0xff) * 0.003921569);
      puVar4[5] = CONCAT44((float)(param_2 >> 0x18) * 0.003921569,
                           (float)(param_2 & 0xff) * 0.003921569);
      puVar4[6] = CONCAT71(uStack_5f,param_5);
    }
    local_58[0] = &LAB_140ff1b10;
    FUN_14204c280(local_58);
  }
  return;
}



// FUNCTION 140ffce10 FUN_140ffce10 body=564 status=ok
// SIG undefined FUN_140ffce10(void)

void FUN_140ffce10(longlong param_1,ulonglong param_2,undefined1 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  longlong local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  
  fVar5 = (float)((uint)(param_2 >> 0x18) & 0xff) * 0.003921569;
  fVar6 = (float)((uint)param_2 & 0xff) * 0.003921569;
  fVar7 = (float)((uint)(param_2 >> 8) & 0xff) * 0.003921569;
  fVar8 = (float)((uint)(param_2 >> 0x10) & 0xff) * 0.003921569;
  local_e8 = fVar8;
  fStack_e4 = fVar7;
  fStack_e0 = fVar6;
  fStack_dc = fVar5;
  FUN_14138f990(0x3b808081,4);
  FUN_140ffcc70(param_1,param_2 & 0xffffffff,param_3,param_4,param_5);
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
      lVar2 = *(longlong *)(lVar2 + 0x2a60);
      goto LAB_140ffcf2d;
    }
  }
  lVar2 = 0;
LAB_140ffcf2d:
  if (lVar2 != 0) {
    fStack_c0 = local_e8;
    fStack_bc = fStack_e4;
    fStack_b8 = fStack_e0;
    fStack_b4 = fStack_dc;
    uStack_c4 = CONCAT31(uStack_c4._1_3_,param_3);
    uStack_b0 = CONCAT31(uStack_b0._1_3_,param_5);
    local_78 = 0;
    local_68 = 0;
    local_d8 = param_1;
    lStack_d0 = lVar2;
    local_c8 = param_4;
    puVar4 = (undefined8 *)FUN_140438ef0(0x38,local_98);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_1442e7fc0;
      puVar4[1] = local_d8;
      puVar4[2] = lStack_d0;
      puVar4[3] = CONCAT44(uStack_c4,local_c8);
      puVar4[4] = CONCAT44(fStack_bc,fStack_c0);
      *(float *)(puVar4 + 5) = fStack_b8;
      *(float *)((longlong)puVar4 + 0x2c) = fStack_b4;
      *(undefined4 *)(puVar4 + 6) = uStack_b0;
      *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_ac;
    }
    local_a8[0] = &LAB_140ff1ad0;
    FUN_14204c280(local_a8);
  }
  lVar2 = FUN_140eac060(param_1);
  if (lVar2 != 0) {
    lVar3 = ALandscapeStreamingProxy::StaticClass();
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
      local_e8 = fVar8;
      fStack_e4 = fVar7;
      fStack_e0 = fVar6;
      fStack_dc = fVar5;
      FUN_1414b6e60(lVar2,param_4,&local_e8);
    }
  }
  return;
}



// FUNCTION 140ffd070 FUN_140ffd070 body=72 status=ok
// SIG undefined FUN_140ffd070(void)

void FUN_140ffd070(longlong param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x6a0));
  FUN_140ff4330(param_1,param_1 + 0x650);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x6a0));
  FUN_142ebfbd0(param_1);
  return;
}



// FUNCTION 140ffd0c0 OnTargetUnavailable body=27 status=ok
// SIG undefined OnTargetUnavailable(void)

void ARemnantSpectatorPawn::OnTargetUnavailable(undefined8 param_1)

{
  FUN_140ff2350();
  FUN_142ebfbd0(param_1);
  return;
}



// FUNCTION 140ffd0e0 FUN_140ffd0e0 body=34 status=ok
// SIG undefined FUN_140ffd0e0(void)

void FUN_140ffd0e0(longlong *param_1)

{
  FUN_142ebfbd0();
                    /* WARNING: Could not recover jumptable at 0x000140ffd0fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x580))(param_1,0);
  return;
}



// FUNCTION 140ffd110 FUN_140ffd110 body=301 status=ok
// SIG undefined FUN_140ffd110(void)

void FUN_140ffd110(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong *local_78;
  undefined8 local_70;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FWeakObjectPtr::operator=(&local_res8,param_1);
    local_38 = 0;
    local_28 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_1444f8920;
      puVar1[1] = param_1;
      *(undefined4 *)(puVar1 + 2) = local_res8;
      *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    }
    local_68[0] = &LAB_140ff1b90;
    FUN_14204c280(local_68);
  }
  local_78 = (longlong *)0x0;
  local_70 = 0;
  plVar2 = (longlong *)FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x310),param_1 + 0x350,0,6,&local_78)
  ;
  plVar3 = local_78;
  for (iVar4 = (int)local_70; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x278))(plVar2,0);
  }
  FUN_142ec05c0(param_1);
  return;
}



// FUNCTION 140ffd240 FUN_140ffd240 body=286 status=ok
// SIG undefined FUN_140ffd240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ffd240(longlong param_1)

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
  local_b8[0] = &LAB_140ff1900;
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
  *(undefined1 *)(param_1 + 0x680) = 0;
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ffd360 FUN_140ffd360 body=242 status=ok
// SIG undefined FUN_140ffd360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ffd360(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FWeakObjectPtr::operator=(&local_78,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_78;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_74;
  }
  local_68[0] = &LAB_140ff1930;
  FUN_14208c300(param_1,local_68);
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
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 140ffd460 FUN_140ffd460 body=279 status=ok
// SIG undefined FUN_140ffd460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ffd460(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
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
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = FUN_140ff19d0;
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
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ffd580 FUN_140ffd580 body=495 status=ok
// SIG undefined FUN_140ffd580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ffd580(longlong param_1)

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
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x648));
  FUN_140ff3cf0(param_1 + 0x638,0);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x648));
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6a0));
  if (*(longlong **)(param_1 + 0x658) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x658) + 0x280))();
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6a0));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x6a0));
  FUN_140ff4330(param_1,param_1 + 0x650);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x6a0));
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6f8));
  if (*(longlong **)(param_1 + 0x6b0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x280))();
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6f8));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x6f8));
  FUN_140ff4330(param_1,param_1 + 0x6a8);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x6f8));
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ff1ae0;
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
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ffd770 FUN_140ffd770 body=279 status=ok
// SIG undefined FUN_140ffd770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ffd770(undefined8 param_1)

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
  local_b8[0] = &LAB_140ff1ba0;
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
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ffd890 FUN_140ffd890 body=284 status=ok
// SIG undefined FUN_140ffd890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ffd890(undefined8 param_1)

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
  FUN_140ff2350();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ff1e10;
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
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ffd9c0 FUN_140ffd9c0 body=492 status=ok
// SIG undefined FUN_140ffd9c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ffd9c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
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
  uVar3 = 0;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_b8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_c8[0] = &LAB_140ff1c60;
  uVar2 = FUN_1420849a0(param_1,local_78,local_c8);
  FUN_14208c260(param_1,uVar2);
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
  if (local_88 != 0) {
    plVar4 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar4 = local_98;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x630);
  uVar5 = (longlong)*(int *)(param_1 + 0x638) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x638) < puVar1) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x288))();
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar5);
  }
  *(undefined4 *)(param_1 + 0x638) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x63c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x630,0);
  }
  *(undefined4 *)(param_1 + 0x660) = 0;
  if ((*(int *)(param_1 + 0x664) < 0) && (*(int *)(param_1 + 0x664) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x658,0);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x650));
  *(undefined4 *)(param_1 + 0x648) = 0;
  if ((*(int *)(param_1 + 0x64c) < 0) && (*(int *)(param_1 + 0x64c) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x640,0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x650));
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ffdbb0 FUN_140ffdbb0 body=279 status=ok
// SIG undefined FUN_140ffdbb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ffdbb0(undefined8 param_1)

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
  local_b8[0] = &LAB_140ff1b80;
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
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ffdcd0 FUN_140ffdcd0 body=108 status=ok
// SIG undefined FUN_140ffdcd0(void)

void FUN_140ffdcd0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
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
      *(undefined1 *)(lVar2 + 0x1aa8) = 0;
    }
  }
  FUN_142ec0d90(param_1);
  return;
}



// FUNCTION 140ffdd40 FUN_140ffdd40 body=27 status=ok
// SIG undefined FUN_140ffdd40(void)

void FUN_140ffdd40(undefined8 param_1)

{
  FUN_140ff17c0();
  FUN_14101d6f0(param_1);
  return;
}



// FUNCTION 140ffdd60 FUN_140ffdd60 body=926 status=ok
// SIG undefined FUN_140ffdd60(void)

void FUN_140ffdd60(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  longlong local_28;
  ulonglong local_20;
  
  uVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x594);
  uVar12 = 0;
  if (uVar3 != 0) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(uVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140ffddc3;
  }
  uVar3 = uVar12;
LAB_140ffddc3:
  if ((param_1[0xde] != 0) && (uVar3 != 0)) {
    if (0 < (int)param_1[0x16c]) {
      plVar5 = (longlong *)param_1[0x16b];
      uVar7 = uVar12;
LAB_140ffddf6:
      if ((*plVar5 == 0) || (*plVar5 != param_2)) goto LAB_140ffde03;
      uVar13 = param_1[0x16f];
      if (uVar13 == 0) {
LAB_140ffde59:
        uVar13 = uVar12;
      }
      else {
        lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(uVar13 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar13 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140ffde59;
      }
      FUN_140e36aa0(uVar3,uVar7,uVar13,0);
      param_1[0x16f] = 0;
      if (param_1[0xdc] != 0) {
        local_28 = 0;
        local_20 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        FGenericPlatformString::Memcpy(local_28,L"list",10);
        FUN_142088cf0(param_1[0xdc],&local_28);
        if (local_28 != 0) {
          FMemory::Free();
        }
      }
      (**(code **)(*(longlong *)(param_1[0xde] + 0x170) + 0x38))
                ((longlong *)(param_1[0xde] + 0x170),1);
      plVar5 = (longlong *)param_1[0x16b];
      uVar7 = (longlong)(int)param_1[0x16c] & 0x1fffffffffffffff;
      if (plVar5 + (int)param_1[0x16c] < plVar5) {
        uVar7 = uVar12;
      }
      uVar13 = uVar12;
      if (uVar7 != 0) {
        do {
          if (*plVar5 != 0) {
            plVar10 = (longlong *)(*plVar5 + 0x170);
            (**(code **)(*plVar10 + 0x38))(plVar10,0);
          }
          plVar5 = plVar5 + 1;
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar7);
      }
      lVar4 = param_1[0xde];
      uVar7 = uVar12;
      local_28 = lVar4;
      if (lVar4 != 0) {
        uVar6 = UBlendableInterface::GetPrivateStaticClass();
        uVar7 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar6);
      }
      local_20 = uVar7;
      FUN_142ed36d0(param_1,&local_28,0);
      plVar5 = (longlong *)param_1[0x16e];
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x278))(plVar5,0);
      }
      iVar2 = FUN_142eb7440(param_1[0xde]);
      uVar7 = uVar12;
      if (0 < iVar2) {
        do {
          lVar4 = FUN_142eb6a30(param_1[0xde],uVar7);
          if (lVar4 != 0) {
            lVar8 = FUN_14138e2b0();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              lVar8 = *(longlong *)(lVar4 + 0x308);
              if (lVar8 != 0) {
                plVar10 = *(longlong **)(uVar3 + 0x26d0);
                plVar5 = plVar10 + *(int *)(uVar3 + 0x26d8);
                for (; plVar10 != plVar5; plVar10 = plVar10 + 1) {
                  if (*plVar10 == lVar8) {
                    uVar6 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
                    goto LAB_140ffe020;
                  }
                }
              }
              uVar6 = 0;
LAB_140ffe020:
              FUN_142ed2820(lVar4,uVar6,1);
            }
          }
          uVar11 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar11;
          iVar2 = FUN_142eb7440(param_1[0xde]);
        } while ((int)uVar11 < iVar2);
      }
    }
LAB_140ffe041:
    uVar7 = uVar12;
    if (0 < (int)param_1[0x16c]) {
      do {
        if (((longlong)uVar12 < 0) || (*(int *)(uVar3 + 0x26d8) <= (int)uVar7)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          *(undefined8 *)(*(longlong *)(param_1[0x16b] + uVar12 * 8) + 0x308) =
               *(undefined8 *)(*(longlong *)(uVar3 + 0x26d0) + uVar12 * 8);
        }
        else {
          *(undefined8 *)(*(longlong *)(param_1[0x16b] + uVar12 * 8) + 0x308) = 0;
        }
        FUN_14101c0d0(*(undefined8 *)(param_1[0x16b] + uVar12 * 8));
        uVar11 = (int)uVar7 + 1;
        uVar12 = uVar12 + 1;
        uVar7 = (ulonglong)uVar11;
      } while ((int)uVar11 < (int)param_1[0x16c]);
    }
    lVar4 = *param_1;
    local_28 = 0;
    local_20 = 0;
    puVar9 = (undefined8 *)FName::FName(local_res8,L"Confirm",1);
    (**(code **)(lVar4 + 0x4e8))(param_1,*puVar9,&local_28);
  }
  return;
LAB_140ffde03:
  uVar11 = (int)uVar7 + 1;
  uVar7 = (ulonglong)uVar11;
  plVar5 = plVar5 + 1;
  if ((int)param_1[0x16c] <= (int)uVar11) goto LAB_140ffe041;
  goto LAB_140ffddf6;
}



// FUNCTION 140ffe100 FUN_140ffe100 body=285 status=ok
// SIG undefined FUN_140ffe100(void)

void FUN_140ffe100(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (param_2 != 0) {
    lVar3 = FUN_14138e2b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar3 = *(longlong *)(param_2 + 0x308), lVar3 != 0)) {
      lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
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
        local_28 = 0;
        local_18 = 0;
        puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_48);
        if (puVar5 != (undefined8 *)0x0) {
          local_68 = (undefined4)param_1;
          uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
          uStack_60 = (undefined4)lVar3;
          uStack_5c = (undefined4)((ulonglong)lVar3 >> 0x20);
          *puVar5 = &PTR_FUN_143f77c18;
          *(undefined4 *)(puVar5 + 1) = local_68;
          *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_64;
          *(undefined4 *)(puVar5 + 2) = uStack_60;
          *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_5c;
        }
        local_58[0] = &LAB_140ff1e30;
        FUN_14204c280(local_58);
        plVar1 = *(longlong **)(param_1 + 0xb70);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x2b0))(plVar1,lVar3 + 0x30,1,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ffe240 FUN_140ffe240 body=70 status=ok
// SIG undefined FUN_140ffe240(void)

void FUN_140ffe240(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_140e90dd0();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd0) + 0x170);
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2 != 0);
  }
  return;
}



// FUNCTION 140ffe2d0 FUN_140ffe2d0 body=1198 status=ok
// SIG undefined FUN_140ffe2d0(void)

void FUN_140ffe2d0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  int *piVar11;
  undefined4 *puVar12;
  wchar_t *pwVar13;
  bool bVar14;
  wchar_t *local_res10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  FUN_142ec1f90();
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  pwVar13 = (wchar_t *)0x0;
  pwVar10 = pwVar13;
  if (lVar6 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if (bVar14) {
      pwVar10 = *(wchar_t **)(lVar6 + 0x5b8);
    }
  }
  if (pwVar10 != (wchar_t *)0x0) {
    *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(pwVar10 + 0x24);
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTextLogChanged",L"::");
    pwVar4 = pwVar13;
    while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    pwVar4 = local_res10;
    FWeakObjectPtr::operator=(&local_68,0);
    uStack_60 = (wchar_t *)0x0;
    FWeakObjectPtr::operator=(&local_68,param_1);
    uStack_60 = pwVar4;
    if ((pwVar4 != (wchar_t *)0x0) && (lVar6 = FWeakObjectPtr::Get(&local_68), lVar6 != 0)) {
      UObject::FindFunction(lVar6,uStack_60);
    }
    piVar2 = *(int **)(pwVar10 + 0x14);
    iVar1 = *(int *)(pwVar10 + 0x18);
    lVar6 = (longlong)local_68;
    for (piVar11 = piVar2; local_68 = (code *)lVar6, piVar11 != piVar2 + (longlong)iVar1 * 4;
        piVar11 = piVar11 + 4) {
      local_68._0_4_ = (int)lVar6;
      if (((*piVar11 == (int)local_68) &&
          (local_68._4_4_ = (int)((ulonglong)lVar6 >> 0x20), bVar14 = piVar11[1] == local_68._4_4_,
          bVar14)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar11), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_68), cVar5 == '\0')))) {
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
      if ((bVar14) && (*(wchar_t **)(piVar11 + 2) == uStack_60)) {
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
      if (bVar14) {
        if ((int)((longlong)piVar11 - (longlong)piVar2 >> 4) != -1) goto LAB_140ffe4b1;
        break;
      }
      lVar6 = (longlong)local_68;
    }
    iVar1 = *(int *)(pwVar10 + 0x18);
    *(int *)(pwVar10 + 0x18) = iVar1 + 1;
    if (*(int *)(pwVar10 + 0x1a) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar10 + 0x14,iVar1);
    }
    puVar12 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(pwVar10 + 0x14));
    *puVar12 = (int)local_68;
    puVar12[1] = local_68._4_4_;
    *(wchar_t **)(puVar12 + 2) = uStack_60;
LAB_140ffe4b1:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pwVar10 + 0x14);
  }
  FUN_140ff3350(param_1,pwVar10);
  FUN_14101d210(param_1);
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    uStack_60._4_4_ = (uint)((ulonglong)uStack_60 >> 0x20);
    local_68 = FUN_14100e200;
    uStack_60._0_4_ = 0;
    FUN_140cdd210(*(longlong *)(param_1 + 0x6b8) + 0x3b8,param_1,&local_68);
    local_68 = FUN_14100e5a0;
    uStack_60 = (wchar_t *)((ulonglong)uStack_60._4_4_ << 0x20);
    FUN_140cdd210(*(longlong *)(param_1 + 0x6b8) + 0x378,param_1,&local_68);
    local_68 = (code *)0x0;
    uStack_60 = (wchar_t *)0x0;
    FUN_142ed55e0(*(undefined8 *)(param_1 + 0x6b8),&local_68,0);
    if (local_68 != (code *)0x0) {
      FMemory::Free();
    }
    FUN_142eb4cb0(*(undefined8 *)(param_1 + 0x6b8));
    FUN_141014810(param_1,1);
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_58,0);
    FWeakObjectPtr::operator=(&local_50,0);
    FWeakObjectPtr::operator=(&local_48,0);
    FWeakObjectPtr::operator=(&local_40,0);
    lVar6 = *(longlong *)(param_1 + 0x6b8);
    pwVar10 = pwVar13;
    local_68 = (code *)lVar6;
    if (lVar6 != 0) {
      uVar9 = UBlendableInterface::GetPrivateStaticClass();
      pwVar10 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar9);
    }
    uStack_60 = pwVar10;
    FUN_142ecfd10(param_1,&local_68,&local_58);
    lVar6 = *(longlong *)(param_1 + 0x6b8);
    pwVar10 = pwVar13;
    local_68 = (code *)lVar6;
    if (lVar6 != 0) {
      uVar9 = UBlendableInterface::GetPrivateStaticClass();
      pwVar10 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar9);
    }
    uStack_60 = pwVar10;
    FUN_142ed36d0(param_1,&local_68,0);
  }
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_58,0);
    FWeakObjectPtr::operator=(&local_50,0);
    FWeakObjectPtr::operator=(&local_48,0);
    FWeakObjectPtr::operator=(&local_40,0);
    lVar6 = *(longlong *)(param_1 + 0x6d0);
    pwVar10 = pwVar13;
    local_68 = (code *)lVar6;
    if (lVar6 != 0) {
      uVar9 = UBlendableInterface::GetPrivateStaticClass();
      pwVar10 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar9);
    }
    uStack_60 = pwVar10;
    FUN_142ecfd10(param_1,&local_68,&local_58);
    *(undefined1 *)(*(longlong *)(param_1 + 0x6d0) + 0x198) = 0;
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCloseButtonClicked",L"::");
    while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar13 = pwVar4;
    }
    FName::FName(&local_res10,pwVar13 + 2,1);
    lVar6 = *(longlong *)(param_1 + 0x6d0);
    FWeakObjectPtr::operator=(lVar6 + 0x1b0,param_1);
    *(wchar_t **)(lVar6 + 0x1b8) = local_res10;
    if ((local_res10 != (wchar_t *)0x0) && (lVar7 = FWeakObjectPtr::Get(lVar6 + 0x1b0), lVar7 != 0))
    {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar6 + 0x1b8));
    }
  }
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 140ffe780 FUN_140ffe780 body=401 status=ok
// SIG undefined FUN_140ffe780(void)

void FUN_140ffe780(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res10;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_142ec1f90();
  if (*(longlong *)(param_1 + 0x688) != 0) {
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FWeakObjectPtr::operator=(&local_28,0);
    FWeakObjectPtr::operator=(&local_20,0);
    FWeakObjectPtr::operator=(&local_18,0);
    FWeakObjectPtr::operator=(&local_10,0);
    lVar7 = *(longlong *)(param_1 + 0x688);
    local_38 = lVar7;
    if (lVar7 == 0) {
      local_30 = 0;
    }
    else {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar4);
    }
    FUN_142ecfd10(param_1,&local_38,&local_28);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnChatButtonClicked",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res10,pwVar2 + 2,1);
    lVar7 = *(longlong *)(param_1 + 0x688);
    FWeakObjectPtr::operator=(lVar7 + 0x1b0,param_1);
    *(longlong *)(lVar7 + 0x1b8) = local_res10;
    if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar7 + 0x1b0), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar7 + 0x1b8));
    }
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar3 != '\0') {
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x59c);
    lVar7 = FUN_140ec9a00(uVar4);
    if (lVar7 != 0) {
      FUN_1411309c0(lVar7,1);
    }
  }
  FUN_141014050(param_1);
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 140ffe920 FUN_140ffe920 body=326 status=ok
// SIG undefined FUN_140ffe920(void)

void FUN_140ffe920(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x6d0);
  lVar6 = 0;
  if (lVar4 != 0) {
    FWeakObjectPtr::operator=(lVar4 + 0x1b0,0);
    *(undefined8 *)(lVar4 + 0x1b8) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x6b8);
  if (lVar4 != 0) {
    if ((*(int *)(lVar4 + 0x3c0) != 0) &&
       (plVar1 = *(longlong **)(lVar4 + 0x3b8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*(longlong *)(lVar4 + 0x3b8) != 0) {
        uVar3 = FMemory::Realloc(*(longlong *)(lVar4 + 0x3b8),0,0);
        *(undefined8 *)(lVar4 + 0x3b8) = uVar3;
      }
      *(undefined4 *)(lVar4 + 0x3c0) = 0;
      lVar4 = *(longlong *)(param_1 + 0x6b8);
    }
    if ((*(int *)(lVar4 + 0x380) != 0) &&
       (plVar1 = *(longlong **)(lVar4 + 0x378), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*(longlong *)(lVar4 + 0x378) != 0) {
        uVar3 = FMemory::Realloc(*(longlong *)(lVar4 + 0x378),0,0);
        *(undefined8 *)(lVar4 + 0x378) = uVar3;
      }
      *(undefined4 *)(lVar4 + 0x380) = 0;
    }
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
      lVar6 = *(longlong *)(lVar4 + 0x5b8);
    }
  }
  if (lVar6 != 0) {
    FUN_1407665e0(lVar6 + 0x28,param_1);
  }
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 140ffea70 FUN_140ffea70 body=122 status=ok
// SIG undefined FUN_140ffea70(void)

void FUN_140ffea70(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x688);
  if (lVar3 != 0) {
    FWeakObjectPtr::operator=(lVar3 + 0x1b0,0);
    *(undefined8 *)(lVar3 + 0x1b8) = 0;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x59c);
    lVar3 = FUN_140ec9a00(uVar2);
    if (lVar3 != 0) {
      FUN_1411309c0(lVar3,0);
    }
  }
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 140ffeb00 FUN_140ffeb00 body=48 status=ok
// SIG undefined FUN_140ffeb00(void)

void FUN_140ffeb00(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    cVar1 = FUN_140e7fa90();
    FUN_140e91170(*(undefined8 *)(param_1 + 0x48),cVar1 == '\0');
    return;
  }
  return;
}



// FUNCTION 140ffeb50 FUN_140ffeb50 body=292 status=ok
// SIG undefined FUN_140ffeb50(void)

void FUN_140ffeb50(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 local_30;
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
    if (((bVar4) && (*(char *)(lVar5 + 0x1954) != '\0')) && (param_2 == '\x04')) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (local_28,L"Out Of Grenades",L"GFxNOtificaitonWidget",L"GrenadeThrowFailed");
      lVar5 = *param_1;
      local_38 = 0;
      local_30 = 0;
      puVar7 = (undefined8 *)FName::FName(local_res8,L"Grenade_Ammo_Depleted",1);
      (**(code **)(lVar5 + 0x4e8))(param_1,*puVar7,&local_38);
      FUN_140ff3570(param_1,local_28);
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
  }
  return;
}



// FUNCTION 140ffec80 thunk_FUN_140ff3570 body=5 status=ok
// SIG undefined thunk_FUN_140ff3570(void)

void thunk_FUN_140ff3570(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x614);
  if (lVar3 != 0) {
    lVar4 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar3 + 0xf30) != 0)) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xdf));
      FUN_140ff4330(param_1,param_1 + 0xd5);
      param_1[0xd5] = *(longlong *)(lVar3 + 0xf30);
      FText::operator=(param_1 + 0xd8,param_2);
      *(undefined4 *)(param_1 + 0xd7) = *(undefined4 *)(*(longlong *)(lVar3 + 0xf30) + 0x48);
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xdf));
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146873958) {
        _Init_thread_header(&DAT_146873958);
        if (DAT_146873958 == -1) {
          FName::FName(&DAT_146873950,L"Generic_Error",1);
          _Init_thread_footer(&DAT_146873958);
        }
      }
      uStack_18 = 0;
      uStack_10 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146873950,&uStack_18);
      lVar3 = FUN_140eccbe0(param_1);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x5e8) != 0)) {
        cVar2 = FUN_142ebe1f0(*(longlong *)(lVar3 + 0x5e8),param_1);
        if (cVar2 != '\0') {
          AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xdf));
          FUN_140ff1150(param_1,param_1 + 0xd5);
          ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xdf));
        }
      }
      cVar2 = FUN_142ebe180(param_1);
      if (cVar2 == '\0') {
        (**(code **)(*param_1 + 0x578))(param_1,1);
      }
    }
  }
  return;
}



// FUNCTION 140ffeca0 FUN_140ffeca0 body=174 status=ok
// SIG undefined FUN_140ffeca0(void)

void FUN_140ffeca0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 local_res8;
  
  if ((*(longlong *)(param_1 + 0x550) != 0) && (lVar3 = FUN_140eccbe0(), lVar3 != 0)) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInputDeviceChanged",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_14074ba20(lVar3 + 0x5f8,param_1,&LAB_140fefd70,local_res8);
  }
  FUN_140ef2e20(param_1);
  return;
}



// FUNCTION 140ffed70 FUN_140ffed70 body=56 status=ok
// SIG undefined FUN_140ffed70(void)

void FUN_140ffed70(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_142ebd920();
  if (cVar1 != '\0') {
    cVar1 = FUN_142ebe180(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140ffed9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x580))(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 140ffedb0 FUN_140ffedb0 body=975 status=ok
// SIG undefined FUN_140ffedb0(void)

void FUN_140ffedb0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec5080();
  local_10 = 9;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"typeIcon",0x12);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x310) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"labelHighlight",0x1e);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 800) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"labelDescription",0x22);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x328) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"labelDescriptionHighlight",0x34);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x330) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"eridiumCellCounter",0x26);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x338) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"newIcon",0x10);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x318) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fff180 FUN_140fff180 body=4519 status=ok
// SIG undefined FUN_140fff180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fff180(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong **pplVar13;
  undefined1 auStack_358 [32];
  longlong **local_338;
  longlong local_328;
  longlong *local_320;
  longlong *local_318;
  undefined8 local_310;
  longlong local_308;
  undefined8 local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  longlong *local_2a0;
  undefined2 *local_298;
  int local_290;
  longlong local_288 [2];
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong *local_268 [2];
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238 [8];
  longlong *local_230;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  FUN_142ec45d0();
  local_300 = 0x1e;
  local_308 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_308,0);
  FGenericPlatformString::Memcpy(local_308,L"missionTrackerInitalizationMC",0x3c);
  local_338 = &local_318;
  local_318 = (longlong *)0x0;
  local_310 = 0;
  local_258 = 0;
  lVar4 = FUN_140e96f30(param_1,&local_308,0,6);
  param_1[0xbe] = lVar4;
  plVar6 = local_318;
  for (iVar10 = (int)local_310; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_318 != (longlong *)0x0) {
    FMemory::Free(local_318);
  }
  if (local_308 != 0) {
    FMemory::Free();
  }
  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,local_238,L"missionName");
  FUN_142ede260(param_1 + 0xd5,uVar5);
  if (local_230 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_230 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_230)(local_230);
      LOCK();
      piVar1 = (int *)((longlong)local_230 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_230 + 8))(local_230,1);
      }
    }
  }
  local_2e8 = 0;
  local_2e0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,0);
  FGenericPlatformString::Memcpy(local_2e8,L"taskContainer",0x1c);
  local_338 = &local_2f8;
  local_2f8 = (longlong *)0x0;
  local_2f0 = 0;
  local_250 = 0;
  lVar4 = FUN_140e96f30(param_1,&local_2e8,0,6);
  param_1[0xd4] = lVar4;
  plVar6 = local_2f8;
  for (iVar10 = (int)local_2f0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_2f8 != (longlong *)0x0) {
    FMemory::Free(local_2f8);
  }
  if (local_2e8 != 0) {
    FMemory::Free();
  }
  local_2c8 = 0;
  local_2c0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
  FGenericPlatformString::Memcpy(local_2c8,L"missionTrackerTop",0x24);
  local_338 = &local_2d8;
  local_2d8 = (longlong *)0x0;
  local_2d0 = 0;
  local_248 = 0;
  lVar4 = FUN_140e96f30(param_1,&local_2c8,0,6);
  param_1[0xe5] = lVar4;
  plVar6 = local_2d8;
  for (iVar10 = (int)local_2d0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_2d8 != (longlong *)0x0) {
    FMemory::Free(local_2d8);
  }
  if (local_2c8 != 0) {
    FMemory::Free();
  }
  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,local_228,L"missionComplete");
  FUN_142ede260(param_1 + 0xd8,uVar5);
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_220 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar1 = (int *)((longlong)local_220 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_220 + 8))(local_220,1);
      }
    }
  }
  if ((param_1[0xd9] != 0) && (param_1[0xda] != 0)) {
    piVar1 = (int *)(param_1[0xda] + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (0 < iVar10) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_128,L"COMPLETED",L"MissionTrackerHUDWidget",L"MissionCompleteText");
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xd8,uVar5,1,0);
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_120 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar1 = (int *)((longlong)local_120 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
          }
        }
      }
      FUN_142f10d20(param_1 + 0xd8,0);
    }
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x4a8))(param_1,local_218,L"MissionFailedMC");
  param_1[0xdb] = *plVar6;
  plVar6 = (longlong *)plVar6[1];
  plVar8 = (longlong *)param_1[0xdc];
  if (plVar6 != plVar8) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar8 = (longlong *)param_1[0xdc];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar10 == 1) && (plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    param_1[0xdc] = (longlong)plVar6;
  }
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_210 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar1 = (int *)((longlong)local_210 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_210 + 8))(local_210,1);
      }
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,local_208,L"missionFailed");
  FUN_142ede260(param_1 + 0xdd,uVar5);
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_200 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar1 = (int *)((longlong)local_200 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_200 + 8))(local_200,1);
      }
    }
  }
  if ((param_1[0xde] != 0) && (param_1[0xdf] != 0)) {
    piVar1 = (int *)(param_1[0xdf] + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (0 < iVar10) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_110,L"MISSION FAILED",L"MissionTrackerHUDWidget",L"MissionFailedText"
                        );
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xdd,uVar5,1,0);
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_108 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar1 = (int *)((longlong)local_108 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_108 + 8))(local_108,1);
          }
        }
      }
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,local_1f8,L"missionFailedRestart");
  FUN_142ede260(param_1 + 0xe0,uVar5);
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1f0 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar1 = (int *)((longlong)local_1f0 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_1f0 + 8))(local_1f0,1);
      }
    }
  }
  if ((param_1[0xe1] != 0) && (param_1[0xe2] != 0)) {
    piVar1 = (int *)(param_1[0xe2] + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (0 < iVar10) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xe0,param_1 + 0xc9,1,0);
      FUN_142f10d20(param_1 + 0xe0,0);
    }
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x4a8))(param_1,local_1e8,L"RewardsSystem");
  param_1[0xe6] = *plVar6;
  plVar6 = (longlong *)plVar6[1];
  plVar8 = (longlong *)param_1[0xe7];
  if (plVar6 != plVar8) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar8 = (longlong *)param_1[0xe7];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar10 == 1) && (plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    param_1[0xe7] = (longlong)plVar6;
  }
  if (local_1e0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1e0 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_1e0)(local_1e0);
      LOCK();
      piVar1 = (int *)((longlong)local_1e0 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_1e0 + 8))(local_1e0,1);
      }
    }
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x4a8))(param_1,local_1d8,L"rewardsTop");
  param_1[0xe8] = *plVar6;
  plVar6 = (longlong *)plVar6[1];
  plVar8 = (longlong *)param_1[0xe9];
  if (plVar6 != plVar8) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar8 = (longlong *)param_1[0xe9];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar10 == 1) && (plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    param_1[0xe9] = (longlong)plVar6;
  }
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1d0 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar1 = (int *)((longlong)local_1d0 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_1d0 + 8))(local_1d0,1);
      }
    }
  }
  while( true ) {
    FString::PrintfImpl(&local_298,L"rewardSlot%i",(int)param_1[0xf9] + 1);
    puVar9 = &DAT_143f3eda8;
    if (local_290 != 0) {
      puVar9 = local_298;
    }
    (**(code **)(*param_1 + 0x4a8))(param_1,&local_328,puVar9);
    if (local_298 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_328 == 0) break;
    plVar6 = param_1 + 0xf8;
    iVar10 = (int)param_1[0xf9];
    *(int *)(param_1 + 0xf9) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0x7cc) < iVar10 + 1) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                (plVar6,iVar10);
    }
    plVar8 = local_320;
    lVar4 = *plVar6;
    lVar12 = (longlong)iVar10 * 0x80;
    *(undefined8 *)(lVar12 + lVar4) = 0;
    *(undefined8 *)(lVar12 + 8 + lVar4) = 0;
    *(undefined8 *)(lVar12 + 0x10 + lVar4) = 0;
    *(undefined8 *)(lVar12 + 0x18 + lVar4) = 0;
    *(undefined8 *)(lVar12 + 0x28 + lVar4) = 0;
    *(undefined8 *)(lVar12 + 0x30 + lVar4) = 0;
    *(undefined8 *)(lVar12 + 0x40 + lVar4) = 0;
    *(undefined8 *)(lVar12 + 0x48 + lVar4) = 0;
    *(undefined8 *)(lVar12 + 0x58 + lVar4) = 0;
    *(undefined4 *)(lVar12 + 0x20 + lVar4) = 0;
    *(undefined8 *)(lVar12 + 0x60 + lVar4) = 0;
    *(undefined4 *)(lVar12 + 0x38 + lVar4) = 0;
    *(undefined8 *)(lVar12 + 0x70 + lVar4) = 0;
    *(undefined4 *)(lVar12 + 0x50 + lVar4) = 0;
    *(undefined8 *)(lVar12 + 0x78 + lVar4) = 0;
    *(undefined4 *)(lVar12 + 0x68 + lVar4) = 0;
    lVar4 = *plVar6;
    *(longlong *)(lVar12 + lVar4) = local_328;
    plVar6 = *(longlong **)(lVar12 + 8 + lVar4);
    if (local_320 != plVar6) {
      if (local_320 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_320 + 0xc) = *(int *)((longlong)local_320 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(lVar12 + 8 + lVar4);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar10 == 1) && (plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(longlong **)(lVar12 + 8 + lVar4) = plVar8;
    }
    puVar7 = (undefined8 *)FUN_1420392d0(local_328,local_1c8,L"rewardItemType.itemIcons");
    *(undefined8 *)(lVar12 + 0x10 + lVar4) = *puVar7;
    plVar6 = (longlong *)puVar7[1];
    plVar8 = *(longlong **)(lVar12 + 0x18 + lVar4);
    if (plVar6 != plVar8) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(lVar12 + 0x18 + lVar4);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar10 == 1) && (plVar8 != (longlong *)0x0)) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      *(longlong **)(lVar12 + 0x18 + lVar4) = plVar6;
    }
    plVar6 = local_1c0;
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1c0 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    uVar5 = FUN_1420392d0(local_328,local_1b8,L"scoreText");
    FUN_142ede260(lVar4 + 0x20 + lVar12,uVar5);
    plVar6 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1b0 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    uVar5 = FUN_1420392d0(local_328,local_1a8,L"itemScore");
    FUN_142ede260(lVar4 + 0x38 + lVar12,uVar5);
    plVar6 = local_1a0;
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1a0 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    uVar5 = FUN_1420392d0(local_328,local_198,L"currencyAmount");
    FUN_142ede260(lVar4 + 0x50 + lVar12,uVar5);
    plVar6 = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_190 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    uVar5 = FUN_1420392d0(local_328,local_188,L"rarityLabel");
    FUN_142ede260(lVar4 + 0x68 + lVar12,uVar5);
    plVar6 = local_180;
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_180 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    plVar6 = local_320;
    if (local_320 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_320 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_320)(local_320);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  if (local_320 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_320 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_320)(local_320);
      LOCK();
      piVar1 = (int *)((longlong)local_320 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_320 + 8))(local_320,1);
      }
    }
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x4a8))(param_1,local_178,L"rewardsTopBG");
  param_1[0xea] = *plVar6;
  plVar6 = (longlong *)plVar6[1];
  plVar8 = (longlong *)param_1[0xeb];
  if (plVar6 != plVar8) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar8 = (longlong *)param_1[0xeb];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar10 == 1) && (plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    param_1[0xeb] = (longlong)plVar6;
  }
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_170 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar1 = (int *)((longlong)local_170 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,local_168,L"bonusText");
  FUN_142ede260(param_1 + 0xec,uVar5);
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_160 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)local_160 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,local_158,L"rewardsText");
  FUN_142ede260(param_1 + 0xef,uVar5);
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_150 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)local_150 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,local_148,L"rewardMissionName");
  FUN_142ede260(param_1 + 0xf2,uVar5);
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_140 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,local_138,L"rewardMissionComplete");
  FUN_142ede260(param_1 + 0xf5,uVar5);
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_130 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)local_130 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  if ((param_1[0xf6] != 0) && (param_1[0xf7] != 0)) {
    piVar1 = (int *)(param_1[0xf7] + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (0 < iVar10) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_f8,L"COMPLETED",L"MissionTrackerHUDWidget",L"MissionCompleteText");
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xf5,uVar5,1,0);
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_f0 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)local_f0 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
    }
  }
  if (param_1[0xd4] != 0) {
    iVar10 = 1;
    local_240 = 0;
    do {
      FString::PrintfImpl(local_288,PTR_u_taskLine_d_14629f0a0,iVar10);
      local_338 = &local_2b8;
      local_2b8 = (longlong *)0x0;
      local_2b0 = 0;
      lVar4 = FUN_140fe33c0(param_1[0xd4],local_288,0,6);
      plVar6 = local_2b8;
      for (iVar11 = (int)local_2b0; iVar11 != 0; iVar11 = iVar11 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      }
      if (local_2b8 != (longlong *)0x0) {
        FMemory::Free(local_2b8);
      }
      if (lVar4 != 0) {
        FString::operator=(lVar4 + 0x180,local_288);
        *(longlong **)(lVar4 + 0x178) = param_1;
        *(int *)(lVar4 + 0x170) = (int)param_1[0xe4];
        iVar11 = (int)param_1[0xe4];
        *(int *)(param_1 + 0xe4) = iVar11 + 1;
        if (*(int *)((longlong)param_1 + 0x724) < iVar11 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe3,iVar11);
        }
        *(longlong *)(param_1[0xe3] + (longlong)iVar11 * 8) = lVar4;
      }
      if (local_288[0] != 0) {
        FMemory::Free();
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 7);
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = param_1;
    *puVar7 = &PTR_FUN_143f77b70;
  }
  local_d8[0] = &LAB_140ff1bd0;
  uVar5 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c260(param_1,uVar5);
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
  lVar4 = FWeakObjectPtr::Get(param_1 + 0xbb);
  if (lVar4 != 0) {
    lVar12 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
        != lVar12 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uStack_270 = 0;
      local_278 = FUN_140ff0c60;
      pplVar13 = (longlong **)(lVar4 + 0xb88);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      local_268[0] = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_14465fa00;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_278;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_278._4_4_;
        *(undefined4 *)(plVar6 + 3) = uStack_270;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_26c;
        lVar12 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar12;
        *plVar6 = (longlong)&PTR_FUN_14465fa48;
      }
      if (local_268 != pplVar13) {
        if (plVar6 == (longlong *)0x0) {
          if ((*(int *)(lVar4 + 0xb90) != 0) && (plVar6 = *pplVar13, plVar6 != (longlong *)0x0)) {
            (**(code **)(*plVar6 + 0x28))(plVar6,0);
            if (*pplVar13 != (longlong *)0x0) {
              plVar6 = (longlong *)FMemory::Realloc(*pplVar13,0,0);
              *pplVar13 = plVar6;
            }
            *(undefined4 *)(lVar4 + 0xb90) = 0;
          }
          goto LAB_141000266;
        }
        (**(code **)(*plVar6 + 0x30))(plVar6,pplVar13);
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        local_268[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
        if (local_268[0] != (longlong *)0x0) {
          FMemory::Free(local_268[0]);
        }
      }
    }
  }
LAB_141000266:
  FUN_140ad4c90(param_1,&local_2a8);
  if (local_2a8 != 0) {
    FUN_142056520(local_2a8,0);
  }
  plVar6 = local_2a0;
  if (local_2a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2a0 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_2a0)(local_2a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_2a0 + 8))(local_2a0,1);
      }
    }
  }
  return;
}



// FUNCTION 141000330 FUN_141000330 body=758 status=ok
// SIG undefined FUN_141000330(void)

void FUN_141000330(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ef9e70();
  FUN_142088ee0(param_1,1);
  FUN_14208d370(param_1,param_1 + 600,PTR_u_missionTaskLine_14629f168);
  plVar2 = *(longlong **)(param_1 + 0x260);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        if (plVar2 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 600) != 0) {
            uVar5 = FUN_1420392d0(*(longlong *)(param_1 + 600),local_48,
                                  PTR_u_missionTaskText_14629f170);
            FUN_142ede260(param_1 + 0x268,uVar5);
            if (local_40 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_40 + 1;
              lVar3 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*local_40)(local_40);
                LOCK();
                piVar1 = (int *)((longlong)local_40 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*local_40 + 8))(local_40,1);
                }
              }
            }
          }
          LOCK();
          plVar7 = plVar2 + 1;
          lVar3 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  puVar6 = (undefined8 *)FUN_142085870(param_1,local_38,L"emptyCheck");
  *(undefined8 *)(param_1 + 0x280) = *puVar6;
  plVar2 = (longlong *)puVar6[1];
  plVar7 = *(longlong **)(param_1 + 0x288);
  if (plVar2 != plVar7) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x288);
    }
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
    *(longlong **)(param_1 + 0x288) = plVar2;
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  puVar6 = (undefined8 *)FUN_142085870(param_1,local_28,L"checkedBox");
  *(undefined8 *)(param_1 + 0x290) = *puVar6;
  plVar2 = (longlong *)puVar6[1];
  plVar7 = *(longlong **)(param_1 + 0x298);
  if (plVar2 != plVar7) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x298);
    }
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
    *(longlong **)(param_1 + 0x298) = plVar2;
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
  puVar6 = (undefined8 *)FUN_142085870(param_1,local_18,L"thwartedBox");
  *(undefined8 *)(param_1 + 0x2a0) = *puVar6;
  plVar2 = (longlong *)puVar6[1];
  plVar7 = *(longlong **)(param_1 + 0x2a8);
  if (plVar2 != plVar7) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x2a8);
    }
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
    *(longlong **)(param_1 + 0x2a8) = plVar2;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 141000630 FUN_141000630 body=2307 status=ok
// SIG undefined FUN_141000630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141000630(longlong param_1)

{
  longlong **pplVar1;
  int iVar2;
  longlong *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_108 [32];
  longlong **local_e8;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8 [3];
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_98 = param_1;
  FUN_142ef9e70();
  local_d0 = 0xe;
  local_d8 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"nameplateBars",0x1c);
  local_e8 = local_b8 + 2;
  local_b8[2] = (longlong *)0x0;
  local_a0 = 0;
  uVar5 = FUN_140ecbdf0(param_1,&local_d8,0,6);
  *(undefined8 *)(param_1 + 0x1a8) = uVar5;
  plVar9 = local_b8[2];
  for (iVar7 = (int)local_a0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_b8[2] != (longlong *)0x0) {
    FMemory::Free(local_b8[2]);
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    local_c8 = (longlong *)0x0;
    local_c0 = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Memcpy(local_c8,L"overLevelIconPlacement",0x2e);
    local_e8 = &local_d8;
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    uVar5 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x1a8),&local_c8,0,6);
    *(undefined8 *)(param_1 + 400) = uVar5;
    plVar9 = local_d8;
    for (iVar7 = (int)local_d0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_d8 = (longlong *)0x0;
    local_d0 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"overLevelIcon",0x1c);
    local_e8 = &local_c8;
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    uVar5 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x1a8),&local_d8,0,6);
    *(undefined8 *)(param_1 + 0x198) = uVar5;
    plVar9 = local_c8;
    for (iVar7 = (int)local_c0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_c8 = (longlong *)0x0;
    local_c0 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Memcpy(local_c8,L"currentValueLabel",0x24);
    local_b8[0] = (longlong *)0x0;
    local_b8[1] = (longlong *)0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
    FGenericPlatformString::Memcpy(local_b8[0],L"maxValueLabel",0x1c);
    lVar10 = 2;
    local_b8[2] = (longlong *)0x0;
    local_a0 = CONCAT44(local_a0._4_4_,2);
    TArray<FString,FDefaultAllocator>::ResizeForCopy(local_b8 + 2,2,0);
    pplVar8 = &local_c8;
    iVar7 = 2;
    plVar9 = local_b8[2];
    do {
      *plVar9 = 0;
      iVar2 = *(int *)(pplVar8 + 1);
      _Src = *pplVar8;
      *(int *)(plVar9 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((longlong)plVar9 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar9,iVar2,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar9,_Src,(longlong)iVar2 * 2);
      }
      plVar9 = plVar9 + 2;
      pplVar8 = pplVar8 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pplVar8 = local_b8 + 2;
    do {
      pplVar1 = pplVar8 + -2;
      pplVar8 = pplVar8 + -2;
      lVar10 = lVar10 + -1;
      if (*pplVar1 != (longlong *)0x0) {
        FMemory::Free();
      }
      param_1 = local_98;
    } while (lVar10 != 0);
    puVar6 = (undefined8 *)FUN_142086610(local_98,&local_c8);
    iVar7 = *(int *)(puVar6 + 1);
    if (iVar7 != 0) {
      if (local_a0._4_4_ < (int)local_a0 + iVar7) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(local_b8 + 2);
      }
      _guard_xfg_dispatch_icall_nop
                (local_b8[2] + (longlong)(int)local_a0 * 2,(void *)*puVar6,(longlong)iVar7 << 4);
      *(undefined4 *)(puVar6 + 1) = 0;
      local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 + iVar7);
    }
    plVar9 = local_c8;
    for (iVar7 = (int)local_c0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    local_c8 = (longlong *)0x0;
    local_c0 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Memcpy(local_c8,L"barHealth",0x14);
    uVar5 = UGameInstanceGameParameters::GetPrivateStaticClass();
    local_e8 = local_b8 + 2;
    uVar5 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x1a8),&local_c8,uVar5,2);
    *(undefined8 *)(param_1 + 0x1b0) = uVar5;
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_c8 = (longlong *)0x0;
    local_c0 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Memcpy(local_c8,L"barShield",0x14);
    uVar5 = UGameInstanceGameParameters::GetPrivateStaticClass();
    local_e8 = local_b8 + 2;
    uVar5 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x1a8),&local_c8,uVar5,2);
    *(undefined8 *)(param_1 + 0x1b8) = uVar5;
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_c8 = (longlong *)0x0;
    local_c0 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Memcpy(local_c8,L"barArmor",0x12);
    uVar5 = UGameInstanceGameParameters::GetPrivateStaticClass();
    local_e8 = local_b8 + 2;
    uVar5 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x1a8),&local_c8,uVar5,2);
    *(undefined8 *)(param_1 + 0x1c0) = uVar5;
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar9 = local_b8[2];
    for (iVar7 = (int)local_a0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_b8[2] != (longlong *)0x0) {
      FMemory::Free(local_b8[2]);
    }
  }
  local_d8 = (longlong *)0x0;
  local_d0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"nameplateText",0x1c);
  local_e8 = &local_c8;
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  uVar5 = FUN_140ecbdf0(param_1,&local_d8,0,6);
  *(undefined8 *)(param_1 + 0x1a0) = uVar5;
  plVar9 = local_c8;
  for (iVar7 = (int)local_c0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) == 0) {
    if (*(longlong *)(param_1 + 0x1a8) == 0) goto LAB_141000e65;
    local_d8 = (longlong *)0x0;
    local_d0 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"centerName",0x16);
    local_e8 = &local_c8;
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x1a8),&local_d8,0,6);
    *(undefined8 *)(param_1 + 0x1d0) = uVar5;
    plVar9 = local_c8;
    for (iVar7 = (int)local_c0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_d8 = (longlong *)0x0;
    local_d0 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"leftName",0x12);
    local_e8 = &local_c8;
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x1a8),&local_d8,0,6);
    *(undefined8 *)(param_1 + 0x1d8) = uVar5;
    plVar9 = local_c8;
    for (iVar7 = (int)local_c0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
  }
  else {
    local_d8 = (longlong *)0x0;
    local_d0 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"centerName",0x16);
    local_e8 = &local_c8;
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x1a0),&local_d8,0,6);
    *(undefined8 *)(param_1 + 0x1d0) = uVar5;
    plVar9 = local_c8;
    for (iVar7 = (int)local_c0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_d8 = (longlong *)0x0;
    local_d0 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"leftName",0x12);
    local_e8 = &local_c8;
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x1a0),&local_d8,0,6);
    *(undefined8 *)(param_1 + 0x1d8) = uVar5;
    plVar9 = local_c8;
    for (iVar7 = (int)local_c0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_141000e65:
  FUN_141012880(param_1);
  FUN_1410140d0(param_1);
  FWeakObjectPtr::operator=(&local_98,param_1);
  uVar3 = (undefined4)local_98;
  uVar4 = local_98._4_4_;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_78);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_1444f8920;
    puVar6[1] = param_1;
    *(undefined4 *)(puVar6 + 2) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar4;
  }
  local_88[0] = &LAB_140ff1d30;
  FUN_14208c300(param_1,local_88);
  if (local_48 != 0) {
    plVar9 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar9 = local_58;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141000f40 FUN_141000f40 body=255 status=ok
// SIG undefined FUN_141000f40(void)

void FUN_141000f40(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  
  FUN_140ef82a0();
  lVar3 = FUN_1420fc090(param_1);
  pwVar7 = (wchar_t *)0x0;
  pwVar5 = pwVar7;
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
      pwVar5 = (wchar_t *)FUN_140cff1b0(lVar3);
    }
  }
  if (((*(longlong *)(param_1 + 0x550) != 0) && (pwVar5 != (wchar_t *)0x0)) &&
     (*(char *)(param_1 + 0x5d9) != '\0')) {
    pwVar6 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxNewMissionNotificationWidget::OnInputDeviceChanged",L"::");
    while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar7 = pwVar2;
    }
    FName::FName(&local_res8,pwVar7 + 2,1);
    FUN_14074ba20(pwVar5 + 0x2fc,param_1,&LAB_140fefd70,local_res8);
    FUN_140ff0fa0(param_1);
  }
  return;
}



// FUNCTION 141001040 FUN_141001040 body=397 status=ok
// SIG undefined FUN_141001040(void)

void FUN_141001040(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ec45d0();
  puVar6 = &DAT_143f3eda8;
  if ((int)param_1[199] == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)param_1[0xc6];
  }
  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,local_38,puVar7);
  FUN_142ede260(param_1 + 0xdb,uVar5);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if ((param_1[0xdc] != 0) && (param_1[0xdd] != 0)) {
    piVar2 = (int *)(param_1[0xdd] + 8);
    LOCK();
    iVar4 = *piVar2;
    if (iVar4 == 0) {
      *piVar2 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xdb,param_1 + 0xcc,1,0);
    }
  }
  if ((int)param_1[0xc9] != 0) {
    puVar6 = (undefined2 *)param_1[200];
  }
  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,local_28,puVar6);
  FUN_142ede260(param_1 + 0xde,uVar5);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if ((param_1[0xdf] != 0) && (param_1[0xe0] != 0)) {
    piVar2 = (int *)(param_1[0xe0] + 8);
    LOCK();
    iVar4 = *piVar2;
    if (iVar4 == 0) {
      *piVar2 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xde,param_1 + 0xcf,1,0);
    }
  }
  return;
}



// FUNCTION 1410011d0 FUN_1410011d0 body=405 status=ok
// SIG undefined FUN_1410011d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410011d0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_142ec45d0();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x648));
  FUN_140ff3cf0(param_1 + 0x638,0);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x648));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x6a0));
  *(undefined4 *)(param_1 + 0x690) = 0x41200000;
  *(undefined8 *)(param_1 + 0x650) = 0;
  *(undefined4 *)(param_1 + 0x660) = 0;
  *(undefined1 *)(param_1 + 0x694) = 0;
  *(undefined8 *)(param_1 + 0x658) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x6a0));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x6f8));
  *(undefined8 *)(param_1 + 0x6a8) = 0;
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  *(undefined4 *)(param_1 + 0x6e8) = 0x41200000;
  *(undefined1 *)(param_1 + 0x6ec) = 0;
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x6f8));
  FWeakObjectPtr::operator=(&local_78,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_78;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_74;
  }
  local_68[0] = &LAB_140ff1d50;
  FUN_14208c260(param_1,local_68);
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
  return;
}



// FUNCTION 141001370 FUN_141001370 body=2344 status=ok
// SIG undefined FUN_141001370(void)

void FUN_141001370(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
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
  longlong local_78 [3];
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  FUN_140f73980();
  local_1d0 = 0x16;
  local_1d8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
  FGenericPlatformString::Memcpy(local_1d8,L"centeredNameContainer",0x2c);
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0;
  uVar3 = FUN_140ecbdf0(param_1,&local_1d8,0,6,&local_1e8);
  *(undefined8 *)(param_1 + 0x248) = uVar3;
  plVar5 = local_1e8;
  for (iVar4 = (int)local_1e0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_1e8 != (longlong *)0x0) {
    FMemory::Free(local_1e8);
  }
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x248) != 0) {
    local_1b8 = 0;
    local_1b0 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8,L"centeredName",0x1a);
    local_1c8 = (longlong *)0x0;
    local_1c0 = 0;
    uVar3 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x248),&local_1b8,0,6,&local_1c8);
    *(undefined8 *)(param_1 + 0x250) = uVar3;
    plVar5 = local_1c8;
    for (iVar4 = (int)local_1c0; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_1c8 != (longlong *)0x0) {
      FMemory::Free(local_1c8);
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x250) != 0) {
      uVar3 = FUN_142085870(*(longlong *)(param_1 + 0x250),local_60,L"centeredNameText");
      FUN_142ede260(param_1 + 600,uVar3);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_58 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
      local_198 = 0;
      local_190 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
      FGenericPlatformString::Memcpy(local_198,L"overheadArrow",0x1c);
      local_1a8 = (longlong *)0x0;
      local_1a0 = 0;
      uVar3 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x250),&local_198,0,6,&local_1a8);
      *(undefined8 *)(param_1 + 0x2b8) = uVar3;
      plVar5 = local_1a8;
      for (iVar4 = (int)local_1a0; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_1a8 != (longlong *)0x0) {
        FMemory::Free(local_1a8);
      }
      if (local_198 != 0) {
        FMemory::Free();
      }
      local_188 = 0;
      local_180 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
      FGenericPlatformString::Memcpy(local_188,L"show",10);
      FUN_142088910(*(undefined8 *)(param_1 + 0x250),&local_188);
      if (local_188 != 0) {
        FMemory::Free();
      }
    }
  }
  local_168 = 0;
  local_160 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
  FGenericPlatformString::Memcpy(local_168,L"stateContainer",0x1e);
  local_178 = (longlong *)0x0;
  local_170 = 0;
  uVar3 = FUN_140ecbdf0(param_1,&local_168,0,6,&local_178);
  *(undefined8 *)(param_1 + 0x270) = uVar3;
  plVar5 = local_178;
  for (iVar4 = (int)local_170; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free(local_178);
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    local_148 = 0;
    local_140 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    FGenericPlatformString::Memcpy(local_148,L"stateObject",0x18);
    local_158 = (longlong *)0x0;
    local_150 = 0;
    local_78[2] = 0;
    uVar3 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x270),&local_148,0,6,&local_158);
    *(undefined8 *)(param_1 + 0x278) = uVar3;
    plVar5 = local_158;
    for (iVar4 = (int)local_150; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free(local_158);
    }
    if (local_148 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x278) != 0) {
      uVar3 = FUN_142085870(*(longlong *)(param_1 + 0x278),local_50,L"stateName");
      FUN_142ede260(param_1 + 0x280,uVar3);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_48 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      local_128 = 0;
      local_120 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
      FGenericPlatformString::Memcpy(local_128,L"stateArrow",0x16);
      local_138 = (longlong *)0x0;
      local_130 = 0;
      uVar3 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x278),&local_128,0,6,&local_138);
      *(undefined8 *)(param_1 + 0x2a0) = uVar3;
      plVar5 = local_138;
      for (iVar4 = (int)local_130; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_138 != (longlong *)0x0) {
        FMemory::Free(local_138);
      }
      if (local_128 != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_1 + 0x2a0) != 0) {
        local_108 = 0;
        local_100 = 6;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
        FGenericPlatformString::Memcpy(local_108,L"arrow",0xc);
        local_118 = (longlong *)0x0;
        local_110 = 0;
        uVar3 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x2a0),&local_108,0,6,&local_118);
        *(undefined8 *)(param_1 + 0x2a8) = uVar3;
        plVar5 = local_118;
        for (iVar4 = (int)local_110; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 2;
        }
        if (local_118 != (longlong *)0x0) {
          FMemory::Free(local_118);
        }
        if (local_108 != 0) {
          FMemory::Free();
        }
      }
      local_e8 = 0;
      local_e0 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      FGenericPlatformString::Memcpy(local_e8,L"stateIndicator",0x1e);
      local_f8 = (longlong *)0x0;
      local_f0 = 0;
      uVar3 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x278),&local_e8,0,6,&local_f8);
      *(undefined8 *)(param_1 + 0x298) = uVar3;
      plVar5 = local_f8;
      for (iVar4 = (int)local_f0; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_f8 != (longlong *)0x0) {
        FMemory::Free(local_f8);
      }
      if (local_e8 != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_1 + 0x298) != 0) {
        local_c8 = 0;
        local_c0 = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
        FGenericPlatformString::Memcpy(local_c8,L"waypointIcon",0x1a);
        local_d8 = (longlong *)0x0;
        local_d0 = 0;
        uVar3 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x298),&local_c8,0,6,&local_d8);
        *(undefined8 *)(param_1 + 0x2b0) = uVar3;
        plVar5 = local_d8;
        for (iVar4 = (int)local_d0; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 2;
        }
        if (local_d8 != (longlong *)0x0) {
          FMemory::Free(local_d8);
        }
        if (local_c8 != 0) {
          FMemory::Free();
        }
        plVar5 = *(longlong **)(param_1 + 0x2b0);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined1 *)(param_1 + 0x341));
        }
        local_a8 = 0;
        local_a0 = 0x18;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        FGenericPlatformString::Memcpy(local_a8,L"dyingIcon.dyingIconAnim",0x30);
        local_b8 = (longlong *)0x0;
        local_b0 = 0;
        uVar3 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x298),&local_a8,0,6,&local_b8);
        *(undefined8 *)(param_1 + 0x2c8) = uVar3;
        plVar5 = local_b8;
        for (iVar4 = (int)local_b0; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 2;
        }
        if (local_b8 != (longlong *)0x0) {
          FMemory::Free(local_b8);
        }
        if (local_a8 != 0) {
          FMemory::Free();
        }
        local_88 = 0;
        local_80 = 0x1a;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        FGenericPlatformString::Memcpy(local_88,L"reviveIcon.reviveIconAnim",0x34);
        local_98 = (longlong *)0x0;
        local_90 = 0;
        uVar3 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x298),&local_88,0,6,&local_98);
        *(undefined8 *)(param_1 + 0x2c0) = uVar3;
        plVar5 = local_98;
        for (iVar4 = (int)local_90; iVar4 != 0; iVar4 = iVar4 + -1) {
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
      }
    }
    local_78[0] = 0;
    local_78[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"show",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x270),local_78);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141001ca0 FUN_141001ca0 body=386 status=ok
// SIG undefined FUN_141001ca0(void)

void FUN_141001ca0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ec45d0();
  local_20 = 0xd;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"textChatFeed",0x1a);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140ecf270(param_1,param_1 + 0x6c0,&local_28,0,6,&local_38);
  plVar2 = local_38;
  for (iVar1 = (int)local_30; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"textChatLog",0x18);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x6c0),param_1 + 0x6c8,&local_38,0,6,&local_28);
    plVar2 = local_28;
    for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141001e30 FUN_141001e30 body=108 status=ok
// SIG undefined FUN_141001e30(void)

void FUN_141001e30(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142ef9e70();
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    lVar2 = UGSquadMemberWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141001e83;
  }
  lVar3 = 0;
LAB_141001e83:
  FWeakObjectPtr::operator=(param_1 + 0x1b0,lVar3);
  return;
}



// FUNCTION 141001ea0 FUN_141001ea0 body=401 status=ok
// SIG undefined FUN_141001ea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141001ea0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
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
  FUN_142ec45d0();
  plVar1 = (longlong *)FUN_140eccca0(param_1);
  uVar2 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar2 = AGFireballProjectile::GetPrivateStaticClass();
    uVar2 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
  }
  FWeakObjectPtr::operator=(param_1 + 0x668,uVar2);
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x650));
  *(undefined4 *)(param_1 + 0x648) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x64c)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x640,0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x650));
  FUN_140ff99a0(param_1);
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_1;
    *puVar3 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ff1b60;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar1 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar1 = local_38;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar1 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar1 = local_88;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141002040 FUN_141002040 body=1992 status=ok
// SIG undefined FUN_141002040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141002040(longlong param_1)

{
  undefined1 **ppuVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 **ppuVar14;
  undefined1 auStack_268 [32];
  longlong **local_248;
  longlong *local_238;
  int local_230;
  longlong *local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  void *local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 *local_e8 [4];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  FUN_142ec45d0();
  local_210 = 0x11;
  local_218 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
  FGenericPlatformString::Memcpy(local_218,L"petCommandWidget",0x22);
  local_248 = &local_228;
  local_228 = (longlong *)0x0;
  local_220 = 0;
  local_158 = 0;
  uVar7 = FUN_140e96f30(param_1,&local_218,0,6);
  *(undefined8 *)(param_1 + 0x630) = uVar7;
  plVar13 = local_228;
  for (iVar12 = (int)local_220; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_228 != (longlong *)0x0) {
    FMemory::Free(local_228);
  }
  if (local_218 != 0) {
    FMemory::Free();
  }
  FUN_1410172a0(param_1,0);
  local_1f8 = 0;
  local_1f0 = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
  FGenericPlatformString::Memcpy(local_1f8,L"commandHintWrapper.commandHint",0x3e);
  local_248 = &local_208;
  local_208 = (longlong *)0x0;
  local_200 = 0;
  local_150 = 0;
  uVar7 = FUN_140f139f0(param_1,&local_1f8,0,6);
  *(undefined8 *)(param_1 + 0x638) = uVar7;
  plVar13 = local_208;
  for (iVar12 = (int)local_200; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_208 != (longlong *)0x0) {
    FMemory::Free(local_208);
  }
  if (local_1f8 != 0) {
    FMemory::Free();
  }
  FUN_141003d90(param_1);
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x5c8);
  if (lVar8 != 0) {
    lVar9 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&UGFxPetCommandWidget::OnInputDeviceChanged",L"::");
      pwVar6 = (wchar_t *)0x0;
      while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar6 = pwVar5;
      }
      FName::FName(&local_160,pwVar6 + 2,1);
      FUN_14074ba20(lVar8 + 0x5f8,param_1,FUN_141003d90,local_160);
    }
  }
  local_1d8 = 0;
  local_1d0 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
  FGenericPlatformString::Memcpy(local_1d8,L"petIconContainer",0x22);
  local_248 = &local_1e8;
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0;
  local_148 = 0;
  uVar7 = FUN_140e96f30(param_1,&local_1d8,0,6);
  *(undefined8 *)(param_1 + 0x640) = uVar7;
  plVar13 = local_1e8;
  for (iVar12 = (int)local_1e0; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_1e8 != (longlong *)0x0) {
    FMemory::Free(local_1e8);
  }
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  local_1b8 = 0;
  local_1b0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
  FGenericPlatformString::Memcpy(local_1b8,L"cantUseFlourish",0x20);
  local_248 = &local_1c8;
  local_1c8 = (longlong *)0x0;
  local_1c0 = 0;
  local_140 = 0;
  uVar7 = FUN_140e96f30(param_1,&local_1b8,0,6);
  *(undefined8 *)(param_1 + 0x648) = uVar7;
  plVar13 = local_1c8;
  for (iVar12 = (int)local_1c0; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_1c8 != (longlong *)0x0) {
    FMemory::Free(local_1c8);
  }
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  local_118 = 0;
  local_110 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"delta",0xc);
  local_108 = 0;
  local_100 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Memcpy(local_108,L"backgroundBar",0x1c);
  local_f8 = 0;
  local_f0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  FGenericPlatformString::Memcpy(local_f8,L"currentValueLabel",0x24);
  local_e8[0] = (undefined1 *)0x0;
  local_e8[1] = (undefined1 *)0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"maxValueLabel",0x1c);
  lVar8 = 4;
  local_238 = (longlong *)0x0;
  local_230 = 4;
  TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_238,4,0);
  puVar11 = &local_118;
  iVar12 = 4;
  plVar13 = local_238;
  do {
    *plVar13 = 0;
    iVar3 = *(int *)(puVar11 + 1);
    local_178 = (void *)*puVar11;
    *(int *)(plVar13 + 1) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)((longlong)plVar13 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar13,iVar3,0);
      _guard_xfg_dispatch_icall_nop((void *)*plVar13,local_178,(longlong)iVar3 * 2);
    }
    plVar13 = plVar13 + 2;
    puVar11 = puVar11 + 2;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  ppuVar14 = local_e8 + 2;
  do {
    ppuVar1 = ppuVar14 + -2;
    ppuVar14 = ppuVar14 + -2;
    lVar8 = lVar8 + -1;
    if (*ppuVar1 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  } while (lVar8 != 0);
  local_1a8 = 0;
  local_1a0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
  FGenericPlatformString::Memcpy(local_1a8,L"statusBar",0x14);
  local_178 = (void *)UGameInstanceGameParameters::GetPrivateStaticClass();
  local_248 = &local_238;
  uVar7 = FUN_140ecc190(param_1,&local_1a8,local_178,6);
  *(undefined8 *)(param_1 + 0x650) = uVar7;
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x650) != 0) {
    FUN_142f0ead0(*(longlong *)(param_1 + 0x650),0);
  }
  local_188 = 0;
  local_180 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
  FGenericPlatformString::Memcpy(local_188,L"countdownTimer",0x1e);
  local_248 = &local_198;
  local_198 = (longlong *)0x0;
  local_190 = 0;
  local_138 = 0;
  uVar7 = FUN_140ac4770(param_1,&local_188,0,6);
  *(undefined8 *)(param_1 + 0x658) = uVar7;
  plVar13 = local_198;
  for (iVar12 = (int)local_190; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_198 != (longlong *)0x0) {
    FMemory::Free(local_198);
  }
  if (local_188 != 0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0x658) != (longlong *)0x0) {
    local_170 = 0;
    local_168 = 0;
    lVar8 = **(longlong **)(param_1 + 0x658);
    uVar7 = FText::FromString(local_130,&local_170);
    (**(code **)(lVar8 + 0x2b0))(*(undefined8 *)(param_1 + 0x658),uVar7,1,0);
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_128 + 1;
      lVar8 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar2 = (int *)((longlong)local_128 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    if (local_170 != 0) {
      FMemory::Free();
    }
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[1] = param_1;
    *puVar11 = &PTR_FUN_143f77b70;
  }
  local_e8[2] = &LAB_140ff1c70;
  uVar7 = FUN_1420849a0(param_1,local_88,local_e8 + 2);
  FUN_14208c260(param_1,uVar7);
  if (local_48 != 0) {
    plVar13 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar13 = local_58;
    }
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x10))(plVar13,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar13 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar13 = local_a8;
    }
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x10))(plVar13,0);
    }
  }
  plVar13 = local_238;
  iVar12 = local_230;
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
    plVar13 = local_238;
    iVar12 = local_230;
  }
  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_238 != (longlong *)0x0) {
    FMemory::Free(local_238);
  }
  return;
}



// FUNCTION 141002810 FUN_141002810 body=59 status=ok
// SIG undefined FUN_141002810(void)

undefined8 FUN_141002810(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2a0 == *param_2)) &&
     (*(char *)(param_1 + 0x274) != '\0')) {
    FUN_142eb3990(param_1 + -0x4d8);
    return 1;
  }
  uVar1 = FUN_142ec6030();
  return uVar1;
}



// FUNCTION 141002850 FUN_141002850 body=213 status=ok
// SIG undefined FUN_141002850(void)

undefined8 FUN_141002850(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_146b3e2b8 == *param_2) {
      FUN_142eb3990(param_1 + -0x4d8);
      lVar1 = FUN_140e971d0(param_1 + -0x4d8);
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x1aa8) = 0;
      }
      return 1;
    }
    if ((DAT_1468737c8 == *param_2) || (DAT_146873628 == *param_2)) {
      uVar2 = 1;
    }
    else {
      if ((DAT_1468737d0 != *param_2) && (DAT_146873630 != *param_2)) goto LAB_1410028fe;
      uVar2 = 0;
    }
    FUN_141014350(param_1 + -0x4d8,uVar2);
    FUN_142ebe410(param_1 + -0x4d8);
    return 1;
  }
LAB_1410028fe:
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141002919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1d0) + 0x170) + 0x20))();
  return uVar2;
}



// FUNCTION 141002930 FUN_141002930 body=1277 status=ok
// SIG undefined FUN_141002930(void)

undefined8 FUN_141002930(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined4 local_60;
  undefined1 local_5c;
  ulonglong local_58;
  ulonglong local_50;
  longlong *local_48;
  undefined1 local_40;
  ulonglong local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  ulonglong local_20;
  longlong *local_18;
  undefined1 local_10;
  
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_1468736b0 == *param_2) {
      iVar2 = *(int *)(param_1 + 0x250);
      if (iVar2 < 2) {
        return 1;
      }
      plVar9 = *(longlong **)(param_1 + 0x248);
      if (plVar9 != plVar9 + iVar2) {
        plVar8 = plVar9;
        do {
          if (*plVar8 == *(longlong *)(param_1 + 600)) {
            iVar7 = (int)((longlong)plVar8 - (longlong)plVar9 >> 3);
            if ((-1 < iVar7) && (iVar7 < iVar2)) {
              if (iVar7 < iVar2 + -1) {
                lVar5 = plVar9[(longlong)iVar7 + 1];
              }
              else {
                lVar5 = *plVar9;
              }
              FUN_14101d2f0(param_1 + -0x4d8,lVar5);
            }
            break;
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar9 + iVar2);
      }
      local_d8 = 0;
      puVar10 = &local_d8;
      local_d0 = 0;
      lVar5 = *(longlong *)(param_1 + -0x4d8);
    }
    else {
      if (DAT_1468736b8 != *param_2) {
        if (((DAT_146873858 == *param_2) && (*(longlong *)(param_1 + 0x1f0) != 0)) &&
           (cVar4 = FUN_140e85d10(), cVar4 != '\0')) {
          (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x578))(param_1 + -0x4d8);
          uVar6 = *(undefined8 *)(param_1 + 0x1c0);
          puVar10 = &local_b8;
          local_b8 = 0;
          local_b0 = 0;
          lVar5 = *(longlong *)(param_1 + -0x4d8);
          goto LAB_141002a00;
        }
        goto LAB_141002b24;
      }
      iVar2 = *(int *)(param_1 + 0x250);
      if (iVar2 < 2) {
        return 1;
      }
      plVar9 = *(longlong **)(param_1 + 0x248);
      if (plVar9 != plVar9 + *(int *)(param_1 + 0x250)) {
        plVar8 = plVar9;
        do {
          if (*plVar8 == *(longlong *)(param_1 + 600)) {
            iVar7 = (int)((longlong)plVar8 - (longlong)plVar9 >> 3);
            if ((-1 < iVar7) && (iVar7 < iVar2)) {
              if (iVar7 < 1) {
                lVar5 = plVar9[(longlong)iVar2 + -1];
              }
              else {
                lVar5 = plVar9[(longlong)iVar7 + -1];
              }
              FUN_14101d2f0(param_1 + -0x4d8,lVar5);
            }
            break;
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar9 + *(int *)(param_1 + 0x250));
      }
      local_c8 = 0;
      puVar10 = &local_c8;
      local_c0 = 0;
      lVar5 = *(longlong *)(param_1 + -0x4d8);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x1b8);
    goto LAB_141002a00;
  }
LAB_141002b24:
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_146873868 == *param_2) {
      (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x568))(param_1 + -0x4d8);
      uVar6 = *(undefined8 *)(param_1 + 0x1c8);
      puVar10 = &local_a8;
      local_a8 = 0;
      local_a0 = 0;
      lVar5 = *(longlong *)(param_1 + -0x4d8);
LAB_141002a00:
      (**(code **)(lVar5 + 0x4e8))(param_1 + -0x4d8,uVar6,puVar10);
      return 1;
    }
    if (DAT_146873870 == *param_2) {
      (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x570))(param_1 + -0x4d8);
      uVar6 = *(undefined8 *)(param_1 + 0x1c8);
      puVar10 = &local_98;
      local_98 = 0;
      local_90 = 0;
      lVar5 = *(longlong *)(param_1 + -0x4d8);
      goto LAB_141002a00;
    }
    if (DAT_146873860 == *param_2) {
      (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x580))(param_1 + -0x4d8);
      uVar6 = *(undefined8 *)(param_1 + 0x1c0);
      puVar10 = &local_88;
      local_88 = 0;
      local_80 = 0;
      lVar5 = *(longlong *)(param_1 + -0x4d8);
      goto LAB_141002a00;
    }
    if (DAT_146873878 == *param_2) {
      (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x588))(param_1 + -0x4d8);
      uVar6 = *(undefined8 *)(param_1 + 0x1d0);
      puVar10 = &local_78;
      local_78 = 0;
      local_70 = 0;
      lVar5 = *(longlong *)(param_1 + -0x4d8);
      goto LAB_141002a00;
    }
  }
  uVar3 = *param_2;
  if (uVar3 == DAT_146873628) {
    return 1;
  }
  if (uVar3 == DAT_146873630) {
    return 1;
  }
  if (uVar3 == DAT_146873640) {
    return 1;
  }
  if (uVar3 == DAT_146873638) {
    return 1;
  }
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    cVar4 = FKey::IsGamepadKey(param_2 + 2);
    uVar3 = *param_2;
    if (uVar3 == DAT_146873648) {
      if (cVar4 == '\0') {
        return 1;
      }
      FUN_142ebe960(*(undefined8 *)(param_1 + 0x2b0));
      return 1;
    }
    if (uVar3 == DAT_146873650) {
      if (cVar4 == '\0') {
        return 1;
      }
      FUN_142ebe930(*(undefined8 *)(param_1 + 0x2b0));
      return 1;
    }
    if (uVar3 == DAT_146873660) {
      if (cVar4 == '\0') {
        return 1;
      }
      local_60 = (undefined4)param_2[1];
      local_5c = *(undefined1 *)((longlong)param_2 + 0xc);
      local_58 = param_2[2];
      local_50 = param_2[3];
      local_48 = (longlong *)param_2[4];
      if (local_48 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
      }
      local_40 = (undefined1)param_2[5];
      plVar9 = (longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x170);
      local_68 = DAT_146873640;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_68);
      plVar9 = local_48;
    }
    else {
      if (uVar3 != DAT_146873658) goto LAB_141002e1d;
      if (cVar4 == '\0') {
        return 1;
      }
      local_30 = (undefined4)param_2[1];
      local_2c = *(undefined1 *)((longlong)param_2 + 0xc);
      local_28 = param_2[2];
      local_20 = param_2[3];
      local_18 = (longlong *)param_2[4];
      if (local_18 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_18 + 1) = (int)local_18[1] + 1;
        UNLOCK();
      }
      local_10 = (undefined1)param_2[5];
      plVar9 = (longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x170);
      local_38 = DAT_146873638;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_38);
      plVar9 = local_18;
    }
    if (plVar9 == (longlong *)0x0) {
      return 1;
    }
    LOCK();
    plVar8 = plVar9 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return 1;
    }
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return 1;
    }
    (**(code **)(*plVar9 + 8))(plVar9,1);
    return 1;
  }
LAB_141002e1d:
  uVar6 = FUN_142ec6030(param_1,param_2);
  return uVar6;
}



// FUNCTION 141002e30 FUN_141002e30 body=294 status=ok
// SIG undefined FUN_141002e30(void)

ulonglong FUN_141002e30(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  bVar1 = 0;
  if (((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146873688 == *param_2)) &&
     (*(char *)(param_1 + 0x1f0) == '\0')) {
    bVar1 = 1;
    if (*(longlong *)(param_1 + 0x768) == 0) goto LAB_141002efb;
    uVar2 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>(local_18);
    FUN_142ed36d0(param_1 + -0x4d8,uVar2,0);
    plVar4 = *(longlong **)(param_1 + 0x768);
  }
  else {
    if (((*(char *)(param_1 + 0x7a0) == '\0') || (*(char *)((longlong)param_2 + 0xc) != '\0')) ||
       ((DAT_146873900 != *param_2 || (*(char *)(param_1 + 0x1f0) != '\0')))) goto LAB_141002efb;
    bVar1 = 1;
    if (*(longlong *)(param_1 + 0x780) == 0) goto LAB_141002efb;
    uVar2 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>(local_18);
    FUN_142ed36d0(param_1 + -0x4d8,uVar2,0);
    plVar4 = *(longlong **)(param_1 + 0x780);
  }
  bVar1 = 1;
  (**(code **)(*plVar4 + 0x300))(plVar4,param_2);
LAB_141002efb:
  if ((*(longlong *)(param_1 + 0x788) != 0) && (*(char *)(param_1 + 0x1f0) == '\x04')) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x788) + 0x170);
    bVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  }
  if (bVar1 == 0) {
    uVar3 = FUN_141002f60(param_1,param_2);
    return uVar3;
  }
  return (ulonglong)bVar1;
}



// FUNCTION 141002f60 FUN_141002f60 body=794 status=ok
// SIG undefined FUN_141002f60(void)

char FUN_141002f60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_res10 [8];
  longlong local_38 [2];
  
  cVar2 = '\0';
  uVar7 = 0;
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) {
    if (*(char *)(param_1 + 0x1f0) != '\0') {
      lVar1 = *(longlong *)(param_1 + -0x4d8);
      local_38[0] = 0;
      local_38[1] = 0;
      puVar3 = (undefined8 *)FName::FName(local_res10,L"Cancel",1);
      (**(code **)(lVar1 + 0x4e8))(param_1 + -0x4d8,*puVar3,local_38);
      if (*(char *)(param_1 + 0x1f0) != '\0') {
        if ((*(char *)(param_1 + 0x1f0) == '\x05') && (*(longlong *)(param_1 + 0x6a0) != 0)) {
          *(undefined8 *)(param_1 + 0x6a0) = 0;
          if (*(longlong *)(param_1 + 0x208) != 0) {
            local_38[0] = 0;
            local_38[1] = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
            FGenericPlatformString::Memcpy(local_38[0],L"list",10);
            FUN_142088cf0(*(undefined8 *)(param_1 + 0x208),local_38);
            if (local_38[0] != 0) {
              FMemory::Free();
            }
          }
          if (*(longlong *)(param_1 + 0x218) != 0) {
            plVar5 = (longlong *)(*(longlong *)(param_1 + 0x218) + 0x170);
            (**(code **)(*plVar5 + 0x38))(plVar5,1);
            plVar5 = *(longlong **)(param_1 + 0x680);
            uVar8 = (longlong)*(int *)(param_1 + 0x688) & 0x1fffffffffffffff;
            if (plVar5 + *(int *)(param_1 + 0x688) < plVar5) {
              uVar8 = uVar7;
            }
            if (uVar8 != 0) {
              do {
                if (*plVar5 != 0) {
                  plVar6 = (longlong *)(*plVar5 + 0x170);
                  (**(code **)(*plVar6 + 0x38))(plVar6,0);
                }
                plVar5 = plVar5 + 1;
                uVar7 = uVar7 + 1;
              } while (uVar7 != uVar8);
            }
            uVar4 = TScriptInterface<IBlendableInterface>::
                    TScriptInterface<IBlendableInterface><UMaterialInterface>
                              (local_38,*(undefined8 *)(param_1 + 0x218));
            FUN_142ed36d0(param_1 + -0x4d8,uVar4,0);
            plVar5 = *(longlong **)(param_1 + 0x698);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x278))(plVar5,0);
            }
            cVar2 = '\x01';
            goto LAB_14100316a;
          }
        }
        FUN_1411f7810(param_1 + 0x2c8,0);
        FUN_141013f30(param_1 + -0x4d8);
        (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x588))(param_1 + -0x4d8,0);
        cVar2 = '\x01';
        goto LAB_14100316a;
      }
    }
    cVar2 = FUN_142ec6030(param_1,param_2);
  }
LAB_14100316a:
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2a0 == *param_2)) {
    lVar1 = *(longlong *)(param_1 + -0x4d8);
    local_38[0] = 0;
    local_38[1] = 0;
    puVar3 = (undefined8 *)FName::FName(local_res10,L"Confirm",1);
    (**(code **)(lVar1 + 0x4e8))(param_1 + -0x4d8,*puVar3,local_38);
  }
  if (cVar2 == '\0') {
    if (((*(char *)((longlong)param_2 + 0xc) == '\0') &&
        (((DAT_146873628 == *param_2 || (DAT_146873630 == *param_2)) &&
         (*(char *)(param_1 + 0x1f0) == '\0')))) &&
       (((*(longlong *)(param_1 + 0x210) != 0 &&
         (cVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x210) + 0x170) + 0x40))(),
         cVar2 != '\0')) && (cVar2 = FUN_142ebdf20(*(undefined8 *)(param_1 + 0x210)), cVar2 == '\0')
        ))) {
      uVar4 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>
                        (local_38,*(undefined8 *)(param_1 + 0x210));
      FUN_142ed36d0(param_1 + -0x4d8,uVar4,0);
    }
    cVar2 = FUN_142ec6030(param_1,param_2);
    if (cVar2 == '\0') {
      return '\0';
    }
  }
  FUN_140eb0420(param_1 + 0x658,param_2);
  return cVar2;
}



// FUNCTION 141003280 FUN_141003280 body=2668 status=ok
// SIG undefined FUN_141003280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141003280(longlong param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_308 [32];
  char local_2e8;
  char local_2e7;
  longlong *local_2e0;
  longlong *local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  longlong local_290;
  undefined8 local_288;
  undefined4 *local_278;
  ulonglong *puStack_270;
  longlong local_268;
  undefined8 local_260;
  longlong local_258;
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  undefined1 local_240 [8];
  undefined1 local_238 [16];
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [16];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined4 local_c8 [4];
  undefined1 local_b8 [24];
  undefined1 local_a0;
  undefined4 local_98;
  undefined1 local_88 [24];
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_308;
  plVar11 = (longlong *)0x0;
  local_2e0 = (longlong *)((ulonglong)local_2e0 & 0xffffffff00000000);
  if (*(longlong *)(param_1 + 0x688) != 0) {
    plVar5 = (longlong *)FUN_142f71d80();
    plVar10 = *(longlong **)(param_1 + 0x688);
    for (plVar7 = plVar10; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[6]) {
      if (plVar7 == plVar5) {
        if (plVar10 != (longlong *)0x0) goto LAB_141003305;
        break;
      }
    }
  }
  plVar10 = plVar11;
  if (*(longlong *)(param_1 + 0x698) != 0) {
    puVar6 = (undefined8 *)FUN_142f5ed60(*(longlong *)(param_1 + 0x698),local_250);
    plVar10 = (longlong *)*puVar6;
  }
LAB_141003305:
  if (*(longlong *)(param_1 + 0x6b0) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x6b8) == 0) {
    return;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x6b8) + 8);
  LOCK();
  iVar4 = *piVar1;
  if (iVar4 == 0) {
    *piVar1 = 0;
    iVar4 = 0;
  }
  UNLOCK();
  if (iVar4 < 1) {
    return;
  }
  if (plVar10 == (longlong *)0x0) {
    return;
  }
  local_2e0 = plVar10;
  plVar7 = (longlong *)FUN_142f71d80();
  plVar10 = local_2e0;
  while( true ) {
    if (plVar10 == (longlong *)0x0) {
      return;
    }
    if (plVar10 == plVar7) break;
    plVar10 = (longlong *)plVar10[6];
  }
  if (*(longlong *)(param_1 + 0x698) == 0) {
    return;
  }
  local_290 = 0;
  local_288 = 0;
  FUN_142f5b8e0(*(longlong *)(param_1 + 0x698),&local_290,1);
  lVar14 = 3;
  FUN_142f5b8e0(*(undefined8 *)(param_1 + 0x698),&local_290,3);
  if (1 < (int)local_288) {
    lVar12 = param_1 + 0x5d8;
    cVar2 = FWeakObjectPtr::IsValid(lVar12);
    if ((cVar2 != '\0') && (lVar8 = FWeakObjectPtr::Get(lVar12), *(char *)(lVar8 + 0x128) == '\x03')
       ) {
      lVar8 = FWeakObjectPtr::Get(lVar12);
      plVar10 = plVar11;
      if (lVar8 != 0) {
        uVar9 = FUN_142f30760();
        plVar10 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar9);
      }
      lVar8 = FWeakObjectPtr::Get(lVar12);
      plVar7 = *(longlong **)(lVar8 + 0x5b8);
      if (plVar7 == (longlong *)0x0) {
LAB_14100347a:
        plVar7 = plVar11;
      }
      else {
        lVar8 = FUN_140681420();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar15 = false;
        }
        else {
          bVar15 = true;
        }
        if (!bVar15) goto LAB_14100347a;
      }
      if (plVar10 != (longlong *)0x0) {
        plVar11 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10);
      }
      local_2d8 = plVar11;
      plVar10 = (longlong *)FWeakObjectPtr::Get(lVar12);
      lVar8 = (**(code **)(*plVar10 + 0x690))(plVar10);
      local_2e7 = lVar8 != 0;
      plVar10 = (longlong *)FWeakObjectPtr::Get(lVar12);
      lVar8 = (**(code **)(*plVar10 + 0x690))(plVar10);
      local_2e8 = lVar8 != 0;
      uVar9 = FWeakObjectPtr::Get(lVar12);
      cVar3 = FUN_142dd3d20(uVar9);
      cVar2 = local_2e8;
      if ((plVar11 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
        uVar9 = FWeakObjectPtr::Get(lVar12);
        lVar8 = *plVar11;
        puVar6 = (undefined8 *)FName::FName(local_248,L"OakPC_TrackPreviousMission",1);
        lVar8 = (**(code **)(lVar8 + 0x280))(local_2d8,uVar9,*puVar6);
        if (lVar8 != 0) {
          local_2d0 = 0;
          local_2c8 = 0;
          cVar2 = (**(code **)(*plVar7 + 0x298))(plVar7,lVar8,&local_2d0);
          if (cVar2 != '\0') {
            lVar8 = local_2d0 + (longlong)(int)local_2c8 * 0x18;
            for (lVar13 = local_2d0; lVar13 != lVar8; lVar13 = lVar13 + 0x18) {
              cVar2 = FKey::IsGamepadKey(lVar13);
              if (cVar2 == cVar3) {
                local_2e7 = '\x01';
                break;
              }
            }
          }
          TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
          ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_2d0);
        }
        uVar9 = FWeakObjectPtr::Get(lVar12);
        plVar11 = local_2d8;
        lVar12 = *local_2d8;
        puVar6 = (undefined8 *)FName::FName(local_240,L"OakPC_TrackNextMission",1);
        lVar12 = (**(code **)(lVar12 + 0x280))(plVar11,uVar9,*puVar6);
        cVar2 = local_2e8;
        if (lVar12 != 0) {
          local_2c0 = 0;
          local_2b8 = 0;
          cVar2 = (**(code **)(*plVar7 + 0x298))(plVar7,lVar12,&local_2c0);
          if (cVar2 != '\0') {
            lVar12 = local_2c0 + (longlong)(int)local_2b8 * 0x18;
            for (lVar8 = local_2c0; lVar8 != lVar12; lVar8 = lVar8 + 0x18) {
              cVar2 = FKey::IsGamepadKey(lVar8);
              if (cVar2 == cVar3) {
                TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
                ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_2c0);
                cVar2 = '\x01';
                goto LAB_141003650;
              }
            }
          }
          cVar2 = local_2e8;
          TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
          ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_2c0);
        }
      }
LAB_141003650:
      uVar9 = FUN_142f5bb60(&local_2e0);
      FUN_142dea370(uVar9,local_1e0);
      bVar15 = local_2e7 == '\0';
      if (bVar15) {
        uVar9 = FUN_1404b03b0();
        uVar9 = FText::FText(local_1c8,uVar9);
      }
      else {
        local_2b0 = 0;
        local_2a8 = 0x25;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b0,0);
        FGenericPlatformString::Memcpy(local_2b0,L"{OakPC_TrackPreviousMission, 22, 22}",0x4a);
        uVar9 = FText::FromString(local_1b0,&local_2b0);
      }
      FText::FText(local_1f8,uVar9);
      if ((bVar15) && (local_1c0 != (longlong *)0x0)) {
        LOCK();
        plVar11 = local_1c0 + 1;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar1 = (int *)((longlong)local_1c0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1c0 + 8))(local_1c0,1);
          }
        }
      }
      if ((!bVar15) && (local_1a8 != (longlong *)0x0)) {
        LOCK();
        plVar11 = local_1a8 + 1;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
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
      if ((!bVar15) && (local_2b0 != 0)) {
        FMemory::Free();
      }
      bVar15 = cVar2 == '\0';
      if (bVar15) {
        uVar9 = FUN_1404b03b0();
        uVar9 = FText::FText(local_198,uVar9);
      }
      else {
        local_2a0 = 0;
        local_298 = 0x21;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a0,0);
        FGenericPlatformString::Memcpy(local_2a0,L"{OakPC_TrackNextMission, 22, 22}",0x42);
        uVar9 = FText::FromString(local_180,&local_2a0);
      }
      FText::FText(local_210,uVar9);
      if ((bVar15) && (local_190 != (longlong *)0x0)) {
        LOCK();
        plVar11 = local_190 + 1;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar1 = (int *)((longlong)local_190 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_190 + 8))(local_190,1);
          }
        }
      }
      if ((!bVar15) && (local_178 != (longlong *)0x0)) {
        LOCK();
        plVar11 = local_178 + 1;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar1 = (int *)((longlong)local_178 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_178 + 8))(local_178,1);
          }
        }
      }
      if ((!bVar15) && (local_2a0 != 0)) {
        FMemory::Free();
      }
      lVar12 = FText::FText(local_110,local_210);
      local_268 = lVar12;
      lVar8 = FText::FText(local_f8,local_1f8);
      local_2d8 = (longlong *)lVar8;
      lVar13 = FText::FText(local_e0,local_1e0);
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_150,L"{0}  {1} {2}",L"MissionTrackerHUDWidget",
                         L"MissionNameFormattingText");
      puVar6 = (undefined8 *)FTextFormat::FTextFormat(local_120,uVar9);
      local_c8[0] = 4;
      FText::FText(local_b8,lVar13);
      local_a0 = 1;
      local_98 = 4;
      FText::FText(local_88,lVar8);
      local_70 = 1;
      local_68 = 4;
      FText::FText(local_58,lVar12);
      local_278 = local_c8;
      local_40 = 1;
      puStack_270 = local_38;
      local_260 = *puVar6;
      local_258 = puVar6[1];
      if (local_258 != 0) {
        LOCK();
        *(int *)(local_258 + 8) = *(int *)(local_258 + 8) + 1;
        UNLOCK();
      }
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_238,&local_278);
      uVar9 = FText::Format(local_168,&local_260,uVar9);
      FText::FText(local_228,uVar9);
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_160 + 1;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar1 = (int *)((longlong)local_160 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_160 + 8))(local_160,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_238);
      plVar11 = (longlong *)&stack0xffffffffffffffe0;
      do {
        lVar14 = lVar14 + -1;
        if ((char)plVar11[-4] != '\0') {
          *(undefined1 *)(plVar11 + -4) = 0;
          plVar10 = (longlong *)plVar11[-6];
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar10 + 1;
            lVar12 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
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
        plVar11 = plVar11 + -6;
      } while (lVar14 != 0);
      plVar11 = (longlong *)puVar6[1];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar11 + 1;
        lVar14 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar11 = *(longlong **)(lVar13 + 8);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar11 + 1;
        lVar14 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar11 = *(longlong **)((longlong)local_2d8 + 8);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar11 + 1;
        lVar14 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar11 = *(longlong **)(local_268 + 8);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar11 + 1;
        lVar14 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x6a8,local_228,1);
      if (local_220 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_220 + 1;
        lVar14 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_220)(local_220);
          LOCK();
          piVar1 = (int *)((longlong)local_220 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_220 + 8))(local_220,1);
          }
        }
      }
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_148 + 1;
        lVar14 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar1 = (int *)((longlong)local_148 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_148 + 8))(local_148,1);
          }
        }
      }
      if (local_208 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_208 + 1;
        lVar14 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
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
      if (local_1f0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_1f0 + 1;
        lVar14 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_1f0)(local_1f0);
          LOCK();
          piVar1 = (int *)((longlong)local_1f0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1f0 + 8))(local_1f0,1);
          }
        }
      }
      goto joined_r0x000141003c3e;
    }
  }
  uVar9 = FUN_142f5bb60(&local_2e0);
  uVar9 = FUN_142dea370(uVar9,local_138);
  UMistDebugEntityScreen::InspectEntity(param_1 + 0x6a8,uVar9,1,0);
  local_1d8 = local_130;
joined_r0x000141003c3e:
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_1d8 + 1;
    lVar14 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar1 = (int *)((longlong)local_1d8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1d8 + 8))(local_1d8,1);
      }
    }
  }
  if (local_290 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141003cf0 FUN_141003cf0 body=148 status=ok
// SIG undefined FUN_141003cf0(void)

void FUN_141003cf0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_1420fc090();
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
        cVar2 = FUN_140cbbac0(lVar3,*(undefined8 *)(param_1 + 0x550));
        if (cVar2 != '\0') {
          FUN_141012d90(param_1,1);
          return;
        }
      }
    }
  }
  FUN_141012d90(param_1,0);
  return;
}



// FUNCTION 141003d90 FUN_141003d90 body=417 status=ok
// SIG undefined FUN_141003d90(void)

void FUN_141003d90(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  float fVar9;
  undefined8 local_res8;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  if (*(longlong *)(param_1 + 0x638) == 0) {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar5 != 0) {
    lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_141003e03;
  }
  lVar5 = 0;
LAB_141003e03:
  plVar8 = (longlong *)(*(longlong *)(param_1 + 0x638) + 0x308);
  (**(code **)(*plVar8 + 0x10))(plVar8,0,lVar5);
  local_48 = 0;
  local_40 = 0;
  uVar7 = FUN_1404b03b0();
  FText::FText(local_38,uVar7);
  local_18 = 0;
  local_10 = 1;
  local_20 = 1;
  FName::FName(&local_res8,L"OakPC_ActionSkill",1);
  uVar3 = local_40;
  lVar5 = (longlong)(int)local_40;
  iVar4 = (int)local_40 + 1;
  local_40 = CONCAT44(local_40._4_4_,iVar4);
  if (local_40._4_4_ < iVar4) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,uVar3 & 0xffffffff);
  }
  *(undefined8 *)(local_48 + lVar5 * 8) = local_res8;
  plVar8 = (longlong *)(*(longlong *)(param_1 + 0x638) + 0x308);
  (**(code **)(*plVar8 + 0x20))(plVar8,&local_48,1);
  if (*(char *)(param_1 + 0x698) == '\0') {
    fVar9 = 1.0;
  }
  else {
    fVar9 = *(float *)(param_1 + 0x694) / *(float *)(param_1 + 0x690);
  }
  FUN_142ed2e60(*(undefined8 *)(param_1 + 0x638),fVar9);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_30 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 141003f40 FUN_141003f40 body=179 status=ok
// SIG undefined FUN_141003f40(void)

void FUN_141003f40(longlong param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142ec64e0();
  FUN_141013050(param_1 + -0x4d8,param_2 == '\x01');
  FUN_141013260(param_1 + -0x4d8,param_2 == '\x01');
  if (*(longlong *)(param_1 + 0x788) == 0) {
    return;
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
    if (bVar1) goto LAB_141003fd4;
  }
  lVar2 = 0;
LAB_141003fd4:
  FUN_140f10f60(*(undefined8 *)(param_1 + 0x788),lVar2);
  return;
}



// FUNCTION 141004000 FUN_141004000 body=170 status=ok
// SIG undefined FUN_141004000(void)

void FUN_141004000(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x730);
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
          if (*(longlong *)(param_1 + 0x728) != 0) {
            FUN_14203e030(*(longlong *)(param_1 + 0x728),L"button");
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
  *(undefined1 *)(param_1 + 0x74c) = 1;
  *(undefined4 *)(param_1 + 0x750) = 0xbf800000;
  return;
}



// FUNCTION 1410040b0 FUN_1410040b0 body=104 status=ok
// SIG undefined FUN_1410040b0(void)

void FUN_1410040b0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_142ec6f90();
  FUN_1411f7810(param_1 + 0x2c8,0);
  lVar1 = *(longlong *)(param_1 + -0x4d8);
  local_18 = 0;
  local_10 = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"QChange_Open",1);
  (**(code **)(lVar1 + 0x4e8))(param_1 + -0x4d8,*puVar2,&local_18);
  return;
}



// FUNCTION 141004120 FUN_141004120 body=64 status=ok
// SIG undefined FUN_141004120(void)

void FUN_141004120(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_142ebd920();
  if (cVar1 != '\0') {
    cVar1 = FUN_142ebe180(param_1);
    if (cVar1 != '\0') {
      FUN_140ff2350(param_1);
                    /* WARNING: Could not recover jumptable at 0x000141004153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x580))(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 141004160 FUN_141004160 body=90 status=ok
// SIG undefined FUN_141004160(void)

void FUN_141004160(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_142ec7390();
  lVar1 = *(longlong *)(param_1 + -0x4d8);
  local_18 = 0;
  local_10 = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"QChange_Close",1);
  (**(code **)(lVar1 + 0x4e8))(param_1 + -0x4d8,*puVar2,&local_18);
  return;
}



// FUNCTION 1410041c0 FUN_1410041c0 body=188 status=ok
// SIG undefined FUN_1410041c0(void)

void FUN_1410041c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  uVar6 = FWeakObjectPtr::Get(param_1 + 0xb4);
  thunk_FUN_14245e740(uVar6,0);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FUN_1404cf2e0(&local_18,0);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x120))(local_18,param_1 + 0x280);
      *(undefined8 *)(param_1 + 0x280) = 0;
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
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 141004280 FUN_141004280 body=240 status=ok
// SIG undefined FUN_141004280(void)

void FUN_141004280(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar2 != '\0') {
    lVar3 = FUN_140e971d0(param_1 + -0x4d8);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x1aa8) = 0;
    }
    lVar3 = FWeakObjectPtr::Get(param_1 + 0xc4);
    FUN_1407665e0(lVar3 + 0x128,param_1 + -0x4d8);
    uVar1 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar3 = FUN_140ec9a00(uVar1);
    if (lVar3 != 0) {
      FUN_142ed2140(lVar3,1);
    }
    uVar1 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar3 = FUN_140fe2a00(uVar1);
    if (lVar3 != 0) {
      FUN_1410144a0(lVar3,0);
      cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x59c);
      if (cVar2 != '\0') {
        uVar1 = FWeakObjectPtr::Get(lVar3 + 0x59c);
        FUN_142f06bc0(uVar1,lVar3);
      }
    }
  }
  FUN_140ff1ee0(param_1 + -0x4d8);
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 141004370 FUN_141004370 body=88 status=ok
// SIG undefined FUN_141004370(void)

void FUN_141004370(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0xc4);
    FUN_1407665e0(lVar1 + 0x148,param_1 + -0x4d8);
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 1410043d0 FUN_1410043d0 body=149 status=ok
// SIG undefined FUN_1410043d0(void)

void FUN_1410043d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xbc);
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
      thunk_FUN_141400bb0(lVar2);
    }
  }
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x4e8))
            ((longlong *)(param_1 + -0x4d8),*(undefined8 *)(param_1 + 0x1b0),&local_18);
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 141004470 FUN_141004470 body=265 status=ok
// SIG undefined FUN_141004470(void)

void FUN_141004470(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
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
      FUN_140d066d0(lVar2);
      FUN_140d04be0(lVar2);
    }
  }
  FUN_1411d87d0(param_1 + 0x2c8,0);
  FUN_140eb0dd0(param_1 + 0x658);
  FUN_140ea71e0(param_1 + 0x658);
  FUN_141016a80(param_1 + -0x4d8,0);
  iVar5 = *(int *)(param_1 + 0x728);
  if (iVar5 != 0) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x720) + 8);
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x728) = 0;
  if (*(int *)(param_1 + 0x72c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x720,0);
  }
  FUN_140eb7180(param_1);
  return;
}



// FUNCTION 141004580 FUN_141004580 body=383 status=ok
// SIG undefined FUN_141004580(void)

void FUN_141004580(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 uStack_c;
  
  FUN_142ec85a0();
  plVar1 = (longlong *)(param_1 + -0x4d8);
  lVar5 = (**(code **)(*plVar1 + 0x148))(plVar1);
  uVar6 = 0;
  if (lVar5 != 0) {
    uVar6 = (**(code **)(*plVar1 + 0x148))(plVar1);
    uVar6 = UWorld::GetGameState<APVPGameState>(uVar6);
  }
  FWeakObjectPtr::operator=(local_res8,uVar6);
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xfc);
  if (lVar5 != 0) {
    FUN_1414d9130();
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xb4);
  if (((cVar4 != '\0') &&
      (lVar5 = FWeakObjectPtr::Get(param_1 + 0xb4), *(char *)(lVar5 + 0x128) == '\x03')) &&
     (cVar4 = FWeakObjectPtr::IsValid(local_res8), cVar4 != '\0')) {
    lVar5 = FWeakObjectPtr::Get(local_res8);
    FUN_141006e60(plVar1,*(undefined4 *)(lVar5 + 0x6d4));
    lVar5 = FWeakObjectPtr::Get(local_res8);
    plVar2 = (longlong *)(lVar5 + 0x5e0);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_1442cc120;
      FWeakObjectPtr::operator=(plVar7 + 1,plVar1);
      *(undefined4 *)(plVar7 + 2) = 0x41006e60;
      *(undefined4 *)((longlong)plVar7 + 0x14) = 1;
      *(undefined4 *)(plVar7 + 3) = 0;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_c;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar8;
      *plVar7 = (longlong)&PTR_FUN_1442cc168;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
      iVar3 = *(int *)(lVar5 + 0x5e8);
      *(int *)(lVar5 + 0x5e8) = iVar3 + 1;
      if (*(int *)(lVar5 + 0x5ec) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar3);
      }
      puVar9 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar2);
      *puVar9 = plVar7;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 141004700 FUN_141004700 body=472 status=ok
// SIG undefined FUN_141004700(void)

void FUN_141004700(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  int *local_res10;
  int local_28;
  int local_24;
  int *local_20;
  
  FUN_142ec85a0();
  lVar10 = param_1 + 0xc4;
  cVar5 = FWeakObjectPtr::IsValid(lVar10);
  if (cVar5 != '\0') {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPrePushMenu",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar7 = FWeakObjectPtr::Get(lVar10);
    plVar1 = (longlong *)(lVar7 + 0x128);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = (int *)0x0;
    FWeakObjectPtr::operator=(&local_28,param_1 + -0x4d8);
    local_20 = local_res10;
    if ((local_res10 != (int *)0x0) && (lVar8 = FWeakObjectPtr::Get(&local_28), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_20);
    }
    piVar11 = (int *)*plVar1;
    iVar2 = *(int *)(lVar7 + 0x130);
    for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)iVar2 * 4; piVar12 = piVar12 + 4) {
      if ((((*piVar12 == local_28) && (piVar12[1] == local_24)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar12), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
         (*(int **)(piVar12 + 2) == local_20)) {
        if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_14100487b;
        break;
      }
    }
    iVar2 = *(int *)(lVar7 + 0x130);
    *(int *)(lVar7 + 0x130) = iVar2 + 1;
    if (*(int *)(lVar7 + 0x134) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar11 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar11 = local_28;
    piVar11[1] = local_24;
    *(int **)(piVar11 + 2) = local_20;
LAB_14100487b:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    uVar9 = FWeakObjectPtr::Get(lVar10);
    lVar7 = FUN_140ec9a00(uVar9);
    if (lVar7 != 0) {
      FUN_142ed2140(lVar7,0);
    }
    uVar9 = FWeakObjectPtr::Get(lVar10);
    lVar10 = FUN_140fe2a00(uVar9);
    if (lVar10 != 0) {
      FUN_1410144a0(lVar10,1);
    }
  }
  return;
}



// FUNCTION 1410048e0 FUN_1410048e0 body=422 status=ok
// SIG undefined FUN_1410048e0(void)

void FUN_1410048e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_142ec85a0();
  *(uint *)(param_1 + -0x498) = *(uint *)(param_1 + -0x498) | 0x100;
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar5 != '\0') {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMenuStackEmptied",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar7 = FWeakObjectPtr::Get(param_1 + 0xc4);
    plVar1 = (longlong *)(lVar7 + 0x148);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1 + -0x4d8);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_28), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_20);
    }
    piVar9 = (int *)*plVar1;
    iVar2 = *(int *)(lVar7 + 0x150);
    for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar2 * 4; piVar10 = piVar10 + 4) {
      if ((((*piVar10 == local_28) && (piVar10[1] == local_24)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar10), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
         (*(longlong *)(piVar10 + 2) == local_20)) {
        if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_141004a6d;
        break;
      }
    }
    iVar2 = *(int *)(lVar7 + 0x150);
    *(int *)(lVar7 + 0x150) = iVar2 + 1;
    if (*(int *)(lVar7 + 0x154) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar9 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar9 = local_28;
    piVar9[1] = local_24;
    *(longlong *)(piVar9 + 2) = local_20;
LAB_141004a6d:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  }
  return;
}



// FUNCTION 141004a90 FUN_141004a90 body=2664 status=ok
// SIG undefined FUN_141004a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141004a90(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  bool bVar8;
  longlong *plVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  byte *pbVar14;
  undefined8 uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  longlong lVar20;
  byte *pbVar21;
  int iVar22;
  uint *puVar23;
  ulonglong uVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  undefined1 auStack_188 [32];
  byte *local_168;
  int local_160;
  int iStack_15c;
  byte *local_158;
  int local_150 [2];
  int local_148;
  uint uStack_144;
  uint *puStack_140;
  undefined4 local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  int local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  undefined8 uStack_f0;
  int local_e8;
  int local_e4;
  byte *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  int iStack_c8;
  uint uStack_c4;
  uint *local_c0;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  longlong local_88;
  undefined8 local_80;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  byte local_50 [8];
  ulonglong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_118 = param_1;
  lVar12 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar12 != 0) {
    lVar13 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      FUN_140d066e0(lVar12);
    }
  }
  iVar11 = 0;
  local_58 = 0xffffffff;
  plVar4 = (longlong *)(param_1 + 0x220);
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_140fe6770(&local_88,plVar4);
  uVar6 = *(uint *)(param_1 + 0x248);
  puVar1 = (uint *)(param_1 + 0x230);
  local_158 = (byte *)0x0;
  local_168 = (byte *)0x0;
  local_160 = 0;
  iStack_15c = 0;
  local_148 = 0;
  uStack_144 = 1;
  uStack_134 = 0;
  iStack_130 = 0;
  if (uVar6 != 0) {
    puVar23 = *(uint **)(param_1 + 0x240);
    if (*(uint **)(param_1 + 0x240) == (uint *)0x0) {
      puVar23 = puVar1;
    }
    uVar18 = *puVar23;
    while (uVar18 == 0) {
      lVar12 = (longlong)local_148;
      iStack_130 = iStack_130 + 0x20;
      iVar17 = local_148 + 1;
      bVar8 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
      local_148 = iVar17;
      if (bVar8) goto LAB_141004c16;
      uVar18 = puVar23[lVar12 + 1];
    }
    uStack_144 = uVar18 - 1 & uVar18 ^ uVar18;
    local_e8 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> local_e8 == 0; local_e8 = local_e8 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar17 = 0x20;
    }
    else {
      iVar17 = 0x1f - local_e8;
    }
    uStack_134 = (iStack_130 - iVar17) + 0x1f;
    if ((int)uVar6 < (int)uStack_134) {
LAB_141004c16:
      uStack_134 = uVar6;
    }
  }
  local_138 = 0xffffffff;
  uStack_fc = *(uint *)(param_1 + 0x248);
  uStack_108 = CONCAT44(uStack_144,local_148);
  uStack_b8 = 0xffffffff;
  uStack_b4 = uStack_134;
  uStack_f0 = CONCAT44(uStack_12c,iStack_130);
  local_110 = (int)uStack_fc >> 5;
  uStack_10c = (undefined4)((ulonglong)plVar4 >> 0x20);
  uStack_100 = -1 << ((byte)uStack_fc & 0x1f);
  uStack_f8 = uStack_fc & 0xffffffe0;
  uStack_f4 = uStack_134;
  iStack_c8 = local_148;
  uStack_c4 = uStack_144;
  puStack_140 = puVar1;
  local_c0 = puVar1;
  local_b0 = uStack_f0;
  iVar17 = iVar11;
  local_d0 = plVar4;
  uVar18 = uStack_fc;
  if (uStack_fc != uVar6) {
    puVar23 = *(uint **)(param_1 + 0x240);
    if (*(uint **)(param_1 + 0x240) == (uint *)0x0) {
      puVar23 = puVar1;
    }
    uVar18 = puVar23[local_110] & uStack_100;
    while (uVar18 == 0) {
      lVar12 = (longlong)local_110;
      uStack_f8 = uStack_f8 + 0x20;
      iVar22 = local_110 + 1;
      bVar8 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_110;
      local_110 = iVar22;
      if (bVar8) goto LAB_141004d13;
      uVar18 = puVar23[lVar12 + 1];
      uStack_100 = 0xffffffff;
    }
    uVar18 = uVar18 - 1 & uVar18 ^ uVar18;
    local_e4 = 0x1f;
    if (uVar18 != 0) {
      for (; uVar18 >> local_e4 == 0; local_e4 = local_e4 + -1) {
      }
    }
    if (uVar18 == 0) {
      iVar22 = 0x20;
    }
    else {
      iVar22 = 0x1f - local_e4;
    }
    uStack_fc = (uStack_f8 - iVar22) + 0x1f;
    uVar18 = uStack_fc;
    if ((int)uVar6 < (int)uStack_fc) {
LAB_141004d13:
      uStack_fc = uVar6;
      uVar18 = uVar6;
    }
  }
  while( true ) {
    lVar12 = (longlong)(int)uStack_b4;
    if ((uStack_b4 == uVar18) && (local_c0 == puVar1)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if ((bVar8) && (local_d0 == plVar4)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) break;
    lVar20 = (longlong)iVar11;
    lVar13 = *local_d0;
    local_160 = iVar11 + 1;
    if (iVar17 < local_160) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_168,iVar11);
      local_158 = local_168;
      iVar17 = iStack_15c;
    }
    iVar11 = local_160;
    local_158[lVar20] = *(byte *)(lVar12 * 0x78 + lVar13);
    uStack_b8 = uStack_b8 & ~uStack_c4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_c8);
  }
  for (pbVar14 = local_158; pbVar27 = local_158, pbVar14 != local_158 + iVar11;
      pbVar14 = pbVar14 + 1) {
    iVar22 = iVar11;
    if (*pbVar14 == 1) goto LAB_141004dfd;
  }
  local_160 = iVar11 + 1;
  if (iVar17 < local_160) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_168,iVar11);
    pbVar27 = local_168;
  }
  iVar22 = local_160;
  _guard_xfg_dispatch_icall_nop(pbVar27 + 2,pbVar27 + 1,(longlong)(iVar11 + -1));
  pbVar27[1] = 1;
LAB_141004dfd:
  lVar12 = local_118;
  FUN_140ff3ea0(plVar4,(*(int *)(local_118 + 0x228) - *(int *)(local_118 + 0x254)) + 1);
  pbVar26 = pbVar27 + iVar22;
  pbVar14 = pbVar27;
  if (pbVar27 == pbVar26) {
LAB_14100547a:
    FUN_140eb73b0(lVar12);
    if (pbVar14 != (byte *)0x0) {
      FMemory::Free(pbVar14);
    }
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free();
    }
    FUN_140ff3f20(&local_88,0);
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    return;
  }
  pbVar25 = (byte *)0x0;
LAB_141004e40:
  local_e0 = pbVar27;
  FUN_140fe2390(plVar4,&local_158,&local_e0,0);
  bVar5 = *pbVar27;
  if ((int)local_80 != local_54) {
    uVar24 = (longlong)(local_40 + -1) & (ulonglong)bVar5;
    pbVar14 = local_50;
    if (local_48 != 0) {
      pbVar14 = pbVar25;
    }
    for (iVar11 = *(int *)(((ulonglong)pbVar14 | local_48) + uVar24 * 4); iVar11 != -1;
        iVar11 = *(int *)((longlong)iVar11 * 0x78 + 0x70 + local_88)) {
      if (*(byte *)((longlong)iVar11 * 0x78 + local_88) == bVar5) {
        if (iVar11 != -1) {
          iVar11 = *(int *)(((ulonglong)pbVar14 | local_48) + uVar24 * 4);
          if (iVar11 == -1) goto LAB_141004f54;
          goto LAB_141004f32;
        }
        break;
      }
    }
  }
  if (bVar5 == 1) {
    if (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x254)) {
      lVar12 = *(longlong *)(param_1 + 0x260);
      if (*(longlong *)(param_1 + 0x260) == 0) {
        lVar12 = param_1 + 600;
      }
      iVar11 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x268) - 1U & 1) * 4);
      if (iVar11 != -1) {
        do {
          pbVar14 = (byte *)((longlong)iVar11 * 0x78 + *plVar4);
          if (*pbVar14 == 1) {
            if (iVar11 != -1) goto LAB_141005010;
            break;
          }
          iVar11 = *(int *)(pbVar14 + 0x70);
        } while (iVar11 != -1);
      }
    }
    pbVar14 = pbVar25;
LAB_141005010:
    uVar15 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_a8,L"BODY",L"GFxBaseQuickChangeMenu",L"QuickChangeMenuBodyText");
    FText::operator=(pbVar14 + 8,uVar15);
    plVar9 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_a0 + 1;
      lVar12 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar3 = (int *)((longlong)plVar9 + 0xc);
        iVar11 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x254)) {
      lVar12 = *(longlong *)(param_1 + 0x260);
      if (*(longlong *)(param_1 + 0x260) == 0) {
        lVar12 = param_1 + 600;
      }
      iVar11 = *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0x268) - 1U & (ulonglong)*pbVar27) *
                                 4);
      if (iVar11 != -1) {
        do {
          pbVar14 = (byte *)((longlong)iVar11 * 0x78 + *plVar4);
          if (*pbVar14 == *pbVar27) {
            if (iVar11 != -1) goto LAB_1410050e1;
            break;
          }
          iVar11 = *(int *)(pbVar14 + 0x70);
        } while (iVar11 != -1);
      }
    }
    pbVar14 = pbVar25;
LAB_1410050e1:
    pbVar21 = pbVar14 + 0x38;
    if (*(wchar_t **)(pbVar14 + 0x38) != L"heads") {
      pbVar14[0x40] = 0;
      pbVar14[0x41] = 0;
      pbVar14[0x42] = 0;
      pbVar14[0x43] = 0;
      pbVar19 = pbVar25;
      if (*(int *)(pbVar14 + 0x44) != 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(pbVar21,6);
        pbVar19 = (byte *)(ulonglong)*(uint *)(pbVar14 + 0x40);
      }
      iVar11 = (int)pbVar19 + 6;
      *(int *)(pbVar14 + 0x40) = iVar11;
      if (*(int *)(pbVar14 + 0x44) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(pbVar21);
      }
      puVar7 = *(undefined8 **)pbVar21;
      *puVar7 = 0x64006100650068;
      *(undefined4 *)(puVar7 + 1) = 0x73;
    }
    if (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x254)) {
      lVar12 = *(longlong *)(param_1 + 0x260);
      if (*(longlong *)(param_1 + 0x260) == 0) {
        lVar12 = param_1 + 600;
      }
      iVar11 = *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0x268) - 1U & (ulonglong)*pbVar27) *
                                 4);
      if (iVar11 != -1) {
        do {
          pbVar14 = (byte *)((longlong)iVar11 * 0x78 + *plVar4);
          if (*pbVar14 == *pbVar27) {
            if (iVar11 != -1) goto LAB_141005191;
            break;
          }
          iVar11 = *(int *)(pbVar14 + 0x70);
        } while (iVar11 != -1);
      }
    }
    pbVar14 = pbVar25;
LAB_141005191:
    pbVar21 = pbVar14 + 0x48;
    if (*(wchar_t **)(pbVar14 + 0x48) != L"bodyIcon") {
      pbVar14[0x50] = 0;
      pbVar14[0x51] = 0;
      pbVar14[0x52] = 0;
      pbVar14[0x53] = 0;
      pbVar19 = pbVar25;
      if (*(int *)(pbVar14 + 0x54) != 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(pbVar21,9);
        pbVar19 = (byte *)(ulonglong)*(uint *)(pbVar14 + 0x50);
      }
      iVar11 = (int)pbVar19 + 9;
      *(int *)(pbVar14 + 0x50) = iVar11;
      if (*(int *)(pbVar14 + 0x54) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(pbVar21);
      }
      builtin_wcsncpy(*(wchar_t **)pbVar21,L"bodyIcon",9);
    }
    FName::FName(&local_d8,L"QuickChange_Skin",1);
    if (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x254)) {
      lVar12 = *(longlong *)(param_1 + 0x260);
      if (*(longlong *)(param_1 + 0x260) == 0) {
        lVar12 = param_1 + 600;
      }
      iVar11 = *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0x268) - 1U & (ulonglong)*pbVar27) *
                                 4);
      if (iVar11 != -1) {
        do {
          pbVar14 = (byte *)((longlong)iVar11 * 0x78 + *plVar4);
          if (*pbVar14 == *pbVar27) {
            if (iVar11 != -1) goto LAB_141005261;
            break;
          }
          iVar11 = *(int *)(pbVar14 + 0x70);
        } while (iVar11 != -1);
      }
    }
    pbVar14 = pbVar25;
LAB_141005261:
    *(undefined8 *)(pbVar14 + 0x58) = local_d8;
    if (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x254)) {
      lVar12 = *(longlong *)(param_1 + 0x260);
      if (*(longlong *)(param_1 + 0x260) == 0) {
        lVar12 = param_1 + 600;
      }
      iVar11 = *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0x268) - 1U & (ulonglong)*pbVar27) *
                                 4);
      if (iVar11 != -1) {
        do {
          pbVar14 = (byte *)((longlong)iVar11 * 0x78 + *plVar4);
          if (*pbVar14 == *pbVar27) {
            if (iVar11 != -1) goto LAB_1410052d1;
            break;
          }
          iVar11 = *(int *)(pbVar14 + 0x70);
        } while (iVar11 != -1);
      }
    }
    pbVar14 = pbVar25;
LAB_1410052d1:
    pbVar14[0x61] = 1;
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar12 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (lVar12 != 0) {
      lVar20 = lVar12 + 0xef0;
      lVar13 = FWeakObjectPtr::Get(lVar20);
      if (lVar13 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar12 + 0xef8)) &&
           (local_128 = 0, *(longlong *)(lVar12 + 0xf00) != 0)) {
          lVar13 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar20,lVar13);
          if ((lVar13 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar12 + 0xef8) = DAT_1464b56f4;
          }
          lVar13 = FWeakObjectPtr::Get(lVar20);
          if (lVar13 != 0) goto LAB_14100537b;
        }
      }
      else {
LAB_14100537b:
        lVar16 = UUGJournalKey::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          pbVar14 = (byte *)FWeakObjectPtr::Get(lVar20);
          if (pbVar14 == (byte *)0x0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(int *)(lVar12 + 0xef8)) &&
               (local_120 = 0, *(longlong *)(lVar12 + 0xf00) != 0)) {
              lVar13 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar20,lVar13);
              if ((lVar13 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(lVar12 + 0xef8) = DAT_1464b56f4;
              }
              pbVar14 = (byte *)FWeakObjectPtr::Get(lVar20);
              if (pbVar14 != (byte *)0x0) goto LAB_141005423;
            }
LAB_14100542f:
            pbVar14 = pbVar25;
          }
          else {
LAB_141005423:
            cVar10 = FUN_140fe4c80(pbVar14);
            if (cVar10 == '\0') goto LAB_14100542f;
          }
          FUN_140ff4850(plVar4,local_150,*pbVar27);
          pbVar21 = pbVar25;
          if (local_150[0] != -1) {
            pbVar21 = (byte *)((longlong)local_150[0] * 0x78 + *plVar4);
          }
          *(byte **)(pbVar21 + 0x68) = pbVar14;
        }
      }
    }
  }
  goto LAB_14100545d;
  while (iVar11 = *(int *)(local_88 + 0x70 + lVar12), iVar11 != -1) {
LAB_141004f32:
    lVar12 = (longlong)iVar11 * 0x78;
    if (*(byte *)(local_88 + lVar12) == bVar5) {
      pbVar14 = (byte *)(local_88 + lVar12);
      if (iVar11 != -1) goto LAB_141004f57;
      break;
    }
  }
LAB_141004f54:
  pbVar14 = pbVar25;
LAB_141004f57:
  if (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x254)) {
    lVar12 = *(longlong *)(param_1 + 0x260);
    if (*(longlong *)(param_1 + 0x260) == 0) {
      lVar12 = param_1 + 600;
    }
    iVar11 = *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0x268) - 1U & (ulonglong)bVar5) * 4);
    if (iVar11 != -1) {
      do {
        pbVar21 = (byte *)((longlong)iVar11 * 0x78 + *plVar4);
        if (*pbVar21 == bVar5) {
          if (iVar11 != -1) goto LAB_141004fb1;
          break;
        }
        iVar11 = *(int *)(pbVar21 + 0x70);
      } while (iVar11 != -1);
    }
  }
  pbVar21 = pbVar25;
LAB_141004fb1:
  FText::operator=(pbVar21 + 8,pbVar14 + 8);
  FText::operator=(pbVar21 + 0x20,pbVar14 + 0x20);
  FString::operator=(pbVar21 + 0x38,pbVar14 + 0x38);
  FString::operator=(pbVar21 + 0x48,pbVar14 + 0x48);
  *(undefined8 *)(pbVar21 + 0x58) = *(undefined8 *)(pbVar14 + 0x58);
  pbVar21[0x60] = pbVar14[0x60];
  pbVar21[0x61] = pbVar14[0x61];
  *(undefined8 *)(pbVar21 + 0x68) = *(undefined8 *)(pbVar14 + 0x68);
LAB_14100545d:
  pbVar27 = pbVar27 + 1;
  lVar12 = local_118;
  pbVar14 = local_168;
  if (pbVar27 == pbVar26) goto LAB_14100547a;
  goto LAB_141004e40;
}



// FUNCTION 141005500 FUN_141005500 body=1634 status=ok
// SIG undefined FUN_141005500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141005500(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8;
  undefined4 *local_198;
  ulonglong *puStack_190;
  undefined1 local_188 [8];
  longlong local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  undefined1 local_150 [8];
  undefined8 local_148;
  undefined4 *local_138;
  ulonglong *puStack_130;
  undefined1 local_128 [16];
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [16];
  undefined4 local_78 [2];
  longlong local_70;
  longlong *local_60;
  char local_50;
  ulonglong local_48 [4];
  
  if (param_2 == 0) {
    return;
  }
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  lVar6 = FUN_14138e2b0();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
      != lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  pwVar18 = (wchar_t *)0x0;
  if ((!bVar4) || (cVar16 = *(char *)(param_2 + 0x368), cVar16 == '\a')) goto LAB_141005642;
  if ((char)param_1[0x107] == '\x02') {
LAB_1410055e1:
    pcVar8 = "\x04";
    do {
      if (*pcVar8 == cVar16) goto LAB_141005642;
      pcVar8 = pcVar8 + 1;
    } while (pcVar8 != "");
  }
  else {
    lVar6 = param_1[0x101];
    if (lVar6 == 0) {
LAB_1410055da:
      cVar16 = *(char *)(param_2 + 0x368);
      goto LAB_1410055e1;
    }
    lVar7 = FUN_141404840();
    lVar6 = *(longlong *)(lVar6 + 0x10);
    if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1410055da;
  }
  (**(code **)(*param_1 + 0x588))(param_1,*(undefined1 *)(param_2 + 0x368));
  lVar6 = *param_1;
  local_170 = 0;
  local_168 = 0;
  puVar9 = (undefined8 *)FName::FName(local_150,L"Confirm",1);
  (**(code **)(lVar6 + 0x4e8))(param_1,*puVar9,&local_170);
LAB_141005642:
  lVar6 = FUN_14138e2b0();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
      != lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar4) && (*(char *)(param_2 + 0x368) == '\a')) {
    lVar6 = (longlong)param_1 + 0x58c;
    lVar7 = FWeakObjectPtr::Get(lVar6);
    pwVar12 = pwVar18;
    if (lVar7 != 0) {
      lVar10 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pwVar12 = *(wchar_t **)(lVar7 + 0x990);
      }
    }
    pwVar11 = pwVar18;
    if (pwVar12 != (wchar_t *)0x0) {
      local_148 = AGFireballProjectile::GetPrivateStaticClass();
      (**(code **)(*(longlong *)pwVar12 + 0x628))(pwVar12,local_148);
      pwVar11 = (wchar_t *)(**(code **)(*(longlong *)(pwVar12 + 0x6c0) + 0x18))();
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    fVar3 = *(float *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x540);
    iVar5 = FUN_142ff7c90(pwVar11,*(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0));
    if (*(char *)((longlong)param_1 + 0xc79) == '\0') {
      FWeakObjectPtr::operator=(&local_198,0);
      puStack_190 = (ulonglong *)0x0;
      uVar13 = FWeakObjectPtr::Get(lVar6);
      uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_a0,L"You have no points spent in your Skill Tree!",
                          L"GFxQuickChangeMenu",L"RespecWithNoPointsDescriptionText");
      uVar15 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_b8,L"Cannot Respec",L"GFxQuickChangeMenu",
                          L"RespecWithNoPointsTitleText");
      local_1b8 = 2;
      local_1c0 = 0;
      local_1c8 = 1;
      FUN_1410f3960(uVar13,uVar15,uVar14,&local_198);
      plVar17 = local_98;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_b0 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar17 = local_98;
          if (iVar5 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
            plVar17 = local_98;
          }
        }
      }
    }
    else {
      FWeakObjectPtr::operator=(local_188,0);
      local_180 = 0;
      pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxQuickChangeMenu::OnRespecChoiceMade",L"::");
      while (pwVar11 = pwVar12, pwVar11 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
        pwVar18 = pwVar11;
      }
      FName::FName(&local_178,pwVar18 + 2,1);
      FWeakObjectPtr::operator=(local_188,param_1);
      local_180 = local_178;
      local_198 = (undefined4 *)0x0;
      if ((local_178 != 0) && (lVar7 = FWeakObjectPtr::Get(local_188), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_180);
      }
      uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_d0,L"Refund all points spent in Skill Tree for ${0}?",
                          L"GFxQuickChangeMenu",L"RespecDescription");
      puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar13);
      local_70 = (longlong)(int)((float)iVar5 * fVar3);
      local_198 = local_78;
      puStack_190 = local_48;
      local_160 = *puVar9;
      local_158 = puVar9[1];
      local_78[0] = 0;
      local_50 = '\0';
      if (local_158 != 0) {
        LOCK();
        *(int *)(local_158 + 8) = *(int *)(local_158 + 8) + 1;
        UNLOCK();
      }
      local_138 = local_198;
      puStack_130 = puStack_190;
      uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_128,&local_138);
      uVar13 = FText::Format(local_100,&local_160,uVar13);
      FText::FText(local_118,uVar13);
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_f8 + 1;
        lVar7 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar1 = (int *)((longlong)local_f8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_f8 + 8))(local_f8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_128);
      if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
        LOCK();
        plVar17 = local_60 + 1;
        lVar7 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      plVar17 = (longlong *)puVar9[1];
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar17 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      uVar13 = FWeakObjectPtr::Get(lVar6);
      uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_e8,L"RESPEC?",L"GFxQuickChangeMenu",L"RespecTitle");
      local_1a8 = 0;
      local_1b0 = 0;
      local_1b8 = 0;
      local_1c0 = 0;
      local_1c8 = 0;
      FUN_1410f47a0(uVar13,uVar14,local_118,local_188);
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_e0 + 1;
        lVar6 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
      plVar17 = local_c8;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_110 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)local_110 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar17 = local_c8;
          if (iVar5 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
            plVar17 = local_c8;
          }
        }
      }
    }
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar17 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 141005b70 FUN_141005b70 body=300 status=ok
// SIG undefined FUN_141005b70(void)

void FUN_141005b70(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined1 local_res10 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_2 == 0) {
    return;
  }
  lVar2 = FUN_14138e2b0();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  cVar6 = *(char *)(param_2 + 0x368);
  if (cVar6 == '\a') {
    return;
  }
  if ((char)param_1[0x107] != '\x02') {
    lVar2 = param_1[0x101];
    if (lVar2 != 0) {
      lVar3 = FUN_141404840();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_141005c44;
    }
    cVar6 = *(char *)(param_2 + 0x368);
  }
  pcVar4 = "\x04";
  do {
    if (*pcVar4 == cVar6) {
      return;
    }
    pcVar4 = pcVar4 + 1;
  } while (pcVar4 != "");
LAB_141005c44:
  (**(code **)(*param_1 + 0x588))(param_1,*(undefined1 *)(param_2 + 0x368));
  lVar2 = *param_1;
  local_18 = 0;
  local_10 = 0;
  puVar5 = (undefined8 *)FName::FName(local_res10,L"Confirm",1);
  (**(code **)(lVar2 + 0x4e8))(param_1,*puVar5,&local_18);
  return;
}



// FUNCTION 141005ca0 FUN_141005ca0 body=376 status=ok
// SIG undefined FUN_141005ca0(void)

/* WARNING: Removing unreachable block (ram,0x000141005ce5) */

void FUN_141005ca0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    lVar3 = FUN_14138e2b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      param_2 = 0;
    }
  }
  uVar5 = 0;
  if ((*(longlong *)(param_1 + 0x6d0) != 0) && (param_2 != 0)) {
    if (*(char *)(param_2 + 0x2d8) == '\x06') {
      FUN_14101bd20(param_1,7);
      plVar7 = *(longlong **)(param_1 + 0xc68);
      uVar6 = (longlong)*(int *)(param_1 + 0xc70) & 0x1fffffffffffffff;
      if (plVar7 + *(int *)(param_1 + 0xc70) < plVar7) {
        uVar6 = uVar5;
      }
      if (uVar6 != 0) {
        do {
          plVar1 = (longlong *)*plVar7;
          if (plVar1 != (longlong *)0x0) {
            lVar3 = *plVar1;
            uVar4 = FUN_140e971d0(param_1);
            uVar2 = FUN_1411d5380(uVar4,plVar1[0x33]);
            (**(code **)(lVar3 + 0x278))(plVar1,uVar2);
          }
          plVar7 = plVar7 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar6);
      }
    }
    else {
      FUN_14101bd20(param_1,*(undefined1 *)(param_1 + 0x6c8));
      plVar7 = *(longlong **)(param_1 + 0xc68);
      uVar6 = (longlong)*(int *)(param_1 + 0xc70) & 0x1fffffffffffffff;
      if (plVar7 + *(int *)(param_1 + 0xc70) < plVar7) {
        uVar6 = uVar5;
      }
      if (uVar6 != 0) {
        do {
          plVar1 = (longlong *)*plVar7;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x278))(plVar1,0);
          }
          plVar7 = plVar7 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141005e20 FUN_141005e20 body=63 status=ok
// SIG undefined FUN_141005e20(void)

void FUN_141005e20(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x59c);
    FUN_142f06bc0(uVar1,param_1);
  }
  return;
}



// FUNCTION 141005e60 FUN_141005e60 body=222 status=ok
// SIG undefined FUN_141005e60(void)

void FUN_141005e60(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  plVar1 = (longlong *)(param_1 + -0x4d8);
  FUN_140ff1ee0(plVar1);
  FUN_142ec8c70(param_1,param_2);
  if (*(char *)(param_1 + 0x208) != '\0') {
    *(undefined1 *)(param_1 + 0x208) = 0;
    lVar2 = FUN_140f9aee0(plVar1);
    lVar4 = 0;
    if (lVar2 != 0) {
      lVar4 = *(longlong *)(lVar2 + 0x5b8);
    }
    if (lVar4 != 0) {
      FUN_140ff3350(plVar1);
      FUN_14101d210(plVar1);
      local_28 = 0;
      local_20 = 0;
      lVar4 = *plVar1;
      puVar3 = (undefined8 *)FName::FName(local_res8,"PC_Chat_Received",1);
      (**(code **)(lVar4 + 0x4e8))(plVar1,*puVar3,&local_28);
    }
  }
  if ((*(char *)(param_1 + 0x164) != '\0') && (*(longlong *)(param_1 + 0x1e0) != 0)) {
    FUN_142eb4cb0();
    return;
  }
  return;
}



// FUNCTION 141005f40 FUN_141005f40 body=178 status=ok
// SIG undefined FUN_141005f40(void)

void FUN_141005f40(longlong param_1,float param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_142ec8c70();
  param_2 = param_2 + *(float *)(param_1 + 0x1b8);
  *(float *)(param_1 + 0x1b8) = param_2;
  if (*(float *)(param_1 + 0x1a8) <= param_2 && param_2 != *(float *)(param_1 + 0x1a8)) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
    if (cVar1 == '\0') {
      lVar3 = 0;
    }
    else {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0xc4);
      lVar3 = FUN_140cddc40(uVar2);
    }
    if (lVar3 != 0) {
      FUN_141014050(param_1 + -0x4d8);
      return;
    }
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0xc4);
      FUN_142f06bc0(uVar2,param_1 + -0x4d8);
    }
  }
  return;
}



// FUNCTION 141006000 FUN_141006000 body=171 status=ok
// SIG undefined FUN_141006000(void)

void FUN_141006000(longlong param_1,float param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_1410060b0();
  if (1e-08 < *(float *)(param_1 + 0x7a4)) {
    uVar2 = 0;
    *(float *)(param_1 + 0x7a4) = *(float *)(param_1 + 0x7a4) - param_2;
    plVar1 = *(longlong **)(param_1 + 0x790);
    uVar3 = (longlong)*(int *)(param_1 + 0x798) & 0x1fffffffffffffff;
    if (plVar1 + *(int *)(param_1 + 0x798) < plVar1) {
      uVar3 = uVar2;
    }
    if (uVar3 != 0) {
      do {
        if (*plVar1 != 0) {
          FUN_14101cf80(*plVar1,*(undefined4 *)(param_1 + 0x7a4));
        }
        plVar1 = plVar1 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 != uVar3);
    }
  }
  return;
}



// FUNCTION 1410060b0 FUN_1410060b0 body=588 status=ok
// SIG undefined FUN_1410060b0(void)

void FUN_1410060b0(longlong param_1,float param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 local_38 [48];
  
  FUN_142ec8c70();
  if (1e-08 < ABS(*(float *)(param_1 + 0x1e0))) {
    FUN_1411e6aa0(param_1 + 0x2c8,local_38);
    FUN_142db9830(param_1 + 0x1c0,param_2,local_38);
    FUN_1411faae0(param_1 + 0x2c8,local_38);
  }
  fVar8 = 0.0;
  if (*(char *)(param_1 + 0x741) != '\0') {
    fVar7 = *(float *)(param_1 + 0x744) - param_2;
    *(float *)(param_1 + 0x744) = fVar7;
    if (fVar7 <= 0.0) {
      *(undefined1 *)(param_1 + 0x741) = 0;
      *(undefined4 *)(param_1 + 0x744) = 0;
      *(undefined8 *)(param_1 + 0x748) = 0;
      FUN_141019c30(param_1 + -0x4d8,1);
    }
  }
  FUN_140ec3ff0(param_1 + 0x658,param_2);
  if (*(longlong **)(param_1 + 0x218) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x2d8))();
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x2e0))();
    if (0 < iVar3) {
      iVar3 = iVar3 + -1;
    }
    iVar5 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x218));
    if (iVar4 < iVar5 + -1) {
      iVar4 = iVar4 + 1;
    }
    FUN_140ffaa40(param_1 + -0x4d8,iVar3,iVar4);
  }
  if (*(longlong *)(param_1 + 0x690) != 0) {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
    if (cVar2 != '\0') {
      lVar6 = FWeakObjectPtr::Get(param_1 + 0xc4);
      if (*(char *)(lVar6 + 0xb8) == '\x02') {
        FUN_142ec23c0(*(undefined8 *)(param_1 + 0x690),param_2);
        fVar7 = 0.0;
        if (*(char *)(*(longlong *)(param_1 + 0x690) + 400) == '\0') {
          if (*(char *)(param_1 + 0x1f1) == '\0') {
            *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x6bc);
            (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x568))((longlong *)(param_1 + -0x4d8),1)
            ;
            *(undefined1 *)(param_1 + 0x1f1) = 1;
          }
        }
        else {
          fVar1 = *(float *)(*(longlong *)(param_1 + 0x690) + 0x178);
          fVar7 = -0.1;
          if ((-0.1 <= fVar1) && (fVar7 = fVar1, 0.1 <= fVar1)) {
            fVar7 = 0.1;
          }
          fVar7 = fVar7 * 10.0;
          if (*(char *)(param_1 + 0x1f1) != '\0') {
            *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x6c0);
            (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x568))((longlong *)(param_1 + -0x4d8),0)
            ;
            *(undefined1 *)(param_1 + 0x1f1) = 0;
          }
        }
        if (0.1 < ABS(fVar7)) {
          fVar8 = -fVar7;
        }
        *(float *)(param_1 + 0x1c4) = fVar8;
        FUN_142dbedb0(param_1 + 0x1c0);
      }
    }
  }
  return;
}



// FUNCTION 141006300 FUN_141006300 body=538 status=ok
// SIG undefined FUN_141006300(void)

void FUN_141006300(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined **local_68;
  
  uVar5 = 0;
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  FUN_140ff7300(param_1,&local_b8,0);
  puVar11 = local_b8;
  puVar10 = local_b8 + (longlong)(int)(uint)local_b0 * 6;
  puVar9 = local_b8;
  do {
    if (puVar9 == puVar10) {
LAB_1410064d0:
      uVar8 = local_b0 & 0xffffffff;
      puVar9 = puVar11;
      uVar7 = (uint)local_b0;
      while (uVar7 != 0) {
        *puVar9 = &PTR_FUN_1441d26b8;
        puVar9 = puVar9 + 6;
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar7;
      }
      if (puVar11 != (undefined8 *)0x0) {
        FMemory::Free(puVar11);
      }
      return;
    }
    cVar4 = FUN_142f4ff30(puVar9,param_2);
    if (cVar4 != '\0') {
      if ((((puVar9 != puVar10) &&
           (iVar6 = (int)(((longlong)puVar9 - (longlong)puVar11) / 0x30), -1 < iVar6)) &&
          (iVar6 < *(int *)(param_1 + 0x720))) &&
         ((lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x718) + (longlong)iVar6 * 8), lVar3 != 0
          && (*(longlong *)(param_1 + 0x698) != 0)))) {
        cVar4 = FUN_142f63b10(param_2);
        if (cVar4 != '\0') {
          uVar5 = FUN_142f5f490(param_2);
        }
        FUN_140ff74c0(param_1,local_a8,uVar5,param_3);
        cVar4 = FUN_142f63720(*(undefined8 *)(param_1 + 0x698),param_2,
                              *(undefined8 *)(param_1 + 0x698));
        FUN_140fe5830(local_88,param_2,local_a8,(cVar4 != '\0') + '\x02');
        FUN_141011d90(lVar3,local_88);
        local_68 = &PTR_FUN_1441d26b8;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          puVar11 = local_b8;
          if ((int)lVar3 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)local_80 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            puVar11 = local_b8;
            if (iVar6 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
              puVar11 = local_b8;
            }
          }
        }
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a0 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          puVar11 = local_b8;
          if ((int)lVar3 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar2 = (int *)((longlong)local_a0 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            puVar11 = local_b8;
            if (iVar6 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
              puVar11 = local_b8;
            }
          }
        }
      }
      goto LAB_1410064d0;
    }
    puVar9 = puVar9 + 6;
  } while( true );
}



// FUNCTION 141006520 FUN_141006520 body=506 status=ok
// SIG undefined FUN_141006520(void)

void FUN_141006520(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined **local_68;
  
  uVar5 = 0;
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  FUN_140ff7300(param_1,&local_b8,0);
  puVar11 = local_b8;
  puVar10 = local_b8 + (longlong)(int)(uint)local_b0 * 6;
  puVar9 = local_b8;
  do {
    if (puVar9 == puVar10) {
LAB_1410066ca:
      uVar8 = local_b0 & 0xffffffff;
      puVar9 = puVar11;
      uVar7 = (uint)local_b0;
      while (uVar7 != 0) {
        *puVar9 = &PTR_FUN_1441d26b8;
        puVar9 = puVar9 + 6;
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar7;
      }
      if (puVar11 != (undefined8 *)0x0) {
        FMemory::Free(puVar11);
      }
      return;
    }
    cVar4 = FUN_142f4ff30(puVar9,param_2);
    if (cVar4 != '\0') {
      if ((((puVar9 != puVar10) &&
           (iVar6 = (int)(((longlong)puVar9 - (longlong)puVar11) / 0x30), -1 < iVar6)) &&
          (iVar6 < *(int *)(param_1 + 0x720))) &&
         (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x718) + (longlong)iVar6 * 8), lVar3 != 0))
      {
        cVar4 = FUN_142f63b10(param_2);
        if (cVar4 != '\0') {
          uVar5 = FUN_142f5f490(param_2);
        }
        FUN_140ff74c0(param_1,local_a8,uVar5,param_3);
        FUN_140fe5830(local_88,param_2,local_a8,9);
        FUN_141011d90(lVar3,local_88);
        local_68 = &PTR_FUN_1441d26b8;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          puVar11 = local_b8;
          if ((int)lVar3 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)local_80 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            puVar11 = local_b8;
            if (iVar6 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
              puVar11 = local_b8;
            }
          }
        }
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a0 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          puVar11 = local_b8;
          if ((int)lVar3 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar2 = (int *)((longlong)local_a0 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            puVar11 = local_b8;
            if (iVar6 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
              puVar11 = local_b8;
            }
          }
        }
      }
      goto LAB_1410066ca;
    }
    puVar9 = puVar9 + 6;
  } while( true );
}



// FUNCTION 141006720 FUN_141006720 body=1104 status=ok
// SIG undefined FUN_141006720(void)

void FUN_141006720(longlong param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 local_188 [8];
  longlong *local_180;
  char local_170;
  undefined **local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  undefined2 local_12f;
  undefined1 local_128 [8];
  longlong *local_120;
  char local_110;
  undefined **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined2 local_cf;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined **local_78;
  
  plVar10 = *(longlong **)(param_1 + 0x718);
  uVar8 = 0;
  plVar2 = plVar10 + *(int *)(param_1 + 0x720);
  if (plVar10 != plVar2) {
    do {
      lVar4 = *plVar10;
      if (((*(int *)(lVar4 + 0x224) == *(int *)(param_2 + 0x14) &&
           *(int *)(lVar4 + 0x228) == *(int *)(param_2 + 0x18)) &&
          *(int *)(lVar4 + 0x22c) == *(int *)(param_2 + 0x1c)) &&
          *(int *)(param_2 + 0x10) == *(int *)(lVar4 + 0x220)) {
        if (lVar4 != 0) {
          cVar7 = FUN_142f63b10(lVar4 + 0x1b8);
          if (cVar7 == '\0') {
            uVar9 = FUN_1404b03b0();
            FText::FText(local_128,uVar9);
            local_110 = 0;
            local_e8 = 0xffffffff;
            local_100 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_108 = (undefined **)&DAT_1441d2800;
            local_e0 = 0;
            uStack_d8 = 0;
            local_d0 = 0;
            uVar9 = FUN_1404b03b0();
            FText::operator=(local_128,uVar9);
            (**(code **)((longlong)local_108 + 0x10))();
            local_110 = '\0';
            uStack_d8 = 0;
            local_cf = 0;
          }
          else {
            FText::FText(local_128,lVar4 + 0x198);
            local_100 = *(undefined8 *)(lVar4 + 0x1c0);
            local_f8 = *(undefined8 *)(lVar4 + 0x1c8);
            uStack_f0 = *(undefined8 *)(lVar4 + 0x1d0);
            local_110 = *(char *)(lVar4 + 0x1b0);
            local_e8 = *(undefined8 *)(lVar4 + 0x1d8);
            local_e0 = *(undefined8 *)(lVar4 + 0x1e0);
            uStack_d8 = *(undefined8 *)(lVar4 + 0x1e8);
            local_d0 = *(undefined1 *)(lVar4 + 0x1f0);
            local_cf = *(undefined2 *)(lVar4 + 0x1f1);
            local_108 = (undefined **)&DAT_1441d2800;
          }
          bVar5 = false;
          if (local_110 == '\v') {
LAB_141006a3b:
            uVar9 = 0xc;
          }
          else {
            cVar7 = FUN_142f63b10(lVar4 + 0x1b8);
            if (cVar7 == '\0') {
              uVar9 = FUN_1404b03b0();
              FText::FText(local_188,uVar9);
              local_170 = 0;
              local_148 = 0xffffffff;
              local_160 = 0;
              local_158 = 0;
              uStack_150 = 0;
              local_168 = (undefined **)&DAT_1441d2800;
              local_140 = 0;
              uStack_138 = 0;
              local_130 = 0;
              uVar9 = FUN_1404b03b0();
              FText::operator=(local_188,uVar9);
              (*(code *)local_168[2])();
              local_170 = '\0';
              uStack_138 = 0;
              local_12f = 0;
            }
            else {
              FText::FText(local_188,lVar4 + 0x198);
              local_160 = *(undefined8 *)(lVar4 + 0x1c0);
              local_158 = *(undefined8 *)(lVar4 + 0x1c8);
              uStack_150 = *(undefined8 *)(lVar4 + 0x1d0);
              local_170 = *(char *)(lVar4 + 0x1b0);
              local_148 = *(undefined8 *)(lVar4 + 0x1d8);
              local_140 = *(undefined8 *)(lVar4 + 0x1e0);
              uStack_138 = *(undefined8 *)(lVar4 + 0x1e8);
              local_130 = *(undefined1 *)(lVar4 + 0x1f0);
              local_12f = *(undefined2 *)(lVar4 + 0x1f1);
              local_168 = (undefined **)&DAT_1441d2800;
            }
            bVar5 = true;
            uVar9 = 4;
            if (local_170 == '\n') goto LAB_141006a3b;
          }
          if ((bVar5) && (local_168 = &PTR_FUN_1441d26b8, local_180 != (longlong *)0x0)) {
            LOCK();
            plVar2 = local_180 + 1;
            lVar6 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_180)(local_180);
              LOCK();
              piVar1 = (int *)((longlong)local_180 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_180 + 8))(local_180,1);
              }
            }
          }
          local_108 = &PTR_FUN_1441d26b8;
          if (local_120 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_120 + 1;
            lVar6 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_120)(local_120);
              LOCK();
              piVar1 = (int *)((longlong)local_120 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_120 + 8))(local_120,1);
              }
            }
          }
          cVar7 = FUN_142f63b10(param_2);
          if (cVar7 != '\0') {
            uVar8 = FUN_142f5f490(param_2);
          }
          FUN_140ff74c0(param_1,local_c8,uVar8,param_3);
          FUN_140fe5830(local_98,param_2,local_c8,uVar9);
          FUN_141011d90(lVar4,local_98);
          local_78 = &PTR_FUN_1441d26b8;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_90 + 1;
            lVar4 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
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
          goto joined_r0x000141006b65;
        }
        break;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar2);
  }
  cVar7 = FUN_142f63b10(param_2);
  if (cVar7 != '\0') {
    uVar8 = FUN_142f5f490(param_2);
  }
  FUN_140ff74c0(param_1,local_b0,uVar8,param_3);
  local_c0 = local_a8;
joined_r0x000141006b65:
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c0 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 141006b70 FUN_141006b70 body=506 status=ok
// SIG undefined FUN_141006b70(void)

void FUN_141006b70(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined **local_68;
  undefined1 local_30;
  
  uVar5 = 0;
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  FUN_140ff7300(param_1,&local_b8,0);
  puVar11 = local_b8;
  puVar10 = local_b8 + (longlong)(int)(uint)local_b0 * 6;
  puVar9 = local_b8;
  do {
    if (puVar9 == puVar10) {
LAB_141006d22:
      uVar8 = local_b0 & 0xffffffff;
      puVar9 = puVar11;
      uVar7 = (uint)local_b0;
      while (uVar7 != 0) {
        *puVar9 = &PTR_FUN_1441d26b8;
        puVar9 = puVar9 + 6;
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar7;
      }
      if (puVar11 != (undefined8 *)0x0) {
        FMemory::Free(puVar11);
      }
      return;
    }
    cVar4 = FUN_142f4ff30(puVar9,param_2);
    if (cVar4 != '\0') {
      if ((((puVar9 != puVar10) &&
           (iVar6 = (int)(((longlong)puVar9 - (longlong)puVar11) / 0x30), -1 < iVar6)) &&
          (iVar6 < *(int *)(param_1 + 0x720))) &&
         (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x718) + (longlong)iVar6 * 8), lVar3 != 0))
      {
        cVar4 = FUN_142f63b10(param_2);
        if (cVar4 != '\0') {
          uVar5 = FUN_142f5f490(param_2);
        }
        FUN_140ff74c0(param_1,local_a8,uVar5,param_3);
        FUN_140fe5830(local_88,param_2,local_a8,1);
        local_30 = 1;
        FUN_141011d90(lVar3,local_88);
        local_68 = &PTR_FUN_1441d26b8;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          puVar11 = local_b8;
          if ((int)lVar3 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)local_80 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            puVar11 = local_b8;
            if (iVar6 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
              puVar11 = local_b8;
            }
          }
        }
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a0 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          puVar11 = local_b8;
          if ((int)lVar3 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar2 = (int *)((longlong)local_a0 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            puVar11 = local_b8;
            if (iVar6 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
              puVar11 = local_b8;
            }
          }
        }
      }
      goto LAB_141006d22;
    }
    puVar9 = puVar9 + 6;
  } while( true );
}



// FUNCTION 141006d70 FUN_141006d70 body=240 status=ok
// SIG undefined FUN_141006d70(void)

void FUN_141006d70(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x280));
  lVar3 = *(longlong *)(param_1 + 0x270);
  plVar5 = (longlong *)0x0;
  if (lVar3 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x278);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x280));
  if (lVar3 == 0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x68))(plVar5,local_28);
    cVar4 = FText::EqualTo(param_1 + 0x298,local_28,0);
    if (cVar4 == '\0') {
      FText::operator=(param_1 + 0x298,local_28);
      FUN_14101dd20(param_1);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
  }
  return;
}



// FUNCTION 141006e60 FUN_141006e60 body=254 status=ok
// SIG undefined FUN_141006e60(void)

void FUN_141006e60(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar1 = param_1 + 0x58c;
  lVar5 = FWeakObjectPtr::Get(lVar1);
  if (lVar5 == 0) {
LAB_141006ec7:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_141006ec7;
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar6 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_141006f11;
  }
  lVar6 = 0;
LAB_141006f11:
  cVar3 = FUN_1411fbc40(lVar6,lVar5,param_2);
  uVar8 = FWeakObjectPtr::Get(lVar1);
  cVar4 = UGameplayStatics::IsGamePaused(uVar8);
  if (cVar3 != cVar4) {
    uVar8 = FWeakObjectPtr::Get(lVar1);
    thunk_FUN_14245e740(uVar8,cVar3);
  }
  return;
}



// FUNCTION 141006f60 FUN_141006f60 body=44 status=ok
// SIG undefined FUN_141006f60(void)

void FUN_141006f60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x720);
  plVar1 = plVar2 + *(int *)(param_1 + 0x728);
  if (plVar2 == plVar1) {
    return;
  }
  do {
    if (*plVar2 == param_2) {
      FUN_14101d2f0();
      return;
    }
    plVar2 = plVar2 + 1;
  } while (plVar2 != plVar1);
  return;
}



// FUNCTION 141006f90 FUN_141006f90 body=128 status=ok
// SIG undefined FUN_141006f90(void)

void FUN_141006f90(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_140e914d0();
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0xf0) + 0x170);
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    }
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0xf8) + 0x170);
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    }
    if (*(longlong *)(param_1 + 0x100) != 0) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x100) + 0x170);
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 141007010 FUN_141007010 body=368 status=ok
// SIG undefined FUN_141007010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141007010(undefined8 param_1,undefined4 param_2)

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
  uVar3 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_c8 = param_1;
  uStack_c0 = param_2;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar2 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar2 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(puVar2 + 2) = uStack_c0;
    *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_bc;
  }
  local_b8[0] = thunk_FUN_140fedb40;
  cVar1 = FUN_142ebdc00(param_1);
  if ((cVar1 == '\0') || (cVar1 = FUN_142eba870(param_1), cVar1 != '\0')) {
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
  }
  else {
    uVar3 = FUN_1420849a0(param_1,local_68,local_b8);
    FUN_14208d480(param_1,uVar3);
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
    FUN_142eb05b0(param_1);
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
  return;
}



// FUNCTION 141007180 FUN_141007180 body=152 status=ok
// SIG undefined FUN_141007180(void)

void FUN_141007180(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x300) = 0xffffffff;
  if (lVar4 != 0) {
    lVar3 = UGSquadMemberWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = FUN_140eccca0(lVar4);
      if ((lVar4 != 0) && (*(longlong **)(lVar4 + 0x10d8) != (longlong *)0x0)) {
        uVar2 = (**(code **)(**(longlong **)(lVar4 + 0x10d8) + 0x408))();
        *(undefined4 *)(param_1 + 0x300) = uVar2;
      }
    }
  }
  FUN_140ff17c0(param_1);
  FUN_14101d6f0(param_1);
  return;
}



// FUNCTION 141007230 FUN_141007230 body=132 status=ok
// SIG undefined FUN_141007230(void)

void FUN_141007230(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_140ff6aa0(param_1,*(undefined8 *)(param_3 + 0x20));
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x650));
  if (((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x648))) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x640) + 8 + (longlong)iVar2 * 0x10), lVar1 != 0
     )) {
    FUN_14101c400(param_1,lVar1,param_3 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x0001410072ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x650));
  return;
}



// FUNCTION 1410072d0 FUN_1410072d0 body=350 status=ok
// SIG undefined FUN_1410072d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410072d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  local_d8[0] = &LAB_140ff1de0;
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



// FUNCTION 141007430 FUN_141007430 body=317 status=ok
// SIG undefined FUN_141007430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141007430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_142ecb050();
  FWeakObjectPtr::operator=(&local_a8,param_3);
  FWeakObjectPtr::operator=(&local_b0,param_2);
  FWeakObjectPtr::operator=(&local_b8,param_1);
  local_68 = (longlong *)0x0;
  local_58 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x28,local_88);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b538;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_b8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_b4;
    *(undefined4 *)(puVar1 + 3) = local_b0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_ac;
    *(undefined4 *)(puVar1 + 4) = local_a8;
    *(undefined4 *)((longlong)puVar1 + 0x24) = local_a4;
  }
  local_98[0] = &LAB_140ff1d70;
  FUN_14208c260(param_1,local_98);
  if (local_58 != 0) {
    plVar2 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar2 = local_68;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141007570 FUN_141007570 body=313 status=ok
// SIG undefined FUN_141007570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141007570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FUN_142ecb050();
  FWeakObjectPtr::operator=(&local_d8,param_3);
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_d8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_d4;
  }
  local_c8[0] = &LAB_140ff1b20;
  uVar2 = FUN_1420849a0(param_1,local_78,local_c8);
  FUN_14208c260(param_1,uVar2);
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
  return;
}



// FUNCTION 1410076b0 FUN_1410076b0 body=52 status=ok
// SIG undefined FUN_1410076b0(void)

void FUN_1410076b0(longlong param_1)

{
  FUN_1410172a0(param_1,7);
  if (*(longlong *)(param_1 + 0x638) != 0) {
    FUN_142ed2e60(*(longlong *)(param_1 + 0x638),0x3f800000);
    return;
  }
  return;
}



// FUNCTION 1410076f0 FUN_1410076f0 body=82 status=ok
// SIG undefined FUN_1410076f0(void)

void FUN_1410076f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x6e8);
  local_18 = lVar1;
  if (lVar1 == 0) {
    local_10 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
  }
  FUN_142ed36d0(param_1,&local_18,0);
  return;
}



// FUNCTION 141007750 FUN_141007750 body=745 status=ok
// SIG undefined FUN_141007750(void)

void FUN_141007750(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  undefined2 *puVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined1 local_res8 [8];
  longlong *local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x58c);
  lVar11 = 0;
  if (lVar6 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1410077ba;
  }
  lVar6 = lVar11;
LAB_1410077ba:
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x594);
  lVar7 = lVar11;
  if (lVar8 != 0) {
    lVar9 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar7 = FUN_1414002f0(lVar8);
    }
  }
  if (((lVar6 != 0) && (1 < *(int *)(param_3 + 1))) && (lVar7 != 0)) {
    lVar8 = *(longlong *)(lVar7 + 0x1110);
    if (*(int *)(lVar6 + 0x18b0) != *(int *)(lVar6 + 0x18dc)) {
      lVar9 = *(longlong *)(lVar6 + 0x18e8);
      if (*(longlong *)(lVar6 + 0x18e8) == 0) {
        lVar9 = lVar6 + 0x18e0;
      }
      iVar5 = *(int *)(lVar9 + ((longlong)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8) &
                               (longlong)*(int *)(lVar6 + 0x18f0) - 1U) * 4);
      if (iVar5 != -1) {
        lVar9 = *(longlong *)(lVar6 + 0x18a8);
        do {
          lVar14 = (longlong)iVar5 * 0x20;
          if (*(longlong *)(lVar14 + lVar9) == lVar8) {
            if (((iVar5 != -1) && (lVar9 = (longlong)iVar5 * 0x20 + lVar9, lVar9 != 0)) &&
               ((undefined8 *)(lVar9 + 8) != (undefined8 *)0x0)) {
              puVar13 = &DAT_143f3eda8;
              if (*(int *)(param_3 + 1) == 0) {
                puVar15 = &DAT_143f3eda8;
              }
              else {
                puVar15 = (undefined2 *)*param_3;
              }
              if (*(int *)(lVar9 + 0x10) != 0) {
                puVar13 = *(undefined2 **)(lVar9 + 8);
              }
              iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar15);
              if (iVar5 == 0) goto LAB_1410079ec;
            }
            break;
          }
          iVar5 = *(int *)(lVar14 + 0x18 + lVar9);
        } while (iVar5 != -1);
      }
    }
    local_68 = (longlong *)(lVar7 + 0x1110);
    local_60 = param_3;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_&&,FString_const_&>_>
              ((longlong *)(lVar6 + 0x18a8),local_res8,&local_68,0);
    lVar6 = FUN_140cff1b0(lVar6);
    if (lVar6 != 0) {
      uVar10 = FText::FromString(local_48,param_3);
      bVar3 = false;
      *(int *)(lVar6 + 0x7bc) = *(int *)(lVar6 + 0x7bc) + 1;
      iVar5 = *(int *)(lVar6 + 0x7bc);
      iVar12 = *(int *)(lVar6 + 0x7b0) + -1;
      lVar7 = (longlong)iVar12;
      if (-1 < iVar12) {
        lVar8 = lVar7 << 4;
        bVar3 = false;
        do {
          lVar9 = *(longlong *)(lVar6 + 0x7a8);
          if (((*(int *)(lVar8 + 8 + lVar9) == 0) ||
              (plVar2 = *(longlong **)(lVar8 + lVar9), plVar2 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,uVar10), cVar4 == '\0')) {
            bVar3 = true;
          }
          lVar8 = lVar8 + -0x10;
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
        iVar5 = *(int *)(lVar6 + 0x7bc);
      }
      *(int *)(lVar6 + 0x7bc) = iVar5 + -1;
      if (bVar3) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar6 + 0x7a8),0)
        ;
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
LAB_1410079ec:
  lVar6 = *(longlong *)(param_1 + 0x6e8);
  local_58 = lVar6;
  if (lVar6 != 0) {
    uVar10 = UBlendableInterface::GetPrivateStaticClass();
    lVar11 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar10);
  }
  local_50 = lVar11;
  FUN_142ed36d0(param_1,&local_58,0);
  return;
}



// FUNCTION 141007a40 HandleTargetDestroyed body=7 status=ok
// SIG undefined HandleTargetDestroyed(void)

void AConGaTrongCharacter::HandleTargetDestroyed(undefined8 param_1)

{
  FUN_141012490(param_1,0);
  return;
}



// FUNCTION 141007a60 FUN_141007a60 body=91 status=ok
// SIG undefined FUN_141007a60(void)

void FUN_141007a60(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 local_18 [16];
  
  lVar1 = FUN_140f67a80();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_18);
    *(float *)((longlong)param_1 + 0x30c) = *(float *)(lVar1 + 8) - *(float *)(param_2 + 8);
    return;
  }
  FUN_140f8ef10(param_1,param_2);
  return;
}



// FUNCTION 141007af0 FUN_141007af0 body=243 status=ok
// SIG undefined FUN_141007af0(void)

void FUN_141007af0(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 local_res8;
  
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (lVar5 != 0) {
    lVar4 = UGSquadMemberWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (lVar5 = FUN_140eccca0(lVar5), lVar5 != 0)) &&
       (lVar5 = *(longlong *)(lVar5 + 0x10d8), lVar5 != 0)) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnOwningPlayerLevelChanged",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      FUN_14074ba20(lVar5 + 0x1b0,param_1,FUN_141007180,local_res8);
    }
  }
  FUN_141007180(param_1,0,0);
  return;
}



// FUNCTION 141007bf0 FUN_141007bf0 body=475 status=ok
// SIG undefined FUN_141007bf0(void)

void FUN_141007bf0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1[0x139] == 0) {
    return;
  }
  cVar5 = (*(code *)**(undefined8 **)*param_2)();
  if (cVar5 == '\0') {
    return;
  }
  lVar6 = FUN_140fe3ca0(param_1);
  if (lVar6 == 0) {
    return;
  }
  local_58 = param_1[0x139];
  local_50 = (longlong *)param_1[0x13a];
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  FUN_140d84620(*(longlong *)(lVar6 + 0x478) + 0x1f8,&local_48,&local_58);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_50)(local_50);
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
  if ((local_48 == (longlong *)0x0) || (lVar7 = (**(code **)(*local_48 + 0x10))(), lVar7 == 0)) {
    local_38 = param_1[0x139];
    local_30 = param_1[0x13a];
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    lVar6 = FUN_1411e5cb0(lVar6,&local_38,&local_18,&local_28);
    if (lVar6 == 0) goto LAB_141007d7a;
    FUN_141019520(param_1);
    (**(code **)(*param_1 + 0x2a0))(param_1,param_1 + 0x133,lVar6);
  }
  else {
    FUN_141019520(param_1);
    lVar6 = *param_1;
    uVar8 = (**(code **)(*local_48 + 0x10))();
    (**(code **)(lVar6 + 0x2a0))(param_1,param_1 + 0x133,uVar8);
  }
  FUN_140ff0ce0(param_1);
LAB_141007d7a:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
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
  return;
}



// FUNCTION 141007de0 FUN_141007de0 body=41 status=ok
// SIG undefined FUN_141007de0(void)

void FUN_141007de0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FUN_140e8f470();
  }
  FUN_141010a00(param_1,1);
  return;
}



// FUNCTION 141007e10 FUN_141007e10 body=70 status=ok
// SIG undefined FUN_141007e10(void)

void FUN_141007e10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FUN_140e8f250();
    if (*(char *)(param_1 + 0x6d8) != '\0') {
      FUN_140e91a60(*(undefined8 *)(param_1 + 0x6c8),*(undefined4 *)(param_1 + 0x6dc));
    }
  }
  FUN_141010a00(param_1,1);
  return;
}



// FUNCTION 141007e60 FUN_141007e60 body=1927 status=ok
// SIG undefined FUN_141007e60(void)

void FUN_141007e60(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong *local_res18;
  longlong local_128;
  longlong *plStack_120;
  longlong local_118;
  longlong *plStack_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8 [2];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  longlong local_88;
  longlong *plStack_80;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  plVar9 = (longlong *)0x0;
  plVar5 = (longlong *)FName::FName(local_b8,&DAT_14464a85c,1);
  if (param_3 != *plVar5) {
    return;
  }
  lVar7 = *param_1;
  *(undefined1 *)((longlong)param_1 + 0xc79) = 0;
  local_d8 = 0;
  local_d0 = 0;
  puVar6 = (undefined8 *)FName::FName(local_b0,L"QChange_Respec",1);
  (**(code **)(lVar7 + 0x4e8))(param_1,*puVar6,&local_d8);
  FUN_14138f990(param_1,6);
  local_res18 = (longlong *)FWeakObjectPtr::Get();
  if (local_res18 == (longlong *)0x0) {
LAB_141007f55:
    local_res18 = (longlong *)0x0;
    plVar5 = plVar9;
  }
  else {
    lVar7 = FUN_14145f370();
    if ((*(int *)(local_res18[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(local_res18[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (!bVar15) goto LAB_141007f55;
    plVar5 = (longlong *)local_res18[0x132];
  }
  plVar8 = plVar9;
  if (plVar5 != (longlong *)0x0) {
    local_a8 = AGFireballProjectile::GetPrivateStaticClass();
    plVar8 = (longlong *)(**(code **)(*plVar5 + 0x628))(plVar5,local_a8);
    plVar9 = (longlong *)(**(code **)(plVar5[0x1b0] + 0x18))();
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar7 = *(longlong *)(DAT_146b33f38 + 0x58);
  if ((plVar9 != (longlong *)0x0) && (lVar7 != 0)) {
    fVar2 = *(float *)(lVar7 + 0x540);
    iVar3 = FUN_142ff7c90(plVar9,*(undefined8 *)(lVar7 + 0x2c0));
    FUN_143011ec0(plVar9,(int)((float)iVar3 * fVar2),*(undefined8 *)(lVar7 + 0x2c0));
    FUN_141457010(plVar8);
    bVar15 = local_res18 == (longlong *)0x0;
    if (bVar15) {
      lVar7 = 0;
      plVar5 = &local_128;
      local_128 = 0;
      plStack_120 = (longlong *)0x0;
      lVar10 = lVar7;
    }
    else {
      lVar10 = (**(code **)(*local_res18 + 0x148))(local_res18);
      plVar5 = (longlong *)FUN_142dcf3a0(local_res18,local_a0);
      lVar7 = *plVar5;
    }
    plVar9 = (longlong *)plVar5[1];
    plVar5[1] = 0;
    *plVar5 = 0;
    plVar5 = plStack_120;
    if ((bVar15) && (plStack_120 != (longlong *)0x0)) {
      LOCK();
      plVar8 = plStack_120 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_120)();
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_120 + 8))(plStack_120,1);
        }
      }
    }
    if ((!bVar15) && (local_98 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_98 + 1;
      lVar11 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_98)();
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    if ((lVar10 == 0) || (lVar10 = *(longlong *)(lVar10 + 400), lVar10 == 0)) {
LAB_14100814c:
      lVar10 = 0;
    }
    else {
      lVar11 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if (!bVar15) goto LAB_14100814c;
    }
    if ((lVar7 != 0) && (lVar10 != 0)) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_88 = lVar7;
      plStack_80 = plVar9;
      uVar12 = FUN_140bb7440(lVar10);
      FUN_140d9f870(uVar12,&local_88,4);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)();
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
  uVar14 = 0;
  plVar5 = (longlong *)param_1[0x18d];
  uVar13 = (longlong)(int)param_1[0x18e] & 0x1fffffffffffffff;
  if (plVar5 + (int)param_1[0x18e] < plVar5) {
    uVar13 = uVar14;
  }
  local_e0 = uVar13;
  if (uVar13 != 0) {
    do {
      lVar7 = *plVar5;
      if (lVar7 != 0) {
        lVar10 = *(longlong *)(lVar7 + 400);
        lVar11 = param_1[0x185];
        *(int *)(lVar7 + 0x1a4) = (int)lVar11;
        if (((lVar10 != 0) && (*(char *)(lVar7 + 0x1a0) == '\0')) &&
           (*(longlong *)(lVar7 + 0x198) != 0)) {
          local_108 = *(undefined4 *)(lVar10 + 0x188);
          local_100 = *(undefined1 *)(lVar10 + 400);
          local_fc = *(undefined4 *)(lVar10 + 0x194);
          local_f8 = *(undefined4 *)(lVar10 + 0x198);
          local_f4 = *(undefined4 *)(lVar10 + 0x19c);
          local_f0 = *(undefined4 *)(lVar10 + 0x1a0);
          local_ec = *(undefined4 *)(lVar10 + 0x1a4);
          local_e8 = *(undefined4 *)(lVar10 + 0x1a8);
          local_e4 = *(undefined4 *)(lVar10 + 0x1ac);
          local_104 = (int)lVar11;
          FUN_142ef4ad0(lVar10,0,&local_108);
          uVar4 = FUN_1409aa850(*(undefined8 *)(lVar7 + 0x198));
          FString::PrintfImpl(local_c8,L"0 / %i",uVar4);
          lVar10 = **(longlong **)(lVar7 + 0x188);
          uVar12 = FText::FromString(local_58,local_c8);
          (**(code **)(lVar10 + 0x2b0))(*(undefined8 *)(lVar7 + 0x188),uVar12,1,0);
          plVar9 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_50 + 1;
            lVar10 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_50)(local_50);
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
          if (local_c8[0] != 0) {
            FMemory::Free();
          }
          *(undefined1 *)(lVar7 + 0x1a0) = 1;
          uVar13 = local_e0;
        }
      }
      plVar5 = plVar5 + 1;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar13);
  }
  *(int *)((longlong)param_1 + 0xc7c) = (int)param_1[0x185];
  lVar7 = FUN_140eac060(param_1);
  if (lVar7 != 0) {
    lVar10 = ALandscapeStreamingProxy::StaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (bVar15) {
      FUN_1414b6eb0(lVar7);
    }
  }
  bVar15 = local_res18 == (longlong *)0x0;
  if (bVar15) {
    lVar7 = 0;
    plVar5 = &local_118;
    local_118 = 0;
    plStack_110 = (longlong *)0x0;
    lVar10 = lVar7;
  }
  else {
    lVar10 = (**(code **)(*local_res18 + 0x148))(local_res18);
    plVar5 = (longlong *)FUN_142dcf3a0(local_res18,local_78);
    lVar7 = *plVar5;
  }
  plVar9 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_110;
  if ((bVar15) && (plStack_110 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_110 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_110 + 8))(plStack_110,1);
      }
    }
  }
  if ((!bVar15) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_70 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if ((lVar10 != 0) && (lVar10 = *(longlong *)(lVar10 + 400), lVar10 != 0)) {
    lVar11 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (bVar15) goto LAB_141008524;
  }
  lVar10 = 0;
LAB_141008524:
  if ((lVar7 != 0) && (lVar10 != 0)) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_68 = lVar7;
    plStack_60 = plVar9;
    uVar12 = FUN_140bb7440(lVar10);
    FUN_140d9f870(uVar12,&local_68,4);
  }
  if (DAT_14686ad35 == '\0') {
    FUN_140bfdec0(&DAT_14686ad34);
    DAT_14686ad35 = '\x01';
  }
  FUN_140c256b0(&DAT_14686ad34,param_1);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar9 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return;
}



// FUNCTION 141008600 FUN_141008600 body=570 status=ok
// SIG undefined FUN_141008600(void)

void FUN_141008600(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong local_88;
  longlong local_80;
  longlong local_78 [2];
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  lVar10 = 0;
  lVar13 = 0;
  uVar6 = FText::FromString(local_58,param_3);
  cVar4 = FText::IsEmptyOrWhitespace(uVar6);
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
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (cVar4 != '\0') goto LAB_1410087e5;
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar7 == 0) {
LAB_14100871c:
    lVar7 = 0;
LAB_14100871f:
    bVar3 = false;
  }
  else {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14100871c;
    lVar13 = lVar10;
    if (*(int *)(param_3 + 1) < 2) goto LAB_14100871f;
    lVar13 = 1;
    puVar9 = (undefined8 *)FUN_140cffa80(lVar7,local_78);
    puVar11 = &DAT_143f3eda8;
    if (*(int *)(param_3 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*param_3;
    }
    if (*(int *)(puVar9 + 1) != 0) {
      puVar11 = (undefined2 *)*puVar9;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
    if (iVar5 == 0) goto LAB_14100871f;
    bVar3 = true;
  }
  if ((lVar13 != 0) && (local_78[0] != 0)) {
    FMemory::Free();
  }
  if (bVar3) {
    uVar6 = FString::FString(local_68,param_3);
    FUN_140d13f20(lVar7,uVar6);
    lVar13 = FUN_140eac060(param_1);
    if (lVar13 != 0) {
      lVar7 = ALandscapeStreamingProxy::StaticClass();
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar6 = FText::FromString(local_40,param_3);
        FUN_1414b6ef0(lVar13,uVar6);
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)local_38 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_38 + 8))(local_38,1);
            }
          }
        }
      }
    }
  }
LAB_1410087e5:
  lVar13 = *(longlong *)(param_1 + 0x6e8);
  local_88 = lVar13;
  if (lVar13 != 0) {
    uVar6 = UBlendableInterface::GetPrivateStaticClass();
    lVar10 = UObjectBaseUtility::GetInterfaceAddress(lVar13,uVar6);
  }
  local_80 = lVar10;
  FUN_142ed36d0(param_1,&local_88,0);
  return;
}



// FUNCTION 141008840 FUN_141008840 body=184 status=ok
// SIG undefined FUN_141008840(void)

void FUN_141008840(longlong param_1,float param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar2 = *(int *)(param_1 + 0x6dc) - 1;
  uVar5 = uVar2;
  if ((int)uVar2 < 1) {
    uVar5 = 0;
  }
  uVar2 = (uint)((float)(int)uVar2 * (1.0 - param_2));
  uVar6 = uVar7;
  if ((-1 < (int)uVar2) && (uVar6 = (ulonglong)uVar5, (int)uVar2 < (int)uVar5)) {
    uVar6 = (ulonglong)uVar2;
  }
  *(int *)(param_1 + 0x6d8) = (int)uVar6;
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar3 != 0) {
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
    if (bVar1) {
      uVar7 = *(ulonglong *)(lVar3 + 0x5b8);
    }
  }
  FUN_140ff3350(param_1,uVar7);
  return;
}



// FUNCTION 141008900 FUN_141008900 body=573 status=ok
// SIG undefined FUN_141008900(void)

void FUN_141008900(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_141008b40();
  if (param_2 != 0) {
    lVar3 = FUN_14138e2b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar3 = *(longlong *)(param_2 + 0x308), lVar3 != 0)) {
      lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14100899c;
    }
  }
  lVar3 = 0;
LAB_14100899c:
  lVar4 = FUN_140eac060(param_1);
  if (lVar4 != 0) {
    lVar5 = ALandscapeStreamingProxy::StaticClass();
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
      cVar1 = *(char *)(param_1 + 0x6c8);
      if (cVar1 == '\x01') {
        FUN_1414b6d20(lVar4,lVar3);
      }
      else if (cVar1 == '\x02') {
        FUN_1414b6de0(lVar4,lVar3);
      }
      else {
        if (cVar1 == '\x03') {
          FUN_1414b6e20(lVar4,lVar3);
          if (DAT_14686b371 == '\0') {
            FUN_140bfbc60(&DAT_14686b370);
            DAT_14686b371 = '\x01';
          }
          FUN_140c05000(&DAT_14686b370,param_1,lVar3);
          lVar4 = FUN_140f578e0(param_1);
          lVar3 = 0;
          if (lVar4 != 0) {
            lVar3 = *(longlong *)(lVar4 + 0x2a60);
          }
          if (lVar3 == 0) {
            return;
          }
          local_28 = 0;
          local_18 = 0;
          puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_48);
          if (puVar6 != (undefined8 *)0x0) {
            local_68 = (undefined4)param_1;
            uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
            uStack_60 = (undefined4)lVar3;
            uStack_5c = (undefined4)((ulonglong)lVar3 >> 0x20);
            *puVar6 = &PTR_FUN_143f77c18;
            *(undefined4 *)(puVar6 + 1) = local_68;
            *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_64;
            *(undefined4 *)(puVar6 + 2) = uStack_60;
            *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_5c;
          }
          local_58[0] = &LAB_140ff1b30;
          FUN_14204c280(local_58);
          return;
        }
        if (cVar1 == '\x05') {
          FUN_1414b6da0(lVar4,lVar3);
        }
        else {
          if (cVar1 != '\x06') {
            return;
          }
          FUN_1414b6d60(lVar4,lVar3);
        }
      }
      if (DAT_14686b371 == '\0') {
        FUN_140bfbc60(&DAT_14686b370);
        DAT_14686b371 = '\x01';
      }
      FUN_140c05000(&DAT_14686b370,param_1,lVar3);
    }
  }
  return;
}



// FUNCTION 141008b40 FUN_141008b40 body=442 status=ok
// SIG undefined FUN_141008b40(void)

void FUN_141008b40(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  longlong local_18;
  longlong local_10;
  
  if (param_2 == 0) goto LAB_141008cb5;
  lVar3 = FUN_14138e2b0();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) || (lVar3 = *(longlong *)(param_2 + 0x308), lVar3 == 0)) goto LAB_141008cb5;
  lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
  lVar5 = *(longlong *)(lVar3 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) || (param_1[0xde] == 0)) goto LAB_141008cb5;
  cVar1 = (char)param_1[0xd9];
  if (cVar1 == '\x01') {
    uVar7 = 2;
LAB_141008c39:
    FUN_141012290(param_1,param_2,lVar3,uVar7);
  }
  else {
    if (cVar1 == '\x02') {
      uVar7 = 1;
      goto LAB_141008c39;
    }
    if (cVar1 == '\x03') {
      uVar7 = 0;
      goto LAB_141008c39;
    }
    if (cVar1 == '\x05') {
      FUN_14138f990(param_1,CONCAT71((int7)((ulonglong)lVar5 >> 8),3));
      FUN_140ff40b0(param_1,lVar3);
    }
    else if (cVar1 == '\x06') {
      uVar7 = 5;
      goto LAB_141008c39;
    }
  }
  local_18 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (local_18 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(local_18 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_18 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_10 = lVar3;
      AlgoImpl::
      IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
                (param_1[0xe9],(longlong)(int)param_1[0xea],local_res8[0],&local_18);
    }
  }
LAB_141008cb5:
  lVar3 = *param_1;
  local_18 = 0;
  local_10 = 0;
  puVar6 = (undefined8 *)FName::FName(local_res8,L"Confirm",1);
  (**(code **)(lVar3 + 0x4e8))(param_1,*puVar6,&local_18);
  return;
}



// FUNCTION 141008d00 FUN_141008d00 body=142 status=ok
// SIG undefined FUN_141008d00(void)

void FUN_141008d00(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    local_68 = (undefined4)param_1;
    uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack_60 = (undefined4)param_2;
    uStack_5c = (undefined4)((ulonglong)param_2 >> 0x20);
    *puVar1 = &PTR_FUN_14465fbc8;
    *(undefined4 *)(puVar1 + 1) = local_68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
    *(undefined4 *)(puVar1 + 2) = uStack_60;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_5c;
    *(undefined4 *)(puVar1 + 3) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_resc;
  }
  local_58[0] = &LAB_140ff19c0;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 141008da0 FUN_141008da0 body=516 status=ok
// SIG undefined FUN_141008da0(void)

void FUN_141008da0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_2 == 0) {
    return;
  }
  lVar2 = FUN_141387af0();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  fVar3 = (float)FUN_1427fe4c0(param_2);
  fVar5 = *(float *)(param_2 + 0x3b8) - *(float *)(param_2 + 0x3b4);
  if (1e-08 < ABS(fVar5)) {
    fVar4 = 0.0;
    fVar5 = (fVar3 - *(float *)(param_2 + 0x3b4)) / fVar5;
    if (fVar5 < 0.0) goto LAB_141008e5b;
  }
  else if (fVar3 < *(float *)(param_2 + 0x3b8)) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = 1.0;
  }
  fVar4 = fVar5;
  if (1.0 <= fVar5) {
    fVar4 = 1.0;
  }
LAB_141008e5b:
  lVar2 = *(longlong *)(param_1 + 0x6c8);
  fVar3 = (*(float *)(param_2 + 0x3c0) - *(float *)(param_2 + 0x3bc)) * fVar4 +
          *(float *)(param_2 + 0x3bc);
  if (lVar2 != 0) {
    switch(*(undefined1 *)(param_2 + 0x3b0)) {
    case 1:
      FUN_140e90c70(lVar2,fVar3);
      return;
    case 2:
      FUN_140e91b90(lVar2,fVar3);
      return;
    case 4:
      FUN_140e90f20(lVar2,fVar3);
      return;
    case 5:
      FUN_140e90f90(lVar2,fVar3);
      return;
    case 6:
      FUN_140e90ac0(lVar2,fVar3);
      return;
    case 7:
      FUN_140e90a20(lVar2,fVar3);
      return;
    case 8:
      FUN_140e91670(lVar2,fVar3);
      return;
    case 9:
      FUN_140e91190(lVar2,fVar3);
      return;
    case 10:
      FUN_140e910d0(lVar2,fVar3);
      return;
    case 0xb:
      FUN_140e91a60(lVar2,fVar3);
      return;
    case 0xd:
      FUN_140e91250(lVar2,fVar3);
      return;
    case 0xf:
      FUN_140e90eb0(lVar2,fVar3);
      return;
    case 0x10:
      FUN_140e91c30(lVar2,fVar3);
      return;
    case 0x11:
      FUN_140e91bc0(lVar2,fVar3);
    }
  }
  return;
}



// FUNCTION 141009020 FUN_141009020 body=325 status=ok
// SIG undefined FUN_141009020(void)

void FUN_141009020(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    lVar5 = FUN_141387a40();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar1 = *(char *)(param_2 + 0x370);
      if (cVar1 == '\f') {
        lVar5 = *(longlong *)(param_1 + 0x680);
        iVar3 = FUN_142eb62f0(param_2);
        (**(code **)(lVar5 + 0xb8))(param_1 + 0x680,iVar3 == 1);
      }
      else {
        if (cVar1 == '\x0e') {
          lVar5 = *(longlong *)(param_1 + 0x680);
          uVar4 = FUN_142eb62f0(param_2);
                    /* WARNING: Could not recover jumptable at 0x000141009130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x78))(param_1 + 0x680,uVar4);
          return;
        }
        if (cVar1 == '\x12') {
          lVar5 = *(longlong *)(param_1 + 0x680);
          iVar3 = FUN_142eb62f0(param_2);
                    /* WARNING: Could not recover jumptable at 0x000141009102. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x110))(param_1 + 0x680,iVar3 == 1);
          return;
        }
        if (cVar1 == '\x13') {
          lVar5 = *(longlong *)(param_1 + 0x680);
          iVar3 = FUN_142eb62f0(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001410090cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x118))(param_1 + 0x680,iVar3 == 1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 141009170 FUN_141009170 body=984 status=ok
// SIG undefined FUN_141009170(void)

void FUN_141009170(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecbc80();
  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,local_58,L"modalTitle");
  FUN_142ede260(param_1 + 0xd8,uVar5);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,local_48,L"modalText");
  FUN_142ede260(param_1 + 0xdb,uVar5);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x4a8))(param_1,local_38,L"splashContainer");
  param_1[0xe1] = *plVar6;
  plVar6 = (longlong *)plVar6[1];
  plVar7 = (longlong *)param_1[0xe2];
  if (plVar6 != plVar7) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar7 = (longlong *)param_1[0xe2];
    }
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
    param_1[0xe2] = (longlong)plVar6;
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  (**(code **)(*param_1 + 0x4a8))(param_1,&local_68,L"buttonContainer");
  plVar6 = local_60;
  if (local_68 != 0) {
    param_1[0xe5] = local_68;
    plVar7 = (longlong *)param_1[0xe6];
    if (local_60 != plVar7) {
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_60 + 0xc) = *(int *)((longlong)local_60 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)param_1[0xe6];
      }
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
      param_1[0xe6] = (longlong)plVar6;
    }
    uVar5 = FUN_1420392d0(local_68,local_28,L"waitText");
    FUN_142ede260(param_1 + 0xde,uVar5);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_20)();
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
    if ((param_1[0xdf] != 0) && (param_1[0xe0] != 0)) {
      piVar1 = (int *)(param_1[0xe0] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0xde,param_1 + 0xd0,1,0);
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  (**(code **)(*param_1 + 0x4a8))(param_1,&local_78,L"windowBG.inner");
  plVar6 = local_70;
  if (local_78 != 0) {
    param_1[0xe3] = local_78;
    plVar7 = (longlong *)param_1[0xe4];
    if (local_70 != plVar7) {
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)param_1[0xe4];
      }
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
      param_1[0xe4] = (longlong)plVar6;
    }
    plVar6 = (longlong *)FUN_14203c1b0(local_78,local_res8);
    lVar2 = *plVar6;
    param_1[0xd7] = lVar2;
    *(float *)(param_1 + 0xd7) = *(float *)((longlong)param_1 + 0x6b4) + (float)lVar2;
    *(float *)((longlong)param_1 + 0x6bc) =
         *(float *)((longlong)param_1 + 0x6b4) + *(float *)((longlong)param_1 + 0x6bc);
    FUN_142053150(local_78,param_1[0xd7]);
    cVar3 = FUN_142ebe120(param_1);
    if (cVar3 != '\0') {
      FUN_142056670(local_78,0);
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_70 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 141009550 FUN_141009550 body=1168 status=ok
// SIG undefined FUN_141009550(void)

void FUN_141009550(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 uVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  int iVar10;
  wchar_t *pwVar11;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
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
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  FUN_140efe5e0();
  pwVar4 = (wchar_t *)FUN_1420fc090(param_1);
  pwVar9 = (wchar_t *)0x0;
  pwVar6 = pwVar9;
  pwVar11 = pwVar9;
  if (pwVar4 != (wchar_t *)0x0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pwVar4 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar4 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pwVar6 = (wchar_t *)FUN_140cff1b0(pwVar4);
      pwVar11 = pwVar4;
    }
  }
  local_c8 = 0;
  local_c0 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"missionTitleText",0x22);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  local_res10 = 0;
  lVar5 = FUN_140ac4770(param_1,&local_c8,0,6,&local_d8);
  param_1[0xb7] = lVar5;
  plVar8 = local_d8;
  for (iVar10 = (int)local_d0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"messageText",0x18);
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  local_res18 = 0;
  lVar5 = FUN_140ac4770(param_1,&local_a8,0,6,&local_b8);
  param_1[0xb8] = lVar5;
  plVar8 = local_b8;
  for (iVar10 = (int)local_b0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0xb8] != (longlong *)0x0) {
    lVar5 = *(longlong *)param_1[0xb8];
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"NEW MISSION",L"NewMissionNotificaitonWidget",L"NewMissionText");
    (**(code **)(lVar5 + 0x2b0))(param_1[0xb8],uVar7,1,0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  local_88 = 0;
  local_80 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"holdToTrackHint",0x20);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  lVar5 = FUN_140f139f0(param_1,&local_88,0,6,&local_98);
  param_1[0xb9] = lVar5;
  plVar8 = local_98;
  for (iVar10 = (int)local_90; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (param_1[0xb9] != 0) {
    plVar8 = (longlong *)(param_1[0xb9] + 0x308);
    (**(code **)(*plVar8 + 0x10))(plVar8,0,pwVar11);
  }
  local_68 = 0;
  local_60 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"holdToTrackBackground",0x2c);
  local_78 = (longlong *)0x0;
  local_70 = 0;
  lVar5 = FUN_140e96f30(param_1,&local_68,0,6,&local_78);
  param_1[0xba] = lVar5;
  plVar8 = local_78;
  for (iVar10 = (int)local_70; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (((param_1[0xaa] != 0) && (pwVar6 != (wchar_t *)0x0)) &&
     (*(char *)((longlong)param_1 + 0x5d9) != '\0')) {
    pwVar4 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxNewMissionNotificationWidget::OnInputDeviceChanged",L"::");
    pwVar11 = pwVar9;
    while (pwVar3 = pwVar4, pwVar3 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar11 = pwVar3;
    }
    FName::FName(&local_res8,pwVar11 + 2,1);
    FUN_14074ba20(pwVar6 + 0x2fc,param_1,&LAB_140fefd70,local_res8);
    FUN_140ff0fa0(param_1);
  }
  if ((char)param_1[0xbb] != '\0') {
    *(undefined1 *)(param_1 + 0xbb) = 0;
    pwVar6 = pwVar9;
    if (param_1[0xb6] != 0) {
      pwVar4 = (wchar_t *)FUN_142f71d80();
      for (pwVar11 = (wchar_t *)param_1[0xb6];
          (pwVar6 = pwVar9, pwVar11 != (wchar_t *)0x0 &&
          (pwVar6 = (wchar_t *)param_1[0xb6], pwVar11 != pwVar4));
          pwVar11 = *(wchar_t **)(pwVar11 + 0x18)) {
      }
    }
    (**(code **)(*param_1 + 0x530))(param_1,pwVar6);
  }
  return;
}



// FUNCTION 1410099e0 FUN_1410099e0 body=2013 status=ok
// SIG undefined FUN_1410099e0(void)

void FUN_1410099e0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  
  FUN_142ecbc80();
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x80;
  iVar10 = *(int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x70) = iVar10 + 1;
  if (*(int *)(param_1 + 0x74) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x68,iVar10);
  }
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar10 * 0x18);
  *puVar2 = DAT_1469e9958;
  puVar2[1] = DAT_1469e9960;
  lVar3 = DAT_1469e9968;
  puVar2[2] = DAT_1469e9968;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iVar10 = *(int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x70) = iVar10 + 1;
  if (*(int *)(param_1 + 0x74) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x68,iVar10);
  }
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar10 * 0x18);
  *puVar2 = DAT_1469e9a00;
  puVar2[1] = DAT_1469e9a08;
  lVar3 = DAT_1469e9a10;
  puVar2[2] = DAT_1469e9a10;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iVar10 = *(int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x70) = iVar10 + 1;
  if (*(int *)(param_1 + 0x74) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x68,iVar10);
  }
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar10 * 0x18);
  *puVar2 = DAT_1469e9a30;
  puVar2[1] = DAT_1469e9a38;
  lVar3 = DAT_1469e9a40;
  puVar2[2] = DAT_1469e9a40;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_150 = 0xc;
  local_158 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
  FGenericPlatformString::Memcpy(local_158,L"textChatLog",0x18);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  FUN_140ecf4e0(param_1,param_1 + 0x6a0,&local_158,0,6,&local_168);
  plVar9 = local_168;
  for (iVar10 = (int)local_160; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free(local_168);
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  local_138 = 0;
  local_130 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"scrollbar",0x14);
  local_148 = (longlong *)0x0;
  local_140 = 0;
  local_res18 = 0;
  FUN_140fe52b0(param_1,param_1 + 0x6a8,&local_138,0,6,&local_148);
  plVar9 = local_148;
  for (iVar10 = (int)local_140; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free(local_148);
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  local_118 = 0;
  local_110 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"textInputMC",0x18);
  local_128 = (longlong *)0x0;
  local_120 = 0;
  local_res20 = 0;
  FUN_140ecf270(param_1,param_1 + 0x6b0,&local_118,0,6,&local_128);
  plVar9 = local_128;
  for (iVar10 = (int)local_120; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  local_f8 = 0;
  local_f0 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  FGenericPlatformString::Memcpy(local_f8,L"buttonClose",0x18);
  local_108 = (longlong *)0x0;
  local_100 = 0;
  local_88 = 0;
  FUN_140fe4cd0(param_1,param_1 + 0x6d0,&local_f8,0,6,&local_108);
  plVar9 = local_108;
  for (iVar10 = (int)local_100; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    local_d8 = 0;
    local_d0 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"placeholderTextMC",0x24);
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    local_80 = 0;
    FUN_140e98b90(*(undefined8 *)(param_1 + 0x6b0),param_1 + 0x6c0,&local_d8,0,6,&local_e8);
    plVar9 = local_e8;
    for (iVar10 = (int)local_e0; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free(local_e8);
    }
    if (local_d8 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x6c0) != 0) {
      local_b8 = 0;
      local_b0 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      FGenericPlatformString::Memcpy(local_b8,L"placeholderText",0x20);
      local_c8 = (longlong *)0x0;
      local_c0 = 0;
      local_78 = 0;
      FUN_140e99270(*(undefined8 *)(param_1 + 0x6c0),param_1 + 0x6c8,&local_b8,0,6,&local_c8);
      plVar9 = local_c8;
      for (iVar10 = (int)local_c0; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_c8 != (longlong *)0x0) {
        FMemory::Free(local_c8);
      }
      if (local_b8 != 0) {
        FMemory::Free();
      }
    }
    local_98 = 0;
    local_90 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"textInput",0x14);
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    local_70 = 0;
    FUN_140fe4f40(*(undefined8 *)(param_1 + 0x6b0),param_1 + 0x6b8,&local_98,0,6,&local_a8);
    plVar9 = local_a8;
    for (iVar10 = (int)local_a0; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x6b8) != 0) {
      FUN_142ed5690(*(longlong *)(param_1 + 0x6b8),1);
    }
  }
  if (*(longlong **)(param_1 + 0x6c8) != (longlong *)0x0) {
    lVar3 = **(longlong **)(param_1 + 0x6c8);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,L"[enter text to chat]",L"GFxPCTextChatMenu",L"EnterTextToChat");
    (**(code **)(lVar3 + 0x2b0))(*(undefined8 *)(param_1 + 0x6c8),uVar6,1,0);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_60 + 1;
      lVar3 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnScrollBarUpdated",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    lVar3 = *(longlong *)(param_1 + 0x6a8);
    FWeakObjectPtr::operator=(lVar3 + 0x378,param_1);
    *(longlong *)(lVar3 + 0x380) = local_res10;
    if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(lVar3 + 0x378), lVar8 != 0)) {
      UObject::FindFunction(lVar8,*(undefined8 *)(lVar3 + 0x380));
    }
    FUN_142f0f790(*(undefined8 *)(param_1 + 0x6a8),1);
  }
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    FUN_142ed5980(*(longlong *)(param_1 + 0x6b8),0,0);
    *(undefined1 *)(*(longlong *)(param_1 + 0x6b8) + 0x198) = 2;
    FUN_142ed2620(*(undefined8 *)(param_1 + 0x6b8),0x80);
    ATribePawnBP_C__pf2348183285::bpf__SetVirtualHeadphoneEnabled__pf
              (*(undefined8 *)(param_1 + 0x6b8),1);
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x6b8) + 0x170);
    (**(code **)(*plVar9 + 0x38))(plVar9,1);
    FWeakObjectPtr::operator=(*(longlong *)(param_1 + 0x6b8) + 0x240,param_1);
    uVar6 = FUN_1404b03b0();
    FUN_142ed51f0(*(undefined8 *)(param_1 + 0x6b8),uVar6,0);
  }
  return;
}



// FUNCTION 14100a1c0 FUN_14100a1c0 body=232 status=ok
// SIG undefined FUN_14100a1c0(void)

void FUN_14100a1c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ecbc80();
  local_10 = 0xb;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"chatButton",0x16);
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)(param_1 + 0x688);
  local_20 = 0;
  FUN_140fe4cd0(param_1,plVar1,&local_18,0,6,&local_28);
  plVar2 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (*plVar1 != 0) {
    *(undefined1 *)(*plVar1 + 0x277) = 1;
    *(undefined1 *)(*plVar1 + 0x198) = 0;
  }
  return;
}



// FUNCTION 14100a2b0 FUN_14100a2b0 body=3722 status=ok
// SIG undefined FUN_14100a2b0(void)

void FUN_14100a2b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong *local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_290;
  longlong local_288;
  undefined8 local_280;
  longlong *local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148 [2];
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128;
  longlong local_120 [2];
  undefined1 local_110;
  undefined1 local_10f;
  undefined1 local_10e;
  undefined1 local_10d;
  longlong local_108 [2];
  longlong local_f8 [2];
  longlong local_e8 [2];
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 local_af;
  longlong local_a8;
  wchar_t *local_a0;
  longlong local_98;
  wchar_t *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  FUN_142ecbc80();
  plVar1 = (longlong *)(param_1 + 0x720);
  pwVar8 = (wchar_t *)0x0;
  *(undefined4 *)(param_1 + 0x728) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x72c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_1e8 = 0;
  local_1e0 = 0x28;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8,L"photoModeWrapper.photoMode.cameraButton",0x50);
  local_1f8 = (longlong *)0x0;
  local_1f0 = 0;
  local_78 = 0;
  uVar5 = FUN_140f9a0c0(param_1,&local_1e8,0,6,&local_1f8);
  *(undefined8 *)(param_1 + 0x6f0) = uVar5;
  plVar9 = local_1f8;
  for (iVar10 = (int)local_1f0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_1f8 != (longlong *)0x0) {
    FMemory::Free(local_1f8);
  }
  if (local_1e8 != 0) {
    FMemory::Free();
  }
  local_1c8 = 0;
  local_1c0 = 0x2e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
  FGenericPlatformString::Memcpy(local_1c8,L"photoModeWrapper.photoMode.depthOfFieldButton",0x5c);
  local_1d8 = (longlong *)0x0;
  local_1d0 = 0;
  local_80 = 0;
  uVar5 = FUN_140f9a0c0(param_1,&local_1c8,0,6,&local_1d8);
  *(undefined8 *)(param_1 + 0x6f8) = uVar5;
  plVar9 = local_1d8;
  for (iVar10 = (int)local_1d0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_1d8 != (longlong *)0x0) {
    FMemory::Free(local_1d8);
  }
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  local_298 = 0;
  local_290 = 0x27;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
  FGenericPlatformString::Memcpy(local_298,L"photoModeWrapper.photoMode.colorButton",0x4e);
  local_2a8 = (longlong *)0x0;
  local_2a0 = 0;
  local_88 = 0;
  uVar5 = FUN_140f9a0c0(param_1,&local_298,0,6,&local_2a8);
  *(undefined8 *)(param_1 + 0x700) = uVar5;
  plVar9 = local_2a8;
  for (iVar10 = (int)local_2a0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_2a8 != (longlong *)0x0) {
    FMemory::Free(local_2a8);
  }
  if (local_298 != 0) {
    FMemory::Free();
  }
  local_208 = 0;
  local_200 = 0x27;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
  FGenericPlatformString::Memcpy(local_208,L"photoModeWrapper.photoMode.sceneButton",0x4e);
  local_2b8 = (longlong *)0x0;
  local_2b0 = 0;
  local_48 = 0;
  uVar5 = FUN_140f9a0c0(param_1,&local_208,0,6,&local_2b8);
  *(undefined8 *)(param_1 + 0x708) = uVar5;
  plVar9 = local_2b8;
  for (iVar10 = (int)local_2b0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_2b8 != (longlong *)0x0) {
    FMemory::Free(local_2b8);
  }
  if (local_208 != 0) {
    FMemory::Free();
  }
  local_228 = 0;
  local_220 = 0x28;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
  FGenericPlatformString::Memcpy(local_228,L"photoModeWrapper.photoMode.filterButton",0x50);
  local_218 = (longlong *)0x0;
  local_210 = 0;
  local_50 = 0;
  uVar5 = FUN_140f9a0c0(param_1,&local_228,0,6,&local_218);
  *(undefined8 *)(param_1 + 0x710) = uVar5;
  plVar9 = local_218;
  for (iVar10 = (int)local_210; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_218 != (longlong *)0x0) {
    FMemory::Free(local_218);
  }
  if (local_228 != 0) {
    FMemory::Free();
  }
  local_248 = 0;
  local_240 = 0x27;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
  FGenericPlatformString::Memcpy(local_248,L"photoModeWrapper.photoMode.frameButton",0x4e);
  local_238 = (longlong *)0x0;
  local_230 = 0;
  local_58 = 0;
  uVar5 = FUN_140f9a0c0(param_1,&local_248,0,6,&local_238);
  *(undefined8 *)(param_1 + 0x718) = uVar5;
  plVar9 = local_238;
  for (iVar10 = (int)local_230; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_238 != (longlong *)0x0) {
    FMemory::Free(local_238);
  }
  if (local_248 != 0) {
    FMemory::Free();
  }
  local_268 = 0;
  local_260 = 0x24;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
  FGenericPlatformString::Memcpy(local_268,L"photoModeWrapper.photoMode.itemList",0x48);
  local_258 = (longlong *)0x0;
  local_250 = 0;
  local_60 = 0;
  uVar5 = FUN_140ecb410(param_1,&local_268,0,6,&local_258);
  *(undefined8 *)(param_1 + 0x788) = uVar5;
  plVar9 = local_258;
  for (iVar10 = (int)local_250; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_258 != (longlong *)0x0) {
    FMemory::Free(local_258);
  }
  if (local_268 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x788) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x788) + 0x2b4) = 0x7f7fc99e;
  }
  local_288 = 0;
  local_280 = 0x32;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
  FGenericPlatformString::Memcpy(local_288,L"photoModeWrapper.photoMode.photoModePrevHint.hint",100)
  ;
  local_278 = (longlong *)0x0;
  local_270 = 0;
  local_68 = 0;
  uVar5 = FUN_140f139f0(param_1,&local_288,0,6,&local_278);
  *(undefined8 *)(param_1 + 0x738) = uVar5;
  plVar9 = local_278;
  for (iVar10 = (int)local_270; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_278 != (longlong *)0x0) {
    FMemory::Free(local_278);
  }
  if (local_288 != 0) {
    FMemory::Free();
  }
  local_1a8 = 0;
  local_1a0 = 0x32;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
  FGenericPlatformString::Memcpy(local_1a8,L"photoModeWrapper.photoMode.photoModeNextHint.hint",100)
  ;
  local_1b8 = (longlong *)0x0;
  local_1b0 = 0;
  local_70 = 0;
  uVar5 = FUN_140f139f0(param_1,&local_1a8,0,6,&local_1b8);
  *(undefined8 *)(param_1 + 0x740) = uVar5;
  plVar9 = local_1b8;
  for (iVar10 = (int)local_1b0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_1b8 != (longlong *)0x0) {
    FMemory::Free(local_1b8);
  }
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    iVar10 = *(int *)(param_1 + 0x728);
    *(int *)(param_1 + 0x728) = iVar10 + 1;
    if (*(int *)(param_1 + 0x72c) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar10 * 8) = *(undefined8 *)(param_1 + 0x6f0);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnOptionSetButtonClicked",L"::");
    pwVar4 = pwVar8;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x6f0);
    FWeakObjectPtr::operator=(lVar2 + 0x1b0,param_1);
    *(longlong *)(lVar2 + 0x1b8) = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar2 + 0x1b0), lVar7 != 0)) {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar2 + 0x1b8));
    }
  }
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    iVar10 = *(int *)(param_1 + 0x728);
    *(int *)(param_1 + 0x728) = iVar10 + 1;
    if (*(int *)(param_1 + 0x72c) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar10 * 8) = *(undefined8 *)(param_1 + 0x6f8);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnOptionSetButtonClicked",L"::");
    pwVar4 = pwVar8;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res18,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x6f8);
    FWeakObjectPtr::operator=(lVar2 + 0x1b0,param_1);
    *(longlong *)(lVar2 + 0x1b8) = local_res18;
    if ((local_res18 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar2 + 0x1b0), lVar7 != 0)) {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar2 + 0x1b8));
    }
  }
  if (*(longlong *)(param_1 + 0x700) != 0) {
    iVar10 = *(int *)(param_1 + 0x728);
    *(int *)(param_1 + 0x728) = iVar10 + 1;
    if (*(int *)(param_1 + 0x72c) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar10 * 8) = *(undefined8 *)(param_1 + 0x700);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnOptionSetButtonClicked",L"::");
    pwVar4 = pwVar8;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res20,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x700);
    FWeakObjectPtr::operator=(lVar2 + 0x1b0,param_1);
    *(longlong *)(lVar2 + 0x1b8) = local_res20;
    if ((local_res20 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar2 + 0x1b0), lVar7 != 0)) {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar2 + 0x1b8));
    }
  }
  if (*(longlong *)(param_1 + 0x708) != 0) {
    iVar10 = *(int *)(param_1 + 0x728);
    *(int *)(param_1 + 0x728) = iVar10 + 1;
    if (*(int *)(param_1 + 0x72c) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar10 * 8) = *(undefined8 *)(param_1 + 0x708);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnOptionSetButtonClicked",L"::");
    pwVar4 = pwVar8;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(local_148,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x708);
    FWeakObjectPtr::operator=(lVar2 + 0x1b0,param_1);
    *(longlong *)(lVar2 + 0x1b8) = local_148[0];
    if ((local_148[0] != 0) && (lVar7 = FWeakObjectPtr::Get(lVar2 + 0x1b0), lVar7 != 0)) {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar2 + 0x1b8));
    }
  }
  if (*(longlong *)(param_1 + 0x710) != 0) {
    iVar10 = *(int *)(param_1 + 0x728);
    *(int *)(param_1 + 0x728) = iVar10 + 1;
    if (*(int *)(param_1 + 0x72c) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar10 * 8) = *(undefined8 *)(param_1 + 0x710);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnOptionSetButtonClicked",L"::");
    pwVar4 = pwVar8;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_178,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x710);
    FWeakObjectPtr::operator=(lVar2 + 0x1b0,param_1);
    *(longlong *)(lVar2 + 0x1b8) = local_178;
    if ((local_178 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar2 + 0x1b0), lVar7 != 0)) {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar2 + 0x1b8));
    }
  }
  if (*(longlong *)(param_1 + 0x718) != 0) {
    iVar10 = *(int *)(param_1 + 0x728);
    *(int *)(param_1 + 0x728) = iVar10 + 1;
    if (*(int *)(param_1 + 0x72c) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar10 * 8) = *(undefined8 *)(param_1 + 0x718);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnOptionSetButtonClicked",L"::");
    pwVar4 = pwVar8;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_170,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x718);
    FWeakObjectPtr::operator=(lVar2 + 0x1b0,param_1);
    *(longlong *)(lVar2 + 0x1b8) = local_170;
    if ((local_170 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar2 + 0x1b0), lVar7 != 0)) {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar2 + 0x1b8));
    }
  }
  if (*(longlong *)(param_1 + 0x788) != 0) {
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    FWeakObjectPtr::operator=(&local_198,0);
    FWeakObjectPtr::operator=(&local_190,0);
    FWeakObjectPtr::operator=(&local_188,0);
    FWeakObjectPtr::operator=(&local_180,0);
    lVar2 = *(longlong *)(param_1 + 0x788);
    local_a0 = pwVar8;
    local_a8 = lVar2;
    if (lVar2 != 0) {
      uVar5 = UBlendableInterface::GetPrivateStaticClass();
      local_a0 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar5);
    }
    FUN_142ecfd10(param_1,&local_a8,&local_198);
    lVar2 = *(longlong *)(param_1 + 0x788);
    local_138 = *(undefined1 *)(lVar2 + 0x1e0);
    local_137 = *(undefined1 *)(lVar2 + 0x1e1);
    local_136 = *(undefined1 *)(lVar2 + 0x1e2);
    local_134 = *(undefined4 *)(lVar2 + 0x1e4);
    local_130 = *(undefined4 *)(lVar2 + 0x1e8);
    local_12c = *(undefined4 *)(lVar2 + 0x1ec);
    local_128 = *(undefined1 *)(lVar2 + 0x1f0);
    FString::FString(local_120,lVar2 + 0x1f8);
    local_110 = *(undefined1 *)(lVar2 + 0x208);
    local_10f = *(undefined1 *)(lVar2 + 0x209);
    local_10e = *(undefined1 *)(lVar2 + 0x20a);
    local_10d = *(undefined1 *)(lVar2 + 0x20b);
    FString::FString(local_108,lVar2 + 0x210);
    FString::FString(local_f8,lVar2 + 0x220);
    FString::FString(local_e8,lVar2 + 0x230);
    local_d8 = *(undefined1 *)(lVar2 + 0x240);
    local_d7 = *(undefined1 *)(lVar2 + 0x241);
    local_d6 = *(undefined1 *)(lVar2 + 0x242);
    local_d4 = *(undefined4 *)(lVar2 + 0x244);
    local_d0 = *(undefined4 *)(lVar2 + 0x248);
    local_cb = *(undefined1 *)(lVar2 + 0x24d);
    local_ca = *(undefined1 *)(lVar2 + 0x24e);
    local_c9 = *(undefined1 *)(lVar2 + 0x24f);
    local_c8 = *(undefined1 *)(lVar2 + 0x250);
    local_c7 = *(undefined1 *)(lVar2 + 0x251);
    local_c0 = *(undefined8 *)(lVar2 + 600);
    local_b8 = *(undefined8 *)(lVar2 + 0x260);
    local_b0 = *(undefined1 *)(lVar2 + 0x268);
    local_af = *(undefined1 *)(lVar2 + 0x269);
    local_cc = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x788) + 0x1c8) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x788) + 0x1c9) = 1;
    FUN_142ed2840(*(undefined8 *)(param_1 + 0x788),&local_138);
    lVar2 = *(longlong *)(param_1 + 0x788);
    local_98 = lVar2;
    if (lVar2 != 0) {
      uVar5 = UBlendableInterface::GetPrivateStaticClass();
      pwVar8 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar5);
    }
    local_90 = pwVar8;
    FUN_142ed36d0(param_1,&local_98,0);
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
    if (local_f8[0] != 0) {
      FMemory::Free();
    }
    if (local_108[0] != 0) {
      FMemory::Free();
    }
    if (local_120[0] != 0) {
      FMemory::Free();
    }
  }
  if ((*(longlong *)(param_1 + 0x6d0) != 0) && (0 < *(int *)(param_1 + 0x728))) {
    FUN_14101d2f0(param_1,*(undefined8 *)*plVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x738);
  if (lVar2 != 0) {
    local_160 = 0;
    local_168 = lVar2;
    uVar5 = UBlendableInterface::GetPrivateStaticClass();
    local_160 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar5);
    FUN_142ecff00(param_1,&local_168,DAT_1468736b8);
  }
  lVar2 = *(longlong *)(param_1 + 0x740);
  if (lVar2 != 0) {
    local_150 = 0;
    local_158 = lVar2;
    uVar5 = UBlendableInterface::GetPrivateStaticClass();
    local_150 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar5);
    FUN_142ecff00(param_1,&local_158,DAT_1468736b0);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return;
}



// FUNCTION 14100b140 FUN_14100b140 body=5060 status=ok
// SIG undefined FUN_14100b140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14100b140(longlong param_1)

{
  void *_Src;
  wchar_t *pwVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  undefined4 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  int *piVar13;
  int *piVar14;
  undefined1 *puVar15;
  int iVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined2 *puVar19;
  bool bVar20;
  undefined1 auStack_4d8 [32];
  longlong **local_4b8;
  wchar_t *local_4a8;
  code *local_498;
  ulonglong uStack_490;
  int local_488;
  int local_484;
  longlong local_480;
  wchar_t *local_478;
  longlong *local_470;
  code *local_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined8 uStack_450;
  longlong *local_448;
  undefined8 local_440;
  longlong local_438;
  undefined8 local_430;
  longlong *local_428;
  undefined8 local_420;
  longlong local_418;
  undefined8 local_410;
  longlong *local_408;
  undefined8 local_400;
  wchar_t *local_3f8;
  int local_3f0;
  longlong *local_3e8;
  undefined8 local_3e0;
  longlong local_3d8;
  undefined8 local_3d0;
  longlong *local_3c8;
  undefined8 local_3c0;
  longlong local_3b8;
  undefined8 local_3b0;
  longlong *local_3a8;
  undefined8 local_3a0;
  longlong local_398;
  undefined8 local_390;
  longlong local_388;
  undefined8 local_380;
  longlong *local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 local_360;
  longlong *local_358;
  undefined8 local_350;
  longlong local_348;
  undefined8 local_340;
  longlong *local_338;
  undefined8 local_330;
  longlong local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  longlong local_2f8;
  longlong local_2f0 [2];
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0 [8];
  undefined8 local_2b8;
  undefined1 local_2b0 [8];
  longlong local_2a8 [2];
  longlong local_298 [2];
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  code *local_1c8 [2];
  undefined1 local_1b8 [32];
  undefined8 local_198;
  undefined4 local_188;
  undefined1 local_178 [80];
  undefined1 local_128 [192];
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  pwVar12 = (wchar_t *)0x0;
  local_470 = (longlong *)((ulonglong)local_470 & 0xffffffff00000000);
  FUN_14100c510();
  FUN_14101a740(param_1);
  if (*(longlong *)(param_1 + 0x6e8) != 0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxQuickChangeMenu::OnMenuListItemSelectionChanged",L"::");
    pwVar8 = pwVar12;
    while (pwVar1 = pwVar6, pwVar1 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar8 = pwVar1;
    }
    FName::FName(&local_2f8,pwVar8 + 2,1);
    lVar9 = *(longlong *)(param_1 + 0x6e8);
    plVar17 = (longlong *)(lVar9 + 0x180);
    FWeakObjectPtr::operator=(&local_488,0);
    local_480 = 0;
    FWeakObjectPtr::operator=(&local_488,param_1);
    local_480 = local_2f8;
    local_4a8 = (wchar_t *)0x0;
    if ((local_2f8 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_488), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_480);
    }
    piVar13 = (int *)*plVar17;
    iVar16 = *(int *)(lVar9 + 0x188);
    for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar16 * 4; piVar14 = piVar14 + 4) {
      if (((*piVar14 == local_488) && (piVar14[1] == local_484)) ||
         ((cVar2 = FWeakObjectPtr::IsValid(piVar14), cVar2 == '\0' &&
          (cVar2 = FWeakObjectPtr::IsValid(&local_488), cVar2 == '\0')))) {
        bVar20 = true;
      }
      else {
        bVar20 = false;
      }
      if ((bVar20) && (*(longlong *)(piVar14 + 2) == local_480)) {
        bVar20 = true;
      }
      else {
        bVar20 = false;
      }
      if (bVar20) {
        if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_14100b2fc;
        break;
      }
    }
    iVar16 = *(int *)(lVar9 + 0x188);
    *(int *)(lVar9 + 0x188) = iVar16 + 1;
    if (*(int *)(lVar9 + 0x18c) < iVar16 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar16);
    }
    piVar13 = (int *)((longlong)iVar16 * 0x10 + *plVar17);
    *piVar13 = local_488;
    piVar13[1] = local_484;
    *(longlong *)(piVar13 + 2) = local_480;
LAB_14100b2fc:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar17);
  }
  pwVar8 = (wchar_t *)FWeakObjectPtr::Get(param_1 + 0x58c);
  if (pwVar8 == (wchar_t *)0x0) {
LAB_14100b34f:
    local_4a8 = (wchar_t *)0x0;
    pwVar8 = pwVar12;
  }
  else {
    local_4a8 = pwVar8;
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if (!bVar20) goto LAB_14100b34f;
  }
  plVar17 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x594);
  if (plVar17 == (longlong *)0x0) {
LAB_14100b3a2:
    local_470 = (longlong *)0x0;
  }
  else {
    local_470 = plVar17;
    lVar9 = FUN_1413ffe00();
    if ((*(int *)(plVar17[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar17[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if (!bVar20) goto LAB_14100b3a2;
  }
  local_198 = 0;
  local_188 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_1b8);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[1] = param_1;
    *puVar10 = &PTR_FUN_143f77b70;
  }
  local_498 = (code *)0x0;
  local_1c8[0] = FUN_140ff1a20;
  uStack_490 = 0x2f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_498,0);
  local_4b8 = (longlong **)CONCAT62(local_4b8._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_498,0x2f,"UGFxQuickChangeMenu::OnStart::GetSavedGameTask");
  FUN_140fe55e0(local_128,&local_498,local_1c8);
  uVar11 = FUN_140ff5760(local_128,local_178);
  FUN_14204c280(uVar11);
  lVar9 = local_68;
  if (local_68 != 0) {
LAB_14100b480:
    if (local_68 == 0) goto LAB_14100b48f;
    if (*(char *)(local_68 + 0x58) != '\0') goto LAB_14100b48f;
    bVar20 = false;
    do {
      lVar9 = local_68;
      if (bVar20) break;
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar4 = GetCurrentThreadId();
        bVar20 = false;
        if (DVar4 == DAT_1468c21c0) goto LAB_14100b4c5;
      }
      else {
LAB_14100b4c5:
        bVar20 = true;
      }
      if (bVar20) {
        FUN_142036de0();
      }
      else {
        lVar9 = FUN_14203ca70();
        if (lVar9 != 0) {
          FUN_1420714f0(lVar9);
        }
      }
      if ((local_68 == 0) || (*(char *)(local_68 + 0x58) != '\0')) {
        bVar20 = true;
      }
      else {
        bVar20 = false;
      }
      if (bVar20) goto LAB_14100b480;
      if (local_68 != 0) goto code_r0x00014100b505;
LAB_14100b48f:
      bVar20 = true;
    } while( true );
  }
  cVar2 = *(char *)(lVar9 + 0x58);
  while (cVar2 == '\0') {
    (**(code **)(**(longlong **)(lVar9 + 0x50) + 0x20))(*(longlong **)(lVar9 + 0x50),0x5d638865,0);
    cVar2 = *(char *)(lVar9 + 0x58);
  }
  local_478 = *(wchar_t **)(lVar9 + 0x60);
  if ((local_478 != (wchar_t *)0x0) &&
     (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x59c), cVar2 != '\0')) {
    local_3d8 = 0;
    local_3d0 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3d8,0);
    FGenericPlatformString::Memcpy(local_3d8,L"renamePlayer",0x1a);
    local_4b8 = &local_3e8;
    local_3e8 = (longlong *)0x0;
    local_3e0 = 0;
    local_2e0 = 0;
    uVar11 = FUN_140e96f30(param_1,&local_3d8,0,6);
    *(undefined8 *)(param_1 + 0xc30) = uVar11;
    plVar17 = local_3e8;
    for (iVar16 = (int)local_3e0; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar17 != 0) {
        FMemory::Free();
      }
      plVar17 = plVar17 + 2;
    }
    if (local_3e8 != (longlong *)0x0) {
      FMemory::Free(local_3e8);
    }
    if (local_3d8 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0xc30) != 0) {
      local_3b8 = 0;
      local_3b0 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3b8,0);
      FGenericPlatformString::Memcpy(local_3b8,L"playerNamePrompt",0x22);
      local_4b8 = &local_3c8;
      local_3c8 = (longlong *)0x0;
      local_3c0 = 0;
      local_2d8 = 0;
      uVar11 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0xc30),&local_3b8,0,6);
      *(undefined8 *)(param_1 + 0xc38) = uVar11;
      plVar17 = local_3c8;
      for (iVar16 = (int)local_3c0; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 2;
      }
      if (local_3c8 != (longlong *)0x0) {
        FMemory::Free(local_3c8);
      }
      if (local_3b8 != 0) {
        FMemory::Free();
      }
      lVar9 = FWeakObjectPtr::Get(param_1 + 0x59c);
      FUN_141013050(param_1,*(char *)(lVar9 + 0xb8) == '\x01');
      local_398 = 0;
      local_390 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_398,0);
      FGenericPlatformString::Memcpy(local_398,L"playerName",0x16);
      local_4b8 = &local_3a8;
      local_3a8 = (longlong *)0x0;
      local_3a0 = 0;
      local_2b8 = 0;
      uVar11 = FUN_140ecb070(*(undefined8 *)(param_1 + 0xc30),&local_398,0,6);
      *(undefined8 *)(param_1 + 0xc40) = uVar11;
      plVar17 = local_3a8;
      for (iVar16 = (int)local_3a0; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 2;
      }
      if (local_3a8 != (longlong *)0x0) {
        FMemory::Free(local_3a8);
      }
      if (local_398 != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_1 + 0xc40) != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0xc40) + 0x310) = 1;
        lVar9 = FUN_140cffa80(pwVar8,local_298);
        bVar20 = 1 < *(int *)(lVar9 + 8);
        if (bVar20) {
          puVar15 = local_228;
          plVar17 = (longlong *)FUN_140cffa80(pwVar8,local_2a8);
        }
        else {
          local_388 = 0;
          local_380 = 8;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,0);
          FGenericPlatformString::Memcpy(local_388,L"[EMPTY]",0x10);
          plVar17 = &local_388;
          puVar15 = local_210;
        }
        uVar11 = FText::FromString(puVar15,plVar17);
        FUN_142ed51f0(*(undefined8 *)(param_1 + 0xc40),uVar11,0);
        if ((bVar20) && (local_220 != (longlong *)0x0)) {
          LOCK();
          plVar17 = local_220 + 1;
          lVar9 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_220)(local_220);
            LOCK();
            piVar13 = (int *)((longlong)local_220 + 0xc);
            iVar16 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*local_220 + 8))(local_220,1);
            }
          }
        }
        if ((bVar20) && (local_2a8[0] != 0)) {
          FMemory::Free();
        }
        if ((!bVar20) && (local_208 != (longlong *)0x0)) {
          LOCK();
          plVar17 = local_208 + 1;
          lVar9 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_208)(local_208);
            LOCK();
            piVar13 = (int *)((longlong)local_208 + 0xc);
            iVar16 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*local_208 + 8))(local_208,1);
            }
          }
        }
        if ((!bVar20) && (local_388 != 0)) {
          FMemory::Free();
        }
        if (local_298[0] != 0) {
          FMemory::Free();
        }
        FUN_142ed5980(*(undefined8 *)(param_1 + 0xc40),0,1);
        *(undefined1 *)(*(longlong *)(param_1 + 0xc40) + 0x198) = 2;
        uVar5 = TGPUSkinAPEXClothVertexFactory<1>::GetNumBoneInfluences(local_478);
        FUN_142ed2620(*(undefined8 *)(param_1 + 0xc40),uVar5);
        local_468 = FUN_141008600;
        uStack_460 = 0;
        local_288 = 0x41008600;
        uStack_284 = 1;
        uStack_280 = 0;
        uStack_27c = uStack_45c;
        FUN_140cdd210(*(longlong *)(param_1 + 0xc40) + 0x3b8,param_1,&local_288);
        local_468 = FUN_1410076f0;
        uStack_460 = 0;
        local_278 = 0x410076f0;
        uStack_274 = 1;
        uStack_270 = 0;
        uStack_26c = uStack_45c;
        FUN_140cdd210(*(longlong *)(param_1 + 0xc40) + 0x3c8,param_1,&local_278);
        local_468 = FUN_1410076f0;
        uStack_460 = 0;
        local_268 = 0x410076f0;
        uStack_264 = 1;
        uStack_260 = 0;
        uStack_25c = uStack_45c;
        FUN_140cdd210(*(longlong *)(param_1 + 0xc40) + 0x3d8,param_1,&local_268);
        plVar17 = (longlong *)(*(longlong *)(param_1 + 0xc40) + 0x170);
        (**(code **)(*plVar17 + 0x38))(plVar17,1);
        FWeakObjectPtr::operator=(*(longlong *)(param_1 + 0xc40) + 0x240,param_1);
      }
    }
    pwVar8 = pwVar12;
    if (local_470 != (longlong *)0x0) {
      pwVar8 = (wchar_t *)FUN_1414002f0(local_470);
    }
    local_368 = 0;
    local_360 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
    FGenericPlatformString::Memcpy(local_368,L"renamePet",0x14);
    local_4b8 = &local_378;
    local_378 = (longlong *)0x0;
    local_370 = 0;
    local_2d0 = 0;
    uVar11 = FUN_140e96f30(param_1,&local_368,0,6);
    *(undefined8 *)(param_1 + 0xc48) = uVar11;
    plVar17 = local_378;
    for (iVar16 = (int)local_370; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar17 != 0) {
        FMemory::Free();
      }
      plVar17 = plVar17 + 2;
    }
    if (local_378 != (longlong *)0x0) {
      FMemory::Free(local_378);
    }
    if (local_368 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0xc48) != 0) {
      local_348 = 0;
      local_340 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348,0);
      FGenericPlatformString::Memcpy(local_348,L"petName",0x10);
      local_4b8 = &local_358;
      local_358 = (longlong *)0x0;
      local_350 = 0;
      local_2c8 = 0;
      uVar11 = FUN_140ecb070(*(undefined8 *)(param_1 + 0xc48),&local_348,0,6);
      *(undefined8 *)(param_1 + 0xc58) = uVar11;
      plVar17 = local_358;
      for (iVar16 = (int)local_350; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 2;
      }
      if (local_358 != (longlong *)0x0) {
        FMemory::Free(local_358);
      }
      if (local_348 != 0) {
        FMemory::Free();
      }
      local_328 = 0;
      local_320 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_328,0);
      FGenericPlatformString::Memcpy(local_328,L"playerNamePrompt",0x22);
      local_4b8 = &local_338;
      local_338 = (longlong *)0x0;
      local_330 = 0;
      local_468 = (code *)0x0;
      uVar11 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0xc48),&local_328,0,6);
      *(undefined8 *)(param_1 + 0xc50) = uVar11;
      plVar17 = local_338;
      for (iVar16 = (int)local_330; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 2;
      }
      if (local_338 != (longlong *)0x0) {
        FMemory::Free(local_338);
      }
      if (local_328 != 0) {
        FMemory::Free();
      }
      if (((*(longlong *)(param_1 + 0xc50) != 0) && (*(longlong *)(param_1 + 0xc58) != 0)) &&
         (pwVar8 != (wchar_t *)0x0)) {
        if ((*(int *)(pwVar8 + 0x888) == 0) && (*(int *)(pwVar8 + 0x88a) == 0)) {
          bVar20 = true;
        }
        else {
          bVar20 = false;
        }
        if (!bVar20) {
          *(undefined1 *)(param_1 + 0xc78) = 1;
          (**(code **)(**(longlong **)(param_1 + 0xc48) + 0x278))(*(longlong **)(param_1 + 0xc48),1)
          ;
          lVar9 = FWeakObjectPtr::Get(param_1 + 0x59c);
          FUN_141013260(param_1,*(char *)(lVar9 + 0xb8) == '\x01');
          lVar9 = *(longlong *)(pwVar8 + 0x888);
          if (*(int *)(local_4a8 + 0xc58) != *(int *)(local_4a8 + 0xc6e)) {
            pwVar8 = *(wchar_t **)(local_4a8 + 0xc74);
            if (*(wchar_t **)(local_4a8 + 0xc74) == (wchar_t *)0x0) {
              pwVar8 = local_4a8 + 0xc70;
            }
            iVar16 = *(int *)(pwVar8 + ((longlong)((int)((ulonglong)lVar9 >> 0x20) + (int)lVar9) &
                                       (longlong)*(int *)(local_4a8 + 0xc78) - 1U) * 2);
            if (iVar16 != -1) {
              do {
                plVar17 = (longlong *)(*(longlong *)(local_4a8 + 0xc54) + (longlong)iVar16 * 0x20);
                if (*plVar17 == lVar9) {
                  if ((iVar16 != -1) &&
                     (pwVar8 = (wchar_t *)(plVar17 + 1), plVar17 != (longlong *)0x0))
                  goto LAB_14100bd9b;
                  break;
                }
                iVar16 = (int)plVar17[3];
              } while (iVar16 != -1);
            }
          }
          pwVar8 = pwVar12;
LAB_14100bd9b:
          *(undefined1 *)(*(longlong *)(param_1 + 0xc58) + 0x310) = 1;
          bVar20 = pwVar8 == (wchar_t *)0x0;
          if (bVar20) {
            uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_1f8,&DAT_1446548b0,L"GFxQuickChangeMenu",L"PetName");
          }
          else {
            uVar11 = FText::FromString(local_1e0);
          }
          FUN_142ed51f0(*(undefined8 *)(param_1 + 0xc58),uVar11,0);
          if ((bVar20) && (local_1f0 != (longlong *)0x0)) {
            LOCK();
            plVar17 = local_1f0 + 1;
            lVar9 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_1f0)(local_1f0);
              LOCK();
              piVar13 = (int *)((longlong)local_1f0 + 0xc);
              iVar16 = *piVar13;
              *piVar13 = *piVar13 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*local_1f0 + 8))(local_1f0,1);
              }
            }
          }
          if ((!bVar20) && (local_1d8 != (longlong *)0x0)) {
            LOCK();
            plVar17 = local_1d8 + 1;
            lVar9 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_1d8)(local_1d8);
              LOCK();
              piVar13 = (int *)((longlong)local_1d8 + 0xc);
              iVar16 = *piVar13;
              *piVar13 = *piVar13 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*local_1d8 + 8))(local_1d8,1);
              }
            }
          }
          FUN_142ed5980(*(undefined8 *)(param_1 + 0xc58),0,1);
          *(undefined1 *)(*(longlong *)(param_1 + 0xc58) + 0x198) = 2;
          uVar5 = TGPUSkinAPEXClothVertexFactory<1>::GetNumBoneInfluences(local_478);
          FUN_142ed2620(*(undefined8 *)(param_1 + 0xc58),uVar5);
          local_498 = FUN_141007750;
          uStack_24c = (undefined4)(uStack_490 >> 0x20);
          uStack_490 = uStack_490 & 0xffffffff00000000;
          local_258 = 0x41007750;
          uStack_254 = 1;
          uStack_250 = 0;
          FUN_140cdd210(*(longlong *)(param_1 + 0xc58) + 0x3b8,param_1,&local_258);
          local_498 = FUN_1410076f0;
          uStack_23c = (undefined4)(uStack_490 >> 0x20);
          uStack_490 = uStack_490 & 0xffffffff00000000;
          local_248 = 0x410076f0;
          uStack_244 = 1;
          uStack_240 = 0;
          FUN_140cdd210(*(longlong *)(param_1 + 0xc58) + 0x3c8,param_1,&local_248);
          local_498 = FUN_1410076f0;
          uStack_22c = (undefined4)(uStack_490 >> 0x20);
          uStack_490 = uStack_490 & 0xffffffff00000000;
          local_238 = 0x410076f0;
          uStack_234 = 1;
          uStack_230 = 0;
          FUN_140cdd210(*(longlong *)(param_1 + 0xc58) + 0x3d8,param_1,&local_238);
          plVar17 = (longlong *)(*(longlong *)(param_1 + 0xc58) + 0x170);
          (**(code **)(*plVar17 + 0x38))(plVar17,1);
          FWeakObjectPtr::operator=(*(longlong *)(param_1 + 0xc58) + 0x240,param_1);
          goto LAB_14100bfa1;
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0xc48) + 0x278))(*(longlong **)(param_1 + 0xc48),0);
      *(undefined1 *)(param_1 + 0xc78) = 0;
    }
  }
LAB_14100bfa1:
  local_438 = 0;
  local_430 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_438,0);
  FGenericPlatformString::Memcpy(local_438,L"colorSelection",0x1e);
  local_4b8 = &local_448;
  local_448 = (longlong *)0x0;
  local_440 = 0;
  uVar11 = FUN_140fe3120(param_1,&local_438,0,6);
  *(undefined8 *)(param_1 + 0xc60) = uVar11;
  plVar17 = local_448;
  for (iVar16 = (int)local_440; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar17 != 0) {
      FMemory::Free();
    }
    plVar17 = plVar17 + 2;
  }
  if (local_448 != (longlong *)0x0) {
    FMemory::Free(local_448);
  }
  if (local_438 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc60) != 0) {
    local_318 = 0;
    local_310 = 0;
    local_308 = 0;
    local_300 = 0;
    FWeakObjectPtr::operator=(&local_318,0);
    FWeakObjectPtr::operator=(&local_310,0);
    FWeakObjectPtr::operator=(&local_308,0);
    FWeakObjectPtr::operator=(&local_300,0);
    lVar9 = *(longlong *)(param_1 + 0xc60);
    uStack_450 = pwVar12;
    local_458 = (code *)lVar9;
    if (lVar9 != 0) {
      uVar11 = UBlendableInterface::GetPrivateStaticClass();
      uStack_450 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar11);
    }
    FUN_142ecfd10(param_1,&local_458,&local_318);
    lVar9 = *(longlong *)(param_1 + 0xc60);
    local_458 = FUN_140ffcc70;
    uStack_450 = (wchar_t *)((ulonglong)uStack_450 & 0xffffffff00000000);
    plVar18 = (longlong *)(lVar9 + 0x180);
    plVar17 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar17 != (longlong *)0x0) {
      *plVar17 = (longlong)&PTR_FUN_14465fb20;
      FWeakObjectPtr::operator=(plVar17 + 1,param_1);
      *(undefined4 *)(plVar17 + 2) = (undefined4)local_458;
      *(undefined4 *)((longlong)plVar17 + 0x14) = local_458._4_4_;
      *(undefined4 *)(plVar17 + 3) = (undefined4)uStack_450;
      *(undefined4 *)((longlong)plVar17 + 0x1c) = uStack_450._4_4_;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar17[5] = lVar7;
      *plVar17 = (longlong)&PTR_FUN_14465fb68;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar18,1);
      (**(code **)(*plVar17 + 0x20))(plVar17,local_2c0);
      iVar16 = *(int *)(lVar9 + 0x188);
      *(int *)(lVar9 + 0x188) = iVar16 + 1;
      if (*(int *)(lVar9 + 0x18c) < iVar16 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar18,iVar16);
      }
      puVar10 = (undefined8 *)((longlong)iVar16 * 0x10 + *plVar18);
      *puVar10 = plVar17;
      *(undefined4 *)(puVar10 + 1) = 3;
    }
    lVar9 = *(longlong *)(param_1 + 0xc60);
    local_458 = FUN_140ffce10;
    uStack_450 = (wchar_t *)((ulonglong)uStack_450 & 0xffffffff00000000);
    plVar18 = (longlong *)(lVar9 + 0x198);
    plVar17 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar17 != (longlong *)0x0) {
      *plVar17 = (longlong)&PTR_FUN_14465fb20;
      FWeakObjectPtr::operator=(plVar17 + 1,param_1);
      *(undefined4 *)(plVar17 + 2) = (undefined4)local_458;
      *(undefined4 *)((longlong)plVar17 + 0x14) = local_458._4_4_;
      *(undefined4 *)(plVar17 + 3) = (undefined4)uStack_450;
      *(undefined4 *)((longlong)plVar17 + 0x1c) = uStack_450._4_4_;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar17[5] = lVar7;
      *plVar17 = (longlong)&PTR_FUN_14465fb68;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar18,1);
      (**(code **)(*plVar17 + 0x20))(plVar17,local_2b0);
      iVar16 = *(int *)(lVar9 + 0x1a0);
      *(int *)(lVar9 + 0x1a0) = iVar16 + 1;
      if (*(int *)(lVar9 + 0x1a4) < iVar16 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar18,iVar16);
      }
      puVar10 = (undefined8 *)((longlong)iVar16 * 0x10 + *plVar18);
      *puVar10 = plVar17;
      *(undefined4 *)(puVar10 + 1) = 3;
    }
  }
  local_418 = 0;
  local_410 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_418,0);
  FGenericPlatformString::Memcpy(local_418,L"equippedEmoteLabel",0x26);
  local_4b8 = &local_428;
  local_428 = (longlong *)0x0;
  local_420 = 0;
  uVar11 = FUN_140ac4770(param_1,&local_418,0,6);
  *(undefined8 *)(param_1 + 0xb70) = uVar11;
  plVar17 = local_428;
  for (iVar16 = (int)local_420; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar17 != 0) {
      FMemory::Free();
    }
    plVar17 = plVar17 + 2;
  }
  if (local_428 != (longlong *)0x0) {
    FMemory::Free(local_428);
  }
  if (local_418 != 0) {
    FMemory::Free();
  }
  plVar17 = *(longlong **)(param_1 + 0xb70);
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x278))(plVar17,0);
  }
  plVar17 = local_470;
  pwVar8 = pwVar12;
  pwVar6 = pwVar12;
  if (local_470 != (longlong *)0x0) {
    uVar11 = AGFireballProjectile::GetPrivateStaticClass();
    pwVar8 = (wchar_t *)(**(code **)(*plVar17 + 0x628))(plVar17,uVar11);
    if (pwVar8 != (wchar_t *)0x0) {
      pwVar6 = *(wchar_t **)(pwVar8 + 0x1cc);
    }
  }
  local_478 = pwVar12;
  if (pwVar8 != (wchar_t *)0x0) {
    local_478 = *(wchar_t **)(pwVar8 + 0x1d8);
  }
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar12 = *(wchar_t **)(pwVar6 + 0x18);
  }
  if (((plVar17 != (longlong *)0x0) && (pwVar12 != (wchar_t *)0x0)) && (local_478 != (wchar_t *)0x0)
     ) {
    local_3f0 = *(int *)(pwVar12 + 0x20);
    lVar9 = (longlong)local_3f0;
    _Src = *(void **)(pwVar12 + 0x1c);
    local_3f8 = (wchar_t *)0x0;
    if (local_3f0 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_3f8,local_3f0,0);
      _guard_xfg_dispatch_icall_nop(local_3f8,_Src,lVar9 << 3);
    }
    pwVar12 = local_3f8 + (longlong)local_3f0 * 4;
    pwVar8 = local_3f8;
    local_4a8 = pwVar12;
    if (local_3f8 != pwVar12) {
      do {
        lVar9 = *(longlong *)pwVar8;
        if (lVar9 != 0) {
          local_408 = (longlong *)0x0;
          local_400 = 0;
          if (*(int *)(lVar9 + 0x50) == 0) {
            puVar19 = &DAT_143f3eda8;
          }
          else {
            puVar19 = *(undefined2 **)(lVar9 + 0x48);
          }
          FString::PrintfImpl(local_2f0,L"skillTreeRespec.branch_%s",puVar19);
          local_4b8 = &local_408;
          plVar17 = (longlong *)FUN_140fe3a00(param_1,local_2f0,0,6);
          if (local_2f0[0] != 0) {
            FMemory::Free();
          }
          plVar18 = local_408;
          for (iVar16 = (int)local_400; iVar16 != 0; iVar16 = iVar16 + -1) {
            if (*plVar18 != 0) {
              FMemory::Free();
            }
            plVar18 = plVar18 + 2;
          }
          if (local_408 != (longlong *)0x0) {
            FMemory::Free(local_408);
          }
          pwVar12 = local_4a8;
          if (plVar17 != (longlong *)0x0) {
            bVar3 = FUN_141018210(plVar17,local_470 + 0x54d,local_478,lVar9);
            *(byte *)(param_1 + 0xc79) = *(byte *)(param_1 + 0xc79) | bVar3;
            (**(code **)(*plVar17 + 0x278))(plVar17,0);
            iVar16 = *(int *)(param_1 + 0xc70);
            *(int *)(param_1 + 0xc70) = iVar16 + 1;
            if (*(int *)(param_1 + 0xc74) < iVar16 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0xc68,iVar16);
            }
            *(longlong **)(*(longlong *)(param_1 + 0xc68) + (longlong)iVar16 * 8) = plVar17;
            pwVar12 = local_4a8;
          }
        }
        pwVar8 = pwVar8 + 4;
      } while (pwVar8 != pwVar12);
    }
    if (local_3f8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  FUN_140ce1dc0(local_128);
  return;
code_r0x00014100b505:
  (**(code **)(**(longlong **)(local_68 + 0x50) + 0x20))();
  goto LAB_14100b480;
}



// FUNCTION 14100c510 FUN_14100c510 body=7403 status=ok
// SIG undefined FUN_14100c510(void)

void FUN_14100c510(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  char cVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  int *piVar21;
  longlong lVar22;
  wchar_t *pwVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  int iVar27;
  longlong *plVar28;
  ulonglong *puVar29;
  char *pcVar30;
  bool bVar31;
  undefined8 local_res8;
  undefined8 local_res10;
  char local_res18;
  longlong local_res20;
  undefined8 local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  uint local_148;
  uint uStack_144;
  uint *puStack_140;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  ulonglong *local_128;
  undefined8 local_120;
  ulonglong *local_118;
  undefined8 local_110;
  undefined4 local_108 [2];
  longlong local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  uint uStack_b8;
  uint uStack_b4;
  uint *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  uint *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined4 local_58;
  
  FUN_142ecbc80();
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)((longlong)param_1 + 0xb94);
  pwVar23 = (wchar_t *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x6a4) = *(undefined4 *)((longlong)param_1 + 0xb9c);
  local_1a8 = 0;
  local_1a0 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
  FGenericPlatformString::Memcpy(local_1a8,L"emoteWheel",0x16);
  local_1b8 = (wchar_t *)0x0;
  iVar27 = 0;
  local_1b0 = 0;
  lVar11 = FUN_140e96f30(param_1,&local_1a8,0,6,&local_1b8);
  param_1[0xdc] = lVar11;
  plVar28 = (longlong *)local_1b8;
  for (iVar26 = (int)local_1b0; iVar26 != 0; iVar26 = iVar26 + -1) {
    if (*plVar28 != 0) {
      FMemory::Free();
    }
    plVar28 = plVar28 + 2;
  }
  if (local_1b8 != (wchar_t *)0x0) {
    FMemory::Free(local_1b8);
  }
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  local_1a8 = 0;
  local_1a0 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
  FGenericPlatformString::Memcpy(local_1a8,L"rightContainer",0x1e);
  local_1b8 = (wchar_t *)0x0;
  local_1b0 = 0;
  lVar11 = FUN_140e96f30(param_1,&local_1a8,0,6,&local_1b8);
  param_1[0xda] = lVar11;
  plVar28 = (longlong *)local_1b8;
  for (iVar26 = (int)local_1b0; iVar26 != 0; iVar26 = iVar26 + -1) {
    if (*plVar28 != 0) {
      FMemory::Free();
    }
    plVar28 = plVar28 + 2;
  }
  if (local_1b8 != (wchar_t *)0x0) {
    FMemory::Free(local_1b8);
  }
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  local_1a8 = 0;
  local_1a0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
  FGenericPlatformString::Memcpy(local_1a8,L"menuList",0x12);
  local_1b8 = (wchar_t *)0x0;
  local_1b0 = 0;
  lVar11 = FUN_140ecb410(param_1,&local_1a8,0,6,&local_1b8);
  param_1[0xdd] = lVar11;
  plVar28 = (longlong *)local_1b8;
  for (iVar26 = (int)local_1b0; iVar26 != 0; iVar26 = iVar26 + -1) {
    if (*plVar28 != 0) {
      FMemory::Free();
    }
    plVar28 = plVar28 + 2;
  }
  if (local_1b8 != (wchar_t *)0x0) {
    FMemory::Free(local_1b8);
  }
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  local_1a8 = 0;
  local_1a0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
  FGenericPlatformString::Memcpy(local_1a8,L"mouseCapture",0x1a);
  local_1b8 = (wchar_t *)0x0;
  local_1b0 = 0;
  lVar11 = FUN_140f9ac40(param_1,&local_1a8,0,6,&local_1b8);
  param_1[0x16d] = lVar11;
  plVar28 = (longlong *)local_1b8;
  for (iVar26 = (int)local_1b0; iVar26 != 0; iVar26 = iVar26 + -1) {
    if (*plVar28 != 0) {
      FMemory::Free();
    }
    plVar28 = plVar28 + 2;
  }
  if (local_1b8 != (wchar_t *)0x0) {
    FMemory::Free(local_1b8);
  }
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  if (param_1[0x16d] != 0) {
    *(undefined1 *)(param_1[0x16d] + 0x195) = 1;
    *(undefined1 *)(param_1[0x16d] + 0x193) = 1;
  }
  if (param_1[0xdd] != 0) {
    uStack_170 = (wchar_t *)((ulonglong)uStack_170 & 0xffffffff00000000);
    local_178 = (wchar_t *)&LAB_140fefd7c;
    local_198 = (longlong *)&LAB_140fefd7c;
    uStack_190 = uStack_170;
    pwVar12 = _guard_xfg_dispatch_icall_nop
                        (L"&UGFxQuickChangeMenuBase::OnMenuListItemClicked",L"::");
    pwVar14 = pwVar23;
    while (pwVar6 = pwVar12, pwVar6 != (wchar_t *)0x0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
      pwVar14 = pwVar6;
    }
    FName::FName(&local_res8,pwVar14 + 2,1);
    FUN_1407260e0(param_1[0xdd] + 0x1a8,param_1,&local_198,local_res8);
  }
  local_1a8 = 0;
  local_1a0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
  FGenericPlatformString::Memcpy(local_1a8,L"listSelection",0x1c);
  local_1b8 = (wchar_t *)0x0;
  local_1b0 = 0;
  lVar11 = FUN_140ecb410(param_1,&local_1a8,0,6,&local_1b8);
  param_1[0xde] = lVar11;
  plVar28 = (longlong *)local_1b8;
  for (iVar26 = (int)local_1b0; iVar26 != 0; iVar26 = iVar26 + -1) {
    if (*plVar28 != 0) {
      FMemory::Free();
    }
    plVar28 = plVar28 + 2;
  }
  if (local_1b8 != (wchar_t *)0x0) {
    FMemory::Free(local_1b8);
  }
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  if (param_1[0xde] != 0) {
    pwVar12 = _guard_xfg_dispatch_icall_nop
                        (L"&UGFxQuickChangeMenuBase::OnSelectionListSelectionChanged",L"::");
    pwVar14 = pwVar23;
    while (pwVar6 = pwVar12, pwVar6 != (wchar_t *)0x0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
      pwVar14 = pwVar6;
    }
    FName::FName(&local_res10,pwVar14 + 2,1);
    uVar9 = local_res10;
    lVar11 = param_1[0xde];
    plVar28 = (longlong *)(lVar11 + 0x180);
    FWeakObjectPtr::operator=(&local_1b8,0);
    local_1b0 = 0;
    FWeakObjectPtr::operator=(&local_1b8,param_1);
    local_1b0 = uVar9;
    local_res8 = 0;
    if ((uVar9 != 0) && (lVar13 = FWeakObjectPtr::Get(&local_1b8), lVar13 != 0)) {
      UObject::FindFunction(lVar13,local_1b0);
    }
    piVar4 = (int *)*plVar28;
    iVar26 = *(int *)(lVar11 + 0x188);
    plVar17 = (longlong *)local_1b8;
    for (piVar21 = piVar4; local_1b8 = (wchar_t *)plVar17, piVar21 != piVar4 + (longlong)iVar26 * 4;
        piVar21 = piVar21 + 4) {
      local_1b8._0_4_ = (int)plVar17;
      if (((*piVar21 == (int)local_1b8) &&
          (local_1b8._4_4_ = (int)((ulonglong)plVar17 >> 0x20),
          bVar31 = piVar21[1] == local_1b8._4_4_, bVar31)) ||
         ((cVar10 = FWeakObjectPtr::IsValid(piVar21), cVar10 == '\0' &&
          (cVar10 = FWeakObjectPtr::IsValid(&local_1b8), cVar10 == '\0')))) {
        bVar31 = true;
      }
      else {
        bVar31 = false;
      }
      if ((bVar31) && (*(ulonglong *)(piVar21 + 2) == local_1b0)) {
        bVar31 = true;
      }
      else {
        bVar31 = false;
      }
      if (bVar31) {
        if ((int)((longlong)piVar21 - (longlong)piVar4 >> 4) != -1) goto LAB_14100cab0;
        break;
      }
      plVar17 = (longlong *)local_1b8;
    }
    iVar26 = *(int *)(lVar11 + 0x188);
    *(int *)(lVar11 + 0x188) = iVar26 + 1;
    if (*(int *)(lVar11 + 0x18c) < iVar26 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar28,iVar26);
    }
    puVar20 = (undefined4 *)((longlong)iVar26 * 0x10 + *plVar28);
    *puVar20 = (int)local_1b8;
    puVar20[1] = local_1b8._4_4_;
    *(ulonglong *)(puVar20 + 2) = local_1b0;
LAB_14100cab0:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar28);
    uStack_170 = (wchar_t *)((ulonglong)uStack_170 & 0xffffffff00000000);
    local_178 = (wchar_t *)&LAB_140fefd88;
    local_198 = (longlong *)&LAB_140fefd88;
    uStack_190 = uStack_170;
    pwVar12 = _guard_xfg_dispatch_icall_nop
                        (L"&UGFxQuickChangeMenuBase::OnSelectionListItemClicked",L"::");
    pwVar14 = pwVar23;
    while (pwVar6 = pwVar12, pwVar6 != (wchar_t *)0x0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
      pwVar14 = pwVar6;
    }
    FName::FName(&local_res8,pwVar14 + 2,1);
    FUN_1407260e0(param_1[0xde] + 0x1a8,param_1,&local_198,local_res8);
    (**(code **)(*(longlong *)(param_1[0xde] + 0x170) + 0x38))
              ((longlong *)(param_1[0xde] + 0x170),0);
  }
  local_1a8 = 0;
  local_1a0 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
  FGenericPlatformString::Memcpy(local_1a8,L"topperText",0x16);
  local_1b8 = (wchar_t *)0x0;
  local_1b0 = 0;
  lVar11 = FUN_140ac4770(param_1,&local_1a8,0,6,&local_1b8);
  param_1[0xdb] = lVar11;
  plVar28 = (longlong *)local_1b8;
  for (iVar26 = (int)local_1b0; iVar26 != 0; iVar26 = iVar26 + -1) {
    if (*plVar28 != 0) {
      FMemory::Free();
    }
    plVar28 = plVar28 + 2;
  }
  if (local_1b8 != (wchar_t *)0x0) {
    FMemory::Free(local_1b8);
  }
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  pwVar14 = (wchar_t *)FWeakObjectPtr::Get((undefined1 *)((longlong)param_1 + 0x58c));
  if (pwVar14 == (wchar_t *)0x0) {
LAB_14100cc47:
    local_1b8 = (wchar_t *)0x0;
    pwVar14 = pwVar23;
  }
  else {
    local_1b8 = pwVar14;
    lVar11 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pwVar14 + 8) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar14 + 8) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar31 = false;
    }
    else {
      bVar31 = true;
    }
    if (!bVar31) goto LAB_14100cc47;
  }
  lVar11 = FWeakObjectPtr::Get((undefined1 *)((longlong)param_1 + 0x594));
  if (lVar11 == 0) {
LAB_14100ccee:
    lVar11 = 0;
    local_1a8 = 0;
  }
  else {
    local_1a8 = lVar11;
    lVar13 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar31 = false;
    }
    else {
      bVar31 = true;
    }
    if (!bVar31) goto LAB_14100ccee;
    uVar15 = AInteractiveFoliageActor::GetPrivateStaticClass();
    pwVar12 = (wchar_t *)AGameStateBase::OnRep_GameModeClass(lVar11,uVar15);
    if (pwVar12 != (wchar_t *)0x0) {
      lVar13 = AInteractiveFoliageActor::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(pwVar12 + 8) + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pwVar12 + 8) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
           ) != lVar13 + 0x88)) {
        bVar31 = false;
      }
      else {
        bVar31 = true;
      }
      if (bVar31) goto LAB_14100ccf9;
    }
  }
  pwVar12 = pwVar23;
LAB_14100ccf9:
  local_res8 = local_res8 & 0xffffffffffffff00;
  local_res18 = FUN_142ebdd70(param_1);
  local_c0 = (longlong *)CONCAT44(local_c0._4_4_,(undefined4)local_c0);
  if (((pwVar14 != (wchar_t *)0x0) &&
      (local_c0 = (longlong *)CONCAT44(local_c0._4_4_,(undefined4)local_c0), lVar11 != 0)) &&
     (local_c0 = (longlong *)CONCAT44(local_c0._4_4_,(undefined4)local_c0),
     pwVar12 != (wchar_t *)0x0)) {
    local_res20 = CONCAT44(local_res20._4_4_,0xffffffff);
    cVar10 = FUN_142710360(pwVar14,&local_res20);
    if (cVar10 != '\0') {
      local_res8 = CONCAT71(local_res8._1_7_,(int)local_res20 != 0);
    }
    local_118 = (ulonglong *)0x0;
    local_110 = 0;
    local_128 = (ulonglong *)0x0;
    local_120 = 0;
    FUN_140e4bbc0(pwVar12,&local_128,&local_118);
    pwVar14 = (wchar_t *)
              ((ulonglong)((longlong)(local_118 + (int)local_110) + (7 - (longlong)local_118)) >> 3)
    ;
    if (local_118 + (int)local_110 < local_118) {
      pwVar14 = pwVar23;
    }
    pwVar12 = pwVar23;
    puVar29 = local_118;
    if (pwVar14 != (wchar_t *)0x0) {
      do {
        local_res10 = *puVar29;
        iVar26 = (int)param_1[0xec];
        *(int *)(param_1 + 0xec) = iVar26 + 1;
        if (*(int *)((longlong)param_1 + 0x764) < iVar26 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xeb,iVar26);
        }
        puVar29 = puVar29 + 1;
        pwVar12 = (wchar_t *)((longlong)pwVar12 + 1);
        *(ulonglong *)(param_1[0xeb] + (longlong)iVar26 * 8) = local_res10;
      } while (pwVar12 != pwVar14);
    }
    pwVar14 = (wchar_t *)
              ((ulonglong)((longlong)(local_128 + (int)local_120) + (7 - (longlong)local_128)) >> 3)
    ;
    if (local_128 + (int)local_120 < local_128) {
      pwVar14 = pwVar23;
    }
    pwVar12 = pwVar23;
    puVar29 = local_128;
    if (pwVar14 != (wchar_t *)0x0) {
      do {
        local_res10 = *puVar29;
        iVar26 = (int)param_1[0xea];
        *(int *)(param_1 + 0xea) = iVar26 + 1;
        if (*(int *)((longlong)param_1 + 0x754) < iVar26 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe9,iVar26);
        }
        puVar29 = puVar29 + 1;
        pwVar12 = (wchar_t *)((longlong)pwVar12 + 1);
        *(ulonglong *)(param_1[0xe9] + (longlong)iVar26 * 8) = local_res10;
      } while (pwVar12 != pwVar14);
    }
    local_178 = local_1b8;
    uStack_170 = (wchar_t *)0x0;
    AlgoImpl::
    IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
              (param_1[0xe9],(longlong)(int)param_1[0xea],local_res8 & 0xff,&local_178);
    if (param_1[0xdd] != 0) {
      uStack_144 = 1;
      uVar2 = *(uint *)(param_1 + 0xe4);
      puVar1 = (uint *)(param_1 + 0xe1);
      local_148 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      if (uVar2 != 0) {
        puVar25 = (uint *)param_1[0xe3];
        if ((uint *)param_1[0xe3] == (uint *)0x0) {
          puVar25 = puVar1;
        }
        uVar3 = *puVar25;
        pwVar14 = pwVar23;
        pwVar12 = pwVar23;
        while (uVar3 == 0) {
          iVar26 = (int)pwVar14;
          uStack_130 = (int)pwVar12 + 0x20;
          pwVar12 = (wchar_t *)(ulonglong)uStack_130;
          local_148 = iVar26 + 1;
          pwVar14 = (wchar_t *)(ulonglong)local_148;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar26)
          goto LAB_14100cf5d;
          uVar3 = puVar25[(longlong)iVar26 + 1];
        }
        uStack_144 = uVar3 - 1 & uVar3 ^ uVar3;
        iVar26 = 0x1f;
        if (uStack_144 != 0) {
          for (; uStack_144 >> iVar26 == 0; iVar26 = iVar26 + -1) {
          }
        }
        if (uStack_144 == 0) {
          iVar26 = 0x20;
        }
        else {
          iVar26 = 0x1f - iVar26;
        }
        uStack_134 = (uStack_130 - iVar26) + 0x1f;
        if ((int)uVar2 < (int)uStack_134) {
LAB_14100cf5d:
          uStack_134 = uVar2;
        }
      }
      local_98 = param_1 + 0xdf;
      uVar3 = *(uint *)(param_1 + 0xe4);
      uStack_a8 = CONCAT44(uStack_134,0xffffffff);
      local_a0 = CONCAT44(uStack_12c,uStack_130);
      uStack_90 = CONCAT44(uStack_144,local_148);
      local_138 = -1 << ((byte)uVar3 & 0x1f);
      uVar24 = uVar3 & 0xffffffe0;
      uStack_b8 = local_148;
      uStack_b4 = uStack_144;
      puStack_140 = puVar1;
      uStack_134 = uVar3;
      local_b0 = puVar1;
      puStack_88 = puVar1;
      uStack_80 = uStack_a8;
      uStack_78 = local_a0;
      local_c0 = local_98;
      if (uVar3 != uVar2) {
        puVar25 = (uint *)param_1[0xe3];
        if ((uint *)param_1[0xe3] == (uint *)0x0) {
          puVar25 = puVar1;
        }
        uVar19 = puVar25[(int)uVar3 >> 5] & local_138;
        iVar26 = (int)uVar3 >> 5;
        while (uVar19 == 0) {
          uVar24 = uVar24 + 0x20;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar26)
          goto LAB_14100d046;
          uVar19 = puVar25[(longlong)iVar26 + 1];
          local_138 = 0xffffffff;
          iVar26 = iVar26 + 1;
        }
        uVar19 = uVar19 - 1 & uVar19 ^ uVar19;
        iVar26 = 0x1f;
        if (uVar19 != 0) {
          for (; uVar19 >> iVar26 == 0; iVar26 = iVar26 + -1) {
          }
        }
        if (uVar19 == 0) {
          iVar26 = 0x20;
        }
        else {
          iVar26 = 0x1f - iVar26;
        }
        uStack_134 = (uVar24 - iVar26) + 0x1f;
        uVar3 = uStack_134;
        if ((int)uVar2 < (int)uStack_134) {
LAB_14100d046:
          uStack_134 = uVar2;
          uVar3 = uVar2;
        }
      }
      while( true ) {
        if ((uStack_a8._4_4_ == uVar3) && (local_b0 == puVar1)) {
          bVar31 = true;
        }
        else {
          bVar31 = false;
        }
        if ((bVar31) && (local_c0 == param_1 + 0xdf)) {
          bVar31 = false;
        }
        else {
          bVar31 = true;
        }
        if (!bVar31) break;
        pcVar30 = (char *)((longlong)(int)uStack_a8._4_4_ * 0x78 + *local_c0);
        if (*pcVar30 != '\0') {
          local_188 = (longlong *)0x0;
          local_180 = 9;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
          FGenericPlatformString::Memcpy(local_188,L"MenuItem",0x12);
          lVar11 = param_1[0xdd];
          uVar15 = FUN_14138e2b0();
          pwVar14 = (wchar_t *)FUN_142ebcee0(lVar11,&local_188,uVar15,0);
          if (pwVar14 == (wchar_t *)0x0) {
LAB_14100d12a:
            pwVar14 = pwVar23;
          }
          else {
            lVar11 = FUN_14138e2b0();
            if ((*(int *)(*(longlong *)(pwVar14 + 8) + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(pwVar14 + 8) + 0x88) +
                 (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
              bVar31 = false;
            }
            else {
              bVar31 = true;
            }
            if (!bVar31) goto LAB_14100d12a;
          }
          if (local_188 != (longlong *)0x0) {
            FMemory::Free();
          }
          if (pwVar14 != (wchar_t *)0x0) {
            FUN_142ed2600(pwVar14,0);
            FUN_142ed3af0(pwVar14,pcVar30 + 8,0);
            plVar28 = *(longlong **)(pwVar14 + 400);
            if (plVar28 != (longlong *)0x0) {
              (**(code **)(*plVar28 + 0x2b0))(plVar28,pcVar30 + 8,1);
            }
            if (*(longlong *)(pwVar14 + 0x188) != 0) {
              FUN_142088cf0(*(longlong *)(pwVar14 + 0x188),pcVar30 + 0x48);
            }
            plVar28 = *(longlong **)(pwVar14 + 0x194);
            if (plVar28 != (longlong *)0x0) {
              (**(code **)(*plVar28 + 0x2b0))(plVar28,pcVar30 + 0x20,1);
            }
            plVar28 = *(longlong **)(pwVar14 + 0x198);
            if (plVar28 != (longlong *)0x0) {
              (**(code **)(*plVar28 + 0x2b0))(plVar28,pcVar30 + 0x20,1);
            }
            local_108[0] = 1;
            local_res10 = local_res10 & 0xffffffffffffff00;
            FUN_1410148e0(pwVar14,&local_res10,local_108);
            (**(code **)(*(longlong *)(pwVar14 + 0xb8) + 0x38))(pwVar14 + 0xb8,1);
            *(char *)(pwVar14 + 0x1b4) = *pcVar30;
          }
        }
        uStack_a8 = CONCAT44(uStack_a8._4_4_,(uint)uStack_a8 & ~uStack_b4);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b8);
      }
    }
    FUN_14101a280(param_1);
    uStack_170 = local_1b8;
    local_178 = (wchar_t *)param_1;
    FWeakObjectPtr::operator=(&local_res10,param_1);
    uVar7 = (undefined4)local_res10;
    uVar8 = local_res10._4_4_;
    local_68 = 0;
    local_58 = 0;
    puVar16 = (undefined8 *)FUN_140438ef0(0x20,&puStack_88);
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = &PTR_FUN_14465fbc8;
      *(undefined4 *)(puVar16 + 1) = (undefined4)local_178;
      *(undefined4 *)((longlong)puVar16 + 0xc) = local_178._4_4_;
      *(int *)(puVar16 + 2) = (int)uStack_170;
      *(undefined4 *)((longlong)puVar16 + 0x14) = uStack_170._4_4_;
      *(undefined4 *)(puVar16 + 3) = uVar7;
      *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar8;
    }
    local_98 = (longlong *)&LAB_140ff1910;
    FUN_14204c280(&local_98);
    local_1b8 = (wchar_t *)0x0;
    local_1b0 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8,L"counter",0x10);
    local_188 = (longlong *)0x0;
    local_180 = 0;
    lVar11 = FUN_140e96f30(param_1,&local_1b8,0,6,&local_188);
    param_1[0x170] = lVar11;
    plVar28 = local_188;
    for (iVar26 = (int)local_180; iVar26 != 0; iVar26 = iVar26 + -1) {
      if (*plVar28 != 0) {
        FMemory::Free();
      }
      plVar28 = plVar28 + 2;
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_1b8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_1b8 = (wchar_t *)0x0;
    local_1b0 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8,L"counterText",0x18);
    local_188 = (longlong *)0x0;
    local_180 = 0;
    lVar11 = FUN_140ac4770(param_1,&local_1b8,0,6,&local_188);
    param_1[0x171] = lVar11;
    plVar28 = local_188;
    for (iVar26 = (int)local_180; iVar26 != 0; iVar26 = iVar26 + -1) {
      if (*plVar28 != 0) {
        FMemory::Free();
      }
      plVar28 = plVar28 + 2;
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_1b8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    plVar28 = (longlong *)param_1[0x170];
    if (plVar28 != (longlong *)0x0) {
      (**(code **)(*plVar28 + 0x278))(plVar28,0);
    }
    if (local_128 != (ulonglong *)0x0) {
      FMemory::Free();
    }
    if (local_118 != (ulonglong *)0x0) {
      FMemory::Free();
    }
  }
  plVar28 = param_1 + 0x17f;
  if (*(int *)((longlong)param_1 + 0xc04) < *(int *)((longlong)param_1 + 0xbc4) + 4) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (plVar28);
  }
  FWeakObjectPtr::operator=(&local_168,0);
  FWeakObjectPtr::operator=(&local_160,0);
  FWeakObjectPtr::operator=(&local_158,0);
  FWeakObjectPtr::operator=(&local_150,0);
  FWeakObjectPtr::operator=(&local_res10,0);
  local_158 = (undefined4)local_res10;
  local_154 = local_res10._4_4_;
  FWeakObjectPtr::operator=(&local_res10,0);
  local_150 = (undefined4)local_res10;
  local_14c = local_res10._4_4_;
  local_128 = (ulonglong *)0x0;
  local_120 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
  FGenericPlatformString::Memcpy(local_128,L"emoteButton0",0x1a);
  local_118 = (ulonglong *)0x0;
  local_110 = 0;
  local_res10 = FUN_140fe2e80(param_1,&local_128,0,6,&local_118);
  puVar29 = local_118;
  for (iVar26 = (int)local_110; iVar26 != 0; iVar26 = iVar26 + -1) {
    if (*puVar29 != 0) {
      FMemory::Free();
    }
    puVar29 = puVar29 + 2;
  }
  if (local_118 != (ulonglong *)0x0) {
    FMemory::Free(local_118);
  }
  if (local_128 != (ulonglong *)0x0) {
    FMemory::Free();
  }
  local_100 = 0;
  local_f8 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
  FGenericPlatformString::Memcpy(local_100,L"emoteButton1",0x1a);
  local_188 = (longlong *)0x0;
  local_180 = 0;
  local_res20 = FUN_140fe2e80(param_1,&local_100,0,6,&local_188);
  plVar17 = local_188;
  for (iVar26 = (int)local_180; iVar26 != 0; iVar26 = iVar26 + -1) {
    if (*plVar17 != 0) {
      FMemory::Free();
    }
    plVar17 = plVar17 + 2;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
  if (local_100 != 0) {
    FMemory::Free();
  }
  local_e0 = 0;
  local_d8 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
  FGenericPlatformString::Memcpy(local_e0,L"emoteButton2",0x1a);
  local_f0 = (longlong *)0x0;
  local_e8 = 0;
  lVar11 = FUN_140fe2e80(param_1,&local_e0,0,6,&local_f0);
  local_1b8 = (wchar_t *)lVar11;
  plVar17 = local_f0;
  for (iVar26 = (int)local_e8; iVar26 != 0; iVar26 = iVar26 + -1) {
    if (*plVar17 != 0) {
      FMemory::Free();
    }
    plVar17 = plVar17 + 2;
  }
  if (local_f0 != (longlong *)0x0) {
    FMemory::Free(local_f0);
  }
  if (local_e0 != 0) {
    FMemory::Free();
  }
  local_178 = (wchar_t *)0x0;
  uStack_170 = (wchar_t *)0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  FGenericPlatformString::Memcpy(local_178,L"emoteButton3",0x1a);
  local_d0 = (longlong *)0x0;
  local_c8 = 0;
  lVar13 = FUN_140fe2e80(param_1,&local_178,0,6,&local_d0);
  plVar17 = local_d0;
  for (iVar26 = (int)local_c8; iVar26 != 0; iVar26 = iVar26 + -1) {
    if (*plVar17 != 0) {
      FMemory::Free();
    }
    plVar17 = plVar17 + 2;
  }
  if (local_d0 != (longlong *)0x0) {
    FMemory::Free(local_d0);
  }
  if (local_178 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (((char)local_res8 != '\0') && (local_res18 != '\0')) {
    iVar27 = (int)param_1[0x178];
  }
  if (local_res10 != 0) {
    cVar10 = FUN_142ebdd70(param_1);
    if (cVar10 == '\0') {
      FWeakObjectPtr::operator=(&local_res8,0);
      puVar20 = &local_160;
      local_168 = (undefined4)local_res8;
      local_164 = local_res8._4_4_;
    }
    else {
      FWeakObjectPtr::operator=(&local_res8,0);
      local_168 = (undefined4)local_res8;
      local_164 = local_res8._4_4_;
      FWeakObjectPtr::operator=(&local_160,lVar11);
      FWeakObjectPtr::operator=(&local_res8,0);
      puVar20 = &local_150;
      local_158 = (undefined4)local_res8;
      local_154 = local_res8._4_4_;
    }
    FWeakObjectPtr::operator=(puVar20,local_res20);
    lVar11 = local_res10;
    uVar15 = TScriptInterface<IBlendableInterface>::
             TScriptInterface<IBlendableInterface><UMaterialInterface>(&local_198,local_res10);
    FUN_142ecfd10(param_1,uVar15,&local_168);
    (**(code **)(*(longlong *)(lVar11 + 0x170) + 0x38))((longlong *)(lVar11 + 0x170),0);
    FName::FName(&local_res8,L"OnEmoteLoadoutButtonClicked",1);
    FWeakObjectPtr::operator=(lVar11 + 0x1b0,param_1);
    *(ulonglong *)(lVar11 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnEmoteLoadoutButtonFocused",1);
    FWeakObjectPtr::operator=(lVar11 + 0x1d0,param_1);
    *(ulonglong *)(lVar11 + 0x1d8) = local_res8;
    if (0 < *(int *)(local_1a8 + 0x26d8)) {
      *(undefined8 *)(lVar11 + 0x308) = **(undefined8 **)(local_1a8 + 0x26d0);
    }
    if ((int)param_1[0x177] == 0) {
      puVar18 = &DAT_143f3eda8;
    }
    else {
      puVar18 = (undefined2 *)param_1[0x176];
    }
    FString::PrintfImpl(&local_198,puVar18,iVar27);
    local_148 = iVar27 + 1;
    FString::FString(&puStack_140,&local_198);
    if (local_198 != (longlong *)0x0) {
      FMemory::Free();
    }
    iVar26 = (int)param_1[0x180];
    lVar22 = (longlong)iVar26;
    *(int *)(param_1 + 0x180) = iVar26 + 1;
    if (*(int *)((longlong)param_1 + 0xc04) < iVar26 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar28,iVar26);
    }
    lVar5 = *plVar28;
    *(uint *)(lVar5 + lVar22 * 0x18) = local_148;
    *(uint **)(lVar5 + 8 + lVar22 * 0x18) = puStack_140;
    *(uint *)(lVar5 + 0x10 + lVar22 * 0x18) = local_138;
    *(uint *)(lVar5 + 0x14 + lVar22 * 0x18) = uStack_134;
    *(longlong *)(lVar11 + 0x360) = *plVar28;
    plVar17 = (longlong *)FString::FString(&local_198,param_1 + 0x174);
    FString::operator=(lVar11 + 0x350,plVar17);
    if (*plVar17 != 0) {
      FMemory::Free();
    }
    FUN_14101c0d0(lVar11);
    iVar26 = (int)param_1[0x16c];
    *(int *)(param_1 + 0x16c) = iVar26 + 1;
    if (*(int *)((longlong)param_1 + 0xb64) < iVar26 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x16b,iVar26);
    }
    *(ulonglong *)(param_1[0x16b] + (longlong)iVar26 * 8) = local_res10;
    lVar11 = (longlong)local_1b8;
  }
  lVar22 = local_res20;
  if (local_res20 != 0) {
    cVar10 = FUN_142ebdd70(param_1);
    if (cVar10 == '\0') {
      FWeakObjectPtr::operator=(&local_168,local_res10);
      FWeakObjectPtr::operator=(&local_160,lVar11);
    }
    else {
      FWeakObjectPtr::operator=(&local_res8,0);
      local_168 = (undefined4)local_res8;
      local_164 = local_res8._4_4_;
      FWeakObjectPtr::operator=(&local_160,lVar13);
      FWeakObjectPtr::operator=(&local_158,local_res10);
      FWeakObjectPtr::operator=(&local_res8,0);
      local_150 = (undefined4)local_res8;
      local_14c = local_res8._4_4_;
    }
    uVar15 = TScriptInterface<IBlendableInterface>::
             TScriptInterface<IBlendableInterface><UMaterialInterface>(&local_198,lVar22);
    FUN_142ecfd10(param_1,uVar15,&local_168);
    (**(code **)(*(longlong *)(lVar22 + 0x170) + 0x38))((longlong *)(lVar22 + 0x170),0);
    FName::FName(&local_res8,L"OnEmoteLoadoutButtonClicked",1);
    FWeakObjectPtr::operator=(lVar22 + 0x1b0,param_1);
    *(ulonglong *)(lVar22 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnEmoteLoadoutButtonFocused",1);
    FWeakObjectPtr::operator=(lVar22 + 0x1d0,param_1);
    *(ulonglong *)(lVar22 + 0x1d8) = local_res8;
    if (1 < *(int *)(local_1a8 + 0x26d8)) {
      *(undefined8 *)(lVar22 + 0x308) = *(undefined8 *)(*(longlong *)(local_1a8 + 0x26d0) + 8);
    }
    if ((int)param_1[0x177] == 0) {
      puVar18 = &DAT_143f3eda8;
    }
    else {
      puVar18 = (undefined2 *)param_1[0x176];
    }
    FString::PrintfImpl(&local_198,puVar18,iVar27 + 1);
    local_148 = iVar27 + 2;
    FString::FString(&puStack_140,&local_198);
    if (local_198 != (longlong *)0x0) {
      FMemory::Free();
    }
    iVar26 = (int)param_1[0x180];
    lVar11 = (longlong)iVar26;
    *(int *)(param_1 + 0x180) = iVar26 + 1;
    if (*(int *)((longlong)param_1 + 0xc04) < iVar26 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar28,iVar26);
    }
    lVar5 = *plVar28;
    *(uint *)(lVar5 + lVar11 * 0x18) = local_148;
    *(uint **)(lVar5 + 8 + lVar11 * 0x18) = puStack_140;
    *(uint *)(lVar5 + 0x10 + lVar11 * 0x18) = local_138;
    *(uint *)(lVar5 + 0x14 + lVar11 * 0x18) = uStack_134;
    *(longlong *)(lVar22 + 0x360) = *plVar28 + 0x18;
    plVar17 = (longlong *)FString::FString(&local_198,param_1 + 0x174);
    FString::operator=(lVar22 + 0x350,plVar17);
    if (*plVar17 != 0) {
      FMemory::Free();
    }
    FUN_14101c0d0(lVar22);
    iVar26 = (int)param_1[0x16c];
    *(int *)(param_1 + 0x16c) = iVar26 + 1;
    if (*(int *)((longlong)param_1 + 0xb64) < iVar26 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x16b,iVar26);
    }
    *(longlong *)(param_1[0x16b] + (longlong)iVar26 * 8) = local_res20;
  }
  lVar22 = (longlong)local_1b8;
  lVar11 = local_res20;
  if (local_1b8 != (wchar_t *)0x0) {
    cVar10 = FUN_142ebdd70(param_1);
    if (cVar10 == '\0') {
      FWeakObjectPtr::operator=(&local_168,lVar11);
      puVar20 = &local_160;
    }
    else {
      FWeakObjectPtr::operator=(&local_168,local_res10);
      FWeakObjectPtr::operator=(&local_res8,0);
      local_160 = (undefined4)local_res8;
      local_15c = local_res8._4_4_;
      FWeakObjectPtr::operator=(&local_res8,0);
      puVar20 = &local_150;
      local_158 = (undefined4)local_res8;
      local_154 = local_res8._4_4_;
    }
    FWeakObjectPtr::operator=(puVar20,lVar13);
    uVar15 = TScriptInterface<IBlendableInterface>::
             TScriptInterface<IBlendableInterface><UMaterialInterface>(&local_198,lVar22);
    FUN_142ecfd10(param_1,uVar15,&local_168);
    (**(code **)(*(longlong *)(lVar22 + 0x170) + 0x38))((longlong *)(lVar22 + 0x170),0);
    FName::FName(&local_res8,L"OnEmoteLoadoutButtonClicked",1);
    FWeakObjectPtr::operator=(lVar22 + 0x1b0,param_1);
    *(ulonglong *)(lVar22 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnEmoteLoadoutButtonFocused",1);
    FWeakObjectPtr::operator=(lVar22 + 0x1d0,param_1);
    *(ulonglong *)(lVar22 + 0x1d8) = local_res8;
    if (2 < *(int *)(local_1a8 + 0x26d8)) {
      *(undefined8 *)(lVar22 + 0x308) = *(undefined8 *)(*(longlong *)(local_1a8 + 0x26d0) + 0x10);
    }
    if ((int)param_1[0x177] == 0) {
      puVar18 = &DAT_143f3eda8;
    }
    else {
      puVar18 = (undefined2 *)param_1[0x176];
    }
    FString::PrintfImpl(&local_198,puVar18,iVar27 + 2);
    local_148 = iVar27 + 3;
    FString::FString(&puStack_140,&local_198);
    if (local_198 != (longlong *)0x0) {
      FMemory::Free();
    }
    iVar26 = (int)param_1[0x180];
    lVar11 = (longlong)iVar26;
    *(int *)(param_1 + 0x180) = iVar26 + 1;
    if (*(int *)((longlong)param_1 + 0xc04) < iVar26 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar28,iVar26);
    }
    lVar5 = *plVar28;
    *(uint *)(lVar5 + lVar11 * 0x18) = local_148;
    *(uint **)(lVar5 + 8 + lVar11 * 0x18) = puStack_140;
    *(uint *)(lVar5 + 0x10 + lVar11 * 0x18) = local_138;
    *(uint *)(lVar5 + 0x14 + lVar11 * 0x18) = uStack_134;
    *(longlong *)(lVar22 + 0x360) = *plVar28 + 0x30;
    plVar17 = (longlong *)FString::FString(&local_198,param_1 + 0x174);
    FString::operator=(lVar22 + 0x350,plVar17);
    if (*plVar17 != 0) {
      FMemory::Free();
    }
    FUN_14101c0d0(lVar22);
    iVar26 = (int)param_1[0x16c];
    *(int *)(param_1 + 0x16c) = iVar26 + 1;
    if (*(int *)((longlong)param_1 + 0xb64) < iVar26 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x16b,iVar26);
    }
    *(wchar_t **)(param_1[0x16b] + (longlong)iVar26 * 8) = local_1b8;
  }
  lVar11 = (longlong)local_1b8;
  if (lVar13 != 0) {
    cVar10 = FUN_142ebdd70(param_1);
    if (cVar10 == '\0') {
      FWeakObjectPtr::operator=(&local_168,lVar11);
      FWeakObjectPtr::operator=(&local_res8,0);
      local_160 = (undefined4)local_res8;
      local_15c = local_res8._4_4_;
    }
    else {
      FWeakObjectPtr::operator=(&local_168,local_res20);
      FWeakObjectPtr::operator=(&local_res8,0);
      local_160 = (undefined4)local_res8;
      local_15c = local_res8._4_4_;
      FWeakObjectPtr::operator=(&local_158,lVar11);
      FWeakObjectPtr::operator=(&local_res8,0);
      local_150 = (undefined4)local_res8;
      local_14c = local_res8._4_4_;
    }
    uVar15 = TScriptInterface<IBlendableInterface>::
             TScriptInterface<IBlendableInterface><UMaterialInterface>(&local_198,lVar13);
    FUN_142ecfd10(param_1,uVar15,&local_168);
    (**(code **)(*(longlong *)(lVar13 + 0x170) + 0x38))((longlong *)(lVar13 + 0x170),0);
    FName::FName(&local_res8,L"OnEmoteLoadoutButtonClicked",1);
    FWeakObjectPtr::operator=(lVar13 + 0x1b0,param_1);
    *(ulonglong *)(lVar13 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnEmoteLoadoutButtonFocused",1);
    FWeakObjectPtr::operator=(lVar13 + 0x1d0,param_1);
    *(ulonglong *)(lVar13 + 0x1d8) = local_res8;
    if (3 < *(int *)(local_1a8 + 0x26d8)) {
      *(undefined8 *)(lVar13 + 0x308) = *(undefined8 *)(*(longlong *)(local_1a8 + 0x26d0) + 0x18);
    }
    if ((int)param_1[0x177] == 0) {
      puVar18 = &DAT_143f3eda8;
    }
    else {
      puVar18 = (undefined2 *)param_1[0x176];
    }
    FString::PrintfImpl(&local_198,puVar18,iVar27 + 3);
    local_148 = iVar27 + 4;
    FString::FString(&puStack_140,&local_198);
    if (local_198 != (longlong *)0x0) {
      FMemory::Free();
    }
    iVar27 = (int)param_1[0x180];
    lVar11 = (longlong)iVar27;
    *(int *)(param_1 + 0x180) = iVar27 + 1;
    if (*(int *)((longlong)param_1 + 0xc04) < iVar27 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar28,iVar27);
    }
    lVar22 = *plVar28;
    *(uint *)(lVar22 + lVar11 * 0x18) = local_148;
    *(uint **)(lVar22 + 8 + lVar11 * 0x18) = puStack_140;
    *(uint *)(lVar22 + 0x10 + lVar11 * 0x18) = local_138;
    *(uint *)(lVar22 + 0x14 + lVar11 * 0x18) = uStack_134;
    *(longlong *)(lVar13 + 0x360) = *plVar28 + 0x48;
    plVar28 = (longlong *)FString::FString(&local_198,param_1 + 0x174);
    FString::operator=(lVar13 + 0x350,plVar28);
    if (*plVar28 != 0) {
      FMemory::Free();
    }
    FUN_14101c0d0(lVar13);
    iVar27 = (int)param_1[0x16c];
    *(int *)(param_1 + 0x16c) = iVar27 + 1;
    if (*(int *)((longlong)param_1 + 0xb64) < iVar27 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x16b,iVar27);
    }
    *(longlong *)(param_1[0x16b] + (longlong)iVar27 * 8) = lVar13;
  }
  (**(code **)(*param_1 + 0x588))(param_1,0);
  uVar15 = TScriptInterface<IBlendableInterface>::
           TScriptInterface<IBlendableInterface><UMaterialInterface>(&local_198,param_1[0xdd]);
  FUN_142ed36d0(param_1,uVar15,0);
  FUN_142ecd4d0(param_1);
  local_178 = (wchar_t *)0x0;
  uStack_170 = (wchar_t *)0x0;
  uVar15 = FName::ToString(param_1 + 0x16a,&local_198);
  uVar15 = FUN_140e96f30(param_1,uVar15,0,6,&local_178);
  if (local_198 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar28 = (longlong *)local_178;
  for (iVar27 = (int)uStack_170; iVar27 != 0; iVar27 = iVar27 + -1) {
    if (*plVar28 != 0) {
      FMemory::Free();
    }
    plVar28 = plVar28 + 2;
  }
  if (local_178 != (wchar_t *)0x0) {
    FMemory::Free(local_178);
  }
  local_198 = param_1;
  uStack_190 = (wchar_t *)uVar15;
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar7 = (undefined4)local_res8;
  uVar8 = local_res8._4_4_;
  local_68 = 0;
  local_58 = 0;
  puVar16 = (undefined8 *)FUN_140438ef0(0x20,&puStack_88);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &PTR_FUN_14465fbc8;
    *(undefined4 *)(puVar16 + 1) = (undefined4)local_198;
    *(undefined4 *)((longlong)puVar16 + 0xc) = local_198._4_4_;
    *(undefined4 *)(puVar16 + 2) = (undefined4)uStack_190;
    *(undefined4 *)((longlong)puVar16 + 0x14) = uStack_190._4_4_;
    *(undefined4 *)(puVar16 + 3) = uVar7;
    *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar8;
  }
  local_98 = (longlong *)&LAB_140ff1aa0;
  FUN_14204c280(&local_98);
  FUN_141018e70(param_1);
  return;
}



// FUNCTION 14100e200 FUN_14100e200 body=469 status=ok
// SIG undefined FUN_14100e200(void)

void FUN_14100e200(longlong param_1)

{
  bool bVar1;
  void *_Src;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  longlong local_28 [2];
  
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x58c);
  plVar6 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14100e260;
  }
  plVar3 = plVar6;
LAB_14100e260:
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar2 != '\0') {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x59c);
    plVar6 = (longlong *)FUN_140fe2a00(uVar5);
  }
  if ((*(longlong *)(param_1 + 0x6b8) != 0) && (plVar3 != (longlong *)0x0)) {
    FUN_142eb8af0(*(longlong *)(param_1 + 0x6b8),&local_38);
    if (local_30 < 2) {
      FUN_142eb3990(param_1);
    }
    else {
      if (plVar6 == (longlong *)0x0) {
        FUN_142eb3990(param_1);
        *(undefined1 *)(plVar3 + 0x355) = 0;
      }
      _Src = local_38;
      local_48 = (void *)0x0;
      local_40 = local_30;
      if (local_30 == 0) {
        local_3c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_30,0);
        _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)local_30 * 2);
      }
      FString::TrimStartAndEndInline(&local_48);
      if ((local_40 != 0) && (0 < local_40 + -1)) {
        (**(code **)(*plVar3 + 0x1788))(plVar3,&local_48);
      }
      if (*(char *)(param_1 + 0x698) == '\0') {
        if (*(longlong *)(param_1 + 0x6b8) != 0) {
          local_28[0] = 0;
          local_28[1] = 0;
          FUN_142ed55e0(*(longlong *)(param_1 + 0x6b8),local_28,1);
          if (local_28[0] != 0) {
            FMemory::Free();
          }
        }
      }
      else if (plVar6 != (longlong *)0x0) {
        FUN_142eb3990(param_1);
        *(undefined1 *)(plVar3 + 0x355) = 0;
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14100e3f0 FUN_14100e3f0 body=101 status=ok
// SIG undefined FUN_14100e3f0(void)

void FUN_14100e3f0(longlong param_1)

{
  longlong local_18 [2];
  
  *(undefined1 *)(param_1 + 0x2b2) = 3;
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"death",0xc);
  FUN_142088910(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14100e460 FUN_14100e460 body=310 status=ok
// SIG undefined FUN_14100e460(void)

void FUN_14100e460(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_28;
  undefined8 local_20;
  
  if (((*(char *)(param_1 + 0x2b2) != '\x03') && (param_2 != 0)) &&
     (lVar4 = *(longlong *)(param_1 + 0x38), lVar4 != 0)) {
    lVar3 = UGSquadMemberWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (lVar4 = FUN_140eccca0(lVar4), lVar4 != 0)) &&
       (lVar4 = FUN_142df3510(lVar4), lVar4 != 0)) {
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x280));
      local_28 = *(longlong *)(param_1 + 0x270);
      uVar5 = 0;
      if (local_28 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x278);
      }
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x280));
      local_20 = 0;
      if (local_28 != 0) {
        local_20 = uVar5;
      }
      uVar2 = FUN_142dec980(lVar4,*(undefined8 *)(param_2 + 0x180));
      FUN_140ffb870(param_1,&local_28,*(undefined1 *)(param_1 + 0x2f8),uVar2);
    }
  }
  return;
}



// FUNCTION 14100e5a0 FUN_14100e5a0 body=13 status=ok
// SIG undefined FUN_14100e5a0(void)

void FUN_14100e5a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141014810(param_1,*(int *)(param_3 + 8) < 2);
  return;
}



// FUNCTION 14100e5b0 FUN_14100e5b0 body=23 status=ok
// SIG undefined FUN_14100e5b0(void)

void FUN_14100e5b0(longlong *param_1,char param_2)

{
  *(char *)((longlong)param_1 + 0x6b9) = param_2;
  if (param_2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014100e5bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x580))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14100e5d0 FUN_14100e5d0 body=8 status=ok
// SIG undefined FUN_14100e5d0(void)

void FUN_14100e5d0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x6e0) = 1;
  return;
}



// FUNCTION 14100e5e0 FUN_14100e5e0 body=497 status=ok
// SIG undefined FUN_14100e5e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14100e5e0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [4];
  code *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5d8);
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
    if ((bVar1) && (cVar2 = (**(code **)(*(longlong *)(lVar3 + 0x980) + 0x20))(), cVar2 != '\0')) {
      bVar1 = true;
      goto LAB_14100e665;
    }
  }
  bVar1 = false;
LAB_14100e665:
  if ((*(char *)(param_1 + 0x6b9) != '\0') && (!bVar1)) {
    local_d8[0] = 0xffffffff;
    uVar8 = 0xffffffff;
    if (param_2 != 0) {
      FUN_14170c210(local_d8,param_2);
      uVar8 = local_d8[0];
    }
    uVar6 = 0;
    local_d8[0] = 0xffffffff;
    local_98 = (longlong *)0x0;
    local_88 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144266c70;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = uVar8;
      uVar8 = 0xffffffff;
    }
    local_c8[0] = FUN_140ff1950;
    FUN_1416f8340(uVar8);
    FUN_1416f8340(local_d8[0]);
    cVar2 = FUN_142ebdc00(param_1);
    if ((cVar2 == '\0') || (cVar2 = FUN_142eba870(param_1), cVar2 != '\0')) {
      if (local_88 != 0) {
        plVar7 = local_b8;
        if (local_98 != (longlong *)0x0) {
          plVar7 = local_98;
        }
        if (plVar7 != (longlong *)0x0) {
          uVar6 = (**(code **)(*plVar7 + 8))();
        }
      }
      (*local_c8[0])(uVar6);
    }
    else {
      uVar6 = FUN_1420849a0(param_1,local_78,local_c8);
      FUN_14208d480(param_1,uVar6);
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
      FUN_142eb05b0(param_1);
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
  }
  return;
}



// FUNCTION 14100e7e0 FUN_14100e7e0 body=1325 status=ok
// SIG undefined FUN_14100e7e0(void)

void FUN_14100e7e0(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined4 local_res8 [2];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b0;
  longlong local_a8 [2];
  longlong *local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  
  FUN_142eccee0();
  if ((*(char *)(param_1 + 0x63c) == '\0') || (*(char *)(param_1 + 0x748) == '\0'))
  goto LAB_14100eccd;
  lVar6 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x744));
  lVar7 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x740));
  if (lVar6 != lVar7) {
    lVar6 = 0x744;
    if (*(char *)(param_1 + 0x748) == '\0') {
      lVar6 = 0x740;
    }
    uVar8 = FUN_1416f8720(*(undefined4 *)(lVar6 + param_1));
    FUN_14170c210(param_1 + 0x740,uVar8);
  }
  if (*(char *)(param_1 + 0x748) != '\0') {
    *(undefined1 *)(param_1 + 0x748) = 0;
    FUN_1416f8340(*(undefined4 *)(param_1 + 0x744));
  }
  local_res8[0] = 0xffffffff;
  uVar8 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x740));
  FUN_14170c210(local_res8,uVar8);
  lVar6 = FUN_1416f8720(local_res8[0]);
  FUN_1416f8340(local_res8[0]);
  if (lVar6 == 0) goto LAB_14100eccd;
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
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x6c0,lVar6 + 0x30,1,0);
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
      FText::FText(local_88,lVar6 + 0x48);
      if (*(char *)(lVar6 + 0x74) == '\0') {
        uVar8 = FText::ToString(local_88);
        iVar5 = FUN_141592950(uVar8,L"{0}|platform(",1,0,0xffffffff);
        if (iVar5 != -1) goto LAB_14100e995;
      }
      else {
LAB_14100e995:
        uVar8 = FUN_140ff5460(local_70,lVar6 + 0x48);
        FText::operator=(local_88,uVar8);
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_68 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
        }
      }
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x6d8,local_88,1,0);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_80 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
  }
  FString::operator=(param_1 + 0x760,lVar6 + 0x60);
  plVar3 = *(longlong **)(param_1 + 0x710);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar3[1];
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x708) != 0) {
            FUN_14203e230(*(longlong *)(param_1 + 0x708),param_1 + 0x760);
          }
          LOCK();
          plVar2 = plVar3 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x730);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar3[1];
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x728) != 0) {
            if (*(float *)(lVar6 + 0x70) <= 0.0) {
              FUN_141004000(param_1);
            }
            else {
              *(float *)(param_1 + 0x750) = *(float *)(lVar6 + 0x70);
            }
          }
          LOCK();
          plVar2 = plVar3 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    local_a8[0] = 0;
    local_a8[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
    FGenericPlatformString::Memcpy(local_a8[0],L"intro",0xc);
    FUN_142088910(*(undefined8 *)(param_1 + 0x2c0),local_a8);
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x720);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar3[1];
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x718) != 0) {
            local_b0 = 0x42c80000;
            local_c8 = CONCAT44(*(undefined4 *)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0x6b0));
            local_c0 = 0x42c80000;
            FUN_142054e50(*(longlong *)(param_1 + 0x718),&local_c8);
          }
          LOCK();
          plVar2 = plVar3 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if (*(char *)(lVar6 + 0x74) != '\0') {
    FUN_1404cf2e0(&local_98,0);
    if ((local_98 != (longlong *)0x0) &&
       (cVar4 = (**(code **)(*local_98 + 0x10))(local_98,1), cVar4 != '\0')) {
      *(undefined1 *)(param_1 + 0x754) = 1;
    }
    plVar3 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_90 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
LAB_14100eccd:
  if ((0.0 < *(float *)(param_1 + 0x750)) &&
     (param_2 = *(float *)(param_1 + 0x750) - param_2, *(float *)(param_1 + 0x750) = param_2,
     param_2 <= 0.0)) {
    FUN_141004000(param_1);
  }
  return;
}



// FUNCTION 14100ed10 FUN_14100ed10 body=705 status=ok
// SIG undefined FUN_14100ed10(void)

void FUN_14100ed10(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x50));
  lVar1 = param_1[0x4e];
  plVar6 = (longlong *)0x0;
  if (lVar1 != 0) {
    plVar6 = (longlong *)param_1[0x4f];
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x50));
  plVar5 = plVar6;
  if (lVar1 == 0) {
    plVar5 = (longlong *)0x0;
  }
  if ((plVar5 != (longlong *)0x0) &&
     (iVar2 = (**(code **)(*plVar5 + 0x10))(plVar5), (int)param_1[0x61] != iVar2)) {
    FUN_14101ce20(param_1);
    uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
    *(undefined4 *)(param_1 + 0x61) = uVar3;
  }
  FUN_14101d440(param_1,1);
  fVar11 = 0.0;
  if (*(char *)((longlong)param_1 + 0x2b2) == '\0') {
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar4 == 0) {
      fVar7 = 0.0;
    }
    else {
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      fVar7 = *(float *)(lVar4 + 0x790);
    }
    if (*(float *)(param_1 + 100) + *(float *)((longlong)param_1 + 0x30c) < fVar7) {
      FUN_14101de30(param_1,1);
    }
  }
  if (((((lVar1 == 0) || (plVar6 == (longlong *)0x0)) || ((char)param_1[0x56] != '\0')) ||
      ((*(char *)((longlong)param_1 + 0x2b1) != '\x01' || (param_1[0x4b] == 0)))) ||
     ((plVar5 = (longlong *)FUN_140ff6a30(param_1), plVar5 == (longlong *)0x0 ||
      ((ABS(*(float *)(param_1 + 0x4c) - *(float *)((longlong)param_1 + 0x264)) <= 1e-08 ||
       (ABS(*(float *)(param_1 + 0x4c)) <= 1e-08)))))) goto LAB_14100efa8;
  (**(code **)(*plVar5 + 0xe40))(plVar5,&local_48);
  (**(code **)(*plVar6 + 0x90))(plVar6,&local_58);
  fVar8 = *(float *)((longlong)param_1 + 0x264) * *(float *)((longlong)param_1 + 0x264);
  fVar9 = *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x4c);
  fVar10 = fVar8 - fVar9;
  fVar7 = (local_54 - local_44) * (local_54 - local_44) +
          (local_58 - local_48) * (local_58 - local_48) +
          (local_50 - local_40) * (local_50 - local_40);
  if (1e-08 < ABS(fVar10)) {
    fVar10 = (fVar7 - fVar9) / fVar10;
    if (0.0 <= fVar10) goto LAB_14100ef54;
  }
  else {
    if (fVar7 < fVar8) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = 1.0;
    }
LAB_14100ef54:
    fVar11 = fVar10;
    if (1.0 <= fVar10) {
      fVar11 = 1.0;
    }
  }
  fVar11 = (float)UCurveFloat::GetFloatValue(param_1[0x4b],fVar11);
  if (1e-08 < ABS(*(float *)(param_1 + 0x62) - fVar11)) {
    FUN_142f0b170(param_1,fVar11 * 100.0);
    *(float *)(param_1 + 0x62) = fVar11;
  }
LAB_14100efa8:
  if (*(char *)((longlong)param_1 + 0x324) == '\0') {
    return;
  }
  FUN_14101be40(param_1);
  return;
}



// FUNCTION 14100efe0 FUN_14100efe0 body=660 status=ok
// SIG undefined FUN_14100efe0(void)

void FUN_14100efe0(longlong *param_1,float param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  undefined4 uVar9;
  
  FUN_140f7d2e0();
  plVar4 = (longlong *)FUN_140f67a80(param_1);
  plVar7 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_1413ffe00();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x680))(plVar4), plVar4 != (longlong *)0x0)) {
      lVar5 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14100f095;
    }
  }
  plVar4 = plVar7;
LAB_14100f095:
  if ((((param_1[0x4e] != 0) && (plVar1 = (longlong *)param_1[0x49], plVar1 != (longlong *)0x0)) &&
      (plVar4 != (longlong *)0x0)) &&
     (cVar3 = *(char *)((longlong)plVar4 + 0x599), *(char *)((longlong)param_1 + 0x321) != cVar3)) {
    *(char *)((longlong)param_1 + 0x321) = cVar3;
    (**(code **)(*plVar1 + 0x278))(plVar1,cVar3 == '\0');
  }
  FUN_14101ccf0(param_1);
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x5b));
  lVar5 = param_1[0x5c];
  if (lVar5 != 0) {
    plVar7 = (longlong *)param_1[0x5d];
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x5b));
  if (((lVar5 != 0) && (plVar7 != (longlong *)0x0)) &&
     ((cVar3 = (**(code **)(*plVar7 + 0x48))(plVar7), cVar3 == '\x01' ||
      (cVar3 = (**(code **)(*plVar7 + 0x50))(plVar7), cVar3 == '\x01')))) {
    fVar8 = (float)(**(code **)(*plVar7 + 0x60))(plVar7);
    uVar9 = (**(code **)(*plVar7 + 0x58))(plVar7);
    if (param_1[0x59] != 0) {
      FUN_142f0ead0(param_1[0x59],uVar9);
    }
    if (param_1[0x58] != 0) {
      FUN_142f0ead0(param_1[0x58],1.0 - fVar8);
    }
  }
  lVar6 = FUN_140f67a80(param_1);
  if (((lVar6 == 0) &&
      (fVar8 = *(float *)(param_1 + 0x62), *(float *)(param_1 + 0x62) = fVar8 - param_2,
      fVar8 - param_2 <= 0.0)) && (*(undefined4 *)(param_1 + 0x62) = 0x3f000000, lVar5 != 0)) {
    lVar6 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      lVar6 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return;
      }
      lVar5 = FUN_140ff5ad0(lVar5);
      if (lVar5 == 0) {
        return;
      }
    }
    (**(code **)(*param_1 + 0x2a8))(param_1,lVar5);
    FUN_140f8ef30(param_1,*(undefined8 *)(lVar5 + 0x4c0));
  }
  return;
}



// FUNCTION 14100f280 FUN_14100f280 body=316 status=ok
// SIG undefined FUN_14100f280(void)

void FUN_14100f280(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined1 local_res8 [8];
  
  if (0 < *(int *)(param_1 + 0x7e8)) {
    lVar1 = *(longlong *)(param_1 + 0x7e0);
    fVar3 = *(float *)(lVar1 + 0x28);
    if ((0.0 < fVar3) || (ABS(fVar3) <= 1e-08)) {
      if (*(char *)(lVar1 + 0x2d) == '\0') {
        *(float *)(lVar1 + 0x28) = fVar3 + param_2;
        if (*(float *)(param_1 + 0x67c) < *(float *)(*(longlong *)(param_1 + 0x7e0) + 0x28)) {
          FUN_141013b50();
        }
      }
    }
    else {
      FUN_140ff3800();
    }
  }
  if (1e-08 < *(float *)(param_1 + 0x664)) {
    fVar3 = *(float *)(param_1 + 0x664) - param_2;
    *(float *)(param_1 + 0x664) = fVar3;
    if (fVar3 < 1e-08) {
      *(undefined4 *)(param_1 + 0x664) = 0xbf800000;
      *(undefined8 *)(param_1 + 0x688) = 0;
      lVar1 = *(longlong *)(param_1 + 0x630);
      puVar2 = (undefined8 *)FUN_142f5ed60(*(undefined8 *)(param_1 + 0x698),local_res8);
      (**(code **)(lVar1 + 0x40))(param_1 + 0x630,*puVar2);
    }
  }
  if ((1e-08 < *(float *)(param_1 + 0x80c)) && (1e-08 < *(float *)(param_1 + 0x810))) {
    param_2 = *(float *)(param_1 + 0x80c) - param_2;
    *(float *)(param_1 + 0x80c) = param_2;
    FUN_14101ace0(param_1,(int)param_2);
    FUN_14101abf0(param_1,*(float *)(param_1 + 0x80c) / *(float *)(param_1 + 0x810));
  }
  return;
}



// FUNCTION 14100f3c0 FUN_14100f3c0 body=755 status=ok
// SIG undefined FUN_14100f3c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14100f3c0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined1 auStack_138 [32];
  void **local_118;
  void *local_108;
  ulonglong local_100;
  longlong *local_f8;
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FUN_142ecd1d0();
  if ((char)param_1[0xdb] != '\0') {
    *(undefined1 *)(param_1 + 0xdb) = 0;
    lVar2 = FUN_140fe3ca0(param_1);
    pvVar6 = (void *)0x0;
    pvVar5 = pvVar6;
    if (lVar2 != 0) {
      pvVar5 = *(void **)(lVar2 + 0x5b8);
    }
    if (pvVar5 != (void *)0x0) {
      local_118 = &local_108;
      local_108 = (void *)0x0;
      local_100 = 0;
      FUN_140ff6140(pvVar5,(int)param_1[200],0,param_1 + 0xc6);
      lVar2 = (longlong)(int)local_100;
      local_f0 = (void *)0x0;
      local_e8 = (int)local_100;
      local_f8 = param_1;
      if ((int)local_100 == 0) {
        local_e4 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f0,local_100 & 0xffffffff,0);
        pvVar6 = local_f0;
        _guard_xfg_dispatch_icall_nop(local_f0,local_108,lVar2 * 2);
      }
      iVar1 = local_e8;
      plVar7 = local_f8;
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_CopyToEmptyStorage_144553d08;
        puVar3[1] = plVar7;
        puVar3[2] = pvVar6;
        *(int *)(puVar3 + 3) = iVar1;
        *(undefined4 *)((longlong)puVar3 + 0x1c) = local_e4;
        pvVar6 = (void *)0x0;
      }
      local_d8[0] = &LAB_140ff1ab0;
      uVar4 = FUN_1420849a0(param_1,local_88,local_d8);
      FUN_14208c4f0(param_1,uVar4);
      if (local_98 != 0) {
        plVar7 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar7 = local_a8;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      if (local_108 != (void *)0x0) {
        FMemory::Free(local_108);
      }
      lVar2 = *param_1;
      local_f8 = (longlong *)0x0;
      local_f0 = (void *)0x0;
      puVar3 = (undefined8 *)FName::FName(&local_108,"PC_Chat_Received",1);
      (**(code **)(lVar2 + 0x4e8))(param_1,*puVar3,&local_f8);
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = param_1;
        *puVar3 = &PTR_FUN_143f77b70;
      }
      local_d8[0] = &LAB_140ff1e60;
      uVar4 = FUN_1420849a0(param_1,local_88,local_d8);
      FUN_14208c260(param_1,uVar4);
      if (local_48 != 0) {
        plVar7 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar7 = local_58;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        plVar7 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar7 = local_a8;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14100f6c0 FUN_14100f6c0 body=128 status=ok
// SIG undefined FUN_14100f6c0(void)

void FUN_14100f6c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  FUN_142ecd1d0();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6b8));
  lVar1 = *(longlong *)(param_1 + 0x6b0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6b8));
  if (lVar1 != 0) {
    cVar2 = FUN_142ebe180(param_1);
    if ((cVar2 == '\0') && (lVar1 = *(longlong *)(lVar1 + 0x3c8), lVar1 != 0)) {
      cVar2 = (**(code **)(*(longlong *)(lVar1 + 0xd98) + 0x48))();
      if (cVar2 == '\0') {
        FUN_141012490(param_1,1);
      }
    }
  }
  return;
}



// FUNCTION 14100f740 FUN_14100f740 body=217 status=ok
// SIG undefined FUN_14100f740(void)

ulonglong FUN_14100f740(longlong *param_1,float param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar2 = 0;
  LOCK();
  uVar1 = *(uint *)(param_1 + 0xc0);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 0xc0) = 0;
  }
  else {
    uVar2 = (ulonglong)uVar1;
  }
  UNLOCK();
  if (((uVar1 != 0) && (1e-08 < *(float *)((longlong)param_1 + 0x6bc))) &&
     (uVar2 = FWeakObjectPtr::IsValid(param_1 + 0xba), (char)uVar2 != '\0')) {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0xba);
    uVar2 = FUN_142eb9000(uVar3);
    if ((char)uVar2 != '\0') {
      if (0.5 <= param_2) {
        param_2 = 0.5;
      }
      param_2 = *(float *)((longlong)param_1 + 0x6bc) - param_2;
      *(float *)((longlong)param_1 + 0x6bc) = param_2;
      if (param_2 < 1e-08) {
        (**(code **)(*param_1 + 0x580))(param_1,0);
        local_38 = 0;
        local_30 = 0;
        uVar2 = (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0xd6],&local_38);
      }
    }
  }
  return uVar2;
}



// FUNCTION 14100f820 FUN_14100f820 body=771 status=ok
// SIG undefined FUN_14100f820(void)

void FUN_14100f820(longlong param_1,float param_2)

{
  PSRWLOCK SRWLock;
  float fVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  PSRWLOCK SRWLock_00;
  double dVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  lVar6 = *(longlong *)(param_1 + 0x700);
  if (lVar6 == 0) {
    dVar8 = (double)param_2;
  }
  else {
    dVar8 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
    lVar6 = local_res8.QuadPart - lVar6;
    dVar9 = (double)lVar6;
    if (lVar6 < 0) {
      dVar9 = dVar9 + 1.8446744073709552e+19;
    }
    dVar8 = dVar8 * dVar9;
  }
  SRWLock_00 = (PSRWLOCK)(param_1 + 0x6a0);
  ((LARGE_INTEGER *)(param_1 + 0x700))->QuadPart = (LONGLONG)local_res8;
  AcquireSRWLockShared(SRWLock_00);
  if (((*(char *)(param_1 + 0x694) == '\0') || (*(longlong **)(param_1 + 0x658) == (longlong *)0x0))
     || (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x658) + 0x480))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  ReleaseSRWLockShared(SRWLock_00);
  if (bVar4) {
    AcquireSRWLockShared(SRWLock_00);
    if ((*(longlong *)(param_1 + 0x658) != 0) &&
       (cVar5 = FText::IsEmpty(*(longlong *)(param_1 + 0x658) + 0x538), cVar5 == '\0')) {
      plVar3 = *(longlong **)(param_1 + 0x658);
      (**(code **)(*plVar3 + 0x510))(plVar3,plVar3 + 0xa7);
    }
    fVar1 = *(float *)(param_1 + 0x690);
    ReleaseSRWLockShared(SRWLock_00);
    AcquireSRWLockExclusive(SRWLock_00);
    *(float *)(param_1 + 0x690) = *(float *)(param_1 + 0x690) - (float)dVar8;
    if (0.0 < fVar1) goto LAB_14100fb08;
    FUN_140ff4330(param_1,param_1 + 0x650);
    ReleaseSRWLockExclusive(SRWLock_00);
  }
  SRWLock = (PSRWLOCK)(param_1 + 0x648);
  AcquireSRWLockShared(SRWLock);
  iVar2 = *(int *)(param_1 + 0x640);
  ReleaseSRWLockShared(SRWLock);
  AcquireSRWLockShared(SRWLock_00);
  if ((*(char *)(param_1 + 0x694) == '\0') && (0 < iVar2)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  ReleaseSRWLockShared(SRWLock_00);
  if (bVar4) {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x5d0);
    if (cVar5 != '\0') {
      uVar7 = FWeakObjectPtr::Get(param_1 + 0x5d0);
      cVar5 = FUN_142ebe1f0(uVar7,param_1);
      if (cVar5 != '\0') {
        AcquireSRWLockExclusive(SRWLock_00);
        AcquireSRWLockShared(SRWLock);
        FUN_140fe6b90(param_1 + 0x650,*(undefined8 *)(param_1 + 0x638));
        ReleaseSRWLockShared(SRWLock);
        cVar5 = FUN_140ff1150(param_1,param_1 + 0x650);
        ReleaseSRWLockExclusive(SRWLock_00);
        if (cVar5 != '\0') {
          AcquireSRWLockExclusive(SRWLock);
          FUN_141013a40(param_1 + 0x638,0,1,1);
          ReleaseSRWLockExclusive(SRWLock);
        }
      }
    }
  }
  SRWLock_00 = (PSRWLOCK)(param_1 + 0x6f8);
  AcquireSRWLockShared(SRWLock_00);
  if (((*(char *)(param_1 + 0x6ec) == '\0') || (*(longlong **)(param_1 + 0x6b0) == (longlong *)0x0))
     || (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x480))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  ReleaseSRWLockShared(SRWLock_00);
  if (!bVar4) {
    return;
  }
  AcquireSRWLockExclusive(SRWLock_00);
  *(float *)(param_1 + 0x6e8) = *(float *)(param_1 + 0x6e8) - (float)dVar8;
  ReleaseSRWLockExclusive(SRWLock_00);
  AcquireSRWLockShared(SRWLock_00);
  fVar1 = *(float *)(param_1 + 0x6e8);
  ReleaseSRWLockShared(SRWLock_00);
  if (0.0 < fVar1) {
    return;
  }
  AcquireSRWLockExclusive(SRWLock_00);
  FUN_140ff4330(param_1,param_1 + 0x6a8);
LAB_14100fb08:
  ReleaseSRWLockExclusive(SRWLock_00);
  return;
}



// FUNCTION 14100fb30 FUN_14100fb30 body=430 status=ok
// SIG undefined FUN_14100fb30(void)

void FUN_14100fb30(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  float fVar5;
  
  cVar3 = FUN_142ebe180();
  if (cVar3 == '\0') {
    FUN_141012490(param_1,1);
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xd7));
  if ((param_1[0xd6] == 0) || (param_1[0xca] == 0)) goto LAB_14100fc5d;
  if ((*(longlong *)(param_1[0xd6] + 0x3c8) == 0) ||
     ((cVar3 = FUN_142ebe180(param_1), cVar3 != '\0' &&
      (cVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1[0xd6] + 0x3c8) + 0xd98) + 0x48))(),
      cVar3 != '\0')))) {
    cVar3 = FUN_142ebe180(param_1);
    if (cVar3 != '\0') {
      (**(code **)(*param_1 + 0x580))(param_1,0);
    }
    goto LAB_14100fc5d;
  }
  fVar5 = (float)FUN_140e24740(param_1[0xd6]);
  fVar1 = *(float *)((longlong)param_1 + 0x6c4);
  if ((fVar1 != 1.0) || (fVar1 <= fVar5)) {
    if ((fVar1 < fVar5) &&
       ((((char)param_1[0xd8] - 4U & 0xfc) != 0 || ((char)param_1[0xd8] == '\x06')))) {
      uVar4 = 4;
      goto LAB_14100fc1d;
    }
    if ((1.0 <= fVar5) && (fVar1 < fVar5)) {
      uVar4 = 6;
      goto LAB_14100fc1d;
    }
  }
  else {
    uVar4 = 3;
LAB_14100fc1d:
    FUN_1410172a0(param_1,uVar4);
  }
  *(float *)((longlong)param_1 + 0x6c4) = fVar5;
  FUN_142f0ead0(param_1[0xca],fVar5);
LAB_14100fc5d:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xd7));
  lVar2 = param_1[199];
  if ((lVar2 != 0) && ((char)param_1[0xd3] != '\0')) {
    param_2 = *(float *)((longlong)param_1 + 0x694) - param_2;
    *(float *)((longlong)param_1 + 0x694) = param_2;
    *(bool *)(param_1 + 0xd3) = 1e-08 < param_2;
    if (1e-08 < param_2) {
      FUN_142ed2e60(lVar2,param_2 / *(float *)(param_1 + 0xd2));
      return;
    }
    FUN_142ed2e60(lVar2,0x3f800000);
  }
  return;
}



// FUNCTION 14100fd30 FUN_14100fd30 body=165 status=ok
// SIG undefined FUN_14100fd30(void)

void FUN_14100fd30(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_142ecd310();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6f8));
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x5d8);
    FUN_142ed56a0(*(undefined8 *)(param_1 + 0x6b0),uVar1);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6f8));
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6a0));
  if (*(longlong *)(param_1 + 0x658) != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x5d8);
    FUN_142ed56a0(*(undefined8 *)(param_1 + 0x658),uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014100fdce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6a0));
  return;
}



// FUNCTION 14100fe00 FUN_14100fe00 body=205 status=ok
// SIG undefined FUN_14100fe00(void)

void FUN_14100fe00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6a0));
  lVar1 = *(longlong *)(param_1 + 0x658);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6a0));
  if (param_2 == lVar1) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x6a0));
    FUN_140ff4330(param_1,param_1 + 0x650);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x6a0));
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6f8));
  lVar1 = *(longlong *)(param_1 + 0x6b0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6f8));
  if (param_2 == lVar1) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x6f8));
    FUN_140ff4330(param_1,param_1 + 0x6a8);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x6f8));
  }
  return;
}



// FUNCTION 14100fed0 FUN_14100fed0 body=505 status=ok
// SIG undefined FUN_14100fed0(void)

void FUN_14100fed0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  plVar1 = param_1 + 0x130;
  lVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if (lVar4 == 0) {
LAB_14100ff3e:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14100ff3e;
  }
  lVar5 = (**(code **)(*param_1 + 0xfa8))(param_1);
  if (lVar5 == 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(lVar4 + 0x3c8) == 0) {
    return;
  }
  if (*(longlong *)(lVar4 + 0x3d0) == 0) {
    return;
  }
  if (*(int *)(lVar5 + 0x48) < 1) {
    FUN_142f02280(lVar5);
    *(undefined1 *)(param_1 + 0x355) = 1;
    return;
  }
  cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
  if (cVar3 == '\0') goto LAB_141010075;
  lVar6 = (**(code **)(*param_1 + 0xfa8))(param_1);
  lVar7 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if (lVar7 == 0) {
LAB_14100fffa:
    lVar7 = 0;
  }
  else {
    lVar8 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14100fffa;
  }
  if ((lVar6 == 0) || (lVar7 == 0)) goto LAB_141010075;
  lVar8 = FUN_140fe2a00(lVar6);
  if (lVar8 == 0) {
    lVar8 = FUN_142ee1f00(lVar6,*(undefined8 *)(lVar7 + 0x3d8));
    if (lVar8 == 0) goto LAB_141010075;
    lVar6 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_141010075;
  }
  FUN_141014050(lVar8);
LAB_141010075:
  lVar6 = FUN_140fe2a00(lVar5);
  FUN_142f02280(lVar5,*(undefined8 *)(lVar4 + 0x3d0));
  *(undefined1 *)(param_1 + 0x355) = 1;
  if (lVar6 != 0) {
    FUN_141014050(lVar6);
  }
  return;
}



// FUNCTION 1410100d0 FUN_1410100d0 body=239 status=ok
// SIG undefined FUN_1410100d0(void)

void FUN_1410100d0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  cVar1 = FUN_142ebe180(*(undefined8 *)(param_1 + 0x178));
  if (cVar1 != '\0') {
    FWeakObjectPtr::operator=(&local_res10,*(undefined8 *)(param_1 + 0x178));
    FWeakObjectPtr::operator=(&local_res8,param_1);
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_144605c80;
      puVar2[1] = param_1;
      *(undefined4 *)(puVar2 + 2) = local_res8;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
      *(undefined4 *)(puVar2 + 3) = local_res10;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = local_res14;
    }
    local_68[0] = &LAB_140ff1a10;
    FUN_14208c5d0(param_1,local_68);
  }
  return;
}



// FUNCTION 1410101c0 FUN_1410101c0 body=328 status=ok
// SIG undefined FUN_1410101c0(void)

void FUN_1410101c0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  plVar9 = *(longlong **)(param_1 + 0x718);
  uVar8 = 0;
  uVar10 = (longlong)*(int *)(param_1 + 0x720) & 0x1fffffffffffffff;
  if (plVar9 + *(int *)(param_1 + 0x720) < plVar9) {
    uVar10 = uVar8;
  }
  if (uVar10 != 0) {
    do {
      lVar1 = *plVar9;
      if ((lVar1 != 0) && (cVar6 = FUN_142ebe180(*(undefined8 *)(lVar1 + 0x178)), cVar6 != '\0')) {
        FWeakObjectPtr::operator=(&local_res10,*(undefined8 *)(lVar1 + 0x178));
        FWeakObjectPtr::operator=(&local_res8,lVar1);
        uVar5 = local_res14;
        uVar4 = local_res10;
        uVar3 = local_resc;
        uVar2 = local_res8;
        local_58 = 0;
        local_48 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_78);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &PTR_FUN_144605c80;
          puVar7[1] = lVar1;
          *(undefined4 *)(puVar7 + 2) = uVar2;
          *(undefined4 *)((longlong)puVar7 + 0x14) = uVar3;
          *(undefined4 *)(puVar7 + 3) = uVar4;
          *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar5;
        }
        local_88[0] = &LAB_140ff1a10;
        FUN_14208c5d0(lVar1,local_88);
      }
      plVar9 = plVar9 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar10);
  }
  return;
}



// FUNCTION 141010310 FUN_141010310 body=56 status=ok
// SIG undefined FUN_141010310(void)

void FUN_141010310(longlong param_1)

{
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FUN_142ee2030(*(longlong *)(param_1 + 0x5b0),DAT_146b3e2a0,param_1 + 0x698);
    return;
  }
  return;
}



// FUNCTION 141010350 FUN_141010350 body=1347 status=ok
// SIG undefined FUN_141010350(void)

void FUN_141010350(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined8 local_res10;
  longlong local_118;
  longlong *plStack_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
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
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  lVar9 = 0;
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    uVar7 = FUN_1404b03b0();
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_1468736b0,uVar7,1);
    uVar7 = FUN_1404b03b0();
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_1468736b8,uVar7,1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_f8,L"Lower",L"GFxPhotoModeMenu",L"HintHeightLower");
    FUN_142eb01d0(param_1,&DAT_146873750,uVar7,0);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_f0 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e0,L"Raise",L"GFxPhotoModeMenu",L"HintHeightRaise");
    FUN_142eb01d0(param_1,&DAT_146873748,uVar7,0);
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_d8 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
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
    if ((*(longlong *)(param_1 + 0x6c8) != 0) && (cVar6 = FUN_140e85d10(), cVar6 != '\0')) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_c8,L"Toggle Pause",L"GFxPhotoModeMenu",L"HintSlomo");
      FUN_142eb01d0(param_1,&DAT_146873858,uVar7,0);
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_c0 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
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
    }
    local_res10 = 0;
    plVar8 = (longlong *)FUN_1404b0000(&local_res10);
    bVar10 = plVar8 != (longlong *)0x0;
    if (bVar10) {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0xb8))(plVar8,local_108);
      lVar9 = *plVar8;
    }
    else {
      plVar8 = &local_118;
      local_118 = 0;
      plStack_110 = (longlong *)0x0;
    }
    plVar4 = (longlong *)plVar8[1];
    plVar8[1] = 0;
    *plVar8 = 0;
    if ((bVar10) && (local_100 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_100 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    plVar8 = plStack_110;
    if ((!bVar10) && (plStack_110 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plStack_110 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_110)(plStack_110);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_110 + 8))(plStack_110,1);
        }
      }
    }
    if (lVar9 == 0) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_b0,L"Take Photo",L"GFxPhotoModeMenu",L"HintCapture");
      FUN_142eb01d0(param_1,&DAT_146873878,uVar7,0);
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_a8 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_98,L"Reset Settings",L"GFxPhotoModeMenu",L"HintReset");
    FUN_142eb01d0(param_1,&DAT_146873868,uVar7,0);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_90 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
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
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_80,L"Reset Camera",L"GFxPhotoModeMenu",L"HintResetCamera");
    FUN_142eb01d0(param_1,&DAT_146873870,uVar7,0);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_78 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,L"Toggle UI",L"GFxPhotoModeMenu",L"HintHideUI");
    FUN_142eb01d0(param_1,&DAT_146873860,uVar7,0);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_60 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"Close",L"GFxPhotoModeMenu",L"HintExit");
    FUN_142eb01d0(param_1,&DAT_146b3e2b8,uVar7,0);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_48 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar4 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  return;
}



// FUNCTION 1410108a0 FUN_1410108a0 body=351 status=ok
// SIG undefined FUN_1410108a0(void)

void FUN_1410108a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Select",L"GFxQuickChangeMenu",L"SelectItemText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar5);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    if (*(char *)(param_1 + 0x6c8) == '\0') {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_28,L"Close",L"GFxQuickChangeMenu",L"CloseText");
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar5);
      plVar6 = local_20;
    }
    else {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_40,L"Back",L"GFxQuickChangeMenu",L"BackOutText");
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar5);
      plVar6 = local_38;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 141010a00 FUN_141010a00 body=2729 status=ok
// SIG undefined FUN_141010a00(void)

void FUN_141010a00(longlong param_1,char param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  longlong **in_stack_ffffffffffffff18;
  longlong *local_c8;
  int local_c0;
  longlong local_b8 [4];
  undefined1 local_98 [8];
  undefined8 local_90;
  
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar15 + 0x38) < DAT_146873988) &&
     (_Init_thread_header(&DAT_146873988), DAT_146873988 == -1)) {
    FName::FName(&DAT_146873980,L"OnSliderItemChanged",1);
    _Init_thread_footer(&DAT_146873988);
  }
  if ((*(int *)(lVar15 + 0x38) < DAT_146873998) &&
     (_Init_thread_header(&DAT_146873998), DAT_146873998 == -1)) {
    FName::FName(&DAT_146873990,L"OnSpinnerItemChanged",1);
    _Init_thread_footer(&DAT_146873998);
  }
  if (*(longlong *)(param_1 + 0x750) != 0) {
    plVar13 = (longlong *)(*(longlong *)(param_1 + 0x750) + 0x170);
    (**(code **)(*plVar13 + 0x38))(plVar13,1);
    *(undefined8 *)(param_1 + 0x750) = 0;
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    plVar13 = (longlong *)(*(longlong *)(param_1 + 0x758) + 0x170);
    (**(code **)(*plVar13 + 0x38))(plVar13,1);
    *(undefined8 *)(param_1 + 0x758) = 0;
  }
  if (*(longlong *)(param_1 + 0x760) != 0) {
    plVar13 = (longlong *)(*(longlong *)(param_1 + 0x760) + 0x170);
    (**(code **)(*plVar13 + 0x38))(plVar13,1);
    *(undefined8 *)(param_1 + 0x760) = 0;
  }
  if (*(longlong *)(param_1 + 0x768) != 0) {
    plVar13 = (longlong *)(*(longlong *)(param_1 + 0x768) + 0x170);
    (**(code **)(*plVar13 + 0x38))(plVar13,1);
    *(undefined8 *)(param_1 + 0x768) = 0;
  }
  if (*(longlong *)(param_1 + 0x770) != 0) {
    plVar13 = (longlong *)(*(longlong *)(param_1 + 0x770) + 0x170);
    (**(code **)(*plVar13 + 0x38))(plVar13,1);
    *(undefined8 *)(param_1 + 0x770) = 0;
  }
  if (*(longlong *)(param_1 + 0x778) != 0) {
    plVar13 = (longlong *)(*(longlong *)(param_1 + 0x778) + 0x170);
    (**(code **)(*plVar13 + 0x38))(plVar13,1);
    *(undefined8 *)(param_1 + 0x778) = 0;
  }
  if (*(longlong *)(param_1 + 0x780) != 0) {
    plVar13 = (longlong *)(*(longlong *)(param_1 + 0x780) + 0x170);
    (**(code **)(*plVar13 + 0x38))(plVar13,1);
    *(undefined8 *)(param_1 + 0x780) = 0;
  }
  *(undefined8 *)(param_1 + 0x748) = 0;
  if ((*(longlong *)(param_1 + 0x788) != 0) && (*(longlong *)(param_1 + 0x6d0) != 0)) {
    iVar6 = FUN_142eb7a00();
    FUN_142ecffe0(*(undefined8 *)(param_1 + 0x788));
    plVar13 = *(longlong **)(param_1 + 0x720);
    if (plVar13 != plVar13 + *(int *)(param_1 + 0x728)) {
      plVar14 = plVar13;
      do {
        if (*plVar14 == *(longlong *)(param_1 + 0x730)) {
          iVar8 = (int)((longlong)plVar14 - (longlong)plVar13 >> 3);
          if ((iVar8 < 0) || (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x48) <= iVar8))
          goto LAB_141010bb7;
          bVar2 = true;
          goto LAB_141010bb9;
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar13 + *(int *)(param_1 + 0x728));
    }
    iVar8 = -1;
LAB_141010bb7:
    bVar2 = false;
LAB_141010bb9:
    if (bVar2) {
      lVar15 = *(longlong *)(param_1 + 0x6c8);
      if (((lVar15 == 0) || (*(char *)(lVar15 + 0x10b9) == '\0')) || (iVar8 != 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (lVar15 != 0) {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x6d0) + 0x40);
        lVar16 = *(longlong *)((longlong)iVar8 * 0x20 + 0x10 + lVar15);
        lVar15 = lVar16 + (longlong)*(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar15) * 0x50;
        if (lVar16 != lVar15) {
          do {
            if (*(char *)(lVar16 + 0x19) == '\0') {
              local_b8[2] = 0;
              local_b8[3] = 0x15;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 2);
              FGenericPlatformString::Memcpy(local_b8[2],L"photoModeItemSpinner",0x2a);
              uVar12 = *(undefined8 *)(param_1 + 0x788);
              uVar9 = FUN_141387a40();
              lVar10 = FUN_142ebcee0(uVar12,local_b8 + 2,uVar9,0);
              if (lVar10 == 0) {
LAB_141010fe5:
                lVar10 = 0;
              }
              else {
                lVar11 = FUN_141387a40();
                if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (!bVar3) goto LAB_141010fe5;
              }
              if (local_b8[2] != 0) {
                FMemory::Free();
              }
              if (lVar10 != 0) {
                local_c8 = (longlong *)0x0;
                local_c0 = 0;
                plVar13 = (longlong *)FMemory::Realloc(0,0x30);
                if (plVar13 == (longlong *)0x0) {
                  if ((local_c0 != 0) && (local_c8 != (longlong *)0x0)) {
                    (**(code **)(*local_c8 + 0x28))(local_c8,0);
                    if (local_c8 != (longlong *)0x0) {
                      local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
                    }
                    local_c0 = 0;
                  }
                }
                else {
                  *plVar13 = (longlong)&PTR_LAB_14461b6c8;
                  plVar13[2] = DAT_146873990;
                  FWeakObjectPtr::operator=(plVar13 + 3,param_1);
                  lVar11 = FDelegateHandle::GenerateNewID();
                  plVar13[5] = lVar11;
                  uVar12 = FWeakObjectPtr::Get(plVar13 + 3);
                  lVar11 = FUN_14178ac60(uVar12,DAT_146873990);
                  plVar13[1] = lVar11;
                  *plVar13 = (longlong)&PTR_LAB_14461b710;
                  FUN_140f28e40(plVar13,&local_c8);
                  (**(code **)(*plVar13 + 0x28))(plVar13,0);
                  lVar11 = FMemory::Realloc(plVar13,0,0);
                  if (lVar11 != 0) {
                    FMemory::Free(lVar11);
                  }
                }
                FUN_140fe6c00(lVar10 + 0x358,lVar16);
                uVar7 = 0;
                if (*(longlong *)(param_1 + 0x6c8) != 0) {
                  cVar4 = *(char *)(lVar16 + 0x18);
                  if (cVar4 == '\f') {
                    cVar4 = ASBZPlayerCharacter::GetDefeatState();
                    uVar7 = (uint)(cVar4 != '\0');
                  }
                  else if (cVar4 == '\x0e') {
                    uVar7 = FUN_140e7fa00();
                    if (*(longlong *)(param_1 + 0x750) != 0) {
                      plVar13 = (longlong *)(*(longlong *)(param_1 + 0x750) + 0x170);
                      (**(code **)(*plVar13 + 0x38))(plVar13,uVar7 != 0);
                    }
                  }
                  else if (cVar4 == '\x12') {
                    cVar4 = FUN_140e7fb30();
                    uVar7 = (uint)(cVar4 != '\0');
                  }
                  else if (cVar4 == '\x13') {
                    cVar4 = FUN_140e80e40();
                    uVar7 = (uint)(cVar4 != '\0');
                  }
                }
                in_stack_ffffffffffffff18 = &local_c8;
                FUN_142ebcaa0(lVar10,lVar16,lVar16 + 0x40,uVar7,in_stack_ffffffffffffff18);
                *(undefined8 *)(lVar10 + 0x318) = *(undefined8 *)(param_1 + 0x6b8);
                *(undefined8 *)(lVar10 + 0x1a0) = *(undefined8 *)(param_1 + 0x6c0);
                cVar4 = *(char *)(lVar10 + 0x370);
                if (cVar4 == '\x0e') {
                  *(longlong *)(param_1 + 0x748) = lVar10;
                }
                else if (cVar4 == '\f') {
                  *(longlong *)(param_1 + 0x760) = lVar10;
                }
                else if (cVar4 == '\x13') {
                  *(longlong *)(param_1 + 0x768) = lVar10;
                }
                if (local_c0 != 0) {
                  if (local_c8 == (longlong *)0x0) goto LAB_141011229;
                  (**(code **)(*local_c8 + 0x28))();
                  if (local_c8 != (longlong *)0x0) {
                    local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
                  }
                  local_c0 = 0;
                }
                if (local_c8 != (longlong *)0x0) {
                  FMemory::Free(local_c8);
                }
              }
            }
            else {
              local_b8[0] = 0;
              local_b8[1] = 0x14;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8);
              FGenericPlatformString::Memcpy(local_b8[0],L"photoModeItemSlider",0x28);
              uVar12 = *(undefined8 *)(param_1 + 0x788);
              uVar9 = FUN_141387af0();
              lVar10 = FUN_142ebcee0(uVar12,local_b8,uVar9,0);
              if (lVar10 == 0) {
LAB_141010d2f:
                lVar10 = 0;
              }
              else {
                lVar11 = FUN_141387af0();
                if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (!bVar3) goto LAB_141010d2f;
              }
              if (local_b8[0] != 0) {
                FMemory::Free();
              }
              uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
              if (lVar10 != 0) {
                FWeakObjectPtr::operator=(local_98,0);
                local_90 = 0;
                FWeakObjectPtr::operator=(local_98,param_1);
                local_90 = DAT_146873980;
                FUN_140fe6c00(lVar10 + 0x398,lVar16);
                fVar18 = 0.0;
                *(undefined4 *)(lVar10 + 0x318) = *(undefined4 *)(lVar16 + 0x34);
                *(undefined4 *)(lVar10 + 0x31c) = *(undefined4 *)(lVar16 + 0x38);
                *(undefined4 *)(lVar10 + 800) = *(undefined4 *)(lVar16 + 0x3c);
                *(undefined8 *)(lVar10 + 0x338) = *(undefined8 *)(param_1 + 0x6b0);
                *(undefined8 *)(lVar10 + 0x1a0) = *(undefined8 *)(param_1 + 0x6c0);
                if (*(longlong *)(param_1 + 0x6c8) != 0) {
                  switch(*(undefined1 *)(lVar16 + 0x18)) {
                  case 1:
                    fVar18 = (float)FUN_140e7f9b0();
                    break;
                  case 2:
                    fVar18 = (float)FUN_140e83420();
                    break;
                  case 4:
                    fVar18 = (float)FUN_140e7fa20();
                    break;
                  case 5:
                    fVar18 = (float)FUN_140e7fa30();
                    break;
                  case 6:
                    fVar18 = (float)FUN_140e7f8c0();
                    break;
                  case 7:
                    fVar18 = (float)uhx::glues::AGCharacter_Glue_obj::get_HeldUseInputThreshold();
                    break;
                  case 8:
                    fVar18 = (float)FUN_140e81cd0();
                    break;
                  case 9:
                    fVar18 = (float)FUN_140e7fad0();
                    break;
                  case 10:
                    fVar18 = (float)FUN_140e7fa80();
                    break;
                  case 0xb:
                    fVar18 = (float)FUN_140e81fa0();
                    break;
                  case 0xd:
                    fVar18 = (float)FUN_140e7fae0();
                    break;
                  case 0xf:
                    fVar18 = (float)FUN_140e7fa10();
                    break;
                  case 0x10:
                    fVar18 = (float)uhx::glues::AGCharacter_Glue_obj::
                                    get_InnerItemThrowDistanceOnDeath();
                    break;
                  case 0x11:
                    fVar18 = (float)uhx::glues::AGCharacter_Glue_obj::
                                    get_OuterItemThrowDistanceOnDeath();
                  }
                }
                fVar1 = *(float *)(lVar16 + 0x1c);
                fVar19 = *(float *)(lVar16 + 0x28) - *(float *)(lVar16 + 0x24);
                if (1e-08 < ABS(fVar19)) {
                  fVar19 = (fVar18 - *(float *)(lVar16 + 0x24)) / fVar19;
                  fVar18 = 0.0;
                  if (0.0 <= fVar19) goto LAB_141010e85;
                }
                else {
                  fVar19 = 0.0;
                  if (*(float *)(lVar16 + 0x28) <= fVar18) {
                    fVar19 = 1.0;
                  }
LAB_141010e85:
                  fVar18 = fVar19;
                  if (1.0 <= fVar19) {
                    fVar18 = 1.0;
                  }
                }
                in_stack_ffffffffffffff18 = (longlong **)CONCAT44(uVar17,*(float *)(lVar16 + 0x20));
                FUN_142ebca00(lVar10,lVar16,(*(float *)(lVar16 + 0x20) - fVar1) * fVar18 + fVar1,
                              fVar1,in_stack_ffffffffffffff18,*(undefined4 *)(lVar16 + 0x30),
                              *(undefined1 *)(lVar16 + 0x2c),local_98);
                uVar17 = FUN_140ff5e40(param_1);
                FUN_142ed2b00(lVar10,uVar17);
                cVar4 = *(char *)(lVar10 + 0x3b0);
                if (cVar4 == '\x0f') {
                  *(longlong *)(param_1 + 0x750) = lVar10;
                }
                else if (cVar4 == '\v') {
                  *(longlong *)(param_1 + 0x758) = lVar10;
                }
                else if (cVar4 == '\x04') {
                  *(longlong *)(param_1 + 0x770) = lVar10;
                }
                else if (cVar4 == '\x05') {
                  *(longlong *)(param_1 + 0x778) = lVar10;
                }
                else if (cVar4 == '\x06') {
                  *(longlong *)(param_1 + 0x780) = lVar10;
                }
                if (bVar2) {
                  (**(code **)(*(longlong *)(lVar10 + 0x170) + 0x38))();
                }
              }
            }
LAB_141011229:
            lVar16 = lVar16 + 0x50;
          } while (lVar16 != lVar15);
        }
        if ((*(longlong *)(param_1 + 0x750) != 0) && (*(longlong *)(param_1 + 0x748) != 0)) {
          FUN_142eb62f0();
          if (*(longlong *)(param_1 + 0x750) != 0) {
            (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x750) + 0x170) + 0x38))();
          }
        }
        if (*(longlong *)(param_1 + 0x758) != 0) {
          uVar5 = FUN_140e85d10(*(undefined8 *)(param_1 + 0x6c8));
          if (*(longlong *)(param_1 + 0x758) != 0) {
            plVar13 = (longlong *)(*(longlong *)(param_1 + 0x758) + 0x170);
            (**(code **)(*plVar13 + 0x38))(plVar13,uVar5);
          }
        }
        if (*(longlong *)(param_1 + 0x760) != 0) {
          uVar5 = FUN_140e85d10(*(undefined8 *)(param_1 + 0x6c8));
          if (*(longlong *)(param_1 + 0x760) != 0) {
            plVar13 = (longlong *)(*(longlong *)(param_1 + 0x760) + 0x170);
            (**(code **)(*plVar13 + 0x38))(plVar13,uVar5);
          }
        }
        if ((((*(longlong *)(param_1 + 0x770) != 0) && (*(longlong *)(param_1 + 0x778) != 0)) &&
            (*(longlong *)(param_1 + 0x780) != 0)) && (*(longlong *)(param_1 + 0x768) != 0)) {
          iVar8 = FUN_142eb62f0();
          if (*(longlong *)(param_1 + 0x770) != 0) {
            plVar13 = (longlong *)(*(longlong *)(param_1 + 0x770) + 0x170);
            (**(code **)(*plVar13 + 0x38))(plVar13,iVar8 == 1);
          }
          iVar8 = FUN_142eb62f0(*(undefined8 *)(param_1 + 0x768));
          if (*(longlong *)(param_1 + 0x778) != 0) {
            plVar13 = (longlong *)(*(longlong *)(param_1 + 0x778) + 0x170);
            (**(code **)(*plVar13 + 0x38))(plVar13,iVar8 == 1);
          }
          FUN_142eb62f0(*(undefined8 *)(param_1 + 0x768));
          if (*(longlong *)(param_1 + 0x780) != 0) {
            (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x780) + 0x170) + 0x38))();
          }
        }
      }
    }
    if ((param_2 != '\0') && (iVar6 != -1)) {
      (**(code **)(**(longlong **)(param_1 + 0x788) + 0x2b8))
                (*(longlong **)(param_1 + 0x788),iVar6,0,0);
      iVar6 = FUN_142eb7a00(*(undefined8 *)(param_1 + 0x788));
      if (iVar6 != -1) {
        return;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x788) + 0x2c8))(*(longlong **)(param_1 + 0x788),0,0);
  }
  return;
}



// FUNCTION 1410114f0 FUN_1410114f0 body=1341 status=ok
// SIG undefined FUN_1410114f0(void)

void FUN_1410114f0(longlong param_1,longlong param_2)

{
  void *_Src;
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined4 local_res8;
  undefined8 local_res20;
  undefined8 *local_68;
  int local_60;
  int local_5c;
  undefined8 *local_58;
  int local_50;
  longlong *local_48;
  int local_40;
  
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x594);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar4 = FUN_1413f82e0();
  if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  uVar5 = AGFireballProjectile::GetPrivateStaticClass();
  lVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar5);
  if (lVar4 == 0) {
    return;
  }
  puVar13 = (undefined8 *)0x0;
  local_res8 = 0;
  if (plVar3[0x21b] != 0) {
    *(longlong *)(param_1 + 0xc00) = plVar3[0x21b];
    local_res8 = (**(code **)(*(longlong *)plVar3[0x21b] + 0x408))();
  }
  local_50 = *(int *)(param_2 + 0x40);
  lVar11 = (longlong)local_50;
  _Src = *(void **)(param_2 + 0x38);
  local_58 = (undefined8 *)0x0;
  if (local_50 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar11 << 3);
  }
  iVar12 = local_50;
  if (*(longlong *)(param_1 + 0x6d0) == 0) goto LAB_141011a09;
  *(undefined4 *)(param_1 + 0xc18) = 0;
  if (*(int *)(param_1 + 0xc1c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xc10,0);
  }
  FUN_1409a7860(*(undefined8 *)(param_1 + 0x6d0),&local_48);
  plVar3 = local_48 + local_40;
  for (plVar10 = local_48; plVar10 != plVar3; plVar10 = plVar10 + 1) {
    plVar1 = (longlong *)*plVar10;
    if (plVar1 != (longlong *)0x0) {
      lVar11 = plVar1[0x1f];
      if (lVar11 == 0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        lVar11 = plVar1[0x1f];
        if (lVar11 == 0) goto LAB_1410116a6;
      }
      iVar9 = *(int *)(param_1 + 0xc18);
      *(int *)(param_1 + 0xc18) = iVar9 + 1;
      if (*(int *)(param_1 + 0xc1c) < iVar9 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xc10,iVar9);
      }
      *(longlong *)(*(longlong *)(param_1 + 0xc10) + (longlong)iVar9 * 8) = lVar11;
    }
LAB_1410116a6:
  }
  puVar8 = puVar13;
  if (0 < iVar12) {
    puVar8 = (undefined8 *)*local_58;
  }
  if (iVar12 < 2) {
    local_res20 = 0;
  }
  else {
    local_res20 = local_58[1];
  }
  local_68 = (undefined8 *)0x0;
  local_5c = 0;
  FUN_141055300(param_1,lVar4,local_res8,*(undefined8 *)(param_1 + 0xf20),puVar8);
  puVar6 = (undefined8 *)FUN_1409ab3b0(lVar4,puVar8);
  puVar8 = puVar13;
  puVar7 = puVar13;
  if (puVar6 != (undefined8 *)0x0) {
    lVar11 = UUGLoadoutBarUW::GetPrivateStaticClass();
    if ((*(int *)(puVar6[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(puVar6[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      puVar7 = (undefined8 *)FUN_141039070(param_1,puVar6);
      puVar8 = puVar6;
    }
  }
  if (*(longlong *)(param_1 + 0xf20) != 0) {
    FUN_14105ad40(*(longlong *)(param_1 + 0xf20),puVar7);
  }
  if (*(longlong *)(param_1 + 0xf28) != 0) {
    FUN_14105ad40(*(longlong *)(param_1 + 0xf28),puVar7);
  }
  if (*(longlong *)(param_1 + 0xf30) != 0) {
    FUN_14105ad40(*(longlong *)(param_1 + 0xf30),puVar7);
  }
  puVar7 = puVar13;
  iVar12 = 0;
  iVar9 = 0;
  if ((puVar8 == (undefined8 *)0x0) ||
     (iVar12 = 0, iVar9 = 0, &local_68 == (undefined8 **)(puVar8 + 0x28))) {
LAB_1410117fe:
    bVar2 = false;
  }
  else {
    local_60 = *(int *)(puVar8 + 0x29);
    lVar11 = (longlong)local_60;
    puVar8 = (undefined8 *)puVar8[0x28];
    puVar7 = (undefined8 *)0x0;
    iVar12 = local_60;
    if (local_60 == 0) goto LAB_1410117fe;
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_68,local_60,0);
    puVar7 = local_68;
    _guard_xfg_dispatch_icall_nop(local_68,puVar8,lVar11 << 3);
    iVar12 = local_60;
    iVar9 = local_5c;
    if (local_60 < 1) goto LAB_1410117fe;
    bVar2 = true;
  }
  puVar8 = puVar13;
  if (bVar2) {
    puVar8 = (undefined8 *)*puVar7;
  }
  FUN_141055530(param_1,lVar4,local_res8,*(undefined8 *)(param_1 + 0xf28),puVar8);
  puVar8 = puVar13;
  if (1 < iVar12) {
    puVar8 = (undefined8 *)puVar7[1];
  }
  FUN_141055530(param_1,lVar4,local_res8,*(undefined8 *)(param_1 + 0xf30),puVar8);
  FUN_141055300(param_1,lVar4,local_res8,*(undefined8 *)(param_1 + 0xf38),local_res20);
  puVar8 = (undefined8 *)FUN_1409ab3b0(lVar4,local_res20);
  if (puVar8 == (undefined8 *)0x0) {
LAB_1410118bf:
    puVar8 = puVar13;
  }
  else {
    lVar11 = UUGLoadoutBarUW::GetPrivateStaticClass();
    if ((*(int *)(puVar8[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(puVar8[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410118bf;
  }
  local_60 = 0;
  iVar12 = 0;
  if (iVar9 != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_68,0);
    puVar7 = local_68;
    iVar12 = local_5c;
  }
  iVar9 = local_60;
  puVar6 = puVar13;
  if (puVar8 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_141039070(param_1,puVar8);
  }
  if (*(longlong *)(param_1 + 0xf38) != 0) {
    FUN_14105ad40(*(longlong *)(param_1 + 0xf38),puVar6);
  }
  if (*(longlong *)(param_1 + 0xf40) != 0) {
    FUN_14105ad40(*(longlong *)(param_1 + 0xf40),puVar6);
  }
  if (*(longlong *)(param_1 + 0xf48) != 0) {
    FUN_14105ad40(*(longlong *)(param_1 + 0xf48),puVar6);
  }
  if ((puVar8 != (undefined8 *)0x0) && (&local_68 != (undefined8 **)(puVar8 + 0x28))) {
    local_60 = *(int *)(puVar8 + 0x29);
    lVar11 = (longlong)local_60;
    puVar8 = (undefined8 *)puVar8[0x28];
    if ((local_60 != 0) || (iVar9 = local_60, iVar12 != 0)) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                (&local_68,local_60,iVar12);
      puVar7 = local_68;
      _guard_xfg_dispatch_icall_nop(local_68,puVar8,lVar11 << 3);
      iVar9 = local_60;
    }
  }
  puVar8 = puVar13;
  if (0 < iVar9) {
    puVar8 = (undefined8 *)*puVar7;
  }
  FUN_141055530(param_1,lVar4,local_res8,*(undefined8 *)(param_1 + 0xf40),puVar8);
  if (1 < iVar9) {
    puVar13 = (undefined8 *)puVar7[1];
  }
  FUN_141055530(param_1,lVar4,local_res8,*(undefined8 *)(param_1 + 0xf48),puVar13);
  if (puVar7 != (undefined8 *)0x0) {
    FMemory::Free(puVar7);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_141011a09:
  if (local_58 != (undefined8 *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}



// FUNCTION 141011a30 FUN_141011a30 body=276 status=ok
// SIG undefined FUN_141011a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141011a30(undefined8 param_1)

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
  local_b8[0] = &LAB_140ff1dd0;
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



// FUNCTION 141011b50 FUN_141011b50 body=276 status=ok
// SIG undefined FUN_141011b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141011b50(undefined8 param_1)

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
  local_b8[0] = &LAB_140ff1a00;
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



// FUNCTION 141011c70 FUN_141011c70 body=276 status=ok
// SIG undefined FUN_141011c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141011c70(undefined8 param_1)

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
  local_b8[0] = &LAB_140ff1d00;
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



// FUNCTION 141011d90 FUN_141011d90 body=293 status=ok
// SIG undefined FUN_141011d90(void)

void FUN_141011d90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined **local_a0;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res18,*(undefined8 *)(param_1 + 0x178));
  FWeakObjectPtr::operator=(&local_res8,param_1);
  FUN_140fe57a0(local_c0,param_2);
  local_28 = 0;
  local_18 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x80,local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_14465fa90;
    puVar5[1] = param_1;
    *(undefined4 *)(puVar5 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_resc;
    *(undefined4 *)(puVar5 + 3) = local_res18;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = local_res1c;
    FUN_140fe57a0(puVar5 + 4,local_c0);
  }
  local_58[0] = &LAB_140ff1ac0;
  FUN_14208c5d0(param_1,local_58);
  local_a0 = &PTR_FUN_1441d26b8;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar2 = (int *)((longlong)local_b8 + 0xc);
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



// FUNCTION 141011ec0 FUN_141011ec0 body=970 status=ok
// SIG undefined FUN_141011ec0(void)

void FUN_141011ec0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 local_res18;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined1 local_f8 [8];
  longlong *local_f0;
  char local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  undefined2 local_9f;
  longlong *local_98;
  undefined8 local_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  cVar5 = FUN_142f638e0(param_2,param_1);
  if (((cVar5 != '\0') && (lVar7 = CAkSrcBaseEx::StopStream(param_2), lVar7 != 0)) &&
     (*(longlong *)(param_1 + 0x698) != 0)) {
    local_98 = (longlong *)0x0;
    local_90 = 0;
    FUN_142f5af50(param_2,&local_res18);
    FUN_142f59720(*(undefined8 *)(param_1 + 0x698),local_res18,&local_98,0);
    uVar13 = 0;
    uVar15 = uVar13;
    if (0 < *(int *)(param_1 + 0x720)) {
      do {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x718) + uVar15);
        iVar14 = (int)uVar13;
        if (lVar7 != 0) {
          cVar5 = FUN_142f63b10(lVar7 + 0x210);
          if (cVar5 == '\0') {
            lVar8 = 0;
          }
          else {
            lVar8 = FUN_142f5f490(lVar7 + 0x210);
            if (lVar8 == 0) goto LAB_1410121c5;
            for (plVar12 = local_98; plVar12 != local_98 + (int)local_90; plVar12 = plVar12 + 1) {
              if (*plVar12 == lVar8) {
                iVar6 = FUN_142f5f560(*(undefined8 *)(param_1 + 0x698),local_res18,lVar8);
                if (iVar14 != iVar6) {
                  if ((iVar6 < 0) || (*(int *)(param_1 + 0x720) <= iVar6)) {
                    lVar8 = 0;
                  }
                  else {
                    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x718) + (longlong)iVar6 * 8);
                  }
                  if (lVar8 != 0) {
                    cVar5 = FUN_142f63b10(lVar7 + 0x1b8);
                    if (cVar5 == '\0') {
                      uVar9 = FUN_1404b03b0();
                      FText::FText(local_f8,uVar9);
                      local_e0 = 0;
                      local_d0 = 0;
                      local_c8 = 0;
                      uStack_c0 = 0;
                      local_d8 = (undefined **)&DAT_1441d2800;
                      local_b8 = 0xffffffff;
                      local_b0 = 0;
                      local_a8 = 0;
                      local_a0 = 0;
                      uVar9 = FUN_1404b03b0();
                      FText::operator=(local_f8,uVar9);
                      (*(code *)local_d8[2])();
                      local_e0 = '\0';
                      local_9f = 0;
                    }
                    else {
                      FText::FText(local_f8,lVar7 + 0x198);
                      local_e0 = *(char *)(lVar7 + 0x1b0);
                      local_d8 = (undefined **)&DAT_1441d2800;
                      local_a0 = *(undefined1 *)(lVar7 + 0x1f0);
                      local_9f = *(undefined2 *)(lVar7 + 0x1f1);
                    }
                    local_d0 = *(undefined8 *)(lVar7 + 0x218);
                    local_c8 = *(undefined8 *)(lVar7 + 0x220);
                    uStack_c0 = *(undefined8 *)(lVar7 + 0x228);
                    local_b8 = *(undefined8 *)(lVar7 + 0x230);
                    local_b0 = *(undefined8 *)(lVar7 + 0x238);
                    local_a8 = lVar7;
                    if (((byte)(local_e0 - 9U) < 2) ||
                       (cVar5 = FUN_142f63720(*(undefined8 *)(param_1 + 0x698),&local_d8,
                                              *(undefined8 *)(param_1 + 0x698)), cVar5 != '\0')) {
                      local_e0 = 6;
                      uVar11 = 8;
                    }
                    else {
                      local_e0 = 5;
                      uVar11 = 7;
                    }
                    if (iVar6 < iVar14) {
                      local_e0 = uVar11;
                    }
                    FUN_141011d90(lVar8,local_f8);
                    plVar12 = local_f0;
                    local_d8 = &PTR_FUN_1441d26b8;
                    if (local_f0 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = local_f0 + 1;
                      lVar7 = *plVar1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)lVar7 == 1) {
                        (**(code **)*local_f0)(local_f0);
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
                }
                goto LAB_1410121c5;
              }
            }
          }
          if (lVar8 != 0) {
            FWeakObjectPtr::operator=(&local_res20,lVar7);
            uVar4 = local_res24;
            uVar3 = local_res20;
            local_58 = 0;
            local_48 = 0;
            puVar10 = (undefined8 *)FUN_140438ef0(0x18,local_78);
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = &PTR_FUN_1444f8920;
              puVar10[1] = lVar7;
              *(undefined4 *)(puVar10 + 2) = uVar3;
              *(undefined4 *)((longlong)puVar10 + 0x14) = uVar4;
            }
            local_88[0] = &LAB_140ff1e90;
            FUN_14208c5d0(lVar7,local_88);
          }
        }
LAB_1410121c5:
        uVar13 = (ulonglong)(iVar14 + 1U);
        uVar15 = uVar15 + 8;
      } while ((int)(iVar14 + 1U) < *(int *)(param_1 + 0x720));
    }
    FUN_1410101c0(param_1);
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141012290 FUN_141012290 body=500 status=ok
// SIG undefined FUN_141012290(void)

void FUN_141012290(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_14138f990(param_1,param_4);
    iVar6 = 0;
    iVar2 = FUN_142eed730(*(undefined8 *)(param_1 + 0x6f0));
    if (iVar2 != 0) {
      do {
        lVar3 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6f0),iVar6);
        if (lVar3 != 0) {
          lVar4 = FUN_14138e2b0();
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
            FUN_142ed2820(lVar3,0,1);
          }
        }
        iVar6 = iVar6 + 1;
        iVar2 = FUN_142eed730(*(undefined8 *)(param_1 + 0x6f0));
      } while (iVar6 != iVar2);
    }
    FUN_142ed2820(param_2,1);
    local_res10 = 0xffffffff;
    FUN_14170c210(&local_res10,param_3);
    uVar7 = local_res10;
    local_res10 = 0xffffffff;
    FWeakObjectPtr::operator=(&local_88,param_1);
    local_48 = 0;
    local_38 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_68);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_14465fbe0;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = uVar7;
      uVar7 = 0xffffffff;
      *(undefined4 *)(puVar5 + 3) = (undefined4)local_88;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = local_88._4_4_;
    }
    local_78[0] = &LAB_140ff1940;
    FUN_1416f8340(uVar7);
    FUN_14204c280(local_78);
    FUN_1416f8340(0xffffffff);
    FUN_1416f8340(local_res10);
    uStack_80 = CONCAT31(uStack_80._1_3_,param_4);
    local_88 = param_1;
    FWeakObjectPtr::operator=(&local_res10,param_1);
    uVar7 = local_res10;
    local_48 = 0;
    local_38 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_68);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_14465fbc8;
      *(undefined4 *)(puVar5 + 1) = (undefined4)local_88;
      *(undefined4 *)((longlong)puVar5 + 0xc) = local_88._4_4_;
      *(undefined4 *)(puVar5 + 2) = uStack_80;
      *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_7c;
      *(undefined4 *)(puVar5 + 3) = uVar7;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = local_res14;
    }
    local_78[0] = &LAB_140ff1af0;
    FUN_14204c280(local_78);
  }
  return;
}



// FUNCTION 141012490 FUN_141012490 body=998 status=ok
// SIG undefined FUN_141012490(void)

void FUN_141012490(longlong *param_1,undefined1 param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined8 local_res8;
  longlong local_48;
  undefined8 local_40;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xd7));
  if (param_1[0xd6] != 0) {
    FUN_1407665e0(param_1[0xd6] + 0x278,param_1);
    FUN_140483870(param_1[0xd6] + 0x288,param_1);
  }
  lVar4 = FUN_140eccca0(param_1);
  if (lVar4 == 0) {
LAB_14101254a:
    pwVar6 = (wchar_t *)0x0;
  }
  else {
    uVar5 = FUN_1412e9ee0();
    pwVar6 = (wchar_t *)AGameStateBase::OnRep_GameModeClass(lVar4,uVar5);
    if (pwVar6 == (wchar_t *)0x0) goto LAB_14101254a;
    lVar7 = FUN_1412e9ee0();
    if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14101254a;
  }
  param_1[0xd6] = (longlong)pwVar6;
  if (((lVar4 != 0) && (cVar3 = FUN_140c48c20(lVar4), cVar3 == '\0')) && (param_1[0xd6] != 0)) {
    uVar5 = FUN_140e24780(param_1[0xd6],&local_48);
    cVar3 = FUN_142d52a00(uVar5);
    if (((cVar3 != '\0') && (*(longlong **)(param_1[0xd6] + 0x3c8) != (longlong *)0x0)) &&
       ((cVar3 = (**(code **)(**(longlong **)(param_1[0xd6] + 0x3c8) + 0x950))(), cVar3 == '\0' &&
        (cVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1[0xd6] + 0x3c8) + 0xd98) + 0x48))()
        , cVar3 == '\0')))) {
      (**(code **)(*param_1 + 0x578))(param_1,0);
      FUN_1410172a0(param_1,2);
      uVar9 = FUN_140e24740(param_1[0xd6]);
      *(undefined4 *)((longlong)param_1 + 0x6c4) = uVar9;
      if ((*(longlong *)(param_1[0xd6] + 0x3d8) != 0) && (param_1[200] != 0)) {
        cVar3 = *(char *)(*(longlong *)(param_1[0xd6] + 0x3d8) + 0x70);
        if (cVar3 == '\x01') {
          local_48 = 0;
          local_40 = 10;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          FGenericPlatformString::Memcpy(local_48,L"spiderant",0x14);
          FUN_142088cf0(param_1[200],&local_48);
          if (local_48 != 0) {
            FMemory::Free();
          }
        }
        else if (cVar3 == '\x02') {
          local_48 = 0;
          local_40 = 10;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          FGenericPlatformString::Memcpy(local_48,L"jabbermon",0x14);
          FUN_142088cf0(param_1[200],&local_48);
          if (local_48 != 0) {
            FMemory::Free();
          }
        }
        else if (cVar3 == '\x03') {
          local_48 = 0;
          local_40 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          FGenericPlatformString::Memcpy(local_48,L"skag",10);
          FUN_142088cf0(param_1[200],&local_48);
          if (local_48 != 0) {
            FMemory::Free();
          }
        }
        else if (cVar3 == '\x04') {
          local_48 = 0;
          local_40 = 7;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          FGenericPlatformString::Memcpy(local_48,L"loader",0xe);
          FUN_142088cf0(param_1[200],&local_48);
          if (local_48 != 0) {
            FMemory::Free();
          }
        }
      }
      goto LAB_1410127bd;
    }
  }
  cVar3 = FUN_142ebe180(param_1);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x580))(param_1,param_2);
    FUN_1410172a0(param_1,0);
  }
LAB_1410127bd:
  if (param_1[0xd6] != 0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxPetCommandWidget::OnPetAttackCommandFailed",L"::")
    ;
    pwVar6 = (wchar_t *)0x0;
    while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res8,pwVar6 + 2,1);
    FUN_14074ba20(param_1[0xd6] + 0x278,param_1,FUN_1410076b0,local_res8);
    FUN_140ac3b30(param_1[0xd6] + 0x288,&local_res8,param_1,&LAB_141007ac0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014101286f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xd7));
  return;
}



// FUNCTION 141012880 FUN_141012880 body=389 status=ok
// SIG undefined FUN_141012880(void)

void FUN_141012880(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  if ((*(longlong *)(param_1 + 0x1a8) == 0) || (*(char *)(param_1 + 0x2b0) != '\x01')) {
    if (*(longlong *)(param_1 + 0x1a0) == 0) {
      return;
    }
    local_20 = 6;
    local_28 = (longlong *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"level",0xc);
    local_18 = (longlong *)0x0;
    local_10 = 0;
    uVar1 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x1a0),&local_28,0,6,&local_18);
    *(undefined8 *)(param_1 + 0x1c8) = uVar1;
    plVar2 = local_18;
    for (iVar4 = (int)local_10; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    plVar2 = local_28;
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
      plVar2 = local_28;
    }
  }
  else {
    local_10 = 0x21;
    local_18 = (longlong *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"bossLevelWrapper.level.levelText",0x42);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    uVar1 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x1a8),&local_18,0,6,&local_28);
    *(undefined8 *)(param_1 + 0x1c8) = uVar1;
    plVar3 = local_28;
    plVar2 = local_18;
    for (iVar4 = (int)local_20; local_18 = plVar2, iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      plVar2 = local_18;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
      plVar2 = local_18;
    }
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141012a10 FUN_141012a10 body=881 status=ok
// SIG undefined FUN_141012a10(void)

void FUN_141012a10(longlong param_1)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  char cVar8;
  undefined8 uVar9;
  longlong local_28 [2];
  
  cVar8 = '\0';
  cVar3 = '\x03';
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x2d8));
  plVar6 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x2e0) != 0) && (*(longlong *)(param_1 + 0x2e8) != 0)) {
    if ((*(longlong *)(param_1 + 0x38) == 0) ||
       (plVar4 = (longlong *)FUN_1420fc090(), plVar4 == (longlong *)0x0)) {
LAB_141012aa2:
      plVar4 = plVar6;
    }
    else {
      lVar5 = FUN_14145f370();
      if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_141012aa2;
    }
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x2e8);
    }
    cVar3 = (**(code **)(*plVar6 + 0x88))(plVar6,0,plVar4);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x2d8));
  cVar1 = *(char *)(param_1 + 0x2f0);
  if (cVar1 == '\0') {
LAB_141012afe:
    if (*(char *)(param_1 + 800) != '\0') {
      cVar3 = FUN_140f70280(param_1);
      cVar8 = (cVar3 != '\0') + '\x03';
      if (*(longlong *)(param_1 + 0x298) != 0) {
        local_28[0] = 0;
        local_28[1] = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Memcpy(local_28[0],L"petIndicator",0x1a);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x298),local_28);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
      }
      if (*(longlong *)(param_1 + 0x2a8) == 0) goto LAB_141012d5d;
      local_28[0] = 0;
      local_28[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      uVar9 = 10;
      pwVar7 = L"blue";
      goto LAB_141012c44;
    }
    if (cVar3 != '\x01') {
      cVar8 = '\x01';
      goto LAB_141012d5d;
    }
    cVar8 = '\x04';
    if (*(longlong *)(param_1 + 0x298) == 0) goto LAB_141012d5d;
    local_28[0] = 0;
    local_28[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],&DAT_1446502b8,8);
    uVar9 = *(undefined8 *)(param_1 + 0x298);
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        if (cVar1 != '\x03') goto LAB_141012d5d;
        goto LAB_141012afe;
      }
      if (cVar3 == '\x01') {
LAB_141012bbc:
        cVar8 = '\x03';
      }
      else {
        cVar3 = FUN_140f70280(param_1);
        cVar8 = '\x04';
        if (cVar3 == '\0') goto LAB_141012bbc;
      }
      if (*(longlong *)(param_1 + 0x298) != 0) {
        local_28[0] = 0;
        local_28[1] = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Memcpy(local_28[0],L"reviving",0x12);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x298),local_28);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
      }
      if (*(longlong *)(param_1 + 0x2a8) == 0) goto LAB_141012d5d;
      local_28[0] = 0;
      local_28[1] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      uVar9 = 0xc;
      pwVar7 = L"green";
      goto LAB_141012c44;
    }
    if (cVar3 == '\x01') {
LAB_141012c6e:
      cVar8 = '\x03';
    }
    else {
      cVar3 = FUN_140f70280(param_1);
      cVar8 = '\x04';
      if (cVar3 == '\0') goto LAB_141012c6e;
    }
    if (*(longlong *)(param_1 + 0x298) != 0) {
      local_28[0] = 0;
      local_28[1] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Memcpy(local_28[0],L"dying",0xc);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x298),local_28);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x2a8) == 0) goto LAB_141012d5d;
    local_28[0] = 0;
    local_28[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    uVar9 = 8;
    pwVar7 = L"red";
LAB_141012c44:
    FGenericPlatformString::Memcpy(local_28[0],pwVar7,uVar9);
    uVar9 = *(undefined8 *)(param_1 + 0x2a8);
  }
  FUN_142088cf0(uVar9,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
LAB_141012d5d:
  FUN_14101c9e0(param_1,cVar8);
  return;
}



// FUNCTION 141012d90 FUN_141012d90 body=699 status=ok
// SIG undefined FUN_141012d90(void)

void FUN_141012d90(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 local_res8;
  undefined1 local_res18 [8];
  undefined1 local_78 [8];
  longlong *local_70;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  undefined1 local_30;
  undefined8 local_28;
  undefined2 local_20;
  
  lVar5 = FUN_1420fc090();
  lVar12 = 0;
  lVar10 = lVar12;
  lVar7 = lVar12;
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar7 = FUN_140cff1b0(lVar5);
      lVar10 = lVar5;
    }
  }
  if (param_1[0xb9] == 0) {
    return;
  }
  if (lVar7 == 0) {
    return;
  }
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar6 = FUN_142f6c9f0(uVar8);
  lVar5 = lVar12;
  if (lVar6 != 0) {
    plVar9 = (longlong *)FUN_142f5ed60(lVar6,local_res18);
    lVar5 = *plVar9;
  }
  if ((*(char *)(lVar10 + 0x128) == '\x03') && (lVar5 != 0)) {
    lVar6 = FUN_142f71d80();
    lVar10 = lVar5;
    do {
      if (lVar10 == lVar6) {
        lVar6 = FUN_142f71d80();
        lVar10 = lVar5;
        goto LAB_141012ec6;
      }
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  goto LAB_141012e6f;
  while (lVar10 = *(longlong *)(lVar10 + 0x30), lVar11 = lVar12, lVar10 != 0) {
LAB_141012ec6:
    lVar11 = lVar5;
    if (lVar10 == lVar6) break;
  }
  lVar10 = lVar12;
  if (param_1[0xb6] != 0) {
    lVar6 = FUN_142f71d80();
    for (lVar5 = param_1[0xb6];
        (lVar10 = lVar12, lVar5 != 0 && (lVar10 = param_1[0xb6], lVar5 != lVar6));
        lVar5 = *(longlong *)(lVar5 + 0x30)) {
    }
  }
  if (lVar11 != lVar10) {
    local_58 = 0;
    local_50 = 0;
    uVar8 = FUN_1404b03b0();
    FText::FText(local_48,uVar8);
    local_28 = 0;
    local_20 = 1;
    local_30 = 1;
    FName::FName(&local_res8,L"OakPC_OpenStatusMenu",1);
    uVar3 = local_50;
    lVar10 = (longlong)(int)local_50;
    iVar4 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar4);
    if (local_50._4_4_ < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_58,uVar3 & 0xffffffff);
    }
    *(undefined8 *)(local_58 + lVar10 * 8) = local_res8;
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_78,L"Track Mission",L"NewMissionNotificaitonWidget",L"HoldToTrack");
    FText::operator=(local_48,uVar8);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_70 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    (**(code **)(*(longlong *)(param_1[0xb9] + 0x308) + 0x20))
              ((longlong *)(param_1[0xb9] + 0x308),&local_58,1);
    FUN_142ed2e60(param_1[0xb9],0x3f800000);
    (**(code **)(*(longlong *)param_1[0xb9] + 0x278))((longlong *)param_1[0xb9],1);
    (**(code **)(*(longlong *)param_1[0xba] + 0x278))((longlong *)param_1[0xba],1);
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
              (&local_58);
    return;
  }
LAB_141012e6f:
  FUN_140cc9500(lVar7,param_1[0xaa]);
  (**(code **)(*(longlong *)param_1[0xb9] + 0x278))((longlong *)param_1[0xb9],0);
  (**(code **)(*(longlong *)param_1[0xba] + 0x278))((longlong *)param_1[0xba],0);
  return;
}



// FUNCTION 141013050 FUN_141013050 body=523 status=ok
// SIG undefined FUN_141013050(void)

void FUN_141013050(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
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
    if ((bVar4) && (*(longlong *)(param_1 + 0xc38) != 0)) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_28,L"Rename Character",L"GFxQuickChangeMenu",L"RenameCharacter");
      puVar8 = (undefined8 *)FText::ToString(uVar7);
      puVar10 = &DAT_143f3eda8;
      if (*(int *)(puVar8 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar8;
      }
      uVar7 = FUN_142ef39a0(local_40,DAT_146873688,lVar5,0,0);
      puVar8 = (undefined8 *)FText::ToString(uVar7);
      if (*(int *)(puVar8 + 1) != 0) {
        puVar10 = (undefined2 *)*puVar8;
      }
      FString::PrintfImpl(local_68,L"%s %s",puVar10,puVar9);
      lVar5 = **(longlong **)(param_1 + 0xc38);
      uVar7 = FText::FromString(local_58,local_68);
      (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0xc38),uVar7,1,0);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
  }
  return;
}



// FUNCTION 141013260 FUN_141013260 body=523 status=ok
// SIG undefined FUN_141013260(void)

void FUN_141013260(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
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
    if ((bVar4) && (*(longlong *)(param_1 + 0xc50) != 0)) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_28,L"Rename Pet",L"GFxQuickChangeMenu",L"RenamePet");
      puVar8 = (undefined8 *)FText::ToString(uVar7);
      puVar10 = &DAT_143f3eda8;
      if (*(int *)(puVar8 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar8;
      }
      uVar7 = FUN_142ef39a0(local_40,DAT_146873900,lVar5,0,0);
      puVar8 = (undefined8 *)FText::ToString(uVar7);
      if (*(int *)(puVar8 + 1) != 0) {
        puVar10 = (undefined2 *)*puVar8;
      }
      FString::PrintfImpl(local_68,L"%s %s",puVar10,puVar9);
      lVar5 = **(longlong **)(param_1 + 0xc50);
      uVar7 = FText::FromString(local_58,local_68);
      (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0xc50),uVar7,1,0);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
  }
  return;
}



// FUNCTION 141013470 FUN_141013470 body=137 status=ok
// SIG undefined FUN_141013470(void)

void FUN_141013470(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  if (*(int *)(param_1 + 0x7e8) < 1) {
    FUN_1410101c0();
  }
  if (*(longlong *)(param_1 + 0x688) != 0) {
    lVar2 = FUN_142f71d80();
    lVar4 = *(longlong *)(param_1 + 0x688);
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        if (lVar4 != 0) goto LAB_1410134e2;
        break;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x698) == 0) {
    lVar4 = 0;
  }
  else {
    plVar3 = (longlong *)FUN_142f5ed60(*(longlong *)(param_1 + 0x698),local_res8);
    lVar4 = *plVar3;
  }
LAB_1410134e2:
  FUN_14101e570(param_1,lVar4,param_2);
  return;
}



// FUNCTION 141013500 FUN_141013500 body=271 status=ok
// SIG undefined FUN_141013500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141013500(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
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
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = FUN_140ff1cc0;
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



// FUNCTION 141013610 FUN_141013610 body=271 status=ok
// SIG undefined FUN_141013610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141013610(undefined8 param_1)

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
  local_b8[0] = &LAB_140ff1ed0;
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



// FUNCTION 141013720 Rehash body=517 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<enum_ESocialSubsystem,USocialUser::FSubsystemUserInfo>,TDefaultMapHashableKeyFuncs<enum_ESocialSubsystem,USocialUser::FSubsystemUserInfo,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14101385f;
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
LAB_14101385f:
        iStack_44 = iVar3;
      }
    }
    while (iStack_44 < iVar3) {
      pbVar9 = (byte *)((longlong)iStack_44 * 0x78 + *param_1);
      uVar4 = (int)*plVar2 - 1U & (uint)*pbVar9;
      *(uint *)(pbVar9 + 0x74) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(pbVar9 + 0x70) =
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



// FUNCTION 141013930 FUN_141013930 body=270 status=ok
// SIG undefined FUN_141013930(void)

void FUN_141013930(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x60);
    iVar6 = param_3;
    do {
      plVar7[3] = (longlong)&PTR_FUN_1441d26b8;
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
      plVar7 = plVar7 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x60),
                 (void *)((longlong)(param_2 + param_3) * 0x60 + *param_1),(longlong)iVar5 * 0x60);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141013a40 FUN_141013a40 body=258 status=ok
// SIG undefined FUN_141013a40(void)

void FUN_141013a40(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x20 + (longlong)param_2 * 0x50);
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
      plVar7 = plVar7 + 10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x50),
                 (void *)((longlong)(param_2 + param_3) * 0x50 + *param_1),(longlong)iVar5 * 0x50);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141013b50 FUN_141013b50 body=313 status=ok
// SIG undefined FUN_141013b50(void)

void FUN_141013b50(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x738);
  plVar4 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar2[1];
    bVar7 = iVar3 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar4 = (longlong *)0x0, !bVar7) {
      LOCK();
      bVar7 = iVar3 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar4 = plVar2;
        if ((plVar2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x730) != 0)) {
          FUN_14203e030(*(longlong *)(param_1 + 0x730),L"fadeOut");
          if (0 < *(int *)(param_1 + 0x7e8)) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x7e0) + 0x2d) = 1;
          }
          goto LAB_141013c3e;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  iVar3 = *(int *)(param_1 + 0x7ec);
  lVar5 = *(longlong *)(param_1 + 0x7e0);
  iVar6 = *(int *)(param_1 + 0x7e8);
  if (iVar3 < 0) {
    if (iVar6 != 0) {
      lVar5 = lVar5 + 0x10;
      do {
        FUN_140ce1790(lVar5);
        lVar5 = lVar5 + 0x30;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar3 = *(int *)(param_1 + 0x7ec);
    }
    *(undefined4 *)(param_1 + 0x7e8) = 0;
    if (iVar3 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo((longlong *)(param_1 + 0x7e0),0);
    }
  }
  else {
    if (iVar6 != 0) {
      lVar5 = lVar5 + 0x10;
      do {
        FUN_140ce1790(lVar5);
        lVar5 = lVar5 + 0x30;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)(param_1 + 0x7e8) = 0;
  }
LAB_141013c3e:
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
                    /* WARNING: Could not recover jumptable at 0x000141013c7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 8))(plVar4,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141013c90 FUN_141013c90 body=672 status=ok
// SIG undefined FUN_141013c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141013c90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
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
  lVar1 = *(longlong *)(param_2 + 0x20);
  iVar4 = FUN_140ff6aa0(param_1,lVar1);
  bVar3 = false;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca));
  uVar7 = 0;
  if ((-1 < iVar4) && (iVar4 < (int)param_1[0xc9])) {
    lVar2 = *(longlong *)(param_1[200] + 8 + (longlong)iVar4 * 0x10);
    if (lVar2 != 0) {
      FUN_141017130(lVar2,0);
      FUN_141014570(lVar2,0);
      FUN_141016b60(lVar2,0);
      FUN_141017dd0(lVar2,0);
      *(undefined4 *)(lVar2 + 0x174) = 0xffffffff;
    }
    if (lVar1 != 0) {
      local_e8[0] = 0xffffffff;
      uVar9 = 0xffffffff;
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        FUN_14170c210(local_e8);
        uVar9 = local_e8[0];
      }
      local_e8[0] = 0xffffffff;
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_144266c70;
        puVar5[1] = param_1;
        *(undefined4 *)(puVar5 + 2) = uVar9;
        uVar9 = 0xffffffff;
      }
      local_d8[0] = FUN_140ff18c0;
      uVar6 = FUN_1420849a0(param_1,local_88,local_d8);
      FUN_14208c260(param_1,uVar6);
      if (local_48 != 0) {
        plVar11 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar11 = local_58;
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        plVar11 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar11 = local_a8;
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11,0);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
      FUN_1416f8340(uVar9);
      FUN_1416f8340(local_e8[0]);
    }
    bVar3 = true;
  }
  lVar1 = param_1[0xc9];
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca));
  if (bVar3) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca));
    uVar8 = uVar7;
    uVar10 = uVar7;
    if (0 < (int)param_1[0xc9]) {
      do {
        lVar2 = *(longlong *)(uVar10 + 8 + param_1[200]);
        iVar4 = (int)uVar7;
        if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x174) != iVar4)) && (-1 < iVar4)) &&
           (iVar4 < (int)param_1[0xcc])) {
          *(int *)(lVar2 + 0x174) = iVar4;
          FUN_14208ff10(lVar2,*(undefined4 *)(param_1[0xcb] + uVar8),
                        *(undefined4 *)(param_1[0xcb] + 4 + uVar8));
        }
        uVar7 = (ulonglong)(iVar4 + 1U);
        uVar8 = uVar8 + 8;
        uVar10 = uVar10 + 0x10;
      } while ((int)(iVar4 + 1U) < (int)param_1[0xc9]);
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca));
  }
  if ((int)lVar1 < 1) {
    (**(code **)(*param_1 + 0x580))(param_1,0);
  }
  return;
}



// FUNCTION 141013f30 FUN_141013f30 body=283 status=ok
// SIG undefined FUN_141013f30(void)

void FUN_141013f30(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    iVar5 = 0;
    iVar2 = FUN_142eb7440();
    if (0 < iVar2) {
      do {
        lVar3 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6f0),iVar5);
        if (lVar3 != 0) {
          lVar4 = FUN_14138e2b0();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (lVar4 = *(longlong *)(lVar3 + 0x360), lVar4 != 0)) {
            iVar2 = *(int *)(param_1 + 0xc10);
            *(int *)(param_1 + 0xc10) = iVar2 + 1;
            if (*(int *)(param_1 + 0xc14) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0xc08,iVar2);
            }
            *(longlong *)(*(longlong *)(param_1 + 0xc08) + (longlong)iVar2 * 8) = lVar4;
            *(undefined8 *)(lVar3 + 0x360) = 0;
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x6f0));
      } while (iVar5 < iVar2);
    }
  }
  return;
}



// FUNCTION 141014050 FUN_141014050 body=126 status=ok
// SIG undefined FUN_141014050(void)

void FUN_141014050(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x690) = 0;
  if (*(longlong *)(param_1 + 0x688) != 0) {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
    if (cVar2 != '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x59c);
      lVar3 = FUN_140cddc40(uVar1);
    }
    if (lVar3 != 0) {
      FUN_142ed3eb0(*(undefined8 *)(param_1 + 0x688),0);
      return;
    }
    FUN_142ed3eb0(*(undefined8 *)(param_1 + 0x688),1);
  }
  return;
}



// FUNCTION 1410140d0 FUN_1410140d0 body=626 status=ok
// SIG undefined FUN_1410140d0(void)

void FUN_1410140d0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x1c0);
  local_18 = (longlong *)0x0;
  local_10 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"barHealth",0x14);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x1a8),&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x1e8) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"barShield",0x14);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x1a8),&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x210) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"barArmor",0x12);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x1a8),&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x238) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 1;
  *(undefined4 *)(param_1 + 0x254) = 2;
  *(undefined4 *)(param_1 + 0x304) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x31c) = 0xffffffff;
  return;
}



// FUNCTION 141014350 FUN_141014350 body=187 status=ok
// SIG undefined FUN_141014350(void)

void FUN_141014350(longlong param_1,byte param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0x6dc) + -1;
  uVar5 = 0;
  iVar6 = 0;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  iVar2 = (uint)param_2 * 2 + -1 + *(int *)(param_1 + 0x6d8);
  if (iVar2 < 0) {
    iVar6 = 0;
  }
  else if (iVar2 < iVar6) {
    iVar6 = iVar2;
  }
  *(int *)(param_1 + 0x6d8) = iVar6;
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar3 != 0) {
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
    if (bVar1) {
      uVar5 = *(undefined8 *)(lVar3 + 0x5b8);
    }
  }
  FUN_140ff3350(param_1,uVar5);
  FUN_14101d210(param_1);
  return;
}



// FUNCTION 141014410 FUN_141014410 body=134 status=ok
// SIG undefined FUN_141014410(void)

void FUN_141014410(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < (int)param_3[1]) {
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar2 + *param_3) != 0) {
        FUN_142088cf0(*(longlong *)(lVar2 + *param_3),param_2);
      }
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar1 < (int)param_3[1]);
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (*param_3 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1410144a0 FUN_1410144a0 body=194 status=ok
// SIG undefined FUN_1410144a0(void)

void FUN_1410144a0(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong local_18;
  ulonglong local_10;
  
  if ((*(longlong *)(param_1 + 0x600) != 0) && (*(char *)(param_1 + 0x694) != param_2)) {
    *(char *)(param_1 + 0x694) = param_2;
    pwVar3 = L"hideChat";
    if (param_2 != '\0') {
      pwVar3 = L"showChat";
    }
    local_18 = 0;
    local_10 = 0;
    if (*pwVar3 != L'\0') {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (pwVar3[lVar2] != L'\0');
      uVar1 = (int)lVar2 + 1;
      local_10 = (ulonglong)uVar1;
      if (0 < (int)uVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,pwVar3,(longlong)(int)uVar1 * 2);
    }
    FUN_142088910(*(undefined8 *)(param_1 + 0x600),&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141014570 FUN_141014570 body=664 status=ok
// SIG undefined FUN_141014570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141014570(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_c8 [32];
  longlong **local_a8;
  longlong *local_98;
  int local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [4];
  
  local_48[2] = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_1 + 0x1c4) = param_2;
  if (*(longlong *)(param_1 + 0x178) == 0) {
    local_78 = 0;
    local_70 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"delta",0xc);
    local_68 = 0;
    local_60 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"backgroundBar",0x1c);
    local_58 = 0;
    local_50 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"currentValueLabel",0x24);
    local_48[0] = 0;
    local_48[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"maxValueLabel",0x1c);
    lVar6 = 4;
    local_98 = (longlong *)0x0;
    local_90 = 4;
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_98,4,0);
    puVar5 = &local_78;
    iVar7 = 4;
    plVar4 = local_98;
    do {
      *plVar4 = 0;
      iVar2 = *(int *)(puVar5 + 1);
      _Src = (void *)*puVar5;
      *(int *)(plVar4 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar4,iVar2,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar4,_Src,(longlong)iVar2 * 2);
      }
      plVar4 = plVar4 + 2;
      puVar5 = puVar5 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    plVar4 = local_48 + 2;
    do {
      plVar1 = plVar4 + -2;
      plVar4 = plVar4 + -2;
      lVar6 = lVar6 + -1;
      if (*plVar1 != 0) {
        FMemory::Free();
      }
    } while (lVar6 != 0);
    local_88 = 0;
    local_80 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    FGenericPlatformString::Memcpy(local_88,L"passiveProgressBar",0x26);
    uVar3 = UGameInstanceGameParameters::GetPrivateStaticClass();
    local_a8 = &local_98;
    uVar3 = FUN_140ecc430(param_1,&local_88,uVar3,2);
    *(undefined8 *)(param_1 + 0x178) = uVar3;
    plVar4 = local_98;
    iVar7 = local_90;
    if (local_88 != 0) {
      FMemory::Free();
      plVar4 = local_98;
      iVar7 = local_90;
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_142f0ead0(*(longlong *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x1c4));
  }
  return;
}



// FUNCTION 141014810 FUN_141014810 body=194 status=ok
// SIG undefined FUN_141014810(void)

void FUN_141014810(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  short *psVar3;
  longlong local_18;
  ulonglong local_10;
  
  if ((*(longlong *)(param_1 + 0x6c0) != 0) && (param_2 != *(char *)(param_1 + 0x6e1))) {
    *(char *)(param_1 + 0x6e1) = param_2;
    psVar3 = &DAT_144656760;
    if (param_2 != '\0') {
      psVar3 = &DAT_1446562b4;
    }
    local_18 = 0;
    local_10 = 0;
    if (*psVar3 != 0) {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (psVar3[lVar2] != 0);
      uVar1 = (int)lVar2 + 1;
      local_10 = (ulonglong)uVar1;
      if (0 < (int)uVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,psVar3,(longlong)(int)uVar1 * 2);
    }
    FUN_142088910(*(undefined8 *)(param_1 + 0x6c0),&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410148e0 FUN_1410148e0 body=265 status=ok
// SIG undefined FUN_1410148e0(void)

void FUN_1410148e0(longlong param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar4 = *(longlong **)(param_1 + 0x338);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x278))(plVar4,0);
    if (*param_2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x338) + 0x278))(*(longlong **)(param_1 + 0x338),1);
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      lVar5 = **(longlong **)(param_1 + 0x338);
      uVar6 = FText::AsNumber(local_28,*param_3,0,&local_38);
      (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x338),uVar6,1,0);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_20 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar4 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_30 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_30)(plStack_30);
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
    }
  }
  return;
}



// FUNCTION 141014a10 FUN_141014a10 body=106 status=ok
// SIG undefined FUN_141014a10(void)

void FUN_141014a10(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x6e8) + 0x170);
  if (*(longlong *)(param_1 + 0x6e8) == 0) {
    plVar1 = (longlong *)0x0;
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x170);
  if (*(longlong *)(param_1 + 0x6f0) == 0) {
    plVar1 = (longlong *)0x0;
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return;
}



// FUNCTION 141014a80 FUN_141014a80 body=84 status=ok
// SIG undefined FUN_141014a80(void)

void FUN_141014a80(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x328);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,1,0);
  }
  plVar1 = *(longlong **)(param_1 + 0x330);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,1,0);
  }
  return;
}



// FUNCTION 141014ae0 FUN_141014ae0 body=65 status=ok
// SIG undefined FUN_141014ae0(void)

void FUN_141014ae0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_142ed3af0(param_1,param_2,0);
  plVar1 = *(longlong **)(param_1 + 800);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,1,0);
  }
  return;
}



// FUNCTION 141014b30 FUN_141014b30 body=3501 status=ok
// SIG undefined FUN_141014b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141014b30(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 uVar16;
  byte *pbVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  bool bVar26;
  undefined1 auStack_438 [32];
  char local_418;
  longlong local_410;
  undefined8 local_408;
  longlong *local_400;
  int local_3f8;
  longlong local_3f0 [2];
  longlong *local_3e0;
  int local_3d8;
  longlong *local_3d0;
  int local_3c8;
  longlong *local_3c0;
  int local_3b8;
  longlong local_3b0 [2];
  longlong *local_3a0;
  int local_398;
  longlong *local_390;
  int local_388;
  longlong local_380 [2];
  undefined1 local_370 [8];
  longlong *local_368;
  undefined1 local_358 [8];
  longlong *local_350;
  undefined1 local_340 [8];
  longlong *local_338;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined8 local_2b0;
  longlong local_2a8;
  ulonglong local_2a0;
  undefined8 local_298;
  longlong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  longlong local_250;
  ulonglong local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  longlong *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 local_208 [64];
  longlong local_1c8;
  undefined4 local_1c0;
  longlong local_1b0 [4];
  longlong local_190;
  longlong local_170;
  undefined4 local_168;
  longlong local_158;
  longlong *local_148;
  int local_140;
  undefined1 local_128 [64];
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d0 [4];
  longlong local_b0;
  longlong local_90;
  undefined4 local_88;
  longlong local_78;
  longlong *local_68;
  int local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_438;
  cVar3 = *(char *)(param_1 + 0x6c8);
  FUN_141015900();
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
  lVar13 = 0;
  if (lVar7 == 0) {
LAB_141014bc5:
    local_3f0[0] = 0;
    lVar7 = lVar13;
  }
  else {
    local_3f0[0] = lVar7;
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar26 = false;
    }
    else {
      bVar26 = true;
    }
    if (!bVar26) goto LAB_141014bc5;
  }
  lVar8 = FWeakObjectPtr::Get();
  if (lVar8 != 0) {
    lVar9 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar26 = false;
    }
    else {
      bVar26 = true;
    }
    if (bVar26) {
      lVar13 = *(longlong *)(lVar8 + 0x2a60);
    }
  }
  bVar26 = lVar13 == 0;
  if (bVar26) {
    local_2b8 = 0xffffffff;
    local_260 = 0xffffffff;
    local_2d8 = 0;
    puVar10 = &local_2e8;
    local_2d0 = 0;
    local_2b0 = 0;
    local_2a0 = 0;
    local_280 = 0;
    local_278 = 0;
    local_258 = 0;
    local_248 = 0;
    local_218 = 0;
    local_2e8 = 0;
    local_2e0 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b4 = 0;
    local_2a8 = 0;
    local_298 = 0;
    local_290 = 0;
    local_288 = 0;
    local_270 = 0;
    local_268 = 0;
    local_25c = 0;
    local_250 = 0;
    local_240 = 0xffffffffffffffff;
    local_238 = 0;
    local_230 = 0;
    local_228 = (longlong *)0x0;
    local_220 = 0;
  }
  else {
    puVar10 = (undefined8 *)FUN_140fe5bb0(local_208,lVar13 + 0x1f0);
  }
  FUN_140fe59c0(local_128,puVar10);
  if (bVar26) {
    plVar14 = local_228;
    for (iVar20 = (int)local_220; iVar20 != 0; iVar20 = iVar20 + -1) {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      plVar14 = plVar14 + 3;
    }
    if (local_228 != (longlong *)0x0) {
      FMemory::Free(local_228);
    }
    if (local_238 != 0) {
      FMemory::Free();
    }
    local_248 = local_248 & 0xffffffff00000000;
    if (local_250 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&local_290,0);
    if (local_270 != 0) {
      FMemory::Free();
    }
    if (local_290 != 0) {
      FMemory::Free();
    }
    local_2a0 = local_2a0 & 0xffffffff00000000;
    if (local_2a8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_2e8);
  }
  plVar14 = local_148;
  iVar20 = local_140;
  if (!bVar26) {
    for (; iVar20 != 0; iVar20 = iVar20 + -1) {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      plVar14 = plVar14 + 3;
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free(local_148);
    }
    if (local_158 != 0) {
      FMemory::Free();
    }
    local_168 = 0;
    if (local_170 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(local_1b0,0);
    if (local_190 != 0) {
      FMemory::Free();
    }
    if (local_1b0[0] != 0) {
      FMemory::Free();
    }
    local_1c0 = 0;
    if (local_1c8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_208);
  }
  plVar14 = local_68;
  if (((((lVar7 == 0) || (param_2 == cVar3)) || (*(longlong *)(param_1 + 0x6d0) == 0)) ||
      ((*(longlong *)(param_1 + 0x6f0) == 0 || (*(longlong *)(param_1 + 0xc60) == 0)))) ||
     ((*(longlong *)(param_1 + 0xc30) == 0 || (*(longlong *)(param_1 + 0xc48) == 0))))
  goto joined_r0x000141015033;
  if (*(int *)(param_1 + 0x700) != *(int *)(param_1 + 0x72c)) {
    lVar13 = *(longlong *)(param_1 + 0x738);
    if (*(longlong *)(param_1 + 0x738) == 0) {
      lVar13 = param_1 + 0x730;
    }
    iVar20 = *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0x740) - 1U &
                               (ulonglong)*(byte *)(param_1 + 0x6c8)) * 4);
    if (iVar20 != -1) {
      do {
        pbVar17 = (byte *)((longlong)iVar20 * 0x78 + *(longlong *)(param_1 + 0x6f8));
        if (*pbVar17 == *(byte *)(param_1 + 0x6c8)) {
          if (iVar20 != -1) goto LAB_141014f71;
          break;
        }
        iVar20 = *(int *)(pbVar17 + 0x70);
      } while (iVar20 != -1);
    }
  }
  pbVar17 = (byte *)0x0;
LAB_141014f71:
  lVar13 = *(longlong *)(pbVar17 + 0x68);
  local_410 = lVar13;
  FUN_142088cf0(*(longlong *)(param_1 + 0x6d0),pbVar17 + 0x38);
  plVar14 = (longlong *)(*(longlong *)(param_1 + 0xc60) + 0x170);
  (**(code **)(*plVar14 + 0x38))(plVar14,0);
  (**(code **)(**(longlong **)(param_1 + 0xc30) + 0x278))(*(longlong **)(param_1 + 0xc30),0);
  (**(code **)(**(longlong **)(param_1 + 0xc48) + 0x278))(*(longlong **)(param_1 + 0xc48),0);
  plVar14 = (longlong *)0x0;
  iVar20 = 0;
  iVar4 = 0;
  switch(*(undefined1 *)(param_1 + 0x6c8)) {
  case 0:
    (**(code **)(**(longlong **)(param_1 + 0xc30) + 0x278))
              (*(longlong **)(param_1 + 0xc30),0x140000001);
    plVar14 = *(longlong **)(param_1 + 0xc48);
    uVar16 = *(undefined1 *)(param_1 + 0xc78);
    lVar13 = *plVar14;
LAB_14101500b:
    (**(code **)(lVar13 + 0x278))(plVar14,uVar16);
    break;
  case 1:
  case 2:
  case 3:
    FUN_142ecffe0(*(undefined8 *)(param_1 + 0x6f0));
    uVar12 = TScriptInterface<IBlendableInterface>::
             TScriptInterface<IBlendableInterface><UMaterialInterface>
                       (local_328,*(undefined8 *)(param_1 + 0x6f0));
    FUN_142ed36d0(param_1,uVar12,0);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar7 = DAT_146b33f38;
    local_418 = '\0';
    FUN_140fe2890(param_1 + 0x748,&local_3e0,lVar13);
    plVar11 = (longlong *)
              ((ulonglong)((longlong)(local_3e0 + local_3d8) + (7 - (longlong)local_3e0)) >> 3);
    if (local_3e0 + local_3d8 < local_3e0) {
      plVar11 = plVar14;
    }
    plVar23 = plVar14;
    plVar24 = local_3e0;
    plVar25 = plVar14;
    local_400 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        lVar13 = *plVar24;
        if ((lVar13 != 0) &&
           (lVar8 = FUN_140ff0180(param_1,lVar13), plVar11 = local_400, lVar8 != 0)) {
          plVar15 = *(longlong **)(lVar7 + 0x118);
          plVar25 = (longlong *)(ulonglong)((int)plVar25 + 1);
          plVar2 = plVar15 + *(int *)(lVar7 + 0x120);
          for (; plVar15 != plVar2; plVar15 = plVar15 + 1) {
            if (*plVar15 == lVar13) {
              local_418 = '\x01';
              break;
            }
          }
        }
        plVar23 = (longlong *)((longlong)plVar23 + 1);
        plVar24 = plVar24 + 1;
      } while (plVar23 != plVar11);
    }
    if (local_3e0 != (longlong *)0x0) {
      FMemory::Free(local_3e0);
    }
    lVar13 = local_410;
    FUN_140fe2890(param_1 + 0x758,&local_3d0,local_410);
    uVar18 = 0;
    uVar22 = (ulonglong)((longlong)(local_3d0 + local_3c8) + (7 - (longlong)local_3d0)) >> 3;
    if (local_3d0 + local_3c8 < local_3d0) {
      uVar22 = uVar18;
    }
    uVar19 = uVar18;
    plVar11 = local_3d0;
    if (uVar22 != 0) {
      do {
        plVar23 = (longlong *)(ulonglong)((int)plVar14 + 1);
        if (*plVar11 == 0) {
          plVar23 = plVar14;
        }
        iVar20 = (int)plVar23;
        uVar19 = uVar19 + 1;
        plVar14 = plVar23;
        plVar11 = plVar11 + 1;
      } while (uVar19 != uVar22);
    }
    if (local_3d0 != (longlong *)0x0) {
      FMemory::Free(local_3d0);
    }
    if ((local_418 == '\0') && (*(char *)(param_1 + 0x6c8) == '\x03')) {
      iVar20 = iVar20 + -1;
    }
    iVar4 = FUN_140ff5d30(param_1,local_3f0[0],lVar13);
    iVar6 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x6f0));
    if (0 < iVar6) {
      do {
        lVar13 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6f0),uVar18);
        if (lVar13 != 0) {
          FUN_142ed2820(lVar13,(int)uVar18 == iVar4,1);
        }
        uVar21 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar21;
        iVar6 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x6f0));
      } while ((int)uVar21 < iVar6);
    }
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x2b8))
              (*(longlong **)(param_1 + 0x6f0),iVar4,1,0);
    plVar14 = *(longlong **)(param_1 + 0xb80);
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x278))(plVar14,1);
    }
    if (*(longlong *)(param_1 + 0xb88) != 0) {
      FString::PrintfImpl(local_3f0,L"%i / %i",plVar25,iVar20 + (int)plVar25);
      plVar14 = *(longlong **)(param_1 + 0xb88);
      lVar13 = *plVar14;
      uVar12 = FText::FromString(local_370,local_3f0);
      (**(code **)(lVar13 + 0x2b0))(plVar14,uVar12,1,0);
      if (local_368 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_368 + 1;
        lVar13 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_368)(local_368);
          LOCK();
          piVar1 = (int *)((longlong)local_368 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*local_368 + 8))(local_368,1);
          }
        }
      }
      if (local_3f0[0] != 0) {
        FMemory::Free();
      }
    }
    break;
  case 4:
    FUN_14101a740(param_1);
    plVar14 = (longlong *)(*(longlong *)(param_1 + 0xc60) + 0x170);
    (**(code **)(*plVar14 + 0x38))(plVar14,1);
    local_410 = 0;
    local_408 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_410,0);
    FGenericPlatformString::Memcpy(local_410,L"unselected",0x16);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0xc60),&local_410);
    if (local_410 != 0) {
      FMemory::Free();
    }
    uVar12 = TScriptInterface<IBlendableInterface>::
             TScriptInterface<IBlendableInterface><UMaterialInterface>
                       (local_318,*(undefined8 *)(param_1 + 0xc60));
    FUN_142ed36d0(param_1,uVar12,0);
    plVar14 = *(longlong **)(param_1 + 0xb80);
    if (plVar14 != (longlong *)0x0) {
      lVar13 = *plVar14;
      uVar16 = 0;
      goto LAB_14101500b;
    }
    break;
  case 5:
    FUN_142ecffe0(*(undefined8 *)(param_1 + 0x6f0));
    uVar12 = TScriptInterface<IBlendableInterface>::
             TScriptInterface<IBlendableInterface><UMaterialInterface>
                       (local_308,*(undefined8 *)(param_1 + 0x6f0));
    FUN_142ed36d0(param_1,uVar12,0);
    FUN_140fe2890(param_1 + 0x748,&local_400,lVar13);
    plVar23 = local_400 + local_3f8;
    plVar11 = plVar14;
    if (local_400 != plVar23) {
      plVar24 = local_400;
      do {
        lVar13 = *plVar24;
        if (lVar13 != 0) {
          lVar7 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar26 = false;
          }
          else {
            bVar26 = true;
          }
          if (!bVar26) {
            lVar13 = 0;
          }
          lVar13 = FUN_140ff0460(param_1,lVar13);
          if (lVar13 != 0) {
            plVar11 = (longlong *)(ulonglong)((int)plVar11 + 1);
          }
        }
        plVar24 = plVar24 + 1;
        lVar13 = local_410;
      } while (plVar24 != plVar23);
    }
    if (local_400 != (longlong *)0x0) {
      FMemory::Free(local_400);
    }
    FUN_140fe2890(param_1 + 0x758,&local_3c0,lVar13);
    uVar18 = 0;
    uVar22 = (ulonglong)((longlong)(local_3c0 + local_3b8) + (7 - (longlong)local_3c0)) >> 3;
    if (local_3c0 + local_3b8 < local_3c0) {
      uVar22 = uVar18;
    }
    plVar23 = local_3c0;
    if (uVar22 != 0) {
      do {
        plVar24 = (longlong *)(ulonglong)((int)plVar14 + 1);
        if (*plVar23 == 0) {
          plVar24 = plVar14;
        }
        iVar4 = (int)plVar24;
        uVar18 = uVar18 + 1;
        plVar14 = plVar24;
        plVar23 = plVar23 + 1;
      } while (uVar18 != uVar22);
    }
    if (local_3c0 != (longlong *)0x0) {
      FMemory::Free(local_3c0);
    }
    uVar5 = FUN_140ff5d30(param_1,local_3f0[0],lVar13);
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x2b8))
              (*(longlong **)(param_1 + 0x6f0),uVar5,1,0);
    plVar14 = *(longlong **)(param_1 + 0xb80);
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x278))(plVar14,1);
    }
    if (*(longlong *)(param_1 + 0xb88) != 0) {
      FString::PrintfImpl(local_3b0,L"%i / %i",plVar11,iVar4 + (int)plVar11);
      plVar14 = *(longlong **)(param_1 + 0xb88);
      lVar13 = *plVar14;
      uVar12 = FText::FromString(local_358,local_3b0);
      (**(code **)(lVar13 + 0x2b0))(plVar14,uVar12,1,0);
      if (local_350 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_350 + 1;
        lVar13 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_350)(local_350);
          LOCK();
          piVar1 = (int *)((longlong)local_350 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*local_350 + 8))(local_350,1);
          }
        }
      }
      if (local_3b0[0] != 0) {
        FMemory::Free();
      }
    }
    break;
  case 6:
    FUN_142ecffe0(*(undefined8 *)(param_1 + 0x6f0));
    uVar12 = TScriptInterface<IBlendableInterface>::
             TScriptInterface<IBlendableInterface><UMaterialInterface>
                       (local_2f8,*(undefined8 *)(param_1 + 0x6f0));
    FUN_142ed36d0(param_1,uVar12,0);
    FUN_140fe2940(param_1 + 0x748,&local_3a0,lVar13);
    plVar11 = (longlong *)
              ((ulonglong)((longlong)(local_3a0 + local_398) + (7 - (longlong)local_3a0)) >> 3);
    if (local_3a0 + local_398 < local_3a0) {
      plVar11 = plVar14;
    }
    plVar23 = local_3a0;
    plVar24 = plVar14;
    plVar25 = plVar14;
    if (plVar11 != (longlong *)0x0) {
      do {
        if ((*plVar23 != 0) && (lVar13 = FUN_140ff0180(param_1), lVar13 != 0)) {
          plVar25 = (longlong *)(ulonglong)((int)plVar25 + 1);
        }
        plVar23 = plVar23 + 1;
        plVar24 = (longlong *)((longlong)plVar24 + 1);
      } while (plVar24 != plVar11);
    }
    if (local_3a0 != (longlong *)0x0) {
      FMemory::Free(local_3a0);
    }
    lVar13 = local_410;
    FUN_140fe2940(param_1 + 0x758,&local_390,local_410);
    uVar18 = 0;
    uVar22 = (ulonglong)((longlong)(local_390 + local_388) + (7 - (longlong)local_390)) >> 3;
    if (local_390 + local_388 < local_390) {
      uVar22 = uVar18;
    }
    uVar19 = uVar18;
    plVar11 = local_390;
    if (uVar22 != 0) {
      do {
        plVar23 = (longlong *)(ulonglong)((int)plVar14 + 1);
        if (*plVar11 == 0) {
          plVar23 = plVar14;
        }
        iVar4 = (int)plVar23;
        uVar19 = uVar19 + 1;
        plVar14 = plVar23;
        plVar11 = plVar11 + 1;
      } while (uVar19 != uVar22);
    }
    if (local_390 != (longlong *)0x0) {
      FMemory::Free(local_390);
    }
    iVar20 = FUN_140ff5d30(param_1,local_3f0[0],lVar13);
    iVar6 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x6f0));
    if (0 < iVar6) {
      do {
        lVar13 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6f0),uVar18);
        if (lVar13 != 0) {
          FUN_142ed2820(lVar13,(int)uVar18 == iVar20,1);
        }
        uVar21 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar21;
        iVar6 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x6f0));
      } while ((int)uVar21 < iVar6);
    }
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x2b8))
              (*(longlong **)(param_1 + 0x6f0),iVar20,1,0);
    plVar14 = *(longlong **)(param_1 + 0xb80);
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x278))(plVar14,1);
    }
    if (*(longlong *)(param_1 + 0xb88) != 0) {
      FString::PrintfImpl(local_380,L"%i / %i",plVar25,iVar4 + (int)plVar25);
      plVar14 = *(longlong **)(param_1 + 0xb88);
      lVar13 = *plVar14;
      uVar12 = FText::FromString(local_340,local_380);
      (**(code **)(lVar13 + 0x2b0))(plVar14,uVar12,1,0);
      if (local_338 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_338 + 1;
        lVar13 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_338)(local_338);
          LOCK();
          piVar1 = (int *)((longlong)local_338 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*local_338 + 8))(local_338,1);
          }
        }
      }
      if (local_380[0] != 0) {
        FMemory::Free();
      }
    }
  }
  FUN_14101dfa0(param_1);
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  plVar14 = local_68;
joined_r0x000141015033:
  for (; local_60 != 0; local_60 = local_60 + -1) {
    if (*plVar14 != 0) {
      FMemory::Free();
    }
    plVar14 = plVar14 + 3;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  local_88 = 0;
  if (local_90 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(local_d0,0);
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_d0[0] != 0) {
    FMemory::Free();
  }
  local_e0 = 0;
  if (local_e8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_128);
  return;
}



// FUNCTION 141015900 FUN_141015900 body=932 status=ok
// SIG undefined FUN_141015900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141015900(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined8 local_2a0;
  longlong local_298;
  ulonglong local_290;
  undefined8 local_288;
  longlong local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  longlong local_240;
  ulonglong local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined1 local_1f8 [64];
  longlong local_1b8;
  undefined4 local_1b0;
  longlong local_1a0 [4];
  longlong local_180;
  longlong local_160;
  undefined4 local_158;
  longlong local_148;
  longlong *local_138;
  int local_130;
  undefined1 local_118 [64];
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c0 [4];
  longlong local_a0;
  longlong local_80;
  undefined4 local_78;
  longlong local_68;
  longlong *local_58;
  int local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x594);
  lVar4 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      lVar4 = *(longlong *)(lVar1 + 0x2a60);
    }
  }
  bVar7 = lVar4 == 0;
  if (bVar7) {
    local_2d8 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2a0 = 0;
    local_290 = 0;
    local_270 = 0;
    local_268 = 0;
    local_248 = 0;
    local_238 = 0;
    local_208 = 0;
    puVar3 = &local_2d8;
    local_2d0 = 0;
    local_2b8 = 0;
    local_2b0 = 0;
    local_2a8 = 0xffffffff;
    local_2a4 = 0;
    local_298 = 0;
    local_288 = 0;
    local_280 = 0;
    local_278 = 0;
    local_260 = 0;
    local_258 = 0;
    local_250 = 0xffffffff;
    local_24c = 0;
    local_240 = 0;
    local_230 = 0xffffffffffffffff;
    local_228 = 0;
    local_220 = 0;
    local_218 = (longlong *)0x0;
    local_210 = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_140fe5bb0(local_1f8,lVar4 + 0x1f0);
  }
  FUN_140fe59c0(local_118,puVar3);
  if (bVar7) {
    plVar5 = local_218;
    for (iVar6 = (int)local_210; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 3;
    }
    if (local_218 != (longlong *)0x0) {
      FMemory::Free(local_218);
    }
    if (local_228 != 0) {
      FMemory::Free();
    }
    local_238 = local_238 & 0xffffffff00000000;
    if (local_240 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&local_280,0);
    if (local_260 != 0) {
      FMemory::Free();
    }
    if (local_280 != 0) {
      FMemory::Free();
    }
    local_290 = local_290 & 0xffffffff00000000;
    if (local_298 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_2d8);
  }
  plVar5 = local_138;
  iVar6 = local_130;
  if (!bVar7) {
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 3;
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
    if (local_148 != 0) {
      FMemory::Free();
    }
    local_158 = 0;
    if (local_160 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(local_1a0,0);
    if (local_180 != 0) {
      FMemory::Free();
    }
    if (local_1a0[0] != 0) {
      FMemory::Free();
    }
    local_1b0 = 0;
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_1f8);
  }
  plVar5 = local_58;
  if (param_2 != *(char *)(param_1 + 0x6c8)) {
    FUN_140ff9b60(param_1,param_2);
    plVar5 = local_58;
  }
  for (; local_50 != 0; local_50 = local_50 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 3;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  local_78 = 0;
  if (local_80 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(local_c0,0);
  if (local_a0 != 0) {
    FMemory::Free();
  }
  if (local_c0[0] != 0) {
    FMemory::Free();
  }
  local_d0 = 0;
  if (local_d8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_118);
  return;
}



// FUNCTION 141015cb0 FUN_141015cb0 body=32 status=ok
// SIG undefined FUN_141015cb0(void)

void FUN_141015cb0(longlong *param_1)

{
  FUN_140f09560();
                    /* WARNING: Could not recover jumptable at 0x000141015cc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x540))(param_1);
  return;
}



// FUNCTION 141015cd0 FUN_141015cd0 body=309 status=ok
// SIG undefined FUN_141015cd0(void)

void FUN_141015cd0(longlong param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  wchar_t *pwVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x6e0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar7 = iVar5 == 0;
    if (bVar7) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar5 == (int)plVar3[1];
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x6d8) != 0) {
            pwVar6 = L"off";
            if (param_2 != 0) {
              pwVar6 = L"show";
            }
            FUN_14203e030(*(longlong *)(param_1 + 0x6d8),pwVar6);
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
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if ((*(longlong *)(param_1 + 0x708) != 0) && (*(longlong *)(param_1 + 0x710) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x710) + 8);
    LOCK();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      *piVar2 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      FUN_142f10d20(param_1 + 0x700,param_2);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x6a0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x278))(plVar3,param_2 ^ 1);
  }
  if (param_2 != 0) {
    FUN_140ff2050(param_1);
    FUN_140ff1f70(param_1);
    return;
  }
  return;
}



// FUNCTION 141015e50 FUN_141015e50 body=3104 status=ok
// SIG undefined FUN_141015e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141015e50(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined1 auStack_278 [32];
  undefined1 local_258;
  uint local_254;
  ulonglong local_248;
  ulonglong local_240;
  ulonglong *local_238;
  ulonglong *puStack_230;
  undefined8 local_228;
  longlong *plStack_220;
  undefined8 local_218;
  longlong *plStack_210;
  longlong local_208 [2];
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [8];
  longlong *local_190;
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
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined4 local_a0 [2];
  longlong local_98;
  longlong *local_88;
  char local_78;
  undefined4 local_70 [2];
  longlong local_68;
  longlong *local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  uVar20 = 0;
  puVar16 = param_2 + 4;
  uVar19 = 0;
  local_254 = 0;
  local_238 = param_2;
  if (*puVar16 != 0) {
    uVar11 = FUN_142f71d80();
    local_248 = *puVar16;
    for (uVar17 = local_248; uVar17 != 0; uVar17 = *(ulonglong *)(uVar17 + 0x30)) {
      if (uVar17 == uVar11) goto LAB_141015ecc;
    }
  }
  local_248 = 0;
LAB_141015ecc:
  local_258 = local_248 != 0;
  if (local_248 != 0) {
    if (0 < (int)*param_2) {
      plVar3 = *(longlong **)(param_1 + 0x7c0);
      plVar4 = (longlong *)plVar3[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        iVar15 = (int)plVar4[1];
        bVar21 = iVar15 == 0;
        if (bVar21) {
          *(int *)(plVar4 + 1) = 0;
          iVar15 = 0;
        }
        UNLOCK();
        while (!bVar21) {
          LOCK();
          bVar21 = iVar15 == (int)plVar4[1];
          if (bVar21) {
            *(int *)(plVar4 + 1) = iVar15 + 1;
          }
          UNLOCK();
          if (bVar21) {
            if (plVar4 != (longlong *)0x0) {
              if (*plVar3 != 0) {
                FUN_14203e4e0();
                if ((*(longlong *)(*(longlong *)(param_1 + 0x7c0) + 0x58) != 0) &&
                   (lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x7c0) + 0x60), lVar18 != 0)) {
                  piVar2 = (int *)(lVar18 + 8);
                  LOCK();
                  iVar15 = *piVar2;
                  if (iVar15 == 0) {
                    *piVar2 = 0;
                    iVar15 = 0;
                  }
                  UNLOCK();
                  if (0 < iVar15) {
                    lVar18 = *(longlong *)(param_1 + 0x7c0);
                    local_228 = 0;
                    plStack_220 = (longlong *)0x0;
                    uVar12 = FText::AsNumber(local_168,(int)*param_2,0,&local_228);
                    UMistDebugEntityScreen::InspectEntity(lVar18 + 0x50,uVar12,1,0);
                    if (local_160 != (longlong *)0x0) {
                      LOCK();
                      plVar3 = local_160 + 1;
                      lVar18 = *plVar3;
                      *(int *)plVar3 = (int)*plVar3 + -1;
                      UNLOCK();
                      if ((int)lVar18 == 1) {
                        (**(code **)*local_160)();
                        LOCK();
                        piVar2 = (int *)((longlong)local_160 + 0xc);
                        iVar15 = *piVar2;
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (iVar15 == 1) {
                          (**(code **)(*local_160 + 8))();
                        }
                      }
                    }
                    plVar3 = plStack_220;
                    if (plStack_220 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = plStack_220 + 1;
                      lVar18 = *plVar1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)lVar18 == 1) {
                        (**(code **)*plStack_220)();
                        LOCK();
                        piVar2 = (int *)((longlong)plVar3 + 0xc);
                        iVar15 = *piVar2;
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (iVar15 == 1) {
                          (**(code **)(*plVar3 + 8))();
                        }
                      }
                    }
                  }
                }
              }
              LOCK();
              plVar3 = plVar4 + 1;
              lVar18 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar18 == 1) {
                (**(code **)*plVar4)();
                LOCK();
                piVar2 = (int *)((longlong)plVar4 + 0xc);
                iVar15 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar15 == 1) {
                  (**(code **)(*plVar4 + 8))();
                }
              }
            }
            break;
          }
          LOCK();
          iVar15 = (int)plVar4[1];
          bVar21 = iVar15 == 0;
          if (bVar21) {
            *(int *)(plVar4 + 1) = 0;
            iVar15 = 0;
          }
          UNLOCK();
        }
      }
      uVar20 = 1;
      local_254 = 1;
    }
    uVar19 = (uint)uVar20;
    uVar17 = param_2[2];
    uVar11 = (longlong)(int)param_2[3] * 0x40 + uVar17;
    local_240 = uVar11;
    if (uVar17 != uVar11) {
      lVar18 = uVar20 << 7;
LAB_141016090:
      uVar19 = (uint)uVar20;
      param_2 = local_238;
      if ((int)uVar19 <= *(int *)(param_1 + 0x7c8)) {
        lVar5 = *(longlong *)(param_1 + 0x7c0);
        plVar3 = *(longlong **)(lVar18 + 8 + lVar5);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          iVar15 = (int)plVar3[1];
          bVar21 = iVar15 == 0;
          if (bVar21) {
            *(int *)(plVar3 + 1) = 0;
            iVar15 = 0;
          }
          UNLOCK();
          while (!bVar21) {
            LOCK();
            bVar21 = iVar15 == (int)plVar3[1];
            if (bVar21) {
              *(int *)(plVar3 + 1) = iVar15 + 1;
            }
            UNLOCK();
            if (bVar21) {
              if (plVar3 != (longlong *)0x0) {
                if (*(longlong *)(lVar18 + lVar5) == 0) goto LAB_141016284;
                FUN_14203e230();
                if ((*(longlong *)(lVar18 + 0x70 + lVar5) != 0) &&
                   (lVar6 = *(longlong *)(lVar18 + 0x78 + lVar5), lVar6 != 0)) {
                  piVar2 = (int *)(lVar6 + 8);
                  LOCK();
                  iVar15 = *piVar2;
                  if (iVar15 == 0) {
                    *piVar2 = 0;
                    iVar15 = 0;
                  }
                  UNLOCK();
                  if (0 < iVar15) {
                    UMistDebugEntityScreen::InspectEntity(lVar5 + 0x68 + lVar18,uVar17 + 0x20,1,0);
                  }
                }
                if ((*(longlong *)(lVar18 + 0x40 + lVar5) == 0) ||
                   (lVar6 = *(longlong *)(lVar18 + 0x48 + lVar5), lVar6 == 0)) {
LAB_141016151:
                  bVar21 = false;
                }
                else {
                  piVar2 = (int *)(lVar6 + 8);
                  LOCK();
                  iVar15 = *piVar2;
                  if (iVar15 == 0) {
                    *piVar2 = 0;
                    iVar15 = 0;
                  }
                  UNLOCK();
                  if (iVar15 < 1) goto LAB_141016151;
                  bVar21 = true;
                }
                if (bVar21) {
                  local_218 = 0;
                  plStack_210 = (longlong *)0x0;
                  uVar12 = FText::AsNumber(local_150,*(undefined4 *)(uVar17 + 0x38),0);
                  UMistDebugEntityScreen::InspectEntity(lVar5 + 0x38 + lVar18,uVar12,1,0);
                  plVar4 = local_148;
                  if (local_148 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_148 + 1;
                    lVar6 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar6 == 1) {
                      (**(code **)*local_148)();
                      LOCK();
                      piVar2 = (int *)((longlong)plVar4 + 0xc);
                      iVar15 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar15 == 1) {
                        (**(code **)(*plVar4 + 8))();
                      }
                    }
                  }
                  plVar4 = plStack_210;
                  if (plStack_210 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plStack_210 + 1;
                    lVar6 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar6 == 1) {
                      (**(code **)*plStack_210)();
                      LOCK();
                      piVar2 = (int *)((longlong)plVar4 + 0xc);
                      iVar15 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar15 == 1) {
                        (**(code **)(*plVar4 + 8))();
                      }
                    }
                  }
                }
                plVar4 = *(longlong **)(lVar18 + 0x18 + lVar5);
                uVar11 = local_240;
                if (plVar4 == (longlong *)0x0) goto LAB_141016284;
                LOCK();
                iVar15 = (int)plVar4[1];
                bVar21 = iVar15 == 0;
                if (bVar21) {
                  *(int *)(plVar4 + 1) = 0;
                  iVar15 = 0;
                }
                UNLOCK();
                goto joined_r0x000141016211;
              }
              break;
            }
            LOCK();
            iVar15 = (int)plVar3[1];
            bVar21 = iVar15 == 0;
            if (bVar21) {
              *(int *)(plVar3 + 1) = 0;
              iVar15 = 0;
            }
            UNLOCK();
          }
        }
        goto LAB_1410162b2;
      }
    }
LAB_1410162d5:
    plVar3 = *(longlong **)(param_1 + 0x758);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar15 = (int)plVar3[1];
      bVar21 = iVar15 == 0;
      if (bVar21) {
        *(int *)(plVar3 + 1) = 0;
        iVar15 = 0;
      }
      UNLOCK();
      while (!bVar21) {
        LOCK();
        bVar21 = iVar15 == (int)plVar3[1];
        if (bVar21) {
          *(int *)(plVar3 + 1) = iVar15 + 1;
        }
        UNLOCK();
        if (bVar21) {
          if (plVar3 != (longlong *)0x0) {
            if (*(longlong *)(param_1 + 0x750) != 0) {
              FUN_14203e4e0();
            }
            LOCK();
            plVar4 = plVar3 + 1;
            lVar18 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*plVar3)();
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar15 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar3 + 8))();
              }
            }
          }
          break;
        }
        LOCK();
        iVar15 = (int)plVar3[1];
        bVar21 = iVar15 == 0;
        if (bVar21) {
          *(int *)(plVar3 + 1) = 0;
          iVar15 = 0;
        }
        UNLOCK();
      }
    }
    puVar16 = param_2 + 4;
  }
  uVar20 = local_248;
  plVar3 = *(longlong **)(param_1 + 0x738);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar15 = (int)plVar3[1];
    bVar21 = iVar15 == 0;
    if (bVar21) {
      *(int *)(plVar3 + 1) = 0;
      iVar15 = 0;
    }
    UNLOCK();
    while (!bVar21) {
      LOCK();
      bVar21 = iVar15 == (int)plVar3[1];
      if (bVar21) {
        *(int *)(plVar3 + 1) = iVar15 + 1;
      }
      UNLOCK();
      if (bVar21) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x730) != 0) {
            FUN_14203e030();
            if (*(longlong **)(param_1 + 0x728) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(param_1 + 0x728) + 0x278))();
            }
          }
          LOCK();
          plVar4 = plVar3 + 1;
          lVar18 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plVar3)();
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar15 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar3 + 8))();
            }
          }
        }
        break;
      }
      LOCK();
      iVar15 = (int)plVar3[1];
      bVar21 = iVar15 == 0;
      if (bVar21) {
        *(int *)(plVar3 + 1) = 0;
        iVar15 = 0;
      }
      UNLOCK();
    }
  }
  if ((*(longlong *)(param_1 + 0x798) != 0) && (*(longlong *)(param_1 + 0x7a0) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x7a0) + 8);
    LOCK();
    iVar15 = *piVar2;
    if (iVar15 == 0) {
      *piVar2 = 0;
      iVar15 = 0;
    }
    UNLOCK();
    if (0 < iVar15) {
      if (uVar20 != 0) {
        uVar12 = FUN_142f5bb60(puVar16);
        uVar12 = FUN_142dea370(uVar12,local_138);
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x790,uVar12,1,0);
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_130 + 1;
          lVar18 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar2 = (int *)((longlong)local_130 + 0xc);
            iVar15 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
        }
      }
      FUN_142f10d20(param_1 + 0x790);
    }
  }
  if ((*(longlong *)(param_1 + 0x7b0) != 0) && (*(longlong *)(param_1 + 0x7b8) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x7b8) + 8);
    LOCK();
    iVar15 = *piVar2;
    if (iVar15 == 0) {
      *piVar2 = 0;
      iVar15 = 0;
    }
    UNLOCK();
    if (0 < iVar15) {
      FUN_142f10d20(param_1 + 0x7a8);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x748);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar15 = (int)plVar3[1];
    bVar21 = iVar15 == 0;
    if (bVar21) {
      *(int *)(plVar3 + 1) = 0;
      iVar15 = 0;
    }
    UNLOCK();
    while (!bVar21) {
      LOCK();
      bVar21 = iVar15 == (int)plVar3[1];
      if (bVar21) {
        *(int *)(plVar3 + 1) = iVar15 + 1;
      }
      UNLOCK();
      if (bVar21) {
        if (plVar3 != (longlong *)0x0) {
          lVar18 = *(longlong *)(param_1 + 0x740);
          if (lVar18 != 0) {
            uVar7 = *(uint *)(param_1 + 0x7c8);
            if ((int)uVar19 <= (int)*(uint *)(param_1 + 0x7c8)) {
              uVar7 = uVar19;
            }
            FString::PrintfImpl(local_208,L"rewards%i",uVar7);
            FUN_14203e230(lVar18,local_208);
            if (local_208[0] != 0) {
              FMemory::Free();
            }
          }
          LOCK();
          plVar4 = plVar3 + 1;
          lVar18 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar15 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar15 = (int)plVar3[1];
      bVar21 = iVar15 == 0;
      if (bVar21) {
        *(int *)(plVar3 + 1) = 0;
        iVar15 = 0;
      }
      UNLOCK();
    }
  }
  if ((*(longlong *)(param_1 + 0x768) != 0) && (*(longlong *)(param_1 + 0x770) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x770) + 8);
    LOCK();
    iVar15 = *piVar2;
    if (iVar15 == 0) {
      *piVar2 = 0;
      iVar15 = 0;
    }
    UNLOCK();
    if (0 < iVar15) {
      if ((uVar20 == 0) || (*(char *)((longlong)param_2 + 0x2c) == '\0')) {
        uVar12 = 0;
      }
      else {
        uVar12 = 1;
      }
      FUN_142f10d20(param_1 + 0x760,uVar12);
    }
  }
  if (*(char *)((longlong)param_2 + 0x2c) == '\0') {
    uVar22 = *(undefined4 *)(param_1 + 0x674);
  }
  else {
    uVar22 = *(undefined4 *)(param_1 + 0x678);
  }
  *(undefined4 *)(param_1 + 0x67c) = uVar22;
  local_1d8 = (ulonglong *)CONCAT44(local_1d8._4_4_,(undefined4)local_1d8);
  uStack_1d0 = (ulonglong *)CONCAT44(uStack_1d0._4_4_,(undefined4)uStack_1d0);
  local_1b8 = (ulonglong *)CONCAT44(local_1b8._4_4_,(undefined4)local_1b8);
  uStack_1b0 = (ulonglong *)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
  if ((*(longlong *)(param_1 + 0x780) != 0) &&
     (local_1d8 = (ulonglong *)CONCAT44(local_1d8._4_4_,(undefined4)local_1d8),
     uStack_1d0 = (ulonglong *)CONCAT44(uStack_1d0._4_4_,(undefined4)uStack_1d0),
     local_1b8 = (ulonglong *)CONCAT44(local_1b8._4_4_,(undefined4)local_1b8),
     uStack_1b0 = (ulonglong *)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0),
     *(longlong *)(param_1 + 0x788) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x788) + 8);
    LOCK();
    iVar15 = *piVar2;
    if (iVar15 == 0) {
      *piVar2 = 0;
      iVar15 = 0;
    }
    UNLOCK();
    local_1d8 = (ulonglong *)CONCAT44(local_1d8._4_4_,(undefined4)local_1d8);
    uStack_1d0 = (ulonglong *)CONCAT44(uStack_1d0._4_4_,(undefined4)uStack_1d0);
    local_1b8 = (ulonglong *)CONCAT44(local_1b8._4_4_,(undefined4)local_1b8);
    uStack_1b0 = (ulonglong *)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
    if ((0 < iVar15) &&
       (local_1d8 = (ulonglong *)CONCAT44(local_1d8._4_4_,(undefined4)local_1d8),
       uStack_1d0 = (ulonglong *)CONCAT44(uStack_1d0._4_4_,(undefined4)uStack_1d0),
       local_1b8 = (ulonglong *)CONCAT44(local_1b8._4_4_,(undefined4)local_1b8),
       uStack_1b0 = (ulonglong *)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0), uVar20 != 0)) {
      iVar15 = (int)param_2[3] + 1;
      if (*(char *)((longlong)param_2 + 0x2c) == '\0') {
        uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_f0,L"MISSION {0}|plural(one=REWARD!,other=REWARDS!,many=REWARDS!)"
                            ,L"MissionTrackerHUDWidget",L"MissionRewardsText");
        puVar13 = (undefined8 *)FTextFormat::FTextFormat(local_b0,uVar12);
        local_68 = (longlong)iVar15;
        local_238 = (ulonglong *)local_70;
        puStack_230 = &local_40;
        local_1e8 = *puVar13;
        local_1e0 = puVar13[1];
        local_70[0] = 0;
        local_48 = '\0';
        if (local_1e0 != 0) {
          LOCK();
          *(int *)(local_1e0 + 8) = *(int *)(local_1e0 + 8) + 1;
          UNLOCK();
        }
        local_1b8 = local_238;
        uStack_1b0 = puStack_230;
        uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_1a8,&local_1b8);
        uVar12 = FText::Format(local_108,&local_1e8,uVar12);
        FText::FText(local_198,uVar12);
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_100 + 1;
          lVar18 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar2 = (int *)((longlong)local_100 + 0xc);
            iVar15 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*local_100 + 8))(local_100,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1a8);
        if ((local_48 != '\0') && (local_48 = '\0', local_58 != (longlong *)0x0)) {
          LOCK();
          plVar3 = local_58 + 1;
          lVar18 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar2 = (int *)((longlong)local_58 + 0xc);
            iVar15 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*local_58 + 8))(local_58,1);
            }
          }
        }
        plVar3 = (longlong *)puVar13[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar3 + 1;
          lVar18 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar15 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        puVar14 = local_198;
        bVar10 = false;
        bVar9 = false;
        bVar8 = true;
        bVar21 = true;
      }
      else {
        uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_d8,L"BONUS {0}|plural(one=REWARD!,other=REWARDS!,many=REWARDS!)",
                            L"MissionTrackerHUDWidget",L"MissionBonusRewardsText");
        puVar13 = (undefined8 *)FTextFormat::FTextFormat(local_c0,uVar12);
        local_98 = (longlong)iVar15;
        local_238 = (ulonglong *)local_a0;
        puStack_230 = (ulonglong *)local_70;
        local_1f8 = *puVar13;
        local_1f0 = puVar13[1];
        local_a0[0] = 0;
        local_78 = '\0';
        if (local_1f0 != 0) {
          LOCK();
          *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
          UNLOCK();
        }
        local_1d8 = local_238;
        uStack_1d0 = puStack_230;
        uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_1c8,&local_1d8);
        uVar12 = FText::Format(local_120,&local_1f8,uVar12);
        FText::FText(local_180,uVar12);
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_118 + 1;
          lVar18 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar2 = (int *)((longlong)local_118 + 0xc);
            iVar15 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1c8);
        if ((local_78 != '\0') && (local_78 = '\0', local_88 != (longlong *)0x0)) {
          LOCK();
          plVar3 = local_88 + 1;
          lVar18 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar2 = (int *)((longlong)local_88 + 0xc);
            iVar15 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*local_88 + 8))(local_88,1);
            }
          }
        }
        plVar3 = (longlong *)puVar13[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar3 + 1;
          lVar18 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar15 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        puVar14 = local_180;
        bVar10 = true;
        bVar9 = true;
        bVar8 = false;
        bVar21 = false;
      }
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x778,puVar14,1,0);
      if ((bVar21) && (local_190 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_190 + 1;
        lVar18 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar2 = (int *)((longlong)local_190 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_190 + 8))(local_190,1);
          }
        }
      }
      if ((bVar8) && (local_e8 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_e8 + 1;
        lVar18 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar2 = (int *)((longlong)local_e8 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
      }
      if ((bVar9) && (local_178 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_178 + 1;
        lVar18 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar2 = (int *)((longlong)local_178 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_178 + 8))(local_178,1);
          }
        }
      }
      if ((bVar10) && (local_d0 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_d0 + 1;
        lVar18 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)local_d0 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
    }
  }
  FUN_140ce1790(param_2 + 2);
  return;
joined_r0x000141016211:
  if (bVar21) goto LAB_141016284;
  LOCK();
  bVar21 = iVar15 == (int)plVar4[1];
  if (bVar21) {
    *(int *)(plVar4 + 1) = iVar15 + 1;
  }
  UNLOCK();
  if (bVar21) {
    if (plVar4 != (longlong *)0x0) {
      if (*(longlong *)(lVar18 + 0x10 + lVar5) != 0) {
        FUN_14203e4e0();
      }
      LOCK();
      plVar1 = plVar4 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar11 = local_240;
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)();
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        uVar11 = local_240;
        if (iVar15 == 1) {
          (**(code **)(*plVar4 + 8))();
          uVar11 = local_240;
        }
      }
    }
    goto LAB_141016284;
  }
  LOCK();
  iVar15 = (int)plVar4[1];
  bVar21 = iVar15 == 0;
  if (bVar21) {
    *(int *)(plVar4 + 1) = 0;
    iVar15 = 0;
  }
  UNLOCK();
  goto joined_r0x000141016211;
LAB_141016284:
  LOCK();
  plVar4 = plVar3 + 1;
  lVar5 = *plVar4;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)lVar5 == 1) {
    (**(code **)*plVar3)();
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar15 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar15 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
LAB_1410162b2:
  lVar18 = lVar18 + 0x80;
  uVar19 = local_254 + 1;
  uVar20 = (ulonglong)uVar19;
  uVar17 = uVar17 + 0x40;
  param_2 = local_238;
  local_254 = uVar19;
  if (uVar17 == uVar11) goto LAB_1410162d5;
  goto LAB_141016090;
}



// FUNCTION 141016a70 FUN_141016a70 body=11 status=ok
// SIG undefined FUN_141016a70(void)

void FUN_141016a70(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2b0) = param_2;
  FUN_141012880();
  return;
}



// FUNCTION 141016a80 FUN_141016a80 body=127 status=ok
// SIG undefined FUN_141016a80(void)

void FUN_141016a80(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
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
      lVar3 = FUN_140e21bd0(lVar2);
      if (lVar3 != 0) {
        uVar4 = FUN_140e21bd0(lVar2);
        FUN_140e36cb0(uVar4,param_2);
      }
    }
  }
  return;
}



// FUNCTION 141016b00 FUN_141016b00 body=24 status=ok
// SIG undefined FUN_141016b00(void)

void FUN_141016b00(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x260) = param_3;
  *(undefined4 *)(param_1 + 0x264) = param_4;
  *(undefined8 *)(param_1 + 600) = param_2;
  return;
}



// FUNCTION 141016b20 FUN_141016b20 body=61 status=ok
// SIG undefined FUN_141016b20(void)

void FUN_141016b20(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x1e0) + 0x2b0) = param_2;
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x208) + 0x2b0) = param_2;
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x230) + 0x2b0) = param_2;
  }
  *(undefined1 *)(param_1 + 0x188) = param_2;
  return;
}



// FUNCTION 141016b60 FUN_141016b60 body=1473 status=ok
// SIG undefined FUN_141016b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141016b60(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_158 [32];
  wchar_t *local_138;
  int local_130;
  int local_12c;
  undefined4 *local_128;
  ulonglong *puStack_120;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *plStack_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [24];
  undefined4 local_50 [4];
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  iVar4 = *(int *)(param_1 + 0x1c0);
  *(int *)(param_1 + 0x1c0) = param_2;
  local_138 = (wchar_t *)0x0;
  local_12c = 0;
  local_130 = 0;
  if (param_2 < 2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_138,4);
    local_130 = local_130 + 4;
    if (local_12c < local_130) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138);
    }
    builtin_wcsncpy(local_138,L"off",4);
  }
  else if (iVar4 == param_2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_138,3);
    local_130 = local_130 + 3;
    if (local_12c < local_130) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138);
    }
    local_138[0] = L'o';
    local_138[1] = L'n';
    local_138[2] = L'\0';
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_138,10);
    local_130 = local_130 + 10;
    if (local_12c < local_130) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138);
    }
    builtin_wcsncpy(local_138,L"stackTick",10);
  }
  if ((*(longlong *)(param_1 + 0x180) == 0) || (*(longlong *)(param_1 + 0x188) == 0)) {
LAB_141016c9c:
    puVar5 = (undefined8 *)FUN_142085870(param_1,local_f0,L"stackLabel");
    *(undefined8 *)(param_1 + 0x180) = *puVar5;
    plVar2 = (longlong *)puVar5[1];
    plVar8 = *(longlong **)(param_1 + 0x188);
    if (plVar2 != plVar8) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(param_1 + 0x188);
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
      *(longlong **)(param_1 + 0x188) = plVar2;
    }
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_e8 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x188) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) goto LAB_141016c9c;
  }
  plVar2 = *(longlong **)(param_1 + 0x188);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar9 = iVar4 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar4 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar9) {
        if (plVar2 != (longlong *)0x0) {
          if ((*(longlong *)(param_1 + 0x180) != 0) && (1 < local_130)) {
            FUN_14203dbf0(*(longlong *)(param_1 + 0x180),&local_138);
          }
          LOCK();
          plVar8 = plVar2 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
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
    if (0 < iVar4) goto LAB_141016e31;
  }
  uVar6 = FUN_142085870(param_1,local_e0,L"stackNumber");
  FUN_142ede260(param_1 + 400,uVar6);
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_d8 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
LAB_141016e31:
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
      local_100 = 0;
      plStack_f8 = (longlong *)0x0;
      lVar7 = FText::AsNumber(local_68,*(undefined4 *)(param_1 + 0x1c0),0,&local_100);
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_90,L"x{0}",L"GFxPassiveSkillWidget",L"PassiveSkillStackIndicator");
      puVar5 = (undefined8 *)FTextFormat::FTextFormat(local_78,uVar6);
      local_50[0] = 4;
      FText::FText(local_40,lVar7);
      local_110 = *puVar5;
      local_128 = local_50;
      puStack_120 = &local_20;
      local_108 = puVar5[1];
      local_28 = '\x01';
      if (local_108 != 0) {
        LOCK();
        *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
        UNLOCK();
      }
      uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_d0,&local_128);
      uVar6 = FText::Format(local_a8,&local_110,uVar6);
      FText::FText(local_c0,uVar6);
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_a0 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_d0);
      if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_38 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
      plVar2 = (longlong *)puVar5[1];
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
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      plVar2 = *(longlong **)(lVar7 + 8);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar2 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      UMistDebugEntityScreen::InspectEntity(param_1 + 400,local_c0,1,0);
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_b8 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_88 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
      plVar2 = plStack_f8;
      if (plStack_f8 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_f8 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_f8)(plStack_f8);
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
    }
  }
  if (local_138 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141017130 FUN_141017130 body=368 status=ok
// SIG undefined FUN_141017130(void)

void FUN_141017130(longlong param_1,char param_2)

{
  int iVar1;
  wchar_t *local_18;
  undefined8 local_10;
  
  *(char *)(param_1 + 0x1c8) = param_2;
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  if (param_2 == '\0') {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,4);
    iVar1 = (int)local_10 + 4;
    local_10 = CONCAT44(local_10._4_4_,iVar1);
    if (local_10._4_4_ < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"off",4);
  }
  else if (param_2 == '\x01') {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,10);
    iVar1 = (int)local_10 + 10;
    local_10 = CONCAT44(local_10._4_4_,iVar1);
    if (local_10._4_4_ < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"activated",10);
  }
  else if (param_2 == '\x02') {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x10);
    iVar1 = (int)local_10 + 0x10;
    local_10 = CONCAT44(local_10._4_4_,iVar1);
    if (local_10._4_4_ < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"stackActivation",0x10);
  }
  else {
    if (param_2 != '\x03') {
      return;
    }
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0xe);
    iVar1 = (int)local_10 + 0xe;
    local_10 = CONCAT44(local_10._4_4_,iVar1);
    if (local_10._4_4_ < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"beginCooldown",0xe);
  }
  if (1 < (int)local_10) {
    FUN_142088910(param_1,&local_18);
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410172a0 FUN_1410172a0 body=538 status=ok
// SIG undefined FUN_1410172a0(void)

void FUN_1410172a0(longlong *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  longlong local_18 [2];
  
  if ((param_1[0xc6] == 0) || (param_1[0xc9] == 0)) goto switchD_1410172f6_default;
  switch(param_2) {
  case 0:
    local_18[1] = 4;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar4 = 8;
    pwVar3 = L"off";
    break;
  case 1:
  case 2:
    local_18[1] = 6;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar4 = 0xc;
    pwVar3 = L"ready";
    break;
  case 3:
    local_18[1] = 10;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar4 = 0x14;
    pwVar3 = L"activated";
    break;
  case 4:
  case 5:
    local_18[1] = 0xe;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar4 = 0x1c;
    pwVar3 = L"beginCooldown";
    break;
  case 6:
    local_18[1] = 0xe;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"readyFlourish",0x1c);
    FUN_142088910(param_1[0xc6],local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    local_18[0] = 0;
    local_18[1] = 0;
    lVar2 = *param_1;
    puVar1 = (undefined8 *)FName::FName(local_res8,L"PetAttackReady",1);
    (**(code **)(lVar2 + 0x4e8))(param_1,*puVar1,local_18);
    goto switchD_1410172f6_default;
  case 7:
    local_18[1] = 3;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],&DAT_144653e24,6);
    lVar2 = param_1[0xc9];
    goto LAB_141017487;
  case 8:
    local_18[1] = 0xf;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar4 = 0x1e;
    pwVar3 = L"initialization";
    break;
  default:
    goto switchD_1410172f6_default;
  }
  FGenericPlatformString::Memcpy(local_18[0],pwVar3,uVar4);
  lVar2 = param_1[0xc6];
LAB_141017487:
  FUN_142088910(lVar2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
switchD_1410172f6_default:
  *(undefined1 *)(param_1 + 0xd8) = param_2;
  return;
}



// FUNCTION 1410174e0 FUN_1410174e0 body=1254 status=ok
// SIG undefined FUN_1410174e0(void)

void FUN_1410174e0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  int *piVar12;
  int *piVar13;
  longlong *plVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  longlong local_res18;
  longlong local_res20;
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 local_70 [16];
  int local_60;
  int local_5c;
  longlong local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  if (param_2 != (longlong *)0x0) {
    lVar5 = AFGRailroadVehicle::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar14 = (longlong *)0x0;
      plVar6 = param_2;
      goto LAB_141017545;
    }
  }
  plVar6 = (longlong *)0x0;
  plVar14 = param_2;
LAB_141017545:
  pwVar16 = (wchar_t *)0x0;
  FUN_140f8ee10(param_1,plVar14);
  if ((plVar14 != (longlong *)0x0) || (plVar6 != (longlong *)0x0)) {
    if (plVar14 != (longlong *)0x0) {
      plVar6 = plVar14;
    }
    lVar5 = (**(code **)(*plVar6 + 0x680))(plVar6);
    if (lVar5 != 0) {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x680))(plVar6);
    }
    if (plVar6 != (longlong *)0x0) {
      uVar7 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      pwVar8 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(plVar6,uVar7);
      if (pwVar8 != (wchar_t *)0x0) {
        AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x5b));
        plVar14 = (longlong *)param_1[0x5c];
        pwVar15 = pwVar16;
        if (plVar14 != (longlong *)0x0) {
          pwVar15 = (wchar_t *)param_1[0x5d];
        }
        ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x5b));
        pwVar11 = pwVar15;
        if (plVar14 == (longlong *)0x0) {
          pwVar11 = pwVar16;
        }
        if ((pwVar8 == pwVar11) && (plVar6 == plVar14)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if (((plVar14 != (longlong *)0x0) && (pwVar15 != (wchar_t *)0x0)) &&
             (lVar5 = (**(code **)(*(longlong *)pwVar15 + 0xc0))(pwVar15), lVar5 != 0)) {
            pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerLocationChanged",L"::");
            pwVar11 = pwVar16;
            while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
              pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
              pwVar11 = pwVar2;
            }
            FName::FName(&local_res18,pwVar11 + 2,1);
            uVar7 = (**(code **)(*(longlong *)pwVar15 + 0xc0))(pwVar15);
            TMulticastScriptDelegate<FWeakObjectPtr>::Remove(uVar7,param_1,local_res18);
          }
          AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x5b));
          param_1[0x5c] = (longlong)plVar6;
          param_1[0x5d] = (longlong)pwVar8;
          ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x5b));
          FWeakObjectPtr::operator=(param_1 + 0x5a,plVar6);
          lVar5 = (**(code **)(*(longlong *)pwVar8 + 0xc0))(pwVar8);
          plVar14 = plVar6;
          pwVar15 = pwVar8;
          if (lVar5 != 0) {
            puVar10 = (undefined8 *)(**(code **)(*(longlong *)pwVar8 + 0x90))(pwVar8,local_88);
            local_98 = *puVar10;
            local_90 = *(float *)(puVar10 + 1);
            lVar5 = FUN_140f67a80(param_1);
            if (lVar5 == 0) {
              FUN_140f8ef10(param_1,&local_98);
            }
            else {
              lVar5 = (**(code **)(*param_1 + 0x2b0))(param_1,local_7c);
              *(float *)((longlong)param_1 + 0x30c) = *(float *)(lVar5 + 8) - local_90;
            }
            puVar10 = (undefined8 *)FUN_140f67ae0(param_1,local_70);
            *(undefined8 *)((longlong)param_1 + 0x2f4) = *puVar10;
            *(undefined4 *)((longlong)param_1 + 0x2fc) = *(undefined4 *)(puVar10 + 1);
            pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerLocationChanged",L"::");
            while (pwVar9 = pwVar11, pwVar9 != (wchar_t *)0x0) {
              pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
              pwVar16 = pwVar9;
            }
            FName::FName(&local_res20,pwVar16 + 2,1);
            plVar6 = (longlong *)(**(code **)(*(longlong *)pwVar8 + 0xc0))(pwVar8);
            FWeakObjectPtr::operator=(&local_60,0);
            local_58 = 0;
            FWeakObjectPtr::operator=(&local_60,param_1);
            local_58 = local_res20;
            if ((local_res20 != 0) && (lVar5 = FWeakObjectPtr::Get(&local_60), lVar5 != 0)) {
              UObject::FindFunction(lVar5,local_58);
            }
            piVar12 = (int *)*plVar6;
            lVar5 = plVar6[1];
            for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)(int)lVar5 * 4;
                piVar13 = piVar13 + 4) {
              if (((*piVar13 == local_60) && (piVar13[1] == local_5c)) ||
                 ((cVar3 = FWeakObjectPtr::IsValid(piVar13), cVar3 == '\0' &&
                  (cVar3 = FWeakObjectPtr::IsValid(&local_60), cVar3 == '\0')))) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              if ((bVar1) && (*(longlong *)(piVar13 + 2) == local_58)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              if (bVar1) {
                if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_1410178c5;
                break;
              }
            }
            iVar4 = (int)plVar6[1];
            *(int *)(plVar6 + 1) = iVar4 + 1;
            if (*(int *)((longlong)plVar6 + 0xc) < iVar4 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar4);
            }
            piVar12 = (int *)((longlong)iVar4 * 0x10 + *plVar6);
            *piVar12 = local_60;
            piVar12[1] = local_5c;
            *(longlong *)(piVar12 + 2) = local_58;
LAB_1410178c5:
            TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar6);
          }
        }
        FUN_14101ccf0(param_1);
        if ((plVar14 != (longlong *)0x0) && (pwVar15 != (wchar_t *)0x0)) {
          (**(code **)(*(longlong *)pwVar15 + 0x68))(pwVar15,local_50);
          if ((param_1[0x4c] != 0) && (param_1[0x4d] != 0)) {
            piVar12 = (int *)(param_1[0x4d] + 8);
            LOCK();
            iVar4 = *piVar12;
            if (iVar4 == 0) {
              *piVar12 = 0;
              iVar4 = 0;
            }
            UNLOCK();
            if (0 < iVar4) {
              UMistDebugEntityScreen::InspectEntity(param_1 + 0x4b,local_50,1,0);
            }
          }
          if ((param_1[0x51] != 0) && (param_1[0x52] != 0)) {
            piVar12 = (int *)(param_1[0x52] + 8);
            LOCK();
            iVar4 = *piVar12;
            if (iVar4 == 0) {
              *piVar12 = 0;
              iVar4 = 0;
            }
            UNLOCK();
            if (0 < iVar4) {
              UMistDebugEntityScreen::InspectEntity(param_1 + 0x50,local_50,1,0);
            }
          }
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar14 = local_48 + 1;
            lVar5 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar12 = (int *)((longlong)local_48 + 0xc);
              iVar4 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_48 + 8))(local_48,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410179d0 FUN_1410179d0 body=157 status=ok
// SIG undefined FUN_1410179d0(void)

void FUN_1410179d0(longlong param_1,float param_2)

{
  char cVar1;
  float fVar2;
  
  fVar2 = (float)FUN_140f67ad0();
  if (1e-08 < ABS(fVar2 - param_2)) {
    FUN_140f8eed0(param_1);
    cVar1 = FUN_140f70280(param_1);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x2a0) != 0)) {
      for (param_2 = param_2 + 180.0; param_2 < 0.0; param_2 = param_2 + 360.0) {
      }
      for (; 360.0 < param_2; param_2 = param_2 + -360.0) {
      }
      FUN_142088ee0(*(longlong *)(param_1 + 0x2a0),(int)param_2);
    }
  }
  return;
}


