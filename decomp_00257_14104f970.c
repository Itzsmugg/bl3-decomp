// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14104f970 FUN_14104f970 body=12 status=ok
// SIG undefined FUN_14104f970(void)

undefined4 FUN_14104f970(longlong param_1)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x674);
  *(undefined4 *)(param_1 + 0x674) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 14104f980 FUN_14104f980 body=232 status=ok
// SIG undefined FUN_14104f980(void)

/* WARNING: Removing unreachable block (ram,0x00014104f9d1) */

void FUN_14104f980(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    lVar2 = FUN_14138e2b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      param_2 = 0;
    }
  }
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
    if (bVar1) goto LAB_14104fa30;
  }
  lVar2 = 0;
LAB_14104fa30:
  if ((param_2 != 0) && (lVar2 != 0)) {
    *(longlong *)(param_1 + 0xc70) = param_2;
    FUN_141063030(param_1,*(undefined8 *)(param_2 + 0x308),0);
  }
  return;
}



// FUNCTION 14104fa70 thunk_FUN_1410587c0 body=5 status=ok
// SIG undefined thunk_FUN_1410587c0(void)

void thunk_FUN_1410587c0(longlong *param_1)

{
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  char acStackX_8 [8];
  longlong alStack_58 [2];
  undefined1 auStack_48 [64];
  
  if (((param_1[0xe0] != 0) && (param_1[0xe1] != 0)) &&
     (cVar2 = (**(code **)(*(longlong *)param_1[0xe1] + 0x18))(), cVar2 != '\0')) {
    plVar4 = (longlong *)0x0;
    if (param_1[0xe0] != 0) {
      plVar4 = (longlong *)param_1[0xe1];
    }
    (**(code **)(*plVar4 + 0x20))(plVar4,auStack_48);
    cVar2 = FUN_142d52a00(auStack_48);
    if (cVar2 != '\0') {
      acStackX_8[0] = '\x04';
      uVar3 = FUN_142d52a20(auStack_48);
      uVar3 = FArchive::operator<<(uVar3);
      FUN_142d62440(uVar3,acStackX_8);
      uVar3 = FUN_142d52a20(auStack_48);
      uVar3 = FArchive::operator<<(uVar3);
      fVar6 = (float)FUN_142d5fed0(uVar3);
      uVar3 = FUN_142d52a20(auStack_48);
      uVar3 = FArchive::operator<<(uVar3);
      fVar7 = (float)FUN_142d5fea0(uVar3);
      FUN_141066cf0(param_1,(int)ROUND(fVar6 * 2.0 + 0.5) >> 1,fVar7,acStackX_8[0]);
      if (acStackX_8[0] != *(char *)((longlong)param_1 + 0x6ff)) {
        if (acStackX_8[0] == '\0') {
          if (fVar7 <= 0.0) {
            *(undefined1 *)((longlong)param_1 + 0x6fd) = 1;
            FUN_1410533d0(param_1);
          }
        }
        else if (acStackX_8[0] == '\x02') {
          *(undefined1 *)((longlong)param_1 + 0x6fc) = 0;
          if (param_1[0xde] != 0) {
            alStack_58[0] = 0;
            alStack_58[1] = 0x10;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_58,0);
            FGenericPlatformString::Memcpy(alStack_58[0],L"fullShieldFlash",0x20);
            FUN_142088910(param_1[0xde],alStack_58);
            if (alStack_58[0] != 0) {
              FMemory::Free();
            }
          }
          if (((int)param_1[0xd9] != 0) || (*(int *)((longlong)param_1 + 0x6cc) != 0)) {
            alStack_58[0] = 0;
            alStack_58[1] = 0;
            (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0xd9],alStack_58);
          }
        }
        else if ((acStackX_8[0] == '\x03') &&
                (*(undefined1 *)((longlong)param_1 + 0x6fc) = 0, pvVar1 = ThreadLocalStoragePointer,
                *(char *)((longlong)param_1 + 0x6fd) != '\0')) {
          uVar5 = (ulonglong)_tls_index;
          *(undefined1 *)((longlong)param_1 + 0x6fd) = 0;
          if ((*(int *)(*(longlong *)((longlong)pvVar1 + uVar5 * 8) + 0x38) < DAT_146873f18) &&
             (_Init_thread_header(&DAT_146873f18), DAT_146873f18 == -1)) {
            FName::FName(&DAT_146873f10,L"Shield_Power_Up",1);
            _Init_thread_footer(&DAT_146873f18);
          }
          alStack_58[0] = 0;
          alStack_58[1] = 0;
          (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146873f10,alStack_58);
        }
        *(char *)((longlong)param_1 + 0x6ff) = acStackX_8[0];
      }
    }
  }
  return;
}



// FUNCTION 14104fa80 FUN_14104fa80 body=451 status=ok
// SIG undefined FUN_14104fa80(void)

void FUN_14104fa80(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined1 local_res8 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  *(undefined2 *)(param_1 + 0xe2) = 1;
  (**(code **)(*param_1 + 0x298))(param_1,0);
  lVar4 = FWeakObjectPtr::Get(param_1 + 0xb9);
  if (lVar4 != 0) {
    lVar5 = FUN_14142a560();
    iVar1 = *(int *)(lVar5 + 0x90);
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140ccad40(lVar4,CONCAT71((int7)(int3)((uint)iVar1 >> 8),3));
    }
  }
  if ((param_1[0xe0] != 0) && ((longlong *)param_1[0xe1] != (longlong *)0x0)) {
    plVar8 = (longlong *)0x0;
    plVar7 = (longlong *)param_1[0xe1];
    if (param_1[0xe0] == 0) {
      plVar7 = plVar8;
    }
    cVar3 = (**(code **)(*plVar7 + 0x18))();
    if (cVar3 != '\0') {
      if (param_1[0xe0] != 0) {
        plVar8 = (longlong *)param_1[0xe1];
      }
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
      cVar3 = FUN_142d52a00(&local_58);
      if (cVar3 != '\0') {
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        local_28 = local_48;
        FUN_14105f020(param_1,&local_38);
        uVar6 = FUN_142d52a20(&local_58);
        uVar6 = FArchive::operator<<(uVar6);
        FUN_142d62440(uVar6,local_res8);
        uVar6 = FUN_142d52a20(&local_58);
        uVar6 = FArchive::operator<<(uVar6);
        fVar9 = (float)FUN_142d5fed0(uVar6);
        uVar6 = FUN_142d52a20(&local_58);
        uVar6 = FArchive::operator<<(uVar6);
        fVar10 = (float)FUN_142d61c30(uVar6);
        if (fVar9 < fVar10) {
          *(undefined1 *)((longlong)param_1 + 0x6fd) = 1;
          *(undefined1 *)((longlong)param_1 + 0x6ff) = 4;
        }
        uVar6 = FUN_142d52a20(&local_58);
        uVar6 = FArchive::operator<<(uVar6);
        uVar11 = FUN_142d5fea0(uVar6);
        FUN_141066cf0(param_1,(int)ROUND(fVar9 * 2.0 + 0.5) >> 1,uVar11,local_res8[0]);
      }
    }
  }
  return;
}



// FUNCTION 14104fc50 FUN_14104fc50 body=64 status=ok
// SIG undefined FUN_14104fc50(void)

void FUN_14104fc50(longlong param_1)

{
  undefined4 local_48;
  uint uStack_34;
  undefined4 local_28 [2];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  
  local_48 = CONCAT31(local_48._1_3_,0xff);
  local_18 = (ulonglong)uStack_34 << 0x20;
  local_28[0] = local_48;
  uStack_20 = 0;
  uStack_1c = 0;
  *(undefined1 *)(param_1 + 0x710) = 0;
  FUN_14105f020(local_48,local_28);
  return;
}



// FUNCTION 14104fc90 FUN_14104fc90 body=44 status=ok
// SIG undefined FUN_14104fc90(void)

void FUN_14104fc90(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_14103edb0(param_1,*param_2);
  if (cVar1 != '\0') {
    FUN_1410533d0(param_1);
    *(undefined2 *)(param_1 + 0x6fd) = 0x301;
  }
  return;
}



// FUNCTION 14104fcc0 FUN_14104fcc0 body=171 status=ok
// SIG undefined FUN_14104fcc0(void)

void FUN_14104fcc0(longlong *param_1)

{
  longlong local_18 [2];
  
  *(undefined1 *)((longlong)param_1 + 0x6fc) = 0;
  if (param_1[0xde] != 0) {
    local_18[0] = 0;
    local_18[1] = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"fullShieldFlash",0x20);
    FUN_142088910(param_1[0xde],local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if (((int)param_1[0xd9] != 0) || (*(int *)((longlong)param_1 + 0x6cc) != 0)) {
    local_18[0] = 0;
    local_18[1] = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0xd9],local_18);
  }
  return;
}



// FUNCTION 14104fd70 FUN_14104fd70 body=97 status=ok
// SIG undefined FUN_14104fd70(void)

void FUN_14104fd70(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  cVar1 = FUN_14103edb0(param_1,*param_2);
  if (cVar1 != '\0') {
    if ((*(char *)((longlong)param_1 + 0x6ff) != '\x03') &&
       (((int)param_1[0xda] != 0 || (*(int *)((longlong)param_1 + 0x6d4) != 0)))) {
      local_18 = 0;
      local_10 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0xda],&local_18);
    }
    *(undefined1 *)((longlong)param_1 + 0x6fe) = 1;
  }
  return;
}



// FUNCTION 14104fde0 FUN_14104fde0 body=34 status=ok
// SIG undefined FUN_14104fde0(void)

void FUN_14104fde0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_14103edb0(param_1,*param_2);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x6fe) = 0;
  }
  return;
}



// FUNCTION 14104fe10 FUN_14104fe10 body=169 status=ok
// SIG undefined FUN_14104fe10(void)

void FUN_14104fe10(longlong *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  *(undefined1 *)((longlong)param_1 + 0x6fc) = 0;
  pvVar1 = ThreadLocalStoragePointer;
  if (*(char *)((longlong)param_1 + 0x6fd) != '\0') {
    uVar2 = (ulonglong)_tls_index;
    *(undefined1 *)((longlong)param_1 + 0x6fd) = 0;
    if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x38) < DAT_146873f18) {
      _Init_thread_header(&DAT_146873f18);
      if (DAT_146873f18 == -1) {
        FName::FName(&DAT_146873f10,L"Shield_Power_Up",1);
        _Init_thread_footer(&DAT_146873f18);
      }
    }
    local_18 = 0;
    local_10 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146873f10,&local_18);
  }
  return;
}



// FUNCTION 14104fec0 FUN_14104fec0 body=34 status=ok
// SIG undefined FUN_14104fec0(void)

void FUN_14104fec0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_14103edb0(param_1,*param_2);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x6fe) = 2;
  }
  return;
}



// FUNCTION 14104fef0 FUN_14104fef0 body=437 status=ok
// SIG undefined FUN_14104fef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14104fef0(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
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
  lVar6 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = FUN_141032170;
  FUN_1420849a0(param_1,local_68,local_b8);
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
  lVar1 = DAT_146873ec8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_14104ffcd;
  }
  lVar5 = lVar6;
LAB_14104ffcd:
  if (*(int *)(lVar5 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_b8[0])(lVar6);
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
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8);
    FUN_14208c4f0(param_1,local_b8);
  }
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
  return;
}



// FUNCTION 1410500b0 FUN_1410500b0 body=476 status=ok
// SIG undefined FUN_1410500b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410500b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
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
  local_d8[0] = 0xffffffff;
  uVar8 = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(local_d8);
    uVar8 = local_d8[0];
  }
  lVar6 = 0;
  local_d8[0] = 0xffffffff;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_144266c70;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = uVar8;
    uVar8 = 0xffffffff;
  }
  local_c8[0] = FUN_1410325d0;
  FUN_1420849a0(param_1,local_78,local_c8);
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
  FUN_1416f8340(uVar8);
  FUN_1416f8340(local_d8[0]);
  lVar1 = DAT_146873ec8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_1410501ba;
  }
  lVar5 = lVar6;
LAB_1410501ba:
  if (*(int *)(lVar5 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,local_78);
    if (local_88 != 0) {
      plVar7 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar7 = local_98;
      }
      if (plVar7 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_c8[0])(lVar6);
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
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8);
    FUN_14208c4f0(param_1,local_c8);
  }
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
  return;
}



// FUNCTION 141050290 FUN_141050290 body=476 status=ok
// SIG undefined FUN_141050290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141050290(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
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
  local_d8[0] = 0xffffffff;
  uVar8 = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(local_d8);
    uVar8 = local_d8[0];
  }
  lVar6 = 0;
  local_d8[0] = 0xffffffff;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_144266c70;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = uVar8;
    uVar8 = 0xffffffff;
  }
  local_c8[0] = thunk_FUN_14102e2b0;
  FUN_1420849a0(param_1,local_78,local_c8);
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
  FUN_1416f8340(uVar8);
  FUN_1416f8340(local_d8[0]);
  lVar1 = DAT_146873ec8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_14105039a;
  }
  lVar5 = lVar6;
LAB_14105039a:
  if (*(int *)(lVar5 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,local_78);
    if (local_88 != 0) {
      plVar7 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar7 = local_98;
      }
      if (plVar7 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_c8[0])(lVar6);
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
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8);
    FUN_14208c4f0(param_1,local_c8);
  }
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
  return;
}



// FUNCTION 141050470 FUN_141050470 body=626 status=ok
// SIG undefined FUN_141050470(void)

void FUN_141050470(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  uVar5 = (**(code **)(*param_1 + 0x148))();
  plVar6 = (longlong *)FUN_140d3a420(uVar5);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x88))(plVar6,param_1 + 0x112);
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xdb);
  if (cVar4 != '\0') {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0xdb);
    lVar7 = FUN_14270bb10(uVar5);
    if (lVar7 != 0) {
      lVar7 = FUN_142547b50(lVar7,local_48);
      plVar6 = *(longlong **)(lVar7 + 0x10);
      lVar7 = *(longlong *)(lVar7 + 8);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_48[0] = &PTR_FUN_143f740c8;
      if (local_30 != 0) {
        FMemory::Free();
      }
      local_48[0] = &PTR_FUN_143f73d18;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_38 + 1;
        lVar8 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      if ((lVar7 != 0) &&
         (cVar4 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,lVar7), cVar4 != '\0')
         ) {
        lVar8 = FUN_142b45e90();
        uVar5 = *(undefined8 *)(lVar8 + 0x18);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        local_68 = lVar7;
        local_60 = plVar6;
        plVar9 = (longlong *)FUN_142b4a990(uVar5,local_58,&local_68);
        if (param_1 + 0xdc != plVar9) {
          param_1[0xdc] = *plVar9;
          *plVar9 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xdd,plVar9 + 1);
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_50 + 1;
          lVar7 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        plVar9 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_60 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_60)(local_60);
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
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar6 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
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
    }
  }
  if ((param_1[0xdc] != 0) && (*(char *)(param_1[0xdc] + 0x18) != '\0')) {
    FUN_141066f40(param_1);
    return;
  }
  FUN_1410622b0(param_1,7);
  return;
}



// FUNCTION 1410506f0 FUN_1410506f0 body=476 status=ok
// SIG undefined FUN_1410506f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410506f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
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
  local_d8[0] = 0xffffffff;
  uVar8 = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(local_d8);
    uVar8 = local_d8[0];
  }
  lVar6 = 0;
  local_d8[0] = 0xffffffff;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_144266c70;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = uVar8;
    uVar8 = 0xffffffff;
  }
  local_c8[0] = FUN_1410322d0;
  FUN_1420849a0(param_1,local_78,local_c8);
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
  FUN_1416f8340(uVar8);
  FUN_1416f8340(local_d8[0]);
  lVar1 = DAT_146873ec8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_1410507fa;
  }
  lVar5 = lVar6;
LAB_1410507fa:
  if (*(int *)(lVar5 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,local_78);
    if (local_88 != 0) {
      plVar7 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar7 = local_98;
      }
      if (plVar7 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_c8[0])(lVar6);
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
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8);
    FUN_14208c4f0(param_1,local_c8);
  }
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
  return;
}



// FUNCTION 1410508d0 FUN_1410508d0 body=2125 status=ok
// SIG undefined FUN_1410508d0(void)

void FUN_1410508d0(longlong param_1)

{
  int *piVar1;
  void *_Src;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  undefined4 *puVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 *local_150;
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
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x58c);
  pwVar10 = (wchar_t *)0x0;
  pwVar8 = pwVar10;
  if (lVar4 != 0) {
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
    if (bVar2) {
      pwVar8 = *(wchar_t **)(lVar4 + 0xc90);
    }
  }
  plVar13 = (longlong *)(param_1 + 0xc40);
  *(wchar_t **)(param_1 + 0xc88) = pwVar8;
  *(longlong **)(param_1 + 0x768) = plVar13;
  lVar4 = FUN_140eac060(param_1);
  if (lVar4 != 0) {
    uVar6 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar6);
    if ((plVar7 != (longlong *)0x0) &&
       (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7), plVar7 != (longlong *)0x0)) {
      if (plVar13 != plVar7) {
        iVar12 = (int)plVar7[1];
        _Src = (void *)*plVar7;
        *(int *)(param_1 + 0xc48) = iVar12;
        if ((iVar12 == 0) && (*(int *)(param_1 + 0xc4c) == 0)) {
          *(undefined4 *)(param_1 + 0xc4c) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar13,iVar12);
          _guard_xfg_dispatch_icall_nop((void *)*plVar13,_Src,(longlong)iVar12 << 3);
        }
      }
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar4 = *(longlong *)(DAT_146b33f38 + 0x58);
      if (lVar4 != 0) {
        plVar7 = *(longlong **)(lVar4 + 0x1098);
        pwVar8 = (wchar_t *)((longlong)*(int *)(lVar4 + 0x10a0) & 0x1fffffffffffffff);
        if (plVar7 + *(int *)(lVar4 + 0x10a0) < plVar7) {
          pwVar8 = pwVar10;
        }
        pwVar11 = pwVar10;
        if (pwVar8 != (wchar_t *)0x0) {
          do {
            lVar4 = *plVar7;
            if (lVar4 != 0) {
              iVar12 = *(int *)(lVar4 + 0x218);
              if (iVar12 != 0) {
                iVar3 = *(int *)(param_1 + 0xc48);
                if (*(int *)(param_1 + 0xc4c) < iVar3 + iVar12) {
                  TArray<void_*,FDefaultAllocator>::ResizeTo(plVar13);
                  iVar3 = *(int *)(param_1 + 0xc48);
                }
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*plVar13 + (longlong)iVar3 * 8),*(void **)(lVar4 + 0x210),
                           (longlong)iVar12 << 3);
                *(int *)(param_1 + 0xc48) = *(int *)(param_1 + 0xc48) + iVar12;
              }
            }
            plVar7 = plVar7 + 1;
            pwVar11 = (wchar_t *)((longlong)pwVar11 + 1);
          } while (pwVar11 != pwVar8);
        }
      }
    }
  }
  FUN_14100c510(param_1);
  local_138 = 0;
  local_130 = 0x27;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"playerEridiumCounter.insufficientFunds",0x4e);
  local_148 = (longlong *)0x0;
  local_140 = 0;
  local_res18 = 0;
  uVar6 = FUN_140e96f30(param_1,&local_138,0,6,&local_148);
  *(undefined8 *)(param_1 + 0xc68) = uVar6;
  plVar13 = local_148;
  for (iVar12 = (int)local_140; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free(local_148);
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc68) != 0) {
    local_118 = 0;
    local_110 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"innerText",0x14);
    local_128 = (longlong *)0x0;
    local_120 = 0;
    local_res20 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0xc68),param_1 + 0xc58,&local_118,0,6,&local_128);
    plVar13 = local_128;
    for (iVar12 = (int)local_120; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 2;
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free(local_128);
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
    local_f8 = 0;
    local_f0 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,L"innerTextShadow",0x20);
    local_108 = (longlong *)0x0;
    local_100 = 0;
    local_70 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0xc68),param_1 + 0xc60,&local_f8,0,6,&local_108);
    plVar13 = local_108;
    for (iVar12 = (int)local_100; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 2;
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free(local_108);
    }
    if (local_f8 != 0) {
      FMemory::Free();
    }
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_88,L"Insufficient Funds!",L"GFxQuickChangeMenuStore",L"VendingInsufficientFunds")
  ;
  plVar13 = *(longlong **)(param_1 + 0xc58);
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x2b0))(plVar13,local_88,1,0);
  }
  plVar13 = *(longlong **)(param_1 + 0xc60);
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x2b0))(plVar13,local_88,1,0);
  }
  *(undefined1 *)(param_1 + 0xb90) = 0;
  local_d8 = 0;
  local_d0 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"playerEridiumCounter",0x2a);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_68 = 0;
  uVar6 = FUN_140e96c90(param_1,&local_d8,0,6,&local_e8);
  *(undefined8 *)(param_1 + 0xc50) = uVar6;
  plVar13 = local_e8;
  for (iVar12 = (int)local_e0; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc50) != 0) {
    FUN_140f0b470(*(longlong *)(param_1 + 0xc50),0x43a78000);
  }
  local_b8 = 0;
  local_b0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"animCustoUnlocked",0x24);
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  local_60 = 0;
  uVar6 = FUN_14101f230(param_1,&local_b8,0,6,&local_c8);
  *(undefined8 *)(param_1 + 0xc78) = uVar6;
  plVar13 = local_c8;
  for (iVar12 = (int)local_c0; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  local_98 = 0;
  local_90 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"soldOut",0x10);
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  local_58 = 0;
  uVar6 = FUN_1410219f0(param_1,&local_98,0,6,&local_a8);
  *(undefined8 *)(param_1 + 0xc80) = uVar6;
  plVar13 = local_a8;
  for (iVar12 = (int)local_a0; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  if ((*(char *)(param_1 + 0xcb8) != '\0') && (*(longlong *)(param_1 + 0xc80) != 0)) {
    *(undefined1 *)(param_1 + 0xcb8) = 0;
    FUN_1410539c0();
  }
  pwVar8 = (wchar_t *)FWeakObjectPtr::Get(param_1 + 0x594);
  if (pwVar8 != (wchar_t *)0x0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_141050fa6;
  }
  pwVar8 = pwVar10;
LAB_141050fa6:
  *(wchar_t **)(param_1 + 0xc98) = pwVar8;
  if (pwVar8 != (wchar_t *)0x0) {
    uVar6 = (**(code **)(*(longlong *)(pwVar8 + 0x6c0) + 0x18))();
    *(undefined8 *)(param_1 + 0xc90) = uVar6;
  }
  if (*(longlong *)(param_1 + 0xc90) != 0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryQuantityChanged",L"::");
    while (pwVar11 = pwVar8, pwVar11 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
      pwVar10 = pwVar11;
    }
    FName::FName(&local_res10,pwVar10 + 2,1);
    lVar4 = *(longlong *)(param_1 + 0xc90);
    plVar13 = (longlong *)(lVar4 + 0x318);
    FWeakObjectPtr::operator=(&local_158,0);
    local_150 = (undefined8 *)0x0;
    FWeakObjectPtr::operator=(&local_158,param_1);
    local_150 = local_res10;
    if ((local_res10 != (undefined8 *)0x0) && (lVar5 = FWeakObjectPtr::Get(&local_158), lVar5 != 0))
    {
      UObject::FindFunction(lVar5,local_150);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
    iVar12 = *(int *)(lVar4 + 800);
    *(int *)(lVar4 + 800) = iVar12 + 1;
    if (*(int *)(lVar4 + 0x324) < iVar12 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar12);
    }
    puVar9 = (undefined4 *)((longlong)iVar12 * 0x10 + *plVar13);
    *puVar9 = local_158;
    puVar9[1] = local_154;
    *(undefined8 **)(puVar9 + 2) = local_150;
  }
  FUN_141064c80(param_1,1);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_80 + 1;
    lVar4 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 141051120 FUN_141051120 body=398 status=ok
// SIG undefined FUN_141051120(void)

void FUN_141051120(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  FUN_142ecbc80();
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar1 = FUN_140ac4770(param_1,param_1 + 0x690,0,6,&local_48);
  *(undefined8 *)(param_1 + 0x6b8) = uVar1;
  plVar4 = local_48;
  for (iVar3 = (int)local_40; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  local_38 = 0;
  local_30 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"wheel",0xc);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  lVar2 = FUN_140e96f30(param_1,&local_38,0,6,&local_48);
  plVar4 = local_48;
  for (iVar3 = (int)local_40; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (lVar2 != 0) {
    local_28 = 0;
    local_20 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"show",10);
    FUN_142088910(lVar2,&local_28);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  FUN_14105d490(param_1,*(undefined8 *)(param_1 + 0x6f0));
  return;
}



// FUNCTION 1410512b0 FUN_1410512b0 body=112 status=ok
// SIG undefined FUN_1410512b0(void)

void FUN_1410512b0(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (((DAT_146b17150 == 0) || (*(longlong *)(DAT_146b17150 + 0x7b0) == 0)) ||
     (*(char *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 500) = uVar2;
  FUN_142ecbc30();
  lVar1 = param_1[0xf0];
  (**(code **)(*param_1 + 0x5d0))(param_1);
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x580))(param_1,1);
  }
  return;
}



// FUNCTION 141051320 FUN_141051320 body=322 status=ok
// SIG undefined FUN_141051320(void)

void FUN_141051320(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_1410e1fa0();
  uVar4 = FUN_1410cb7c0(param_1);
  FWeakObjectPtr::operator=(param_1 + 0x6d8,uVar4);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x6d8);
  if ((cVar2 != '\0') && (lVar5 = FWeakObjectPtr::Get(param_1 + 0x5d4), lVar5 != 0)) {
    lVar6 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = *(undefined1 *)(lVar5 + 0xd88);
      goto LAB_1410513aa;
    }
  }
  uVar3 = 0;
LAB_1410513aa:
  *(undefined1 *)(param_1 + 0x8c8) = uVar3;
  local_18 = 0;
  local_10 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"controllingUser",0x20);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar4 = FUN_140ac4770(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x6d0) = uVar4;
  plVar7 = local_28;
  for (iVar8 = (int)local_20; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141051470 FUN_141051470 body=72 status=ok
// SIG undefined FUN_141051470(void)

void FUN_141051470(longlong *param_1)

{
  char cVar1;
  
  thunk_FUN_142ecbc80();
  cVar1 = (**(code **)(*param_1 + 0x3f8))(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xd6) = 1;
    return;
  }
  FUN_14103b5a0(param_1);
  FUN_14103c0c0(param_1);
  FUN_14103c060(param_1);
  return;
}



// FUNCTION 1410514e0 FUN_1410514e0 body=27 status=ok
// SIG undefined FUN_1410514e0(void)

void FUN_1410514e0(undefined8 param_1)

{
  FUN_141031120();
  FUN_141058200(param_1);
  return;
}



// FUNCTION 141051500 FUN_141051500 body=180 status=ok
// SIG undefined FUN_141051500(void)

void FUN_141051500(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    FUN_142ed55e0(param_2,param_3,1);
    lVar4 = FUN_141398ff0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar1 = *(int *)(param_2 + 0x428);
      if (iVar1 == 1) {
        cVar3 = FUN_14103f670(*(undefined8 *)(param_1 + 0x200));
      }
      else if (iVar1 == 2) {
        cVar3 = FUN_14103ec10(param_1);
      }
      else {
        if (iVar1 != 3) {
          return;
        }
        cVar3 = FUN_14103f8b0(*(undefined8 *)(param_1 + 0x208));
      }
      FUN_142ed2820(param_2,cVar3 != '\0',1);
    }
  }
  return;
}



// FUNCTION 1410515e0 FUN_1410515e0 body=864 status=ok
// SIG undefined FUN_1410515e0(void)

void FUN_1410515e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  bVar12 = false;
  bVar5 = false;
  lVar11 = param_1 + 0x184;
  *(undefined1 *)(param_1 + 0x1f1) = 0;
  cVar6 = FWeakObjectPtr::IsValid(lVar11);
  if (cVar6 != '\0') {
    lVar9 = FWeakObjectPtr::Get(lVar11);
    LOCK();
    *(undefined4 *)(lVar9 + 0x588) = 1;
    UNLOCK();
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x170);
    uVar7 = FUN_141032650(param_1);
    (**(code **)(lVar9 + 0x38))(*(longlong *)(param_1 + 0x218) + 0x170,uVar7);
  }
  if (param_2 == 0) {
    return;
  }
  lVar9 = FUN_141398ff0();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
      != lVar9 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  if (*(int *)(param_2 + 0x428) == 1) {
    if (*(longlong *)(param_1 + 0x200) == 0) {
      return;
    }
    cVar6 = FUN_14103f670();
    if (cVar6 == '\0') {
      bVar12 = true;
      uVar10 = FUN_142eb8880(*(longlong *)(param_1 + 0x200) + 0x308,local_48);
      cVar6 = FText::IsEmpty(uVar10);
      if (cVar6 == '\0') {
        lVar11 = FWeakObjectPtr::Get(lVar11);
        FUN_14105bdc0(*(undefined8 *)(param_1 + 0x200),lVar11 + 0x7a0);
        goto LAB_1410518ed;
      }
    }
    lVar11 = FWeakObjectPtr::Get(lVar11);
    FUN_14105bca0(*(undefined8 *)(param_1 + 0x200),lVar11 + 0x710);
LAB_1410518ed:
    if (!bVar12) {
      return;
    }
    if (local_40 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = local_40 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 != 1) {
      return;
    }
    (**(code **)*local_40)(local_40);
    LOCK();
    piVar2 = (int *)((longlong)local_40 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*local_40 + 8))(local_40,1);
    return;
  }
  if (1 < *(int *)(param_2 + 0x428) - 2U) {
    return;
  }
  cVar6 = FUN_14103f8b0(*(undefined8 *)(param_1 + 0x208));
  cVar8 = FUN_14103ec10(param_1);
  if (*(longlong *)(param_1 + 0x208) != 0) {
    if (cVar6 == '\0') {
      bVar5 = true;
      uVar10 = FUN_142eb8880(*(longlong *)(param_1 + 0x208) + 0x308,local_78);
      cVar6 = FText::IsEmpty(uVar10);
      if (cVar6 != '\0') goto LAB_14105173a;
      lVar9 = FWeakObjectPtr::Get(lVar11);
      FUN_14105bdc0(*(undefined8 *)(param_1 + 0x208),lVar9 + 0x770);
    }
    else {
LAB_14105173a:
      lVar9 = FWeakObjectPtr::Get(lVar11);
      FUN_14105bca0(*(undefined8 *)(param_1 + 0x208),lVar9 + 0x740);
    }
    if ((bVar5) && (local_70 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  bVar5 = false;
  if (*(longlong *)(param_1 + 0x210) == 0) {
    return;
  }
  if (cVar8 == '\0') {
    bVar5 = true;
    uVar10 = FUN_142eb8880(*(longlong *)(param_1 + 0x210) + 0x308,local_60);
    cVar6 = FText::IsEmpty(uVar10);
    if (cVar6 == '\0') {
      lVar11 = FWeakObjectPtr::Get(lVar11);
      FUN_14105bdc0(*(undefined8 *)(param_1 + 0x210),lVar11 + 0x7b8);
      goto LAB_141051803;
    }
  }
  lVar11 = FWeakObjectPtr::Get(lVar11);
  FUN_14105bca0(*(undefined8 *)(param_1 + 0x210),lVar11 + 0x758);
LAB_141051803:
  if ((bVar5) && (local_58 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if (*(int *)(param_2 + 0x428) == 3) {
    FUN_142ed2820(*(undefined8 *)(param_1 + 0x210),cVar8 != '\0',1);
  }
  return;
}



// FUNCTION 141051940 FUN_141051940 body=314 status=ok
// SIG undefined FUN_141051940(void)

void FUN_141051940(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined1 local_28 [8];
  longlong *local_20;
  
  bVar10 = false;
  lVar2 = param_1 + 0x184;
  *(undefined1 *)(param_1 + 0x1f1) = 0;
  cVar4 = FWeakObjectPtr::IsValid(lVar2);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(lVar2);
    LOCK();
    *(undefined4 *)(lVar6 + 0x588) = 1;
    UNLOCK();
  }
  cVar4 = FUN_14103f670(*(undefined8 *)(param_1 + 0x1f8));
  if (*(longlong *)(param_1 + 0x208) != 0) {
    cVar5 = FWeakObjectPtr::IsValid(lVar2);
    if ((cVar5 == '\0') || (cVar4 == '\0')) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x208) + 0x170);
    (**(code **)(*plVar8 + 0x38))(plVar8,uVar7);
  }
  if (*(longlong *)(param_1 + 0x200) == 0) {
    return;
  }
  if ((cVar4 == '\0') && (*(longlong *)(param_1 + 0x1f8) != 0)) {
    bVar10 = true;
    uVar7 = FUN_142eb8880(*(longlong *)(param_1 + 0x1f8) + 0x308,local_28);
    cVar4 = FText::IsEmpty(uVar7);
    if (cVar4 == '\0') {
      uVar9 = 1;
      goto LAB_141051a14;
    }
  }
  uVar9 = 0;
LAB_141051a14:
  if ((bVar10) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_20 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x278))(*(longlong **)(param_1 + 0x200),uVar9);
  return;
}



// FUNCTION 141051a80 FUN_141051a80 body=136 status=ok
// SIG undefined FUN_141051a80(void)

void FUN_141051a80(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(undefined1 *)(param_1 + 0x1f1) = 0;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x184);
    LOCK();
    *(undefined4 *)(lVar2 + 0x588) = 1;
    UNLOCK();
  }
  cVar1 = FUN_141032980(param_1);
  if (*(longlong *)(param_1 + 0x238) != 0) {
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x238) + 0x170);
    (**(code **)(*plVar3 + 0x38))(plVar3,cVar1);
  }
  plVar3 = *(longlong **)(param_1 + 0x210);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x278))(plVar3,cVar1 == '\0');
  }
  return;
}



// FUNCTION 141051b10 FUN_141051b10 body=617 status=ok
// SIG undefined FUN_141051b10(void)

void FUN_141051b10(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  lVar10 = 0;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  cVar9 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar9 == '\0') {
    plVar11 = &local_68;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  else {
    lVar10 = FWeakObjectPtr::Get(param_1 + 0x184);
    local_70 = *(longlong **)(lVar10 + 0x6e8);
    lVar10 = *(longlong *)(lVar10 + 0x6e0);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    plVar11 = &local_78;
    bVar7 = true;
    bVar6 = false;
    local_78 = lVar10;
  }
  plVar5 = (longlong *)plVar11[1];
  plVar11[1] = 0;
  *plVar11 = 0;
  plVar11 = plStack_60;
  if (bVar6) {
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
  }
  plVar11 = local_70;
  if ((bVar7) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  cVar9 = FUN_142088620(*(undefined8 *)(param_1 + 0x230));
  if (((cVar9 != '\0') && (lVar10 != 0)) && (fVar4 = *(float *)(param_1 + 0x240), 0.0 < fVar4)) {
    param_2 = fVar4 - param_2;
    *(float *)(param_1 + 0x240) = param_2;
    if (param_2 <= 0.0) {
      lVar10 = FWeakObjectPtr::Get(param_1 + 0x184);
      FUN_142b6fa90(*(undefined8 *)(lVar10 + 0x6e0));
      param_2 = *(float *)(param_1 + 0x240);
    }
    if ((int)param_2 != (int)fVar4) {
      lVar10 = **(longlong **)(param_1 + 0x230);
      uVar12 = FUN_141036060(param_1,local_58);
      (**(code **)(lVar10 + 0x2b0))(*(undefined8 *)(param_1 + 0x230),uVar12,1,0);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_50 + 1;
        lVar10 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar5 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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



// FUNCTION 141051d80 FUN_141051d80 body=426 status=ok
// SIG undefined FUN_141051d80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141051d80(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78 [4];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_142ecc510();
  cVar2 = *(char *)(param_1 + 0x2d4);
  if (cVar2 == '\x01') {
    FUN_141037870(param_1);
  }
  else if (cVar2 == '\x03') {
    plVar6 = *(longlong **)(param_1 + 0x38);
    if (plVar6 != (longlong *)0x0) {
      lVar4 = FUN_14139c4f0();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (cVar2 = (**(code **)(*plVar6 + 0x3f8))(plVar6), cVar2 != '\0')) {
        FUN_141031aa0(param_1);
      }
    }
  }
  else if (cVar2 == '\x04') {
    local_78[0] = 0xffffffff;
    uVar5 = 0xffffffff;
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      FUN_14170c210(local_78);
      uVar5 = local_78[0];
    }
    local_78[0] = 0xffffffff;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1444f8758;
      *(undefined4 *)(puVar3 + 1) = uVar5;
      uVar5 = 0xffffffff;
    }
    local_68[0] = FUN_140faef10;
    FUN_14208c9c0(param_1,local_68);
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
    FUN_1416f8340(uVar5);
    FUN_1416f8340(local_78[0]);
    FUN_14105b230(param_1);
    FUN_142f10940(param_1,0);
  }
  return;
}



// FUNCTION 141051f30 FUN_141051f30 body=556 status=ok
// SIG undefined FUN_141051f30(void)

ulonglong FUN_141051f30(longlong *param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  undefined8 local_28;
  undefined8 local_20;
  
  FUN_14109d980();
  uVar5 = (**(code **)(*param_1 + 0x3f8))(param_1);
  if ((char)uVar5 == '\0') {
    LOCK();
    bVar8 = *(int *)((longlong)param_1 + 0xefc) == 0;
    if (bVar8) {
      *(int *)((longlong)param_1 + 0xefc) = 0;
    }
    UNLOCK();
    if (bVar8) {
      lVar6 = param_1[0xd8];
      lVar7 = (longlong)(int)param_1[0xd9] * 0x40 + lVar6;
      bVar8 = true;
      for (; lVar6 != lVar7; lVar6 = lVar6 + 0x40) {
        lVar4 = *(longlong *)(lVar6 + 0x10);
        if (lVar4 == 0) {
LAB_141051fc1:
          bVar8 = false;
        }
        else if (*(char *)(lVar6 + 0x28) != '\x02') {
          if ((lVar4 != 0) && (*(char *)(lVar4 + 0x2d4) == '\x04')) {
            *(undefined1 *)(lVar6 + 0x28) = 2;
          }
          goto LAB_141051fc1;
        }
      }
      LOCK();
      bVar9 = *(int *)((longlong)param_1 + 0xefc) == 0;
      if (bVar9) {
        *(int *)((longlong)param_1 + 0xefc) = 0;
      }
      UNLOCK();
      if ((bVar9) && (bVar8)) {
        LOCK();
        *(undefined4 *)(param_1 + 0x1db) = 1;
        UNLOCK();
        lVar6 = param_1[0xd8];
        lVar7 = (longlong)(int)param_1[0xd9] * 0x40 + lVar6;
        for (; lVar6 != lVar7; lVar6 = lVar6 + 0x40) {
          if (*(longlong *)(lVar6 + 0x10) != 0) {
            FUN_141032eb0();
          }
        }
      }
      LOCK();
      *(uint *)((longlong)param_1 + 0xefc) = (uint)bVar8;
      UNLOCK();
    }
    bVar3 = *(byte *)(param_1 + 0xd6);
    uVar5 = (ulonglong)bVar3;
    if (bVar3 == 4) {
      uVar5 = FUN_14103c3f0(param_1);
    }
    else if (bVar3 == 7) {
      if ((0.0 < *(float *)((longlong)param_1 + 0xecc)) &&
         (param_2 = *(float *)((longlong)param_1 + 0xecc) - param_2,
         *(float *)((longlong)param_1 + 0xecc) = param_2, param_2 <= 0.0)) {
        local_28 = 0;
        local_20 = 0;
        (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x12a],&local_28);
        *(undefined4 *)((longlong)param_1 + 0xecc) = 0xbf800000;
      }
      LOCK();
      lVar6 = param_1[0x1dc];
      *(int *)(param_1 + 0x1dc) = 0;
      UNLOCK();
      if ((int)lVar6 != 0) {
        FUN_141067050(param_1);
      }
      LOCK();
      iVar1 = *(int *)((longlong)param_1 + 0xed4);
      *(int *)((longlong)param_1 + 0xed4) = 0;
      UNLOCK();
      if (iVar1 != 0) {
        FUN_1410582c0(param_1);
      }
      LOCK();
      lVar6 = param_1[0x1df];
      *(int *)(param_1 + 0x1df) = 0;
      UNLOCK();
      if ((int)lVar6 != 0) {
        FUN_141056e20(param_1);
      }
      uVar5 = 0;
      LOCK();
      uVar2 = *(uint *)((longlong)param_1 + 0xefc);
      if (uVar2 == 0) {
        *(uint *)((longlong)param_1 + 0xefc) = 0;
      }
      else {
        uVar5 = (ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar2 != 0) {
        LOCK();
        uVar2 = *(uint *)(param_1 + 0x1db);
        *(uint *)(param_1 + 0x1db) = 0;
        uVar5 = (ulonglong)uVar2;
        UNLOCK();
        if (uVar2 != 0) {
          lVar6 = param_1[0xd8];
          lVar7 = (longlong)(int)param_1[0xd9] * 0x40 + lVar6;
          for (; lVar6 != lVar7; lVar6 = lVar6 + 0x40) {
            uVar5 = FUN_141057960(*(undefined8 *)(lVar6 + 0x10),param_1[0xda]);
          }
        }
      }
      if (param_1[0x179] != 0) {
        LOCK();
        iVar1 = *(int *)((longlong)param_1 + 0xedc);
        *(int *)((longlong)param_1 + 0xedc) = 0;
        UNLOCK();
        if (iVar1 != 0) {
          uVar5 = FUN_140fd5570(param_1[0x179]);
        }
      }
    }
  }
  return uVar5;
}



// FUNCTION 141052160 FUN_141052160 body=225 status=ok
// SIG undefined FUN_141052160(void)

void FUN_141052160(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  FUN_142ecd1d0();
  LOCK();
  iVar1 = *(int *)((longlong)param_1 + 0x674);
  *(int *)((longlong)param_1 + 0x674) = 0;
  UNLOCK();
  if (iVar1 != 0) {
    FUN_141064060(param_1);
  }
  LOCK();
  lVar4 = param_1[0xcf];
  *(int *)(param_1 + 0xcf) = 0;
  UNLOCK();
  if ((int)lVar4 == 0) {
    return;
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0xbb);
  if (lVar4 != 0) {
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
    if (bVar2) goto LAB_1410521e3;
  }
  lVar4 = 0;
LAB_1410521e3:
  if ((*(char *)((longlong)param_1 + 0x672) == '\0') &&
     (((*(char *)((longlong)param_1 + 0x671) == '\0' || (lVar4 == 0)) ||
      (cVar3 = FUN_142dd3d20(lVar4), cVar3 == '\0')))) {
    lVar4 = *param_1;
    uVar6 = 0;
    if ((*(byte *)(param_1 + 0xce) & 0xfd) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141052221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x578))();
      return;
    }
  }
  else {
    lVar4 = *param_1;
    uVar6 = 1;
  }
  (**(code **)(lVar4 + 0x580))(param_1,uVar6);
  return;
}



// FUNCTION 141052250 FUN_141052250 body=86 status=ok
// SIG undefined FUN_141052250(void)

void FUN_141052250(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)param_1[0xe2];
  if (cVar1 != *(char *)((longlong)param_1 + 0x711)) {
    *(char *)((longlong)param_1 + 0x711) = cVar1;
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x580))(param_1,1);
    }
    else {
      (**(code **)(*param_1 + 0x578))(param_1,0);
    }
  }
  FUN_142ecd1d0(param_1,param_2);
  return;
}



// FUNCTION 141052330 FUN_141052330 body=106 status=ok
// SIG undefined FUN_141052330(void)

void FUN_141052330(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x638);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1a8) != 0)) {
    cVar2 = FOpenXRHMD::IsStereoEnabled();
    if (cVar2 != '\0') {
      FUN_1410649c0(lVar1);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x640);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1a8) != 0)) {
    cVar2 = FOpenXRHMD::IsStereoEnabled();
    if (cVar2 != '\0') {
      FUN_1410649c0(lVar1);
    }
  }
  return;
}



// FUNCTION 1410523a0 FUN_1410523a0 body=113 status=ok
// SIG undefined FUN_1410523a0(void)

void FUN_1410523a0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_1413989b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x428,param_2);
    }
  }
  FUN_1410638d0(param_1,0,0);
  return;
}



// FUNCTION 141052420 FUN_141052420 body=102 status=ok
// SIG undefined FUN_141052420(void)

void FUN_141052420(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_1413989b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x448,param_2);
    }
  }
  return;
}



// FUNCTION 141052490 FUN_141052490 body=437 status=ok
// SIG undefined FUN_141052490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141052490(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
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
  lVar6 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = thunk_FUN_14102e450;
  FUN_1420849a0(param_1,local_68,local_b8);
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
  lVar1 = DAT_146873ec8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_14105256d;
  }
  lVar5 = lVar6;
LAB_14105256d:
  if (*(int *)(lVar5 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
    if (local_78 != 0) {
      plVar7 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_b8[0])(lVar6);
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
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8);
    FUN_14208c4f0(param_1,local_b8);
  }
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
  return;
}



// FUNCTION 141052650 FUN_141052650 body=86 status=ok
// SIG undefined FUN_141052650(void)

void FUN_141052650(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x430) != 0) && (*(longlong **)(param_1 + 0x428) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x428) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x430) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x428);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,0);
    }
  }
  FUN_1410638d0(param_1,0,0);
  return;
}



// FUNCTION 1410526b0 FUN_1410526b0 body=878 status=ok
// SIG undefined FUN_1410526b0(void)

void FUN_1410526b0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong local_a8 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  longlong local_38;
  undefined4 local_30;
  
  if (*(longlong *)(param_1 + 0xbc8) == 0) goto LAB_141052a0b;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
  lVar2 = *(longlong *)(param_1 + 0xbe0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
  cVar5 = FUN_140fb3d70(*(undefined8 *)(param_1 + 0xbc8),param_1 + 0x9c8);
  if (cVar5 == '\0') {
    cVar5 = FUN_140fb3d70(*(undefined8 *)(param_1 + 0xbc8),param_1 + 0x9a0);
    if (((cVar5 != '\0') &&
        (iVar7 = FUN_1406ab3e0(*(undefined8 *)(param_1 + 0xbc8)), iVar7 == *(int *)(param_1 + 0x9c4)
        )) && (lVar2 != 0)) {
      uVar6 = FUN_141037600(param_1,lVar2);
      FUN_141064ec0(lVar2,uVar6);
      uVar9 = FUN_141039660(param_1,local_88,lVar2);
      FUN_14105abf0(param_1 + 0x6e0,uVar9);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_80 + 1;
        lVar2 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
    goto LAB_141052a0b;
  }
  iVar7 = FUN_1406ab3e0();
  if (iVar7 == *(int *)(param_1 + 0x9b0)) {
    if (*(longlong *)(param_1 + 0xa00) != 0) {
      local_a8[1] = 10;
      local_a8[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
      FGenericPlatformString::Memcpy(local_a8[0],L"tutorial2",0x14);
      FUN_142088910(*(undefined8 *)(param_1 + 0xa00),local_a8);
      if (local_a8[0] != 0) {
        FMemory::Free();
      }
    }
  }
  else {
    if (iVar7 == *(int *)(param_1 + 0x9b8)) {
      puVar10 = *(undefined8 **)(param_1 + 0x6c0);
      puVar11 = puVar10 + (longlong)*(int *)(param_1 + 0x6c8) * 8;
      for (; puVar10 != puVar11; puVar10 = puVar10 + 8) {
        local_68 = *puVar10;
        local_58 = puVar10[2];
        local_60 = puVar10[1];
        local_50 = puVar10[3];
        local_48 = puVar10[4];
        local_40 = *(undefined1 *)(puVar10 + 5);
        local_3f = *(undefined1 *)((longlong)puVar10 + 0x29);
        local_38 = 0;
        local_30 = 0;
        if (((puVar10 + 6 != &local_38) && (*(int *)(puVar10 + 7) != 0)) &&
           (plVar3 = (longlong *)puVar10[6], plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_38);
        }
        if (local_58 != 0) {
          FUN_14105c2c0(local_58,1);
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
      }
      if (*(longlong *)(param_1 + 0xa00) != 0) {
        local_a8[2] = 0;
        local_a8[3] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
        FGenericPlatformString::Memcpy(local_a8[2],L"tutorial3",0x14);
        FUN_142088910(*(undefined8 *)(param_1 + 0xa00),local_a8 + 2);
        if (local_a8[2] != 0) {
          FMemory::Free();
        }
      }
LAB_141052919:
      if (lVar2 != 0) {
        uVar6 = FUN_141037600(param_1,lVar2);
        FUN_141064ec0(lVar2,uVar6);
      }
    }
    else {
      if (iVar7 != *(int *)(param_1 + 0x9bc)) {
        if (iVar7 != *(int *)(param_1 + 0x9c0)) goto LAB_14105293d;
        goto LAB_141052919;
      }
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x6c0) + 0x10);
      if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x2e0) != 0)) &&
         (iVar8 = FUN_141035dd0(*(longlong *)(lVar4 + 0x2e0),lVar2), iVar8 != -1)) {
        FUN_141035ee0(lVar4,iVar8,0);
      }
    }
    LOCK();
    *(undefined4 *)(param_1 + 0xee0) = 1;
    UNLOCK();
  }
LAB_14105293d:
  *(bool *)(param_1 + 0x6be) = iVar7 < *(int *)(param_1 + 0x9b8);
LAB_141052a0b:
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return;
}



// FUNCTION 141052a20 FUN_141052a20 body=475 status=ok
// SIG undefined FUN_141052a20(void)

void FUN_141052a20(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 local_28 [8];
  longlong *local_20;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  FUN_141053470();
  if ((*(longlong *)(param_1 + 0xbc8) == 0) || (cVar4 = FUN_140cb6290(), cVar4 == '\0')) {
    if (*(char *)(param_1 + 0x6be) != '\0') {
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
      lVar8 = *(longlong *)(param_1 + 0x6c0);
      lVar3 = *(longlong *)(lVar8 + 0x10);
      if (lVar3 != 0) {
        FUN_14105c2c0(lVar3,1);
        *(undefined1 *)(lVar3 + 0x414) = 1;
        lVar8 = *(longlong *)(lVar8 + 0x10);
        lVar3 = *(longlong *)(lVar8 + 0x2e0);
        if (lVar3 != 0) {
          cVar4 = FUN_14105a570(lVar3,0,0,1);
          if (cVar4 == '\0') {
            FUN_14105a570(*(undefined8 *)(lVar8 + 0x2e0),0,0,1);
          }
        }
      }
      iVar7 = 1;
      if (1 < *(int *)(param_1 + 0x6c8)) {
        lVar8 = 0x40;
        do {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x6c0) + 0x10 + lVar8);
          if (lVar3 != 0) {
            FUN_14105c2c0(lVar3,0);
            *(undefined1 *)(lVar3 + 0x414) = 0;
          }
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 0x40;
        } while (iVar7 < *(int *)(param_1 + 0x6c8));
      }
      *(undefined1 *)(param_1 + 0x6be) = 0;
    }
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
    lVar8 = *(longlong *)(param_1 + 0xbe0);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
    if (lVar8 != 0) {
      uVar5 = FUN_141037600(param_1,lVar8);
      FUN_141064ec0(lVar8,uVar5);
      uVar6 = FUN_141039660(param_1,local_28);
      if ((*(longlong *)(param_1 + 0x7e8) != 0) && (*(longlong *)(param_1 + 0x7f0) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x7f0) + 8);
        LOCK();
        iVar7 = *piVar1;
        if (iVar7 == 0) {
          *piVar1 = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (0 < iVar7) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x7e0,uVar6,1,0);
        }
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141052c00 FUN_141052c00 body=375 status=ok
// SIG undefined FUN_141052c00(void)

void FUN_141052c00(longlong param_1,longlong param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 0x630) != 0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::UpdateCachedAmmoComponent",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x630) + 0x510,param_1,local_res8);
  }
  *(longlong *)(param_1 + 0x630) = param_2;
  if (param_2 == 0) goto LAB_141052d65;
  pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::UpdateCachedAmmoComponent",L"::");
  pwVar3 = (wchar_t *)0x0;
  while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar3 = pwVar2;
  }
  FName::FName(&local_res8,pwVar3 + 2,1);
  FUN_14074ba20(*(longlong *)(param_1 + 0x630) + 0x510,param_1,FUN_141063ea0,local_res8);
  uVar5 = UMovieSceneAudioSection::GetPrivateStaticClass();
  lVar6 = AGameStateBase::OnRep_GameModeClass(*(undefined8 *)(param_1 + 0x630),uVar5);
  if (lVar6 == 0) {
LAB_141052d5c:
    lVar6 = 0;
  }
  else {
    lVar7 = UMovieSceneAudioSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141052d5c;
  }
  *(longlong *)(param_1 + 0x638) = lVar6;
LAB_141052d65:
  FUN_141063ea0(param_1);
  return;
}



// FUNCTION 141052d80 FUN_141052d80 body=1607 status=ok
// SIG undefined FUN_141052d80(void)

void FUN_141052d80(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *plStack_120;
  longlong *local_118;
  longlong *plStack_110;
  longlong *local_108;
  longlong *plStack_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [16];
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong *plStack_90;
  undefined **local_88 [2];
  longlong *local_78;
  longlong local_70;
  longlong *local_60;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 400), lVar5 != 0)) {
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
    if ((bVar3) && (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xd2), cVar4 != '\0')) {
      uVar7 = FWeakObjectPtr::Get(param_1 + 0xd2);
      lVar6 = FUN_14270bb10(uVar7);
      if (lVar6 != 0) {
        lVar8 = FUN_141432660();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_res8[0] = 0xffffffff;
          FUN_14170c210(local_res8,param_1);
          uVar13 = local_res8[0];
          local_res10 = local_res8[0];
          local_res8[0] = 0xffffffff;
          plVar9 = (longlong *)FMemory::Realloc(0,0x20,0);
          local_60 = plVar9;
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = (longlong)&PTR_GetPoolName_14467a400;
            *(undefined4 *)(plVar9 + 1) = uVar13;
            uVar13 = 0xffffffff;
            local_res10 = 0xffffffff;
            lVar8 = FDelegateHandle::GenerateNewID();
            plVar9[2] = lVar8;
            *plVar9 = (longlong)&PTR_GetPoolName_14467a448;
          }
          lVar8 = 0;
          if (plVar9 != (longlong *)0x0) {
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar6 + 0x1c8,1);
            plVar10 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,local_d8);
            local_res18[0] = *(int *)(lVar6 + 0x1d0);
            lVar8 = *plVar10;
            *(int *)(lVar6 + 0x1d0) = local_res18[0] + 1;
            if (*(int *)(lVar6 + 0x1d4) < local_res18[0] + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
            }
            lVar12 = *(longlong *)(lVar6 + 0x1c8);
            lVar11 = (longlong)local_res18[0];
            *(undefined8 *)(lVar12 + lVar11 * 0x10) = 0;
            *(longlong **)(lVar12 + lVar11 * 0x10) = plVar9;
            *(undefined4 *)(lVar12 + 8 + lVar11 * 0x10) = 2;
          }
          param_1[0xd1] = lVar8;
          FUN_1416f8340(uVar13);
          FUN_1416f8340(local_res8[0]);
          lVar8 = FWeakObjectPtr::Get(param_1 + 0xd0);
          if (lVar8 != 0) {
            lVar12 = UInputKeySelector::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              uVar7 = FWeakObjectPtr::Get(param_1 + 0xd2);
              uVar7 = FUN_14270bb10(uVar7);
              lVar12 = FUN_142547b50(uVar7,local_88);
              local_138 = *(undefined8 *)(lVar12 + 8);
              local_130 = *(longlong **)(lVar12 + 0x10);
              if (local_130 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_130 + 1) = (int)local_130[1] + 1;
                UNLOCK();
              }
              local_88[0] = &PTR_FUN_143f740c8;
              if (local_70 != 0) {
                FMemory::Free();
              }
              local_88[0] = &PTR_FUN_143f73d18;
              if (local_78 != (longlong *)0x0) {
                LOCK();
                plVar9 = local_78 + 1;
                lVar12 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar12 == 1) {
                  (**(code **)*local_78)(local_78);
                  LOCK();
                  piVar1 = (int *)((longlong)local_78 + 0xc);
                  iVar2 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar2 == 1) {
                    (**(code **)(*local_78 + 8))(local_78,1);
                  }
                }
              }
              if (*(int *)(lVar8 + 0x6f0) == 1) {
                plStack_f0 = (longlong *)operator_new(0x130);
                if (plStack_f0 == (longlong *)0x0) {
                  plStack_f0 = (longlong *)0x0;
                }
                else {
                  *(undefined4 *)(plStack_f0 + 1) = 1;
                  *(undefined4 *)((longlong)plStack_f0 + 0xc) = 1;
                  *plStack_f0 = (longlong)&PTR_FUN_14467a278;
                  FWeakObjectPtr::operator=(local_e0,lVar5);
                  FUN_140ddbf50(plStack_f0 + 2,local_e0,1,&local_138);
                }
                local_f8 = plStack_f0 + 2;
                SharedPointerInternals::EnableSharedFromThis(&local_f8,local_f8,local_f8);
                local_98 = local_f8;
                plStack_90 = plStack_f0;
                if (plStack_f0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
                  UNLOCK();
                }
                FUN_140e57f40(lVar6,&local_98);
                plVar9 = plStack_f0;
              }
              else if (*(int *)(lVar8 + 0x6f0) == 2) {
                plStack_100 = (longlong *)operator_new(0x130);
                if (plStack_100 == (longlong *)0x0) {
                  plStack_100 = (longlong *)0x0;
                }
                else {
                  *(undefined4 *)(plStack_100 + 1) = 1;
                  *(undefined4 *)((longlong)plStack_100 + 0xc) = 1;
                  *plStack_100 = (longlong)&PTR_FUN_14467a278;
                  FWeakObjectPtr::operator=(local_e8,lVar5);
                  FUN_140ddbf50(plStack_100 + 2,local_e8,0,&local_138);
                }
                local_108 = plStack_100 + 2;
                SharedPointerInternals::EnableSharedFromThis(&local_108,local_108,local_108);
                local_a8 = local_108;
                plStack_a0 = plStack_100;
                if (plStack_100 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
                  UNLOCK();
                }
                FUN_140e57f40(lVar6,&local_a8);
                plVar9 = plStack_100;
              }
              else if ((param_1[0xd3] == 0) || (cVar4 = FUN_142b54800(), cVar4 == '\0')) {
                plStack_110 = (longlong *)operator_new(0x78);
                if (plStack_110 == (longlong *)0x0) {
                  plStack_110 = (longlong *)0x0;
                }
                else {
                  *(undefined4 *)(plStack_110 + 1) = 1;
                  *(undefined4 *)((longlong)plStack_110 + 0xc) = 1;
                  *plStack_110 = (longlong)&PTR_FUN_144599748;
                  FWeakObjectPtr::operator=(local_res20,lVar5);
                  FUN_140e13750(plStack_110 + 2,local_res20,&local_138);
                }
                local_118 = plStack_110 + 2;
                SharedPointerInternals::EnableSharedFromThis(&local_118,local_118,local_118);
                local_b8 = local_118;
                plStack_b0 = plStack_110;
                if (plStack_110 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
                  UNLOCK();
                }
                FUN_140e57f40(lVar6,&local_b8);
                plVar9 = plStack_110;
              }
              else {
                plStack_120 = (longlong *)operator_new(0x120);
                if (plStack_120 == (longlong *)0x0) {
                  plStack_120 = (longlong *)0x0;
                }
                else {
                  *(undefined4 *)(plStack_120 + 1) = 1;
                  *(undefined4 *)((longlong)plStack_120 + 0xc) = 1;
                  *plStack_120 = (longlong)&PTR_FUN_14467a288;
                  FWeakObjectPtr::operator=(local_res18,lVar5);
                  FUN_140e13450(plStack_120 + 2,local_res18,&local_138);
                }
                local_128 = plStack_120 + 2;
                SharedPointerInternals::EnableSharedFromThis(&local_128,local_128,local_128);
                local_c8 = local_128;
                plStack_c0 = plStack_120;
                if (plStack_120 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
                  UNLOCK();
                }
                FUN_140e57f40(lVar6,&local_c8);
                plVar9 = plStack_120;
              }
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                plVar10 = plVar9 + 1;
                lVar5 = *plVar10;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*plVar9)(plVar9);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar9 + 0xc);
                  iVar2 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar2 == 1) {
                    (**(code **)(*plVar9 + 8))(plVar9,1);
                  }
                }
              }
              plVar9 = local_130;
              if (local_130 != (longlong *)0x0) {
                LOCK();
                plVar10 = local_130 + 1;
                lVar5 = *plVar10;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*local_130)(local_130);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar9 + 0xc);
                  iVar2 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar2 == 1) {
                    (**(code **)(*plVar9 + 8))(plVar9,1);
                  }
                }
              }
            }
          }
          cVar4 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x59c);
          if (cVar4 != '\0') {
            uVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0x59c);
            lVar5 = FUN_140ec9a00(uVar7);
            if (lVar5 != 0) {
              FUN_141108790(lVar5);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410533d0 FUN_1410533d0 body=146 status=ok
// SIG undefined FUN_1410533d0(void)

void FUN_1410533d0(longlong *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146873f08) {
    _Init_thread_header(&DAT_146873f08);
    if (DAT_146873f08 == -1) {
      FName::FName(&DAT_146873f00,"Shield_Depleted",1);
      _Init_thread_footer(&DAT_146873f08);
    }
  }
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146873f00,&local_18);
  return;
}



// FUNCTION 141053470 FUN_141053470 body=746 status=ok
// SIG undefined FUN_141053470(void)

void FUN_141053470(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong local_58 [3];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_1f;
  longlong local_18;
  undefined4 local_10;
  
  if ((*(longlong *)(param_1 + 0xbc8) != 0) && (cVar2 = FUN_140cb6290(), cVar2 == '\0')) {
    FUN_1406ab3e0(*(undefined8 *)(param_1 + 0xbc8));
    puVar3 = *(undefined8 **)(param_1 + 0x6c0);
    puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0x6c8) * 8;
    for (; puVar3 != puVar4; puVar3 = puVar3 + 8) {
      local_58[2] = *puVar3;
      local_40 = puVar3[1];
      local_38 = puVar3[2];
      local_30 = puVar3[3];
      local_28 = puVar3[4];
      local_20 = *(undefined1 *)(puVar3 + 5);
      local_1f = *(undefined1 *)((longlong)puVar3 + 0x29);
      local_18 = 0;
      local_10 = 0;
      if (((puVar3 + 6 != &local_18) && (*(int *)(puVar3 + 7) != 0)) &&
         (plVar1 = (longlong *)puVar3[6], plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x30))(plVar1,&local_18);
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
    }
    if (*(longlong *)(param_1 + 0xa00) != 0) {
      cVar2 = FUN_140fca450(*(undefined8 *)(param_1 + 0xbc8),param_1 + 0x9c8,param_1 + 0x980);
      if (cVar2 == '\0') {
        cVar2 = FUN_140cb6290(*(undefined8 *)(param_1 + 0xbc8));
        if ((cVar2 == '\0') && (0 < *(int *)(param_1 + 0x6b8))) {
          FUN_140fca450(*(undefined8 *)(param_1 + 0xbc8),param_1 + 0x9a0,param_1 + 0x980);
        }
        cVar2 = FUN_140cb6290(*(undefined8 *)(param_1 + 0xbc8));
        if ((cVar2 == '\0') && (*(char *)(param_1 + 0x6bd) != '\0')) {
          FUN_140fca450(*(undefined8 *)(param_1 + 0xbc8),param_1 + 0x9a8,param_1 + 0x980);
        }
        local_58[0] = 0;
        local_58[1] = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
        FGenericPlatformString::Memcpy(local_58[0],&DAT_144662644,6);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0xa00),local_58);
        if (local_58[0] != 0) {
          FMemory::Free();
        }
      }
      else {
        puVar3 = *(undefined8 **)(param_1 + 0x6c0);
        puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0x6c8) * 8;
        for (; puVar3 != puVar4; puVar3 = puVar3 + 8) {
          local_58[2] = *puVar3;
          local_38 = puVar3[2];
          local_40 = puVar3[1];
          local_30 = puVar3[3];
          local_28 = puVar3[4];
          local_20 = *(undefined1 *)(puVar3 + 5);
          local_1f = *(undefined1 *)((longlong)puVar3 + 0x29);
          local_18 = 0;
          local_10 = 0;
          if (((puVar3 + 6 != &local_18) && (*(int *)(puVar3 + 7) != 0)) &&
             (plVar1 = (longlong *)puVar3[6], plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x30))(plVar1,&local_18);
          }
          if (local_38 != 0) {
            FUN_14105c2c0(local_38,0);
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
        }
        local_58[0] = 0;
        local_58[1] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
        FGenericPlatformString::Memcpy(local_58[0],L"tutorial1",0x14);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0xa00),local_58);
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        *(undefined1 *)(param_1 + 0x6be) = 1;
      }
    }
  }
  return;
}



// FUNCTION 141053760 FUN_141053760 body=605 status=ok
// SIG undefined FUN_141053760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141053760(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined1 local_190 [8];
  longlong *local_188;
  code *local_178 [2];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined1 local_128 [80];
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_198 = param_1;
  FText::FText(local_190);
  lVar9 = 0;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x28,local_c8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_144605c20;
    puVar7[1] = local_198;
    FText::FText(puVar7 + 2,local_190);
  }
  local_d8[0] = &LAB_141031ff0;
  FUN_1420849a0(param_1,local_88,local_d8);
  if (local_98 != 0) {
    plVar10 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar10 = local_a8;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_188 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_188 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  lVar4 = DAT_146873ec8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    lVar8 = 4;
    if (DVar6 != DAT_1468c21c0) goto LAB_1410538a3;
  }
  lVar8 = lVar9;
LAB_1410538a3:
  if (*(int *)(lVar8 + lVar4) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_178,local_88);
    if (local_138 != 0) {
      plVar10 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar10 = local_148;
      }
      if (plVar10 != (longlong *)0x0) {
        lVar9 = (**(code **)(*plVar10 + 8))();
      }
    }
    (*local_178[0])(lVar9);
    if (local_138 != 0) {
      plVar10 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar10 = local_148;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_128);
    FUN_14208c4f0(param_1,local_128);
  }
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
  plVar10 = *(longlong **)(param_2 + 8);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return;
}



// FUNCTION 1410539c0 FUN_1410539c0 body=421 status=ok
// SIG undefined FUN_1410539c0(void)

void FUN_1410539c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (((*(longlong *)(param_1 + 0x170) != 0) && (*(longlong *)(param_1 + 0x178) != 0)) &&
     (*(longlong *)(param_1 + 0x180) != 0)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_38,L"$old Out",L"GFxQuickChangeMenuStore",L"SoldOutTitle");
    (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2b0))
              (*(longlong **)(param_1 + 0x170),local_38,1,0);
    (**(code **)(**(longlong **)(param_1 + 0x178) + 0x2b0))
              (*(longlong **)(param_1 + 0x178),local_38,1,0);
    lVar4 = **(longlong **)(param_1 + 0x180);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Don\'t Come Back",L"GFxQuickChangeMenuStore",L"SoldOutSubtitle");
    (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x180),uVar5,1,0);
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
  local_48[1] = 5;
  local_48[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"play",10);
  FUN_142088910(param_1,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141053b70 FUN_141053b70 body=58 status=ok
// SIG undefined FUN_141053b70(void)

void FUN_141053b70(longlong *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x12a],&local_18);
  *(undefined4 *)((longlong)param_1 + 0xecc) = 0xbf800000;
  return;
}



// FUNCTION 141053bb0 FUN_141053bb0 body=362 status=ok
// SIG undefined FUN_141053bb0(void)

void FUN_141053bb0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  FUN_142eedeb0(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(int *)(param_1 + 0x58) = param_2;
  if ((param_2 < 1) || (iVar1 < 1)) {
    iVar5 = 1;
  }
  else {
    iVar5 = (param_2 + -1 + iVar1) / iVar1;
  }
  iVar3 = *(int *)(param_1 + 0x88);
  iVar4 = iVar3;
  if (0 < iVar1) {
    iVar4 = (iVar3 - iVar1) / iVar1;
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  if (0 < iVar1) {
    iVar3 = (iVar3 - iVar1) / iVar1;
  }
  FUN_142f11a80(param_1 + 0x20,(float)iVar3 * *(float *)(param_1 + 0x90),
                (float)iVar4 * *(float *)(param_1 + 0x90));
  FUN_142f0ee50(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  if ((param_3 == '\0') || (iVar2 == -1)) {
    iVar2 = -1;
    if (*(int *)(param_1 + 0x9c) < -1) {
      iVar2 = *(int *)(param_1 + 0x9c);
    }
    FUN_14105bee0(param_1,iVar2);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58) + -1;
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    if (iVar1 < 1) {
      iVar1 = 0;
    }
    iVar2 = *(int *)(param_1 + 0x9c);
    iVar5 = iVar1;
    if ((iVar2 != -1) && (iVar2 < iVar1)) {
      iVar5 = iVar2;
    }
    FUN_14105bee0(param_1,iVar5);
    FUN_14105a3e0(param_1,iVar5,1);
    FUN_142f0ee50(param_1 + 0x20);
    FUN_14105a3e0(param_1,iVar1,0);
  }
  return;
}



// FUNCTION 141053d20 FUN_141053d20 body=651 status=ok
// SIG undefined FUN_141053d20(void)

void FUN_141053d20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    if (*(char *)(param_1 + 0x6c8) == '\0') {
      if ((*(longlong **)(param_1 + 0x6e8) != (longlong *)0x0) &&
         (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x2d0))(), iVar5 != -1)) {
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_88,L"Select",L"GFxQuickChangeMenuStore",L"SelectItemText");
        FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar6);
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
      }
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_70,L"Close",L"GFxQuickChangeMenuStore",L"CloseText");
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar6);
      local_20 = local_68;
    }
    else {
      cVar4 = FUN_1410328e0(param_1);
      if (cVar4 != '\0') {
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_58,&DAT_1446691d8,L"GFxQuickChangeMenuStore",L"Purchase");
        FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar6);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
        if (((byte)(*(char *)(param_1 + 0x6c8) - 1U) < 3) || (*(char *)(param_1 + 0x6c8) == '\x06'))
        {
          uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_40,L"Buy & Equip",L"GFxQuickChangeMenuStore",L"PurchaseAndEquip")
          ;
          FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146873b58,uVar6);
          if (local_38 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_38 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
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
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_28,L"Back",L"GFxQuickChangeMenuStore",L"BackOutText");
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar6);
    }
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
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141053fb0 FUN_141053fb0 body=801 status=ok
// SIG undefined FUN_141053fb0(void)

void FUN_141053fb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  lVar3 = param_1 + 0x184;
  cVar8 = FWeakObjectPtr::IsValid(lVar3);
  if (cVar8 == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x1f1) != '\0') {
    uVar9 = FWeakObjectPtr::Get(lVar3);
    cVar8 = FUN_142eb62a0(uVar9);
    if (cVar8 == '\x02') {
      uVar9 = FWeakObjectPtr::Get(lVar3);
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_50,L"Submit",L"SHiFTMenu",L"SumbitText");
      FUN_142eb01d0(uVar9,&DAT_146873c60,uVar10,0);
      local_30 = local_48;
    }
    else {
      uVar9 = FWeakObjectPtr::Get(lVar3);
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_38,L"Submit",L"SHiFTMenu",L"SumbitText");
      FUN_142eb01d0(uVar9,&DAT_146b3e2a0,uVar10,0);
    }
    goto LAB_14105420d;
  }
  if ((*(longlong *)(param_1 + 0x250) == 0) ||
     (cVar8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x250) + 0x170) + 0x48))(),
     cVar8 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((*(longlong *)(param_1 + 0x248) == 0) ||
     (cVar8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x248) + 0x170) + 0x48))(),
     cVar8 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((bVar5) || (bVar6)) {
LAB_1410540ac:
    uVar9 = FWeakObjectPtr::Get(lVar3);
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_80,L"Select",L"SHiFTMenu",L"SelectText");
    FUN_142eb01d0(uVar9,&DAT_146b3e2a0,uVar10,0);
    plVar11 = local_78;
  }
  else {
    uVar9 = FWeakObjectPtr::Get(lVar3);
    cVar8 = FUN_142eb62a0(uVar9);
    if (cVar8 != '\x02') goto LAB_1410540ac;
    uVar9 = FWeakObjectPtr::Get(lVar3);
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_98,L"Edit",L"SHiFTMenu",L"EditText");
    FUN_142eb01d0(uVar9,&DAT_146b3e2a0,uVar10,0);
    plVar11 = local_90;
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
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
  uVar9 = FWeakObjectPtr::Get(lVar3);
  uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_68,L"SHiFT Support ID",L"SHiFTMenu",L"SHiFTSupportIdText");
  FUN_142eb01d0(uVar9,&DAT_146873c68,uVar10,0);
  local_30 = local_60;
LAB_14105420d:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_30 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
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
  uVar9 = FWeakObjectPtr::Get(lVar3);
  uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_20,L"Back",L"SHiFTMenu",L"BackText");
  FUN_142eb01d0(uVar9,&DAT_146b3e2b8,uVar10,0);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_18 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return;
}



// FUNCTION 1410542e0 FUN_1410542e0 body=640 status=ok
// SIG undefined FUN_1410542e0(void)

void FUN_1410542e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar3 = param_1 + 0x184;
  cVar6 = FWeakObjectPtr::IsValid(lVar3);
  if (cVar6 == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x1f1) == '\0') {
    if (((*(longlong *)(param_1 + 0x218) == 0) ||
        (cVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x218) + 0x170) + 0x48))(),
        cVar6 == '\0')) &&
       ((*(longlong *)(param_1 + 0x1f8) == 0 ||
        (cVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + 0x170) + 0x48))(),
        cVar6 == '\0')))) {
      uVar7 = FWeakObjectPtr::Get(lVar3);
      cVar6 = FUN_142eb62a0(uVar7);
      if (cVar6 == '\x02') {
        uVar7 = FWeakObjectPtr::Get(lVar3);
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_88,L"Edit",L"SHiFTMenu",L"EditText");
        FUN_142eb01d0(uVar7,&DAT_146b3e2a0,uVar8,0);
        plVar9 = local_80;
        goto LAB_14105449c;
      }
    }
    uVar7 = FWeakObjectPtr::Get(lVar3);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"Select",L"SHiFTMenu",L"SelectText");
    FUN_142eb01d0(uVar7,&DAT_146b3e2a0,uVar8,0);
    plVar9 = local_68;
  }
  else {
    uVar7 = FWeakObjectPtr::Get(lVar3);
    cVar6 = FUN_142eb62a0(uVar7);
    if (cVar6 == '\x02') {
      uVar7 = FWeakObjectPtr::Get(lVar3);
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"Submit",L"SHiFTMenu",L"SumbitText");
      FUN_142eb01d0(uVar7,&DAT_146873c60,uVar8,0);
      plVar9 = local_50;
    }
    else {
      uVar7 = FWeakObjectPtr::Get(lVar3);
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_40,L"Submit",L"SHiFTMenu",L"SumbitText");
      FUN_142eb01d0(uVar7,&DAT_146b3e2a0,uVar8,0);
      plVar9 = local_38;
    }
  }
LAB_14105449c:
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
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  uVar7 = FWeakObjectPtr::Get(lVar3);
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Back",L"SHiFTMenu",L"BackText");
  FUN_142eb01d0(uVar7,&DAT_146b3e2b8,uVar8,0);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_20 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
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
  return;
}



// FUNCTION 141054560 FUN_141054560 body=47 status=ok
// SIG undefined FUN_141054560(void)

void FUN_141054560(longlong param_1)

{
  FUN_1410e5c90();
  if (*(longlong **)(param_1 + 0x690) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141054582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x690) + 0x2a8))();
    return;
  }
  return;
}



// FUNCTION 141054590 FUN_141054590 body=291 status=ok
// SIG undefined FUN_141054590(void)

void FUN_141054590(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  param_1 = param_1 + 0x184;
  cVar5 = FWeakObjectPtr::IsValid(param_1);
  if (cVar5 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Select",L"SHiFTMenu",L"SelectText");
    FUN_142eb01d0(uVar6,&DAT_146b3e2a0,uVar7,0);
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
    uVar6 = FWeakObjectPtr::Get(param_1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Back",L"SHiFTMenu",L"BackText");
    FUN_142eb01d0(uVar6,&DAT_146b3e2b8,uVar7,0);
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
  return;
}



// FUNCTION 1410546c0 FUN_1410546c0 body=326 status=ok
// SIG undefined FUN_1410546c0(void)

void FUN_1410546c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  lVar3 = param_1 + 0x184;
  cVar6 = FWeakObjectPtr::IsValid(lVar3);
  if (cVar6 != '\0') {
    if ((*(longlong *)(param_1 + 0x200) != 0) &&
       (cVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x200) + 0x170) + 0x48))(),
       cVar6 != '\0')) {
      uVar7 = FWeakObjectPtr::Get(lVar3);
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_38,L"Select",L"SHiFTMenuUnavailblePage",L"SelectText");
      FUN_142eb01d0(uVar7,&DAT_146b3e2a0,uVar8,0);
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
    }
    uVar7 = FWeakObjectPtr::Get(lVar3);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Back",L"SHiFTMenuUnavailblePage",L"BackText");
    FUN_142eb01d0(uVar7,&DAT_146b3e2b8,uVar8,0);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141054810 FUN_141054810 body=611 status=ok
// SIG undefined FUN_141054810(void)

void FUN_141054810(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar3 = param_1 + 0x184;
  cVar6 = FWeakObjectPtr::IsValid(lVar3);
  if (cVar6 == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x1f1) == '\0') {
    if ((*(longlong *)(param_1 + 0x208) == 0) ||
       (cVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x170) + 0x48))(),
       cVar6 == '\0')) {
      uVar7 = FWeakObjectPtr::Get(lVar3);
      cVar6 = FUN_142eb62a0(uVar7);
      if (cVar6 == '\x02') {
        uVar7 = FWeakObjectPtr::Get(lVar3);
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_88,L"Edit",L"SHiFTMenu",L"EditText");
        FUN_142eb01d0(uVar7,&DAT_146b3e2a0,uVar8,0);
        plVar9 = local_80;
        goto LAB_1410549af;
      }
    }
    uVar7 = FWeakObjectPtr::Get(lVar3);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"Select",L"SHiFTMenu",L"SelectText");
    FUN_142eb01d0(uVar7,&DAT_146b3e2a0,uVar8,0);
    plVar9 = local_68;
  }
  else {
    uVar7 = FWeakObjectPtr::Get(lVar3);
    cVar6 = FUN_142eb62a0(uVar7);
    if (cVar6 == '\x02') {
      uVar7 = FWeakObjectPtr::Get(lVar3);
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"Submit",L"SHiFTMenu",L"SumbitText");
      FUN_142eb01d0(uVar7,&DAT_146873c60,uVar8,0);
      plVar9 = local_50;
    }
    else {
      uVar7 = FWeakObjectPtr::Get(lVar3);
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_40,L"Submit",L"SHiFTMenu",L"SumbitText");
      FUN_142eb01d0(uVar7,&DAT_146b3e2a0,uVar8,0);
      plVar9 = local_38;
    }
  }
LAB_1410549af:
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
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  uVar7 = FWeakObjectPtr::Get(lVar3);
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Back",L"SHiFTMenu",L"BackText");
  FUN_142eb01d0(uVar7,&DAT_146b3e2b8,uVar8,0);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_20 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
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
  return;
}



// FUNCTION 141054a80 FUN_141054a80 body=454 status=ok
// SIG undefined FUN_141054a80(void)

void FUN_141054a80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar3 = param_1 + 0x184;
  cVar6 = FWeakObjectPtr::IsValid(lVar3);
  if (cVar6 != '\0') {
    if ((*(longlong *)(param_1 + 0x210) != 0) &&
       (cVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x210) + 0x170) + 0x48))(),
       cVar6 != '\0')) {
      uVar7 = FWeakObjectPtr::Get(lVar3);
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"Select",L"SHiFTMenu",L"SelectText");
      FUN_142eb01d0(uVar7,&DAT_146b3e2a0,uVar8,0);
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
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    uVar7 = FWeakObjectPtr::Get(lVar3);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"SHiFT Support ID",L"SHiFTMenu",L"SHiFTSupportIdText");
    FUN_142eb01d0(uVar7,&DAT_146873c68,uVar8,0);
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
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    uVar7 = FWeakObjectPtr::Get(lVar3);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Back",L"SHiFTMenu",L"BackText");
    FUN_142eb01d0(uVar7,&DAT_146b3e2b8,uVar8,0);
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
  }
  return;
}



// FUNCTION 141054c50 FUN_141054c50 body=164 status=ok
// SIG undefined FUN_141054c50(void)

void FUN_141054c50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar5 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x184);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Back",L"SHiFTMenu",L"BackText");
    FUN_142eb01d0(uVar6,&DAT_146b3e2b8,uVar7,0);
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



// FUNCTION 141054d00 FUN_141054d00 body=506 status=ok
// SIG undefined FUN_141054d00(void)

void FUN_141054d00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,L"Adjust Area",L"GFxSafeAreaCalibrationMenu",L"AdjustText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146873ce0,uVar5);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"Accept",L"GFxSafeAreaCalibrationMenu",L"ConfirmText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar5);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Reset to Default",L"GFxSafeAreaCalibrationMenu",L"ResetText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146873b58,uVar5);
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
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Cancel",L"GFxSafeAreaCalibrationMenu",L"BackText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar5);
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
  return;
}



// FUNCTION 141054f00 FUN_141054f00 body=1024 status=ok
// SIG undefined FUN_141054f00(void)

void FUN_141054f00(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  char cVar8;
  longlong *plVar9;
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
  undefined1 local_30 [8];
  longlong *local_28;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) == 0) {
    return;
  }
  cVar8 = *(char *)(param_1 + 0xc09);
  if (cVar8 == '\0') {
    cVar8 = *(char *)(param_1 + 0xc08);
  }
  if ((*(longlong *)(param_1 + 0xbc8) == 0) || (cVar6 = FUN_140cb6290(), cVar6 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  uVar7 = FUN_1404b03b0();
  FText::FText(local_a8,uVar7);
  if ((cVar8 == '\x02') &&
     (cVar6 = FUN_14103ae70(param_1,*(undefined8 *)(param_1 + 0xbf8)), cVar6 == '\x04')) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_90,L"Unequip",L"GFxSkillScreenTree",L"UnequipText");
    FText::operator=(local_a8,uVar7);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_88 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  }
  cVar6 = FText::IsEmpty(local_a8);
  if ((cVar6 == '\0') && (!bVar4)) {
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,local_a8);
  }
  uVar7 = FUN_1404b03b0();
  FText::FText(local_c0,uVar7);
  if (cVar8 == '\x01') {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_78,L"Manage Loadout",L"GFxSkillScreenTree",L"ManageLoadoutText");
    FText::operator=(local_c0,uVar7);
    plVar9 = local_70;
LAB_1410550aa:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  else if ((byte)(cVar8 - 4U) < 2) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_60,L"Toggle View",L"GFxSkillScreenTree",L"ToggleViewText");
    FText::operator=(local_c0,uVar7);
    plVar9 = local_58;
    goto LAB_1410550aa;
  }
  cVar6 = FText::IsEmpty(local_c0);
  if ((cVar6 == '\0') && (!bVar4)) {
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146873b60,local_c0);
  }
  uVar7 = FUN_1404b03b0();
  FText::FText(local_d8,uVar7);
  if (((bVar4) || (cVar8 == '\x01')) || ((byte)(cVar8 - 4U) < 2)) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_30,L"Close",L"GFxSkillScreenTree",L"ExitText");
    FText::operator=(local_d8,uVar7);
    plVar9 = local_28;
  }
  else {
    if (cVar8 != '\x02') goto LAB_1410551c8;
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"Back",L"GFxSkillScreenTree",L"BackText");
    FText::operator=(local_d8,uVar7);
    plVar9 = local_40;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
LAB_1410551c8:
  cVar6 = FText::IsEmpty(local_d8);
  if (cVar6 == '\0') {
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,local_d8);
  }
  if ((!bVar4) && ((cVar8 - 1U & 0xfb) == 0)) {
    uVar7 = FUN_1404b03b0();
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146873b98,uVar7,0);
    uVar7 = FUN_1404b03b0();
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146873b90,uVar7,0);
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_d0 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
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
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_b8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_a0 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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



// FUNCTION 141055300 FUN_141055300 body=558 status=ok
// SIG undefined FUN_141055300(void)

void FUN_141055300(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  bool bVar12;
  longlong *local_38 [2];
  
  if (param_2 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  lVar8 = 0;
  plVar3 = *(longlong **)(param_4 + 0x328);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  LOCK();
  iVar6 = (int)plVar3[1];
  bVar12 = iVar6 == 0;
  if (bVar12) {
    *(int *)(plVar3 + 1) = 0;
    iVar6 = 0;
  }
  UNLOCK();
  if (bVar12) {
    return;
  }
  while( true ) {
    LOCK();
    bVar12 = iVar6 == (int)plVar3[1];
    if (bVar12) {
      *(int *)(plVar3 + 1) = iVar6 + 1;
    }
    UNLOCK();
    if (bVar12) break;
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar12 = iVar6 == 0;
    if (bVar12) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (bVar12) {
      return;
    }
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar4 = *(longlong *)(param_4 + 800);
  if (lVar4 != 0) {
    if (param_5 == 0) {
      pwVar10 = L"locked";
    }
    else {
      *(longlong *)(param_4 + 0x410) = param_5;
      if ((*(int *)(param_1 + 0x910) <= param_3) && (*(int *)(param_5 + 0x60) <= param_3)) {
        FUN_1409ab480(param_2,local_38);
        if (local_38[0] == (longlong *)0x0) {
          lVar11 = 0;
        }
        else {
          lVar11 = local_38[0][0x1f];
          if (lVar11 == 0) {
            (**(code **)(*local_38[0] + 0x368))(local_38[0]);
            lVar11 = local_38[0][0x1f];
          }
        }
        lVar7 = FWeakObjectPtr::Get(param_4 + 0x420);
        if (((lVar7 != 0) && (lVar8 = FUN_141039b60(lVar7), lVar8 != 0)) && (lVar8 != lVar11)) {
          FUN_14105ce00(lVar7,*(int *)(lVar7 + 0x4ac) + -1);
        }
        FUN_14203e4e0(lVar4,L"filled");
        if ((lVar11 == 0) || (cVar5 = FText::IsEmpty(lVar11 + 0x40), cVar5 != '\0')) {
          FUN_14105c9c0(param_4,0);
        }
        else if (lVar11 != lVar8) {
          AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
          if ((*(longlong *)(param_1 + 0xbe0) == 0) || (lVar8 = FUN_141039b60(), lVar11 != lVar8)) {
            uVar9 = FUN_1410358e0(param_1,lVar11);
          }
          else {
            uVar9 = *(undefined8 *)(param_1 + 0xbe0);
          }
          ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
          FUN_14105c9c0(param_4,uVar9);
        }
        goto LAB_1410554de;
      }
      pwVar10 = L"locked";
    }
    FUN_14203e4e0(lVar4,pwVar10);
  }
LAB_1410554de:
  LOCK();
  plVar1 = plVar3 + 1;
  lVar8 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar8 == 1) {
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
  return;
}



// FUNCTION 141055530 FUN_141055530 body=725 status=ok
// SIG undefined FUN_141055530(void)

void FUN_141055530(longlong param_1,longlong param_2,int param_3,longlong *param_4,longlong param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  
  if ((param_2 != 0) && (param_4 != (longlong *)0x0)) {
    plVar4 = (longlong *)param_4[0x65];
    lVar11 = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar14 = iVar6 == 0;
      if (bVar14) {
        *(int *)(plVar4 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar14) {
        LOCK();
        bVar14 = iVar6 == (int)plVar4[1];
        if (bVar14) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar14) {
          if (plVar4 == (longlong *)0x0) {
            return;
          }
          lVar10 = param_4[100];
          if (lVar10 != 0) {
            param_4[0x81] = param_5;
            if (param_5 == 0) {
              FUN_14203e4e0(lVar10,L"locked");
            }
            else {
              (**(code **)(*param_4 + 0x278))(param_4,1);
              plVar13 = *(longlong **)(param_1 + 0xc10);
              plVar2 = plVar13 + *(int *)(param_1 + 0xc18);
              for (; plVar13 != plVar2; plVar13 = plVar13 + 1) {
                if ((*(int *)(param_1 + 0x910) <= param_3) && (lVar9 = *plVar13, lVar9 != 0)) {
                  plVar12 = *(longlong **)(lVar9 + 0x140);
                  plVar3 = plVar12 + *(int *)(lVar9 + 0x148);
                  for (; plVar12 != plVar3; plVar12 = plVar12 + 1) {
                    if (*plVar12 == param_5) {
                      cVar5 = FUN_1409aec20(param_5,param_3,*(undefined8 *)(param_1 + 0x6d0));
                      if (cVar5 != '\0') {
                        lVar7 = FUN_1409a72d0(param_2,*(undefined8 *)(lVar9 + 0x10),param_5);
                        lVar8 = FWeakObjectPtr::Get(param_4 + 0x84);
                        lVar9 = lVar11;
                        if (((lVar8 != 0) && (lVar9 = FUN_141039bf0(lVar8), lVar9 != 0)) &&
                           (lVar9 != lVar7)) {
                          FUN_14105ce00(lVar8,*(int *)(lVar8 + 0x4ac) + -1);
                        }
                        FUN_14203e4e0(lVar10,L"filled");
                        if ((lVar7 == 0) || (cVar5 = FText::IsEmpty(lVar7 + 0x30), cVar5 != '\0')) {
                          lVar11 = 0;
                        }
                        else {
                          if (lVar7 == lVar9) goto LAB_1410557b9;
                          AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
                          if ((*(longlong *)(param_1 + 0xbe0) == 0) ||
                             (lVar10 = FUN_141039bf0(), lVar7 != lVar10)) {
                            lVar10 = *(longlong *)(param_1 + 0x6c0);
                            lVar9 = (longlong)*(int *)(param_1 + 0x6c8) * 0x40 + lVar10;
                            while ((lVar10 != lVar9 &&
                                   (((*(longlong *)(lVar10 + 0x10) == 0 ||
                                     (*(char *)(lVar10 + 0x28) != '\x02')) ||
                                    (lVar11 = FUN_141035a90(*(longlong *)(lVar10 + 0x10),lVar7),
                                    lVar11 == 0))))) {
                              lVar10 = lVar10 + 0x40;
                            }
                          }
                          else {
                            lVar11 = *(longlong *)(param_1 + 0xbe0);
                          }
                          ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
                        }
                        FUN_14105c9c0(param_4,lVar11);
                        goto LAB_1410557b9;
                      }
                      break;
                    }
                  }
                }
                FUN_14203e4e0(lVar10,L"locked");
              }
            }
          }
LAB_1410557b9:
          LOCK();
          plVar2 = plVar4 + 1;
          lVar11 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar11 != 1) {
            return;
          }
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
            return;
          }
          return;
        }
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar14 = iVar6 == 0;
        if (bVar14) {
          *(int *)(plVar4 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 141055810 FUN_141055810 body=630 status=ok
// SIG undefined FUN_141055810(void)

void FUN_141055810(longlong param_1,longlong param_2,int param_3,longlong *param_4,longlong param_5)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  bool bVar13;
  
  if ((param_2 != 0) && (param_4 != (longlong *)0x0)) {
    plVar2 = (longlong *)param_4[0x65];
    lVar11 = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar13) {
        LOCK();
        bVar13 = iVar4 == (int)plVar2[1];
        if (bVar13) {
          *(int *)(plVar2 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar13) {
          if (plVar2 == (longlong *)0x0) {
            return;
          }
          lVar10 = param_4[100];
          if (lVar10 == 0) goto LAB_141055a39;
          if (param_5 == 0) {
            pwVar12 = L"locked";
          }
          else {
            (**(code **)(*param_4 + 0x278))(param_4,1);
            param_4[0x83] = param_5;
            if (*(int *)(param_1 + 0x910) <= param_3) {
              plVar5 = (longlong *)FUN_140e97230(param_1);
              if (plVar5 != (longlong *)0x0) {
                uVar6 = FUN_1414add30();
                lVar7 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
                if (lVar7 != 0) {
                  lVar8 = FUN_140e50d60(lVar7,param_5);
                  lVar9 = FWeakObjectPtr::Get(param_4 + 0x84);
                  lVar7 = lVar11;
                  if (((lVar9 != 0) && (lVar7 = FUN_141039190(lVar9), lVar7 != 0)) &&
                     (lVar7 != lVar8)) {
                    FUN_14105ce00(lVar9,*(int *)(lVar9 + 0x4ac) + -1);
                  }
                  FUN_14203e4e0(lVar10,L"filled");
                  if ((lVar8 == 0) || (cVar3 = FText::IsEmpty(lVar8 + 0x30), cVar3 != '\0')) {
                    FUN_14105c9c0(param_4,0);
                  }
                  else if (lVar8 != lVar7) {
                    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
                    if ((*(longlong *)(param_1 + 0xbe0) == 0) ||
                       (lVar10 = FUN_141039190(), lVar8 != lVar10)) {
                      lVar10 = *(longlong *)(param_1 + 0x6c0);
                      lVar7 = (longlong)*(int *)(param_1 + 0x6c8) * 0x40 + lVar10;
                      while ((lVar10 != lVar7 &&
                             (((*(longlong *)(lVar10 + 0x10) == 0 ||
                               (*(char *)(lVar10 + 0x28) != '\x02')) ||
                              (lVar11 = FUN_141035c30(*(longlong *)(lVar10 + 0x10),lVar8),
                              lVar11 == 0))))) {
                        lVar10 = lVar10 + 0x40;
                      }
                    }
                    else {
                      lVar11 = *(longlong *)(param_1 + 0xbe0);
                    }
                    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
                    FUN_14105c9c0(param_4,lVar11);
                  }
                }
              }
              goto LAB_141055a39;
            }
            pwVar12 = L"locked";
          }
          FUN_14203e4e0(lVar10,pwVar12);
LAB_141055a39:
          LOCK();
          plVar5 = plVar2 + 1;
          lVar11 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar11 != 1) {
            return;
          }
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 != 1) {
            return;
          }
          (**(code **)(*plVar2 + 8))(plVar2,1);
          return;
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
  }
  return;
}



// FUNCTION 141055a90 FUN_141055a90 body=276 status=ok
// SIG undefined FUN_141055a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141055a90(undefined8 param_1)

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
  local_b8[0] = &LAB_141031d90;
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



// FUNCTION 141055bb0 FUN_141055bb0 body=533 status=ok
// SIG undefined FUN_141055bb0(void)

void FUN_141055bb0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  short *psVar10;
  longlong *plVar11;
  undefined1 local_res18 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  Online::GetIdentityInterface(&local_48,0);
  lVar9 = -1;
  if (local_48 == (longlong *)0x0) {
    FUN_141052d80(param_1);
  }
  else {
    iVar4 = (**(code **)(*local_48 + 0x40))();
    lVar3 = *(longlong *)(param_1 + 0x698);
    uStack_50 = uStack_50 & 0xffffffff00000000;
    local_58 = FUN_14104f5d0;
    plVar11 = (longlong *)(lVar3 + 0x1f8);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_38 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_144089a20;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_58;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_58._4_4_;
      *(undefined4 *)(plVar5 + 3) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_50._4_4_;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar6;
      *plVar5 = (longlong)&PTR_FUN_144089a68;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
      (**(code **)(*plVar5 + 0x20))(plVar5,local_res18);
      iVar2 = *(int *)(lVar3 + 0x200);
      *(int *)(lVar3 + 0x200) = iVar2 + 1;
      if (*(int *)(lVar3 + 0x204) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar11);
      *puVar7 = plVar5;
      *(undefined4 *)(puVar7 + 1) = 3;
    }
    if (iVar4 == 0) {
      psVar10 = &DAT_14450f870;
    }
    else if (iVar4 == 1) {
      psVar10 = &DAT_14450f878;
    }
    else if (iVar4 == 2) {
      psVar10 = &DAT_14450f880;
    }
    else {
      psVar10 = &DAT_143f3eda8;
    }
    local_58 = (code *)0x0;
    uStack_50 = 0;
    if (*psVar10 != 0) {
      do {
        lVar9 = lVar9 + 1;
      } while (psVar10[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      uStack_50 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      }
      FGenericPlatformString::Memcpy(local_58,psVar10,(longlong)(int)uVar8 * 2);
    }
    FUN_142b63780(*(undefined8 *)(param_1 + 0x698),&local_58);
    if (local_58 != (code *)0x0) {
      FMemory::Free();
    }
  }
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 141055dd0 FUN_141055dd0 body=538 status=ok
// SIG undefined FUN_141055dd0(void)

void FUN_141055dd0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  short *psVar10;
  longlong *plVar11;
  undefined1 local_res18 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  Online::GetIdentityInterface(&local_48,0);
  lVar9 = -1;
  if (local_48 == (longlong *)0x0) {
    FUN_1410622b0(param_1,7);
  }
  else {
    iVar4 = (**(code **)(*local_48 + 0x40))();
    lVar3 = *(longlong *)(param_1 + 0x6e0);
    uStack_50 = uStack_50 & 0xffffffff00000000;
    local_58 = FUN_14104f690;
    plVar11 = (longlong *)(lVar3 + 0x1f8);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_38 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_144089a20;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_58;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_58._4_4_;
      *(undefined4 *)(plVar5 + 3) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_50._4_4_;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar6;
      *plVar5 = (longlong)&PTR_FUN_144089a68;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
      (**(code **)(*plVar5 + 0x20))(plVar5,local_res18);
      iVar2 = *(int *)(lVar3 + 0x200);
      *(int *)(lVar3 + 0x200) = iVar2 + 1;
      if (*(int *)(lVar3 + 0x204) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar11);
      *puVar7 = plVar5;
      *(undefined4 *)(puVar7 + 1) = 3;
    }
    if (iVar4 == 0) {
      psVar10 = &DAT_14450f870;
    }
    else if (iVar4 == 1) {
      psVar10 = &DAT_14450f878;
    }
    else if (iVar4 == 2) {
      psVar10 = &DAT_14450f880;
    }
    else {
      psVar10 = &DAT_143f3eda8;
    }
    local_58 = (code *)0x0;
    uStack_50 = 0;
    if (*psVar10 != 0) {
      do {
        lVar9 = lVar9 + 1;
      } while (psVar10[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      uStack_50 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      }
      FGenericPlatformString::Memcpy(local_58,psVar10,(longlong)(int)uVar8 * 2);
    }
    FUN_142b63780(*(undefined8 *)(param_1 + 0x6e0),&local_58);
    if (local_58 != (code *)0x0) {
      FMemory::Free();
    }
  }
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 141055ff0 FUN_141055ff0 body=628 status=ok
// SIG undefined FUN_141055ff0(void)

void FUN_141055ff0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (0 < param_2) {
    if ((*(longlong *)(param_1 + 0x388) != 0) && (*(longlong *)(param_1 + 0x390) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x390) + 8);
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (0 < iVar6) goto LAB_1410561dc;
    }
    FUN_142085870(param_1,&local_38,L"Background");
    if (local_38 != 0) {
      local_48 = 0;
      local_40 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"ClassMod",0x12);
      local_58 = (longlong *)0x0;
      local_50 = 0;
      puVar3 = (undefined8 *)
               FUN_14202b820(local_38,local_28,L"ClassMod",&local_48,0xffffffff,0,&local_58);
      *(undefined8 *)(param_1 + 0x388) = *puVar3;
      plVar5 = (longlong *)puVar3[1];
      plVar4 = *(longlong **)(param_1 + 0x390);
      if (plVar5 != plVar4) {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          plVar4 = *(longlong **)(param_1 + 0x390);
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(longlong **)(param_1 + 0x390) = plVar5;
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_20 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
      plVar5 = local_58;
      for (iVar6 = (int)local_50; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
LAB_1410561dc:
  plVar5 = *(longlong **)(param_1 + 0x390);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar5[1];
    bVar7 = iVar6 == 0;
    if (bVar7) {
      *(int *)(plVar5 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar6 == (int)plVar5[1];
      if (bVar7) {
        *(int *)(plVar5 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar5 == (longlong *)0x0) {
          return;
        }
        if (*(longlong *)(param_1 + 0x388) != 0) {
          FUN_142056670(*(longlong *)(param_1 + 0x388),0 < param_2);
        }
        LOCK();
        plVar4 = plVar5 + 1;
        lVar2 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar2 != 1) {
          return;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return;
        }
        (**(code **)(*plVar5 + 8))(plVar5,1);
        return;
      }
      LOCK();
      iVar6 = (int)plVar5[1];
      bVar7 = iVar6 == 0;
      if (bVar7) {
        *(int *)(plVar5 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 141056270 FUN_141056270 body=309 status=ok
// SIG undefined FUN_141056270(void)

void FUN_141056270(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_res8;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  if ((param_1[0xb6] == 0) || (param_2 == '\0')) {
    (**(code **)(*param_1 + 0x580))(param_1,0);
    *(undefined4 *)((longlong)param_1 + 0x63c) = 3;
  }
  else {
    local_48 = 0;
    local_40 = 0;
    uVar5 = FUN_1404b03b0();
    FText::FText(local_38,uVar5);
    local_18 = 0;
    local_10 = 1;
    local_20 = 1;
    FName::FName(&local_res8,L"OakPC_OpenStatusMenu",1);
    uVar3 = local_40;
    lVar6 = (longlong)(int)local_40;
    iVar4 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar4);
    if (local_40._4_4_ < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_48,uVar3 & 0xffffffff);
    }
    *(undefined8 *)(local_48 + lVar6 * 8) = local_res8;
    (**(code **)(*(longlong *)(param_1[0xb6] + 0x308) + 0x20))
              ((longlong *)(param_1[0xb6] + 0x308),&local_48,param_2);
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
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_48 != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 1410563b0 FUN_1410563b0 body=414 status=ok
// SIG undefined FUN_1410563b0(void)

void FUN_1410563b0(longlong param_1)

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
  
  if ((*(longlong *)(param_1 + 0x630) != 0) && (*(longlong *)(param_1 + 0x638) != 0)) {
    FUN_142ee3e70();
    if (1 < *(int *)(param_1 + 0x648)) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"Previous",L"RaidSpectatorWidget",L"PreviousPlayerText");
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x630),DAT_146873cb8,uVar5);
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
                        (local_40,L"Next",L"RaidSpectatorWidget",L"NextPlayerText");
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x630),DAT_146873cc0,uVar5);
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
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Zoom",L"RaidSpectatorWidget",L"ZoomHintText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x630),DAT_146873c28,uVar5);
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



// FUNCTION 141056550 FUN_141056550 body=986 status=ok
// SIG undefined FUN_141056550(void)

void FUN_141056550(longlong param_1)

{
  int *piVar1;
  float *pfVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  float *pfVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  void *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  float local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(longlong *)(param_1 + 0x458) == 0) {
    return;
  }
  bVar5 = false;
  if ((*(longlong *)(param_1 + 0x3a8) != 0) && (*(longlong *)(param_1 + 0x3b0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x3b0) + 8);
    LOCK();
    iVar11 = *piVar1;
    if (iVar11 == 0) {
      *piVar1 = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (0 < iVar11) goto LAB_141056735;
  }
  FUN_142085870(param_1,&local_58,L"Icon");
  bVar5 = false;
  if (local_58 != 0) {
    local_68 = 0;
    local_60 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"IconArt",0x10);
    local_78 = (longlong *)0x0;
    local_70 = 0;
    puVar7 = (undefined8 *)
             FUN_14202b820(local_58,local_48,L"SkillIcons",&local_68,0xfffffffe,0,&local_78);
    *(undefined8 *)(param_1 + 0x3a8) = *puVar7;
    plVar10 = (longlong *)puVar7[1];
    plVar8 = *(longlong **)(param_1 + 0x3b0);
    if (plVar10 != plVar8) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(param_1 + 0x3b0);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      *(longlong **)(param_1 + 0x3b0) = plVar10;
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_40 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar10 = local_78;
    for (iVar11 = (int)local_70; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    bVar5 = true;
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_50 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
LAB_141056735:
  plVar10 = *(longlong **)(param_1 + 0x3b0);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    iVar11 = (int)plVar10[1];
    bVar12 = iVar11 == 0;
    if (bVar12) {
      *(int *)(plVar10 + 1) = 0;
      iVar11 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar11 == (int)plVar10[1];
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar11 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if (plVar10 == (longlong *)0x0) {
          return;
        }
        lVar6 = *(longlong *)(param_1 + 0x3a8);
        if (lVar6 != 0) {
          if (bVar5) {
            lVar3 = *(longlong *)(param_1 + 0x458);
            local_88 = (void *)0x0;
            if (lVar3 == 0) {
              local_80 = 7;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
              FGenericPlatformString::Memcpy(local_88,L"noIcon",0xe);
            }
            else {
              iVar11 = *(int *)(lVar3 + 0x40);
              _Src = *(void **)(lVar3 + 0x38);
              local_80 = CONCAT44(local_80._4_4_,iVar11);
              if (iVar11 == 0) {
                local_80 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,iVar11,0);
                _guard_xfg_dispatch_icall_nop(local_88,_Src,(longlong)iVar11 * 2);
              }
            }
            FUN_14203e230(lVar6,&local_88);
            if (local_88 != (void *)0x0) {
              FMemory::Free();
            }
          }
          pfVar2 = (float *)(param_1 + 0x4d8);
          if (*(char *)(param_1 + 0x4f8) != '\0') {
            if ((((*(float *)(param_1 + 0x4e8) != *pfVar2) ||
                 (*(float *)(param_1 + 0x4dc) != *(float *)(param_1 + 0x4ec))) ||
                (*(float *)(param_1 + 0x4e0) != *(float *)(param_1 + 0x4f0))) ||
               (*(float *)(param_1 + 0x4e4) != *(float *)(param_1 + 0x4f4))) {
              if (((*(float *)(param_1 + 0x4e8) != *pfVar2) ||
                  (*(float *)(param_1 + 0x4dc) != *(float *)(param_1 + 0x4ec))) ||
                 ((*(float *)(param_1 + 0x4e0) != *(float *)(param_1 + 0x4f0) ||
                  (*(float *)(param_1 + 0x4e4) != *(float *)(param_1 + 0x4f4))))) {
                pfVar9 = (float *)(param_1 + 0x4e8);
                if (*(char *)(param_1 + 0x4f8) == '\0') {
                  pfVar9 = pfVar2;
                }
                uVar4 = *(undefined8 *)(pfVar9 + 2);
                *(undefined8 *)pfVar2 = *(undefined8 *)pfVar9;
                *(undefined8 *)(param_1 + 0x4e0) = uVar4;
              }
              if (*(char *)(param_1 + 0x4f8) != '\0') {
                *(undefined1 *)(param_1 + 0x4f8) = 0;
              }
              local_38 = *pfVar2;
              uStack_34 = *(undefined4 *)(param_1 + 0x4dc);
              uStack_30 = *(undefined4 *)(param_1 + 0x4e0);
              uStack_2c = *(undefined4 *)(param_1 + 0x4e4);
              FUN_142050af0(lVar6,&local_38,1);
            }
          }
        }
        LOCK();
        plVar8 = plVar10 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 != 1) {
          return;
        }
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 != 1) {
          return;
        }
        (**(code **)(*plVar10 + 8))(plVar10,1);
        return;
      }
      LOCK();
      iVar11 = (int)plVar10[1];
      bVar12 = iVar11 == 0;
      if (bVar12) {
        *(int *)(plVar10 + 1) = 0;
        iVar11 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 141056930 FUN_141056930 body=1256 status=ok
// SIG undefined FUN_141056930(void)

void FUN_141056930(longlong param_1)

{
  int *piVar1;
  float *pfVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  float *pfVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  float local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(longlong *)(param_1 + 0x458) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x500) == '\0') goto LAB_141056cd5;
  if ((*(longlong *)(param_1 + 0x358) == 0) || (*(longlong *)(param_1 + 0x360) == 0)) {
LAB_14105699f:
    FUN_142085870(param_1,&local_78,L"Background");
    if (local_78 != 0) {
      local_a8 = 0;
      local_a0 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      FGenericPlatformString::Memcpy(local_a8,L"Background",0x16);
      local_b8 = (longlong *)0x0;
      local_b0 = 0;
      uVar4 = FUN_141039430(param_1 + 0x500);
      puVar5 = (undefined8 *)FUN_14202b6f0(local_78,local_58,uVar4,&local_a8,0,0,&local_b8);
      *(undefined8 *)(param_1 + 0x358) = *puVar5;
      plVar8 = (longlong *)puVar5[1];
      plVar6 = *(longlong **)(param_1 + 0x360);
      if (plVar8 != plVar6) {
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
          UNLOCK();
          plVar6 = *(longlong **)(param_1 + 0x360);
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        *(longlong **)(param_1 + 0x360) = plVar8;
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_50 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      plVar8 = local_b8;
      for (iVar9 = (int)local_b0; iVar9 != 0; iVar9 = iVar9 + -1) {
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
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_70 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x360) + 8);
    LOCK();
    iVar9 = *piVar1;
    if (iVar9 == 0) {
      *piVar1 = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (iVar9 < 1) goto LAB_14105699f;
  }
  if ((*(longlong *)(param_1 + 0x368) != 0) && (*(longlong *)(param_1 + 0x370) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x370) + 8);
    LOCK();
    iVar9 = *piVar1;
    if (iVar9 == 0) {
      *piVar1 = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (0 < iVar9) goto LAB_141056cd5;
  }
  FUN_142085870(param_1,&local_68,L"ShadowBG");
  if (local_68 != 0) {
    local_88 = 0;
    local_80 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    FGenericPlatformString::Memcpy(local_88,L"BackgroundShadow",0x22);
    local_98 = (longlong *)0x0;
    local_90 = 0;
    uVar4 = FUN_141039430(param_1 + 0x500);
    puVar5 = (undefined8 *)FUN_14202b6f0(local_68,local_48,uVar4,&local_88,1,0,&local_98);
    *(undefined8 *)(param_1 + 0x368) = *puVar5;
    plVar8 = (longlong *)puVar5[1];
    plVar6 = *(longlong **)(param_1 + 0x370);
    if (plVar8 != plVar6) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(param_1 + 0x370);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(longlong **)(param_1 + 0x370) = plVar8;
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    plVar8 = local_98;
    for (iVar9 = (int)local_90; iVar9 != 0; iVar9 = iVar9 + -1) {
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
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_60 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
LAB_141056cd5:
  plVar8 = *(longlong **)(param_1 + 0x360);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    iVar9 = (int)plVar8[1];
    bVar10 = iVar9 == 0;
    if (bVar10) {
      *(int *)(plVar8 + 1) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    while (!bVar10) {
      LOCK();
      bVar10 = iVar9 == (int)plVar8[1];
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar9 + 1;
      }
      UNLOCK();
      if (bVar10) {
        if (plVar8 == (longlong *)0x0) {
          return;
        }
        if ((*(longlong *)(param_1 + 0x358) != 0) &&
           (pfVar2 = (float *)(param_1 + 0x4b4), *(char *)(param_1 + 0x4d4) != '\0')) {
          if ((*(float *)(param_1 + 0x4c4) != *pfVar2) ||
             (((*(float *)(param_1 + 0x4b8) != *(float *)(param_1 + 0x4c8) ||
               (*(float *)(param_1 + 0x4bc) != *(float *)(param_1 + 0x4cc))) ||
              (*(float *)(param_1 + 0x4c0) != *(float *)(param_1 + 0x4d0))))) {
            if ((((*(float *)(param_1 + 0x4c4) != *pfVar2) ||
                 (*(float *)(param_1 + 0x4b8) != *(float *)(param_1 + 0x4c8))) ||
                (*(float *)(param_1 + 0x4bc) != *(float *)(param_1 + 0x4cc))) ||
               (*(float *)(param_1 + 0x4c0) != *(float *)(param_1 + 0x4d0))) {
              pfVar7 = (float *)(param_1 + 0x4c4);
              if (*(char *)(param_1 + 0x4d4) == '\0') {
                pfVar7 = pfVar2;
              }
              uVar4 = *(undefined8 *)(pfVar7 + 2);
              *(undefined8 *)pfVar2 = *(undefined8 *)pfVar7;
              *(undefined8 *)(param_1 + 0x4bc) = uVar4;
            }
            if (*(char *)(param_1 + 0x4d4) != '\0') {
              *(undefined1 *)(param_1 + 0x4d4) = 0;
            }
            local_38 = *pfVar2;
            uStack_34 = *(undefined4 *)(param_1 + 0x4b8);
            uStack_30 = *(undefined4 *)(param_1 + 0x4bc);
            uStack_2c = *(undefined4 *)(param_1 + 0x4c0);
            FUN_142050af0(*(longlong *)(param_1 + 0x358),&local_38,1);
          }
        }
        LOCK();
        plVar6 = plVar8 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 != 1) {
          return;
        }
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 != 1) {
          return;
        }
        (**(code **)(*plVar8 + 8))(plVar8,1);
        return;
      }
      LOCK();
      iVar9 = (int)plVar8[1];
      bVar10 = iVar9 == 0;
      if (bVar10) {
        *(int *)(plVar8 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 141056e20 FUN_141056e20 body=476 status=ok
// SIG undefined FUN_141056e20(void)

void FUN_141056e20(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  cVar5 = *(char *)(param_1 + 0xc09);
  cVar9 = cVar5;
  if (cVar5 == '\0') {
    cVar9 = *(char *)(param_1 + 0xc08);
  }
  if (cVar9 == '\x01') {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
    lVar3 = *(longlong *)(param_1 + 0xbe0);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
    if (lVar3 != 0) {
      uVar4 = FUN_141037600(param_1,lVar3);
      FUN_141064ec0(lVar3,uVar4);
      uVar7 = FUN_141039660(param_1,local_20);
      if ((*(longlong *)(param_1 + 0x7e8) != 0) && (*(longlong *)(param_1 + 0x7f0) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x7f0) + 8);
        LOCK();
        iVar6 = *piVar1;
        if (iVar6 == 0) {
          *piVar1 = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (0 < iVar6) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x7e0,uVar7,1,0);
        }
      }
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_18 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar1 = (int *)((longlong)local_18 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_18 + 8))(local_18,1);
          }
        }
      }
    }
  }
  else {
    if (cVar5 == '\0') {
      cVar5 = *(char *)(param_1 + 0xc08);
    }
    if ((cVar5 == '\x02') && (lVar3 = *(longlong *)(param_1 + 0xbf8), lVar3 != 0)) {
      lVar8 = FWeakObjectPtr::Get(lVar3 + 0x420);
      if (lVar8 == 0) {
        lVar8 = 0xde0;
        if (*(char *)(lVar3 + 0x428) != '\0') {
          lVar8 = 0xdf8;
        }
      }
      else {
        lVar8 = 0xdb0;
      }
      FText::FText(local_38,param_1 + lVar8);
      if ((*(longlong *)(param_1 + 0x7e8) != 0) && (*(longlong *)(param_1 + 0x7f0) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x7f0) + 8);
        LOCK();
        iVar6 = *piVar1;
        if (iVar6 == 0) {
          *piVar1 = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (0 < iVar6) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x7e0,local_38,1,0);
        }
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
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141057000 FUN_141057000 body=2215 status=ok
// SIG undefined FUN_141057000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141057000(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_198 [32];
  int local_178;
  int local_174;
  undefined4 local_170 [2];
  longlong local_168;
  ulonglong local_160;
  undefined8 local_158;
  int iStack_150;
  undefined4 uStack_14c;
  int local_148;
  undefined1 local_140 [8];
  int local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if (param_2 == 0) {
    param_2 = param_1[0x8c];
  }
  else {
    param_1[0x8c] = param_2;
  }
  if ((param_2 == 0) || (param_1[0x8b] == 0)) {
    (**(code **)(*param_1 + 0x278))(param_1,0);
    (**(code **)(param_1[0x2e] + 0x38))(param_1 + 0x2e,0);
    goto LAB_141057887;
  }
  if ((byte)(*(char *)(param_1[0x8b] + 0x34) - 3U) < 2) {
    FUN_141058e80();
  }
  (**(code **)(param_1[0x2e] + 0x38))(param_1 + 0x2e,1);
  local_128 = 0;
  cVar4 = FUN_1409a7560(param_1[0x8c],param_1[0x8b],local_140);
  if (cVar4 != '\0') {
    cVar4 = FUN_1409a1f80(local_140);
    if ((char)param_1[0xb6] != cVar4) {
      uVar5 = FUN_1409a1f80(local_140);
      *(undefined1 *)(param_1 + 0xb6) = uVar5;
      TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x59,param_1);
    }
    local_148 = (int)param_1[0xb0];
    local_178 = local_138;
    iVar6 = FUN_1409aa830(param_1[0x8b]);
    local_170[0] = local_134;
    if (&local_178 != (int *)((longlong)param_1 + 0x584)) {
      *(int *)((longlong)param_1 + 0x584) = local_138;
      *(undefined1 *)(param_1 + 0xb1) = 1;
    }
    if ((longlong *)&local_174 != param_1 + 0xb2) {
      *(int *)(param_1 + 0xb2) = iVar6;
      *(undefined1 *)((longlong)param_1 + 0x594) = 1;
    }
    if (local_170 != (undefined4 *)((longlong)param_1 + 0x59c)) {
      *(undefined4 *)((longlong)param_1 + 0x59c) = local_134;
      *(undefined1 *)(param_1 + 0xb4) = 1;
    }
    plVar10 = (longlong *)0x0;
    local_158 = (longlong *)0x0;
    iStack_150 = *(int *)(param_1[0x8b] + 0x40);
    lVar14 = (longlong)iStack_150;
    _Src = *(void **)(param_1[0x8b] + 0x38);
    local_174 = iVar6;
    if (iStack_150 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,iStack_150,0);
      plVar10 = local_158;
      _guard_xfg_dispatch_icall_nop(local_158,_Src,lVar14 * 2);
    }
    iVar15 = iStack_150;
    plVar2 = param_1 + 0xb7;
    if (plVar2 != &local_158) {
      *(int *)(param_1 + 0xb8) = iStack_150;
      if ((iStack_150 == 0) && (*(int *)((longlong)param_1 + 0x5c4) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0x5c4) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar2,iStack_150);
        _guard_xfg_dispatch_icall_nop((void *)*plVar2,plVar10,(longlong)iVar15 * 2);
      }
    }
    if (plVar10 != (longlong *)0x0) {
      FMemory::Free(plVar10);
    }
    *(undefined1 *)((longlong)param_1 + 0x5b2) = 1;
    *(undefined1 *)((longlong)param_1 + 0x5b1) = local_130;
    FText::FText(local_120,param_1[0x8b] + 0x68);
    FText::operator=(param_1 + 0xa7,local_120);
    lVar14 = -1;
    iVar15 = local_138;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_118 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      iVar15 = local_178;
      iVar6 = local_174;
      if ((int)lVar9 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        iVar15 = local_178;
        iVar6 = local_174;
        if (iVar7 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
          iVar15 = local_178;
          iVar6 = local_174;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x96) = 0;
    if (((char)param_1[0xa0] == '\x04') && (*(char *)((longlong)param_1 + 0x5b1) != '\0')) {
      if (iVar15 < iVar6) {
        *(char *)(param_1 + 0x96) = (iVar15 != 0) + '\x01';
      }
      else {
        *(undefined1 *)(param_1 + 0x96) = 3;
      }
    }
    if (param_1[0x8b] != 0) {
      cVar4 = UChaosVehicleMovementComponent::GetUseAutoGears(param_1);
      if (cVar4 == '\0') {
        if ((char)param_1[0x96] == '\x01') {
          uVar8 = FUN_141039470(param_1,local_f8);
        }
        else {
          uVar8 = FUN_141039570(param_1,local_e8);
        }
      }
      else {
        uVar8 = FUN_1410394f0(param_1,local_108);
      }
      FUN_14105c180((longlong)param_1 + 0x4b4,uVar8);
      cVar4 = *(char *)(param_1[0x8b] + 0x48);
      if ((char)param_1[0xa0] != cVar4) {
        *(char *)(param_1 + 0xa0) = cVar4;
        if (cVar4 == '\x01') {
          pwVar12 = L"actionSkill";
        }
        else if (cVar4 == '\x02') {
          pwVar12 = L"modPrimary";
        }
        else if (cVar4 == '\x03') {
          pwVar12 = L"modSecondary";
        }
        else if (cVar4 == '\x04') {
          pwVar12 = L"passive";
        }
        else {
          pwVar12 = L"";
        }
        local_160 = 0;
        local_168 = 0;
        if (*pwVar12 != L'\0') {
          do {
            lVar14 = lVar14 + 1;
          } while (pwVar12[lVar14] != L'\0');
          uVar13 = (int)lVar14 + 1;
          local_160 = (ulonglong)uVar13;
          if (0 < (int)uVar13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
          }
          FGenericPlatformString::Memcpy(local_168,pwVar12,(longlong)(int)uVar13 * 2);
        }
        cVar4 = FUN_14208d2d0(param_1,param_1 + 0x67,L"selectedGlows");
        if (cVar4 != '\0') {
          FUN_14203e230(param_1[0x67],&local_168);
        }
        cVar4 = FUN_14208d2d0(param_1,param_1 + 0x77,L"skillUnlockAnim");
        if (cVar4 != '\0') {
          cVar4 = FUN_14204d380(param_1[0x77],param_1 + 0x79,L"skillUnlockIcon");
          if (cVar4 != '\0') {
            FUN_14203e230(param_1[0x79],&local_168);
          }
        }
        if (local_168 != 0) {
          FMemory::Free();
        }
      }
    }
    FUN_141056930(param_1);
    FUN_141055ff0(param_1,local_170[0]);
    FUN_141056550(param_1);
    if (*(char *)((longlong)param_1 + 0x4b1) != '\x02') {
      cVar4 = FUN_14208d2d0(param_1,param_1 + 0x77,L"skillUnlockAnim");
      if (cVar4 != '\0') {
        if ((((char)param_1[0xa0] == '\x04') || ((char)param_1[0xb6] == '\0')) &&
           (*(char *)((longlong)param_1 + 0x5b1) == '\0')) {
          *(undefined1 *)((longlong)param_1 + 0x4b1) = 1;
        }
        else {
          if (*(char *)((longlong)param_1 + 0x4b1) == '\x01') {
            FUN_14203e030(param_1[0x77],&DAT_14465fe08);
            TBaseDelegate<void>::ExecuteIfBound(param_1 + 0x5f);
          }
          *(undefined1 *)((longlong)param_1 + 0x4b1) = 2;
        }
      }
    }
    FUN_141064200(param_1,param_1 + 0x8f);
    lVar14 = param_1[0x8b];
    if (lVar14 != 0) {
      lVar9 = FUN_14144ecc0();
      if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (plVar10 = *(longlong **)(lVar14 + 0x88), plVar10 != (longlong *)0x0)) {
        lVar14 = plVar10[0x1f];
        if (lVar14 == 0) {
          (**(code **)(*plVar10 + 0x368))(plVar10);
          lVar14 = plVar10[0x1f];
          if (lVar14 == 0) goto LAB_141057581;
        }
        FText::operator=(param_1 + 0xa1,lVar14 + 0x40);
        FText::operator=(param_1 + 0xa4,lVar14 + 0x58);
      }
    }
LAB_141057581:
    lVar14 = param_1[0x8b];
    if (lVar14 != 0) {
      lVar9 = FUN_14144ee20();
      if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar14 = *(longlong *)(lVar14 + 0x88), lVar14 != 0)) {
        FText::operator=(param_1 + 0xa1,lVar14 + 0x30);
        FText::operator=(param_1 + 0xa4,lVar14 + 0x48);
      }
    }
    lVar14 = param_1[0x8b];
    if (lVar14 != 0) {
      lVar9 = FUN_14144ef80();
      if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar14 = *(longlong *)(lVar14 + 0x88), lVar14 != 0)) {
        FText::operator=(param_1 + 0xa1,lVar14 + 0x30);
        FText::operator=(param_1 + 0xa4,lVar14 + 0x48);
      }
    }
    lVar14 = param_1[0x8b];
    if (lVar14 != 0) {
      lVar9 = FUN_14144eed0();
      if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if (*(longlong *)(lVar14 + 0x88) != 0) {
          FText::operator=(param_1 + 0xa1,*(longlong *)(lVar14 + 0x88) + 0x30);
        }
      }
    }
    iVar6 = 0;
    if ((param_1[0x62] != 0) && (param_1[99] != 0)) {
      piVar1 = (int *)(param_1[99] + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      iVar15 = local_178;
      if (0 < iVar7) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x61,param_1 + 0xa1,1,0);
        iVar15 = local_178;
      }
    }
    if (local_148 < iVar15) {
      plVar10 = (longlong *)((longlong)param_1 + 0x584);
      if ((char)param_1[0xb1] == '\0') {
        plVar10 = param_1 + 0xb0;
      }
      iVar15 = (int)*plVar10;
      lVar14 = 0x590;
      if (*(char *)((longlong)param_1 + 0x594) == '\0') {
        lVar14 = 0x58c;
      }
      iVar7 = *(int *)(lVar14 + (longlong)param_1);
      if (iVar15 == iVar7) {
        iVar6 = 4;
      }
      else if (iVar15 != 1) {
        if (iVar15 == 2) {
          iVar6 = (iVar7 == 3) + 1;
        }
        else if (iVar15 == 3) {
          iVar6 = (iVar7 == 4) + 2;
        }
        else {
          if (iVar15 != 4) goto LAB_14105785d;
          iVar6 = 3;
        }
      }
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      local_158 = param_1;
      iStack_150 = iVar6;
      puVar11 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar11 + 1) = (undefined4)local_158;
        *(undefined4 *)((longlong)puVar11 + 0xc) = local_158._4_4_;
        *(int *)(puVar11 + 2) = iStack_150;
        *(undefined4 *)((longlong)puVar11 + 0x14) = uStack_14c;
      }
      local_d8[0] = FUN_141032230;
      uVar8 = FUN_1420849a0(param_1,local_88,local_d8);
      FUN_14208c300(param_1,uVar8);
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
      if (local_98 != 0) {
        plVar10 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar10 = local_a8;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
LAB_14105785d:
  (**(code **)(*param_1 + 0x278))(param_1,1);
LAB_141057887:
  FUN_142ecf920(param_1,0);
  return;
}



// FUNCTION 1410578b0 FUN_1410578b0 body=170 status=ok
// SIG undefined FUN_1410578b0(void)

void FUN_1410578b0(longlong *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res18;
  undefined1 local_res19;
  undefined2 local_res1a;
  
  iVar3 = FUN_14103fac0();
  if ((-1 < iVar3) && (iVar3 < (int)param_1[0x11])) {
    plVar5 = (longlong *)0x0;
    lVar1 = *(longlong *)(param_1[0x10] + (longlong)iVar3 * 8);
    plVar4 = plVar5;
    if (lVar1 != 0) {
      plVar4 = *(longlong **)(lVar1 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      local_res19 = *(int *)((longlong)param_1 + 0x5c) == param_2;
      local_res1a = 0;
      local_res18 = 1;
      if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(*(longlong *)*param_1 + 0x18))(), cVar2 != '\0')) {
        if ((int)param_1[1] != 0) {
          plVar5 = (longlong *)*param_1;
        }
        (**(code **)(*plVar5 + 0x40))(plVar5,param_2,plVar4,&local_res18);
      }
    }
  }
  return;
}



// FUNCTION 141057960 FUN_141057960 body=371 status=ok
// SIG undefined FUN_141057960(void)

void FUN_141057960(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 local_res8;
  code *local_18;
  ulonglong uStack_10;
  
  if (param_2 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x2e8);
  }
  else {
    *(longlong *)(param_1 + 0x2e8) = param_2;
    lVar3 = param_2;
  }
  if (lVar3 != 0) {
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_1410404c0;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAbilityPointsChanged",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x2e8) + 0x48,param_1,&local_18,local_res8);
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_141040590;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAbilityTierChanged",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x2e8) + 0x28,param_1,&local_18,local_res8);
  }
  if (*(longlong *)(param_1 + 0x2e0) == 0) {
    return;
  }
  FUN_141057b50(*(longlong *)(param_1 + 0x2e0),param_2);
  return;
}



// FUNCTION 141057ae0 FUN_141057ae0 body=98 status=ok
// SIG undefined FUN_141057ae0(void)

void FUN_141057ae0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x308);
  lVar2 = 0;
  if (plVar1 <= (longlong *)(param_1 + 0x330U)) {
    do {
      if (*plVar1 != 0) {
        FUN_141057000(*plVar1,param_2);
      }
      plVar1 = plVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 5);
  }
  return;
}



// FUNCTION 141057b50 FUN_141057b50 body=515 status=ok
// SIG undefined FUN_141057b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141057b50(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a4 [3];
  code *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar10 = 0;
  iVar2 = FUN_142eb7440();
  uVar7 = uVar10;
  uVar12 = uVar10;
  if (0 < iVar2) {
    do {
      uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x278) + 0x18 + uVar7);
      if (uVar6 != 0) {
        lVar3 = FUN_141397a70();
        if ((*(int *)(*(longlong *)(uVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          uVar6 = uVar10;
        }
        if (uVar6 != 0) {
          local_a4[0] = 0xffffffff;
          if (param_2 != 0) {
            FUN_14170c210(local_a4,param_2);
          }
          local_a8 = 0xffffffff;
          FUN_14170c210(&local_a8,uVar6);
          uVar8 = local_a4[0];
          uVar5 = local_a8;
          local_a8 = 0xffffffff;
          local_a4[0] = 0xffffffff;
          local_68 = (longlong *)0x0;
          local_58 = 0;
          puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_88);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &PTR_FUN_14461b890;
            *(undefined4 *)(puVar4 + 1) = uVar5;
            uVar5 = 0xffffffff;
            *(undefined4 *)((longlong)puVar4 + 0xc) = uVar8;
            uVar8 = 0xffffffff;
          }
          local_98[0] = FUN_1410324b0;
          FUN_14208c9c0(param_1,local_98);
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
          FUN_1416f8340(uVar8);
          FUN_1416f8340(uVar5);
          FUN_1416f8340(local_a8);
          FUN_1416f8340(local_a4[0]);
        }
      }
      uVar11 = (int)uVar12 + 1;
      iVar2 = FUN_142eb7440(param_1);
      uVar7 = uVar7 + 0x20;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < iVar2);
  }
  return;
}



// FUNCTION 141057d60 FUN_141057d60 body=578 status=ok
// SIG undefined FUN_141057d60(void)

void FUN_141057d60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (((cVar5 != '\0') && (lVar7 = FUN_140eccb70(param_1), lVar7 != 0)) &&
     (cVar5 = FUN_140bca8a0(lVar7), cVar5 == '\0')) {
    if (*(longlong *)(param_1 + 0x230) != 0) {
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      uVar8 = FWeakObjectPtr::Get(param_1 + 0x184);
      lVar7 = **(longlong **)(param_1 + 0x230);
      uVar6 = FUN_1410380c0(uVar8);
      uVar8 = FText::AsNumber(local_38,uVar6,0,&local_58);
      (**(code **)(lVar7 + 0x2b0))(*(undefined8 *)(param_1 + 0x230),uVar8,1,0);
      if (local_30 != (longlong *)0x0) {
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
      plVar1 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_50 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_50)(plStack_50);
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
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x184);
      (**(code **)(**(longlong **)(param_1 + 0x230) + 0x278))
                (*(longlong **)(param_1 + 0x230),*(undefined1 *)(lVar7 + 0x8c8));
    }
    if (*(longlong *)(param_1 + 0x238) != 0) {
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      uVar8 = FWeakObjectPtr::Get(param_1 + 0x184);
      lVar7 = **(longlong **)(param_1 + 0x238);
      uVar6 = FUN_141038220(uVar8);
      uVar8 = FText::AsNumber(local_20,uVar6,0,&local_48);
      (**(code **)(lVar7 + 0x2b0))(*(undefined8 *)(param_1 + 0x238),uVar8,1,0);
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_18 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar2 = (int *)((longlong)local_18 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_18 + 8))(local_18,1);
          }
        }
      }
      plVar1 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_40 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      (**(code **)(**(longlong **)(param_1 + 0x238) + 0x278))(*(longlong **)(param_1 + 0x238),1);
    }
  }
  return;
}



// FUNCTION 141057fb0 FUN_141057fb0 body=578 status=ok
// SIG undefined FUN_141057fb0(void)

void FUN_141057fb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (((cVar5 != '\0') && (lVar7 = FUN_140eccb70(param_1), lVar7 != 0)) &&
     (cVar5 = FUN_140bca8a0(lVar7), cVar5 == '\0')) {
    if (*(longlong *)(param_1 + 0x228) != 0) {
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      uVar8 = FWeakObjectPtr::Get(param_1 + 0x184);
      lVar7 = **(longlong **)(param_1 + 0x228);
      uVar6 = FUN_1410380c0(uVar8);
      uVar8 = FText::AsNumber(local_38,uVar6,0,&local_58);
      (**(code **)(lVar7 + 0x2b0))(*(undefined8 *)(param_1 + 0x228),uVar8,1,0);
      if (local_30 != (longlong *)0x0) {
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
      plVar1 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_50 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_50)(plStack_50);
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
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x184);
      (**(code **)(**(longlong **)(param_1 + 0x228) + 0x278))
                (*(longlong **)(param_1 + 0x228),*(undefined1 *)(lVar7 + 0x8c8));
    }
    if (*(longlong *)(param_1 + 0x230) != 0) {
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      uVar8 = FWeakObjectPtr::Get(param_1 + 0x184);
      lVar7 = **(longlong **)(param_1 + 0x230);
      uVar6 = FUN_141038220(uVar8);
      uVar8 = FText::AsNumber(local_20,uVar6,0,&local_48);
      (**(code **)(lVar7 + 0x2b0))(*(undefined8 *)(param_1 + 0x230),uVar8,1,0);
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_18 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar2 = (int *)((longlong)local_18 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_18 + 8))(local_18,1);
          }
        }
      }
      plVar1 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_40 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      (**(code **)(**(longlong **)(param_1 + 0x230) + 0x278))(*(longlong **)(param_1 + 0x230),1);
    }
  }
  return;
}



// FUNCTION 141058200 FUN_141058200 body=190 status=ok
// SIG undefined FUN_141058200(void)

void FUN_141058200(longlong param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong local_18;
  int local_10;
  
  FUN_1410391f0(param_1,&local_18);
  uVar2 = FUN_14103f310(param_1,&local_18);
  if (*(longlong *)(param_1 + 0x250) != 0) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x250) + 0x170);
    (**(code **)(*plVar4 + 0x38))(plVar4,uVar2);
  }
  plVar4 = *(longlong **)(param_1 + 0x200);
  if (plVar4 != (longlong *)0x0) {
    if (local_10 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = local_10 + -1;
    }
    pbVar1 = (byte *)(param_1 + 600);
    *pbVar1 = *pbVar1 | iVar3 == 0x19;
    if ((*pbVar1 == 0) || ((local_10 != 0 && (0x18 < local_10 + -1)))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    (**(code **)(*plVar4 + 0x278))(plVar4,uVar5);
  }
  plVar4 = *(longlong **)(param_1 + 0x228);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x278))(plVar4,uVar2);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410582c0 FUN_1410582c0 body=516 status=ok
// SIG undefined FUN_1410582c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1410582c0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
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
  plVar3 = (longlong *)FWeakObjectPtr::Get((longlong)param_1 + 0x594);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_c8 = AGFireballProjectile::GetPrivateStaticClass();
      lVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,local_c8);
      if (lVar4 != 0) {
        (**(code **)(*param_1 + 0x5b0))(param_1,*(undefined8 *)(lVar4 + 0x398));
        local_88 = (longlong *)0x0;
        local_78 = 0;
        puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
        if (puVar5 != (undefined8 *)0x0) {
          puVar5[1] = param_1;
          *puVar5 = &PTR_FUN_143f77b70;
        }
        local_b8[0] = FUN_1410321d0;
        uVar6 = FUN_1420849a0(param_1,local_68,local_b8);
        FUN_14208c260(param_1,uVar6);
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
      }
    }
  }
  cVar2 = *(char *)((longlong)param_1 + 0xc09);
  if (cVar2 == '\0') {
    cVar2 = (char)param_1[0x181];
  }
  if ((cVar2 == '\x02') && (param_1[0x17f] != 0)) {
    lVar4 = FWeakObjectPtr::Get(param_1[0x17f] + 0x420);
    if (lVar4 == 0) {
      FUN_141045cb0(param_1 + 0xdc,param_1,param_1[0x17f] + 0x330);
    }
    else {
      FUN_141047400(param_1 + 0xdc,param_1,lVar4);
    }
  }
  LOCK();
  lVar4 = param_1[0x1dc];
  *(undefined4 *)(param_1 + 0x1dc) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  return (int)lVar4;
}



// FUNCTION 1410584d0 FUN_1410584d0 body=650 status=ok
// SIG undefined FUN_1410584d0(void)

void FUN_1410584d0(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90;
  undefined8 local_88;
  undefined2 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if ((*(longlong *)(param_1 + 0x6c0) != 0) && (*(longlong *)(param_1 + 0x6c8) != 0)) {
    local_78 = 0;
    local_70 = 0;
    uVar4 = FUN_1404b03b0();
    FText::FText(local_68,uVar4);
    uVar2 = local_70;
    lVar6 = (longlong)(int)local_70;
    local_48 = 0;
    local_40 = 1;
    local_50 = 1;
    iVar3 = (int)local_70 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar3);
    if (local_70._4_4_ < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_78,uVar2 & 0xffffffff);
    }
    *(undefined8 *)(local_78 + lVar6 * 8) = DAT_146b3e2a0;
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Select",L"QuickMenu",L"SelectItemText");
    FText::operator=(local_68,uVar4);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x6c0) + 0x308);
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_78,0);
    local_b8 = 0;
    local_b0 = 0;
    uVar4 = FUN_1404b03b0();
    FText::FText(local_a8,uVar4);
    uVar2 = local_b0;
    lVar6 = (longlong)(int)local_b0;
    local_88 = 0;
    local_80 = 1;
    iVar3 = (int)local_b0 + 1;
    local_90 = 1;
    local_b0 = CONCAT44(local_b0._4_4_,iVar3);
    if (local_b0._4_4_ < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_b8,uVar2 & 0xffffffff);
    }
    *(undefined8 *)(local_b8 + lVar6 * 8) = DAT_146b3e2b8;
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Back",L"QuickMenu",L"BackOutText");
    FText::operator=(local_a8,uVar4);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_18 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar1 = (int *)((longlong)local_18 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x6c8) + 0x308);
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_b8,0);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_a0 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_b8 != 0) {
      FMemory::Free();
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_60 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141058760 FUN_141058760 body=87 status=ok
// SIG undefined FUN_141058760(void)

void FUN_141058760(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FUN_142f113c0(*(longlong *)(param_1 + 0x6c8),
                  (double)(*(float *)(param_1 + 0x6e4) * *(float *)(param_1 + 0x6e0)));
    FUN_142f0da80(*(undefined8 *)(param_1 + 0x6c8),
                  (double)(*(float *)(param_1 + 0x6e8) * *(float *)(param_1 + 0x6e0)));
    return;
  }
  return;
}



// FUNCTION 1410587c0 FUN_1410587c0 body=675 status=ok
// SIG undefined FUN_1410587c0(void)

void FUN_1410587c0(longlong *param_1)

{
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  char local_res8 [8];
  longlong local_58 [2];
  undefined1 local_48 [64];
  
  if (((param_1[0xe0] != 0) && (param_1[0xe1] != 0)) &&
     (cVar2 = (**(code **)(*(longlong *)param_1[0xe1] + 0x18))(), cVar2 != '\0')) {
    plVar4 = (longlong *)0x0;
    if (param_1[0xe0] != 0) {
      plVar4 = (longlong *)param_1[0xe1];
    }
    (**(code **)(*plVar4 + 0x20))(plVar4,local_48);
    cVar2 = FUN_142d52a00(local_48);
    if (cVar2 != '\0') {
      local_res8[0] = '\x04';
      uVar3 = FUN_142d52a20(local_48);
      uVar3 = FArchive::operator<<(uVar3);
      FUN_142d62440(uVar3,local_res8);
      uVar3 = FUN_142d52a20(local_48);
      uVar3 = FArchive::operator<<(uVar3);
      fVar6 = (float)FUN_142d5fed0(uVar3);
      uVar3 = FUN_142d52a20(local_48);
      uVar3 = FArchive::operator<<(uVar3);
      fVar7 = (float)FUN_142d5fea0(uVar3);
      FUN_141066cf0(param_1,(int)ROUND(fVar6 * 2.0 + 0.5) >> 1,fVar7,local_res8[0]);
      if (local_res8[0] != *(char *)((longlong)param_1 + 0x6ff)) {
        if (local_res8[0] == '\0') {
          if (fVar7 <= 0.0) {
            *(undefined1 *)((longlong)param_1 + 0x6fd) = 1;
            FUN_1410533d0(param_1);
          }
        }
        else if (local_res8[0] == '\x02') {
          *(undefined1 *)((longlong)param_1 + 0x6fc) = 0;
          if (param_1[0xde] != 0) {
            local_58[0] = 0;
            local_58[1] = 0x10;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
            FGenericPlatformString::Memcpy(local_58[0],L"fullShieldFlash",0x20);
            FUN_142088910(param_1[0xde],local_58);
            if (local_58[0] != 0) {
              FMemory::Free();
            }
          }
          if (((int)param_1[0xd9] != 0) || (*(int *)((longlong)param_1 + 0x6cc) != 0)) {
            local_58[0] = 0;
            local_58[1] = 0;
            (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0xd9],local_58);
          }
        }
        else if ((local_res8[0] == '\x03') &&
                (*(undefined1 *)((longlong)param_1 + 0x6fc) = 0, pvVar1 = ThreadLocalStoragePointer,
                *(char *)((longlong)param_1 + 0x6fd) != '\0')) {
          uVar5 = (ulonglong)_tls_index;
          *(undefined1 *)((longlong)param_1 + 0x6fd) = 0;
          if ((*(int *)(*(longlong *)((longlong)pvVar1 + uVar5 * 8) + 0x38) < DAT_146873f18) &&
             (_Init_thread_header(&DAT_146873f18), DAT_146873f18 == -1)) {
            FName::FName(&DAT_146873f10,L"Shield_Power_Up",1);
            _Init_thread_footer(&DAT_146873f18);
          }
          local_58[0] = 0;
          local_58[1] = 0;
          (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146873f10,local_58);
        }
        *(char *)((longlong)param_1 + 0x6ff) = local_res8[0];
      }
    }
  }
  return;
}



// FUNCTION 141058a70 FUN_141058a70 body=177 status=ok
// SIG undefined FUN_141058a70(void)

void FUN_141058a70(longlong param_1)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    local_18[0] = 0;
    if (*(char *)(param_1 + 0x2f0) == '\0') {
      local_18[1] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18);
      uVar2 = 0xc;
      pwVar1 = L"empty";
    }
    else {
      local_18[1] = 4;
      if (*(int *)(param_1 + 0x300) == 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18);
        pwVar1 = L"two";
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18);
        pwVar1 = L"one";
      }
      uVar2 = 8;
    }
    FGenericPlatformString::Memcpy(local_18[0],pwVar1,uVar2);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x2e8),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141058b30 FUN_141058b30 body=59 status=ok
// SIG undefined FUN_141058b30(void)

void FUN_141058b30(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x184);
    *(undefined1 *)(lVar2 + 0x688) = 0;
    FUN_141066f40(lVar2);
    return;
  }
  return;
}



// FUNCTION 141058b70 FUN_141058b70 body=234 status=ok
// SIG undefined FUN_141058b70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141058b70(undefined8 param_1)

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
  local_68[0] = &LAB_141032550;
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



// FUNCTION 141058c60 FUN_141058c60 body=537 status=ok
// SIG undefined FUN_141058c60(void)

void FUN_141058c60(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  longlong *local_28;
  ulonglong local_20;
  
  plVar3 = (longlong *)FUN_140eccca0();
  if (plVar3 != (longlong *)0x0) {
    uVar4 = AGFireballProjectile::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x630) != 0)) {
      plVar8 = (longlong *)0x0;
      local_28 = (longlong *)0x0;
      local_20 = (ulonglong)(uint)local_20;
      plVar3 = plVar8;
      iVar9 = 0;
      if (&local_28 != (longlong **)(lVar5 + 0x550)) {
        uVar6 = *(uint *)(lVar5 + 0x558);
        plVar7 = *(longlong **)(lVar5 + 0x550);
        local_20 = (ulonglong)uVar6;
        if (uVar6 == 0) {
          plVar3 = (longlong *)0x0;
          iVar9 = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,uVar6,0);
          plVar3 = local_28;
          _guard_xfg_dispatch_icall_nop(local_28,plVar7,(longlong)(int)uVar6 << 3);
          iVar9 = (uint)local_20;
        }
      }
      plVar7 = plVar3;
      while ((plVar10 = plVar8, plVar7 != plVar3 + iVar9 &&
             ((plVar10 = (longlong *)*plVar7, plVar10 == (longlong *)0x0 ||
              (cVar2 = FUN_1409a7fb0(plVar10), cVar2 != '\x01'))))) {
        plVar7 = plVar7 + 1;
      }
      FUN_14105d3b0(param_1,plVar10,*(undefined8 *)(param_1 + 0x638));
      plVar7 = plVar3;
      while ((plVar10 = plVar8, plVar7 != plVar3 + iVar9 &&
             ((plVar10 = (longlong *)*plVar7, plVar10 == (longlong *)0x0 ||
              (cVar2 = FUN_1409a7fb0(plVar10), cVar2 != '\x02'))))) {
        plVar7 = plVar7 + 1;
      }
      FUN_14105d3b0(param_1,plVar10,*(undefined8 *)(param_1 + 0x640));
      if ((*(longlong *)(param_1 + 0x640) == 0) ||
         (*(longlong *)(*(longlong *)(param_1 + 0x640) + 0x1a8) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      local_28 = (longlong *)0x0;
      local_20 = 0;
      pwVar11 = L"oneSkill";
      if (bVar1) {
        pwVar11 = L"twoSkills";
      }
      if (*pwVar11 != L'\0') {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (pwVar11[lVar5] != L'\0');
        uVar6 = (int)lVar5 + 1;
        local_20 = (ulonglong)uVar6;
        if (0 < (int)uVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        }
        FGenericPlatformString::Memcpy(local_28,pwVar11,(longlong)(int)uVar6 * 2);
      }
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x630),&local_28);
      if (local_28 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (plVar3 != (longlong *)0x0) {
        FMemory::Free(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 141058e80 FUN_141058e80 body=1828 status=ok
// SIG undefined FUN_141058e80(void)

void FUN_141058e80(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  undefined4 in_stack_fffffffffffffed8;
  undefined2 uVar11;
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
  longlong local_88;
  longlong *local_80;
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
  
  uVar11 = (undefined2)((uint)in_stack_fffffffffffffed8 >> 0x10);
  if (*(longlong *)(param_1 + 0x458) == 0) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = *(char *)(*(longlong *)(param_1 + 0x458) + 0x34);
  }
  lVar7 = *(longlong *)(param_1 + 0x38);
  if (lVar7 == 0) {
LAB_141058efb:
    lVar7 = 0;
  }
  else {
    lVar3 = FUN_14139c4f0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (!bVar10) goto LAB_141058efb;
  }
  if (cVar2 == '\x03') {
    if ((*(longlong *)(param_1 + 0x378) != 0) && (*(longlong *)(param_1 + 0x380) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x380) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (0 < iVar9) goto LAB_141059501;
    }
    FUN_142085870(param_1,&local_88,L"Wings");
    local_70 = local_80;
    if (local_88 != 0) {
      if ((lVar7 == 0) || (cVar2 = FUN_142ebe120(lVar7), cVar2 == '\0')) {
        local_d8 = 0;
        local_d0 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_d8,5,&DAT_144675964,5,CONCAT22(uVar11,0x3f));
        local_e8 = (longlong *)0x0;
        local_e0 = 0;
        puVar4 = (undefined8 *)FUN_14202b6f0(local_88,local_48,"WingL",&local_d8,0,0,&local_e8);
        *(undefined8 *)(param_1 + 0x378) = *puVar4;
        plVar8 = (longlong *)puVar4[1];
        plVar6 = *(longlong **)(param_1 + 0x380);
        if (plVar8 != plVar6) {
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
            UNLOCK();
            plVar6 = *(longlong **)(param_1 + 0x380);
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar9 == 1) && (plVar6 != (longlong *)0x0)) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
          *(longlong **)(param_1 + 0x380) = plVar8;
        }
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
        plVar8 = local_e8;
        for (iVar9 = (int)local_e0; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 2;
        }
        lVar7 = local_d8;
        if (local_e8 != (longlong *)0x0) {
          FMemory::Free(local_e8);
          lVar7 = local_d8;
        }
      }
      else {
        local_f8 = 0;
        local_f0 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_f8,5,&DAT_1446741e4,5,CONCAT22(uVar11,0x3f));
        local_108 = (longlong *)0x0;
        local_100 = 0;
        puVar4 = (undefined8 *)FUN_14202b6f0(local_88,local_58,"WingLS",&local_f8,0,0,&local_108);
        *(undefined8 *)(param_1 + 0x378) = *puVar4;
        plVar8 = (longlong *)puVar4[1];
        plVar6 = *(longlong **)(param_1 + 0x380);
        if (plVar8 != plVar6) {
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
            UNLOCK();
            plVar6 = *(longlong **)(param_1 + 0x380);
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar9 == 1) && (plVar6 != (longlong *)0x0)) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
          *(longlong **)(param_1 + 0x380) = plVar8;
        }
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
        plVar8 = local_108;
        lVar7 = local_f8;
        for (iVar9 = (int)local_100; local_f8 = lVar7, iVar9 != 0; iVar9 = iVar9 + -1) {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 2;
          lVar7 = local_f8;
        }
        if (local_108 != (longlong *)0x0) {
          FMemory::Free(local_108);
          lVar7 = local_f8;
        }
      }
      local_70 = local_80;
      if (lVar7 != 0) {
        FMemory::Free();
        local_70 = local_80;
      }
    }
  }
  else {
    if (cVar2 != '\x04') goto LAB_141059501;
    if ((*(longlong *)(param_1 + 0x378) != 0) && (*(longlong *)(param_1 + 0x380) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x380) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (0 < iVar9) goto LAB_141059501;
    }
    FUN_142085870(param_1,&local_78,L"Wings");
    if (local_78 != 0) {
      if ((lVar7 == 0) || (cVar2 = FUN_142ebe120(lVar7), cVar2 == '\0')) {
        local_98 = 0;
        local_90 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_98,5,&DAT_1446779d4,5,CONCAT22(uVar11,0x3f));
        local_a8 = (longlong *)0x0;
        local_a0 = 0;
        puVar4 = (undefined8 *)FUN_14202b6f0(local_78,local_28,"WingR",&local_98,0,0,&local_a8);
        *(undefined8 *)(param_1 + 0x378) = *puVar4;
        plVar8 = (longlong *)puVar4[1];
        plVar6 = *(longlong **)(param_1 + 0x380);
        if (plVar8 != plVar6) {
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
            UNLOCK();
            plVar6 = *(longlong **)(param_1 + 0x380);
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar9 == 1) && (plVar6 != (longlong *)0x0)) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
          *(longlong **)(param_1 + 0x380) = plVar8;
        }
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_20 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar1 = (int *)((longlong)local_20 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_20 + 8))(local_20,1);
            }
          }
        }
        plVar8 = local_a8;
        for (iVar9 = (int)local_a0; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 2;
        }
        lVar7 = local_98;
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free(local_a8);
          lVar7 = local_98;
        }
      }
      else {
        local_b8 = 0;
        local_b0 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_b8,5,&DAT_1446772d4,5,CONCAT22(uVar11,0x3f));
        local_c8 = (longlong *)0x0;
        local_c0 = 0;
        puVar4 = (undefined8 *)FUN_14202b6f0(local_78,local_38,"WingRS",&local_b8,0,0,&local_c8);
        *(undefined8 *)(param_1 + 0x378) = *puVar4;
        plVar8 = (longlong *)puVar4[1];
        plVar6 = *(longlong **)(param_1 + 0x380);
        if (plVar8 != plVar6) {
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
            UNLOCK();
            plVar6 = *(longlong **)(param_1 + 0x380);
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar9 == 1) && (plVar6 != (longlong *)0x0)) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
          *(longlong **)(param_1 + 0x380) = plVar8;
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
        plVar8 = local_c8;
        lVar7 = local_b8;
        for (iVar9 = (int)local_c0; local_b8 = lVar7, iVar9 != 0; iVar9 = iVar9 + -1) {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 2;
          lVar7 = local_b8;
        }
        if (local_c8 != (longlong *)0x0) {
          FMemory::Free(local_c8);
          lVar7 = local_b8;
        }
      }
      if (lVar7 != 0) {
        FMemory::Free();
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
LAB_141059501:
  plVar8 = *(longlong **)(param_1 + 0x380);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    iVar9 = (int)plVar8[1];
    bVar10 = iVar9 == 0;
    if (bVar10) {
      *(int *)(plVar8 + 1) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    while (!bVar10) {
      LOCK();
      bVar10 = iVar9 == (int)plVar8[1];
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar9 + 1;
      }
      UNLOCK();
      if (bVar10) {
        lVar7 = *(longlong *)(param_1 + 0x378);
        local_68 = lVar7;
        local_60 = plVar8;
        if (lVar7 != 0) {
          uVar5 = FUN_141039360(param_1);
          FUN_14203e230(lVar7,uVar5);
        }
        plVar6 = local_60;
        LOCK();
        plVar8 = plVar8 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 != 1) {
          return;
        }
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 != 1) {
          return;
        }
        (**(code **)(*local_60 + 8))(local_60,1);
        return;
      }
      LOCK();
      iVar9 = (int)plVar8[1];
      bVar10 = iVar9 == 0;
      if (bVar10) {
        *(int *)(plVar8 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 1410595b0 FUN_1410595b0 body=767 status=ok
// SIG undefined FUN_1410595b0(void)

void FUN_1410595b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_38;
  undefined8 local_30;
  
  lVar1 = param_1 + 0x184;
  cVar3 = FWeakObjectPtr::IsValid(lVar1);
  if (cVar3 != '\0') {
    if (*(int *)(param_1 + 0x220) < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = **(undefined8 **)(param_1 + 0x218);
    }
    lVar10 = *(longlong *)(param_1 + 0x248);
    local_38 = lVar10;
    if (lVar10 == 0) {
      local_30 = 0;
    }
    else {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar10,uVar4);
    }
    uVar4 = FWeakObjectPtr::Get(lVar1);
    FUN_142ecfdd0(uVar4,&local_38,0,0,0,uVar5);
    iVar7 = *(int *)(param_1 + 0x220);
    if (0 < iVar7) {
      if (iVar7 < 2) {
        lVar10 = 0;
      }
      else {
        lVar10 = (*(longlong **)(param_1 + 0x218))[1];
      }
      lVar11 = **(longlong **)(param_1 + 0x218);
      local_38 = lVar11;
      if (lVar11 == 0) {
        local_30 = 0;
      }
      else {
        uVar5 = UBlendableInterface::GetPrivateStaticClass();
        local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar5);
      }
      uVar5 = FWeakObjectPtr::Get(lVar1);
      FUN_142ecfdd0(uVar5,&local_38,0,*(undefined8 *)(param_1 + 0x250),
                    *(undefined8 *)(param_1 + 0x248),lVar10);
      lVar10 = **(longlong **)(param_1 + 0x218);
      local_38 = lVar10;
      if (lVar10 == 0) {
        local_30 = 0;
      }
      else {
        uVar5 = UBlendableInterface::GetPrivateStaticClass();
        local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar10,uVar5);
      }
      uVar5 = FWeakObjectPtr::Get(lVar1);
      FUN_142ed36d0(uVar5,&local_38,0);
      iVar7 = *(int *)(param_1 + 0x220);
    }
    if (1 < (longlong)iVar7) {
      iVar9 = 2;
      lVar10 = 1;
      lVar11 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x220);
        if ((lVar10 < 0) || (iVar2 <= iVar9 + -1)) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 8 + lVar11);
        }
        if ((iVar9 < 0) || (iVar2 <= iVar9)) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x218) + 0x10 + lVar11);
        }
        if ((iVar9 + -1 < 1) || (iVar2 <= iVar9 + -2)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)(lVar11 + *(longlong *)(param_1 + 0x218));
        }
        local_30 = 0;
        local_38 = lVar8;
        if (lVar8 == 0) {
          local_30 = 0;
        }
        else {
          uVar6 = UBlendableInterface::GetPrivateStaticClass();
          local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar6);
        }
        uVar6 = FWeakObjectPtr::Get(lVar1);
        FUN_142ecfdd0(uVar6,&local_38,0,*(undefined8 *)(param_1 + 0x250),uVar4,uVar5);
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 8;
      } while (lVar10 < iVar7);
      iVar7 = *(int *)(param_1 + 0x220);
    }
    if (iVar7 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = **(undefined8 **)(param_1 + 0x218);
    }
    lVar10 = *(longlong *)(param_1 + 0x250);
    local_38 = lVar10;
    if (lVar10 == 0) {
      local_30 = 0;
    }
    else {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar10,uVar4);
    }
    uVar4 = FWeakObjectPtr::Get(lVar1);
    FUN_142ecfdd0(uVar4,&local_38,uVar5,0,*(undefined8 *)(param_1 + 0x248),0);
  }
  return;
}



// FUNCTION 1410598b0 FUN_1410598b0 body=566 status=ok
// SIG undefined FUN_1410598b0(void)

void FUN_1410598b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong local_18;
  undefined8 local_10;
  
  lVar1 = param_1 + 0x184;
  cVar3 = FWeakObjectPtr::IsValid(lVar1);
  if (cVar3 != '\0') {
    uVar5 = 0;
    lVar2 = *(longlong *)(param_1 + 0x200);
    local_10 = uVar5;
    local_18 = lVar2;
    if (lVar2 != 0) {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar4);
    }
    uVar4 = FWeakObjectPtr::Get(lVar1);
    FUN_142ecfdd0(uVar4,&local_18,0,*(undefined8 *)(param_1 + 0x208),0,0);
    lVar2 = *(longlong *)(param_1 + 0x208);
    uVar4 = uVar5;
    local_18 = lVar2;
    if (lVar2 != 0) {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      uVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar4);
    }
    local_10 = uVar4;
    uVar4 = FWeakObjectPtr::Get(lVar1);
    FUN_142ecfdd0(uVar4,&local_18,*(undefined8 *)(param_1 + 0x200),*(undefined8 *)(param_1 + 0x210),
                  0,0);
    lVar2 = *(longlong *)(param_1 + 0x210);
    uVar4 = uVar5;
    local_18 = lVar2;
    if (lVar2 != 0) {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      uVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar4);
    }
    local_10 = uVar4;
    uVar4 = FWeakObjectPtr::Get(lVar1);
    FUN_142ecfdd0(uVar4,&local_18,*(undefined8 *)(param_1 + 0x208),*(undefined8 *)(param_1 + 0x1f8),
                  0,0);
    lVar2 = *(longlong *)(param_1 + 0x1f8);
    uVar4 = uVar5;
    local_18 = lVar2;
    if (lVar2 != 0) {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      uVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar4);
    }
    local_10 = uVar4;
    uVar4 = FWeakObjectPtr::Get(lVar1);
    FUN_142ecfdd0(uVar4,&local_18,*(undefined8 *)(param_1 + 0x210),*(undefined8 *)(param_1 + 0x218),
                  0,0);
    lVar2 = *(longlong *)(param_1 + 0x218);
    uVar4 = uVar5;
    local_18 = lVar2;
    if (lVar2 != 0) {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      uVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar4);
    }
    local_10 = uVar4;
    uVar4 = FWeakObjectPtr::Get(lVar1);
    FUN_142ecfdd0(uVar4,&local_18,*(undefined8 *)(param_1 + 0x1f8),0,0,0);
    lVar2 = *(longlong *)(param_1 + 0x200);
    local_18 = lVar2;
    if (lVar2 != 0) {
      uVar5 = UBlendableInterface::GetPrivateStaticClass();
      uVar5 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar5);
    }
    local_10 = uVar5;
    uVar5 = FWeakObjectPtr::Get(lVar1);
    FUN_142ed36d0(uVar5,&local_18,0);
  }
  return;
}



// FUNCTION 141059af0 FUN_141059af0 body=216 status=ok
// SIG undefined FUN_141059af0(void)

void FUN_141059af0(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x40);
    iVar3 = param_3;
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
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x40),
                 (void *)((longlong)(param_2 + param_3) * 0x40 + *param_1),(longlong)iVar1 << 6);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141059bd0 RemoveAtImpl body=188 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
     ::RemoveAtImpl(longlong *param_1,int param_2,int param_3,char param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)(*param_1 + (longlong)param_2 * 8);
    iVar4 = param_3;
    do {
      puVar1 = (undefined8 *)*plVar3;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar3 = plVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = (int)param_1[1];
    iVar2 = (iVar4 - param_2) - param_3;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 8),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 8),(longlong)iVar2 << 3);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 - param_3;
    if (param_4 != '\0') {
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141059c90 Reset body=210 status=ok
// SIG undefined Reset(void)

void TArray<FEdgeLoop,TSizedDefaultAllocator<32>_>::Reset(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x18);
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
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x18);
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
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 141059d70 FUN_141059d70 body=266 status=ok
// SIG undefined FUN_141059d70(void)

void FUN_141059d70(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_2 + 0x418);
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2b0))(plVar1,param_4,1,0,param_3,param_4,param_5,0);
    }
    FUN_14105bca0(param_2,param_5);
    uVar2 = FUN_1404b03b0();
    FUN_142ed51f0(param_2,uVar2,1);
    if (*(int *)(param_2 + 0x428) - 1U < 3) {
      FUN_142ed2820(param_2,0,1);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_78);
  }
  return;
}



// FUNCTION 141059e80 FUN_141059e80 body=197 status=ok
// SIG undefined FUN_141059e80(void)

void FUN_141059e80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((param_2 != 0) && (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x184), cVar4 != '\0')) {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x184);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"E-mail",L"SHiFTMenuPage",L"EmailText");
    FUN_141059d70(param_1,param_2,1,uVar6,lVar5 + 0x710);
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
  return;
}



// FUNCTION 141059f50 FUN_141059f50 body=252 status=ok
// SIG undefined FUN_141059f50(void)

void FUN_141059f50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  plVar4 = *(longlong **)(param_1 + 0x218);
  uVar6 = (longlong)*(int *)(param_1 + 0x220) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x220) < plVar4) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        uVar2 = FUN_1404b03b0();
        uVar3 = FUN_1404b03b0();
        FUN_141059d70(param_1,lVar1,4,uVar3,uVar2);
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  plVar4 = *(longlong **)(param_1 + 0x228);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x278))(plVar4,0);
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x250) + 0x170);
    (**(code **)(*plVar4 + 0x38))(plVar4,0);
  }
  plVar4 = *(longlong **)(param_1 + 0x200);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014105a040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x278))(plVar4,0);
  return;
}



// FUNCTION 14105a050 FUN_14105a050 body=442 status=ok
// SIG undefined FUN_14105a050(void)

void FUN_14105a050(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FUN_141059e80(param_1,*(undefined8 *)(param_1 + 0x200));
  lVar3 = *(longlong *)(param_1 + 0x208);
  if (lVar3 != 0) {
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x184);
    if (cVar4 != '\0') {
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x184);
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_38,L"Password",L"SHiFTMenuPage",L"PasswordText");
      FUN_141059d70(param_1,lVar3,3,uVar6,lVar5 + 0x740);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_30 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
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
  }
  lVar3 = *(longlong *)(param_1 + 0x210);
  if (lVar3 != 0) {
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x184);
    if (cVar4 != '\0') {
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x184);
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_20,L"Confirm Password",L"SHiFTMenuPage",L"ConfirmPasswordText");
      FUN_141059d70(param_1,lVar3,2,uVar6,lVar5 + 0x758);
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_18 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
    }
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_142ed2820(*(longlong *)(param_1 + 0x1f8),0,1);
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x218) + 0x170);
                    /* WARNING: Could not recover jumptable at 0x00014105a201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x38))(plVar7,0);
    return;
  }
  return;
}



// FUNCTION 14105a210 FUN_14105a210 body=83 status=ok
// SIG undefined FUN_14105a210(void)

void FUN_14105a210(longlong param_1)

{
  longlong *plVar1;
  
  FUN_141059e80(param_1,*(undefined8 *)(param_1 + 0x1f8));
  plVar1 = *(longlong **)(param_1 + 0x200);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x278))(plVar1,0);
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x208) + 0x170);
                    /* WARNING: Could not recover jumptable at 0x00014105a259. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 14105a270 FUN_14105a270 body=88 status=ok
// SIG undefined FUN_14105a270(void)

void FUN_14105a270(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_141032980();
  plVar2 = *(longlong **)(param_1 + 0x210);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x278))(plVar2,cVar1 == '\0');
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x238) + 0x170);
    (**(code **)(*plVar2 + 0x38))(plVar2,cVar1);
  }
  return;
}



// FUNCTION 14105a2d0 FUN_14105a2d0 body=262 status=ok
// SIG undefined FUN_14105a2d0(void)

void FUN_14105a2d0(longlong param_1,int param_2,char param_3,char param_4)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  
  fVar1 = *(float *)(param_1 + 0x3c);
  uVar4 = FUN_14103fac0(param_1,*(undefined4 *)(param_1 + 0x5c));
  iVar2 = *(int *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0x88);
  if (0 < iVar2) {
    iVar5 = (iVar5 - iVar2) / iVar2;
  }
  if (param_4 == '\0') {
    FUN_142f0ee50(param_1 + 0x20);
    if (param_3 != '\0') {
      cVar3 = FUN_142f13060(param_1 + 0x20);
      if (cVar3 != '\0') {
        FUN_141066b10(param_1);
      }
      iVar5 = FUN_141032d00(param_1,uVar4);
      iVar2 = *(int *)(param_1 + 0x9c);
      if ((iVar2 != -1) && (iVar2 < iVar5)) {
        iVar5 = iVar2;
      }
      FUN_14105bee0(param_1,iVar5);
    }
  }
  else {
    FUN_142f0ced0(param_1 + 0x20,(float)param_2 * *(float *)(param_1 + 0x90) * (float)iVar5 + fVar1)
    ;
    if (param_3 != '\0') {
      iVar2 = *(int *)(param_1 + 0x54);
      iVar5 = *(int *)(param_1 + 0x88);
      if (0 < iVar2) {
        iVar5 = (iVar5 - iVar2) / iVar2;
      }
      FUN_14103fb50(param_1,iVar2 * iVar5 * param_2);
    }
  }
  return;
}



// FUNCTION 14105a3e0 FUN_14105a3e0 body=262 status=ok
// SIG undefined FUN_14105a3e0(void)

void FUN_14105a3e0(longlong param_1,ulonglong param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar5 = (int)param_2;
  if (-1 < iVar5) {
    iVar1 = *(int *)(param_1 + 0x54);
    uVar6 = param_2 & 0xffffffff;
    iVar7 = 1;
    if ((*(int *)(param_1 + 0x58) < 1) || (iVar1 < 1)) {
      iVar4 = 1;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x58) + -1 + iVar1;
      iVar4 = iVar2 / iVar1;
      param_2 = (longlong)iVar2 % (longlong)iVar1 & 0xffffffff;
    }
    iVar2 = *(int *)(param_1 + 0x88);
    if (0 < iVar1) {
      iVar3 = iVar2 - iVar1;
      iVar2 = iVar3 / iVar1;
      param_2 = (longlong)iVar3 % (longlong)iVar1 & 0xffffffff;
    }
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    if (iVar5 < iVar2 * iVar1) {
      if (0 < iVar1) {
        uVar6 = (ulonglong)(uint)(iVar5 >> 0x1f) << 0x20 | uVar6;
        param_2 = (longlong)uVar6 % (longlong)iVar1 & 0xffffffff;
        iVar7 = (int)((longlong)uVar6 / (longlong)iVar1);
      }
      fVar10 = (float)iVar7 * *(float *)(param_1 + 0x90);
      fVar9 = *(float *)(param_1 + 0x90) + fVar10;
      fVar8 = (float)FUN_142eedeb0(param_1 + 0x20,param_2);
      if ((fVar8 <= fVar10) && (fVar10 = fVar8, *(float *)(param_1 + 0x40) + fVar8 < fVar9)) {
        fVar10 = fVar9 - *(float *)(param_1 + 0x40);
      }
      if (param_3 != '\0') {
        FUN_142f0ee50();
        return;
      }
      FUN_142f0ced0(param_1 + 0x20,fVar10);
    }
  }
  return;
}



// FUNCTION 14105a4f0 FUN_14105a4f0 body=114 status=ok
// SIG undefined FUN_14105a4f0(void)

void FUN_14105a4f0(undefined8 param_1,byte param_2,longlong param_3)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = -1;
  if (param_3 != 0) {
    iVar1 = FUN_141035dd0(param_1,param_3);
  }
  uVar2 = 1;
  if (param_3 != 0) {
    if (*(longlong *)(param_3 + 0x458) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = *(undefined1 *)(*(longlong *)(param_3 + 0x458) + 0x34);
    }
  }
  FUN_14105a570(param_1,param_2,(uint)param_2 * 2 + -1 + iVar1,uVar2);
  return;
}



// FUNCTION 14105a570 FUN_14105a570 body=515 status=ok
// SIG undefined FUN_14105a570(void)

undefined8 FUN_14105a570(longlong *param_1,undefined8 param_2,int param_3,char param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong local_38;
  undefined8 local_30;
  
  uVar12 = (ulonglong)param_3;
  cVar8 = (char)param_2;
  lVar10 = uVar12 << 5;
  plVar7 = param_1;
  uVar13 = uVar12;
  do {
    iVar11 = (int)uVar13;
    if (((longlong)uVar12 < 0) || ((int)param_1[0x50] <= iVar11)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    lVar1 = *(longlong *)(lVar10 + 0x18 + param_1[0x4f]);
    if (lVar1 != 0) {
      lVar3 = FUN_141397a70(plVar7,param_2);
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
        if (param_4 == '\0') {
          piVar6 = &DAT_144679f08;
        }
        else if (param_4 == '\x01') {
          piVar6 = &DAT_144679f20;
        }
        else if (param_4 == '\x02') {
          piVar6 = &DAT_144679f38;
        }
        else if (param_4 == '\x03') {
          piVar6 = &DAT_144679ef0;
        }
        else {
          if (param_4 != '\x04') goto LAB_14105a68c;
          piVar6 = &DAT_144679f50;
        }
        iVar9 = 0;
        do {
          lVar3 = *(longlong *)(lVar1 + 0x308 + (longlong)*piVar6 * 8);
          if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x458) != 0)) {
            if (lVar3 != 0) {
              lVar10 = param_1[7];
              if (lVar10 != 0) {
                lVar4 = UInputKeySelector::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  (**(code **)(*param_1 + 0x2e8))(param_1,lVar1,0);
                  local_30 = 0;
                  local_38 = lVar3;
                  uVar5 = UBlendableInterface::GetPrivateStaticClass();
                  local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar5);
                  FUN_142ed36d0(lVar10,&local_38,0);
                }
              }
              return 1;
            }
            break;
          }
          iVar9 = iVar9 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar9 < 5);
      }
    }
LAB_14105a68c:
    if (cVar8 == '\0') {
      plVar7 = (longlong *)0xffffffff;
      lVar10 = lVar10 + -0x20;
      uVar13 = (ulonglong)(iVar11 - 1);
      param_2 = 0xffffffffffffffff;
      uVar12 = uVar12 - 1;
    }
    else {
      plVar7 = (longlong *)0x1;
      lVar10 = lVar10 + 0x20;
      uVar13 = (ulonglong)(iVar11 + 1);
      uVar12 = uVar12 + 1;
      param_2 = 1;
    }
  } while( true );
}



// FUNCTION 14105a780 FUN_14105a780 body=1135 status=ok
// SIG undefined FUN_14105a780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14105a780(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong local_158;
  longlong *plStack_150;
  longlong local_148;
  longlong *plStack_140;
  longlong local_138 [4];
  longlong local_118 [4];
  longlong *local_f8;
  undefined1 local_f0 [32];
  longlong *local_d0;
  longlong local_c8 [4];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  longlong local_48 [6];
  
  if ((param_2 != 0) && ((*(char *)(*param_1 + 0x10) == '\0' || (param_4 == 0)))) {
    if ((DAT_146873e58 == '\0') &&
       (puVar5 = (undefined8 *)FUN_141037370(), puVar5 != &DAT_146873e30)) {
      DAT_146873e30 = *puVar5;
      _DAT_146873e38 = puVar5[1];
      _DAT_146873e40 = puVar5[2];
      DAT_146873e48 = (longlong *)puVar5[3];
      DAT_146873e50 = (longlong *)puVar5[4];
      DAT_146873e58 = '\x01';
    }
    cVar4 = FUN_142190080(DAT_146873e30);
    if ((cVar4 != '\0') && (cVar4 = FUN_142194620(DAT_146873e30), cVar4 != '\0')) {
      FUN_142190c10(&local_148,DAT_146873e30);
      lVar8 = *(longlong *)(local_148 + 0xc0);
      if (*(longlong *)(local_148 + 0xc0) == 0) {
        lVar8 = local_148 + 0x20;
      }
      plVar6 = (longlong *)FUN_140aa2bd0(lVar8);
      FUN_14217e740(local_138);
      FUN_142194380(local_138,0x28,0,0,0);
      local_138[0] = param_2;
      FUN_1421923f0(local_a8,DAT_146873e00,local_138);
      FUN_140bfb300(plVar6,&DAT_146873e38,local_a8);
      FUN_14217f430(local_a8);
      FUN_14217f430(local_138);
      FUN_14217e740(local_118);
      FUN_142194380(local_118,0x28,0,0,0);
      local_118[0] = param_2;
      FUN_1421923f0(local_88,DAT_146873e08,local_118);
      FUN_140bfb300(plVar6,&DAT_146873e40,local_88);
      FUN_14217f430(local_88);
      FUN_14217f430(local_118);
      local_158 = 0;
      if ((*DAT_146873e48 != 0) && (cVar4 = FUN_1407ce010(DAT_146873e48 + 1), cVar4 != '\0')) {
        plVar10 = (longlong *)*plVar6;
        plVar2 = plVar10 + (longlong)(int)plVar6[1] * 5;
        if (plVar10 != plVar2) {
          do {
            if ((*(longlong *)*plVar10 == *DAT_146873e48) &&
               (*(longlong *)(((longlong *)*plVar10)[1] + 0x28) ==
                *(longlong *)(DAT_146873e48[1] + 0x28))) {
              uVar7 = FViewMatrices::FViewMatrices(local_68,param_3);
              FUN_14217f450(plVar10 + 1,uVar7);
              puVar9 = local_68;
              goto LAB_14105aa13;
            }
            plVar10 = plVar10 + 5;
          } while (plVar10 != plVar2);
        }
        local_f8 = DAT_146873e48;
        FViewMatrices::FViewMatrices(local_f0,param_3);
        iVar3 = (int)plVar6[1];
        *(int *)(plVar6 + 1) = iVar3 + 1;
        if (*(int *)((longlong)plVar6 + 0xc) < iVar3 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar6,iVar3);
        }
        puVar5 = (undefined8 *)(*plVar6 + (longlong)iVar3 * 0x28);
        *puVar5 = local_f8;
        FUN_14217e5b0(puVar5 + 1,local_f0);
        puVar9 = local_f0;
LAB_14105aa13:
        FUN_14217f430(puVar9);
      }
      uVar7 = FUN_141062ee0(param_4);
      local_158 = 0;
      if ((*DAT_146873e50 != 0) && (cVar4 = FUN_1407ce010(DAT_146873e50 + 1), cVar4 != '\0')) {
        plVar10 = (longlong *)*plVar6;
        plVar2 = plVar10 + (longlong)(int)plVar6[1] * 5;
        if (plVar10 != plVar2) {
          do {
            if ((*(longlong *)*plVar10 == *DAT_146873e50) &&
               (*(longlong *)(((longlong *)*plVar10)[1] + 0x28) ==
                *(longlong *)(DAT_146873e50[1] + 0x28))) {
              uVar7 = FUN_14217e610(local_48,uVar7);
              FUN_14217f450(plVar10 + 1,uVar7);
              plVar6 = local_48;
              goto LAB_14105aae4;
            }
            plVar10 = plVar10 + 5;
          } while (plVar10 != plVar2);
        }
        local_d0 = DAT_146873e50;
        FUN_14217e610(local_c8,uVar7);
        iVar3 = (int)plVar6[1];
        *(int *)(plVar6 + 1) = iVar3 + 1;
        if (*(int *)((longlong)plVar6 + 0xc) < iVar3 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar6,iVar3);
        }
        puVar5 = (undefined8 *)(*plVar6 + (longlong)iVar3 * 0x28);
        *puVar5 = local_d0;
        FUN_14217e5b0(puVar5 + 1,local_c8);
        plVar6 = local_c8;
LAB_14105aae4:
        FUN_14217f430(plVar6);
      }
      cVar4 = FUN_14218a740(&local_148,1);
      if (cVar4 != '\0') {
        local_158 = local_148;
        plStack_150 = plStack_140;
        if (plStack_140 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
          UNLOCK();
        }
        FUN_142194040(&local_158);
        plVar6 = plStack_150;
        if (plStack_150 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_150 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_150)(plStack_150);
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
      if (plStack_140 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_140 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_140)(plStack_140);
          LOCK();
          piVar1 = (int *)((longlong)plStack_140 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_140 + 8))(plStack_140,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14105abf0 FUN_14105abf0 body=47 status=ok
// SIG undefined FUN_14105abf0(void)

void FUN_14105abf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x108) != 0) && (lVar1 = *(longlong *)(param_1 + 0x110), lVar1 != 0))
  {
    LOCK();
    iVar2 = *(int *)(lVar1 + 8);
    if (iVar2 == 0) {
      *(int *)(lVar1 + 8) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      UMistDebugEntityScreen::InspectEntity
                (param_1 + 0x100,param_2,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
      return;
    }
  }
  return;
}



// FUNCTION 14105ac20 FUN_14105ac20 body=281 status=ok
// SIG undefined FUN_14105ac20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14105ac20(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78 [4];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  *(undefined1 *)(param_1 + 0x304) = param_2;
  local_78[0] = 0xffffffff;
  uVar2 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FUN_14170c210(local_78);
    uVar2 = local_78[0];
  }
  local_78[0] = 0xffffffff;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14467a500;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    uVar2 = 0xffffffff;
    *(undefined1 *)((longlong)puVar1 + 0xc) = param_2;
  }
  local_68[0] = FUN_141032090;
  FUN_14208c9c0(param_1,local_68);
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
  FUN_1416f8340(uVar2);
  FUN_1416f8340(local_78[0]);
  return;
}



// FUNCTION 14105ad40 FUN_14105ad40 body=610 status=ok
// SIG undefined FUN_14105ad40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14105ad40(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
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
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    local_d8[0] = 0xffffffff;
    FUN_14170c210(local_d8);
    uVar4 = local_d8[0];
    local_d8[0] = 0xffffffff;
    local_98 = (longlong *)0x0;
    local_88 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_144266c70;
      puVar2[1] = param_1;
      *(undefined4 *)(puVar2 + 2) = uVar4;
      uVar4 = 0xffffffff;
    }
    local_c8[0] = FUN_1410320f0;
    uVar3 = FUN_1420849a0(param_1,local_78,local_c8);
    FUN_14208c300(param_1,uVar3);
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
    if (local_88 != 0) {
      plVar5 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar5 = local_98;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar4);
    FUN_1416f8340(local_d8[0]);
  }
  uVar1 = 0;
  *(longlong *)(param_1 + 0x2f8) = param_2;
  if (param_2 != 0) {
    local_d8[0] = 0xffffffff;
    FUN_14170c210(local_d8,param_2);
    uVar4 = local_d8[0];
    local_d8[0] = 0xffffffff;
    local_98 = (longlong *)0x0;
    local_88 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_144266c70;
      puVar2[1] = param_1;
      *(undefined4 *)(puVar2 + 2) = uVar4;
      uVar4 = 0xffffffff;
    }
    local_c8[0] = (code *)&LAB_1410321b0;
    uVar3 = FUN_1420849a0(param_1,local_78,local_c8);
    FUN_14208c300(param_1,uVar3);
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
    if (local_88 != 0) {
      plVar5 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar5 = local_98;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar4);
    FUN_1416f8340(local_d8[0]);
    uVar1 = FOpenXRHMD::IsStereoEnabled(*(undefined8 *)(param_1 + 0x2f8));
  }
  FUN_14105ac20(param_1,uVar1);
  return;
}



// FUNCTION 14105afb0 FUN_14105afb0 body=316 status=ok
// SIG undefined FUN_14105afb0(void)

void FUN_14105afb0(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  puVar1 = (undefined4 *)(param_1 + 0x308);
  cVar6 = FUN_142d52a00(puVar1);
  if (cVar6 != '\0') {
    uVar7 = FUN_142d52a20(puVar1);
    uVar7 = FArchive::operator<<(uVar7);
    uVar7 = FUN_142d621c0(uVar7);
    FUN_140483870(uVar7,param_1);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar7 = *(undefined8 *)(param_2 + 4);
  *puVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x30c) = uVar3;
  *(undefined4 *)(param_1 + 0x310) = uVar4;
  *(undefined4 *)(param_1 + 0x314) = uVar5;
  *(undefined8 *)(param_1 + 0x318) = uVar7;
  cVar6 = FUN_142d52a00(puVar1);
  if (cVar6 != '\0') {
    uVar7 = FUN_142d52a20(puVar1);
    uVar7 = FArchive::operator<<(uVar7);
    plVar8 = (longlong *)FUN_142d621c0(uVar7);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_144213d80;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      *(undefined4 *)(plVar9 + 2) = 0x41040be0;
      *(undefined4 *)((longlong)plVar9 + 0x14) = 1;
      *(undefined4 *)(plVar9 + 3) = 0;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_c;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar10;
      *plVar9 = (longlong)&PTR_FUN_144213dc8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
      (**(code **)(*plVar9 + 0x20))(plVar9,local_res8);
      iVar2 = (int)plVar8[1];
      *(int *)(plVar8 + 1) = iVar2 + 1;
      if (*(int *)((longlong)plVar8 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar2);
      }
      puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar8);
      *puVar11 = plVar9;
      *(undefined4 *)(puVar11 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 14105b0f0 FUN_14105b0f0 body=317 status=ok
// SIG undefined FUN_14105b0f0(void)

void FUN_14105b0f0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 2000);
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
          lVar4 = *(longlong *)(param_1 + 0x7c8);
          if (lVar4 != 0) {
            FUN_142056670(lVar4,param_2);
            FUN_14203e030(lVar4,&DAT_144660c74);
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
  plVar3 = *(longlong **)(param_1 + 0x7e0);
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
        if (*(longlong *)(param_1 + 0x7d8) != 0) {
          FUN_142056670(*(longlong *)(param_1 + 0x7d8),param_2);
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



// FUNCTION 14105b230 FUN_14105b230 body=1231 status=ok
// SIG undefined FUN_14105b230(void)

void FUN_14105b230(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  bool bVar11;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar7 = 0;
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    cVar4 = FUN_14208d2d0(*(longlong *)(param_1 + 0x2d8),param_1 + 800,L"branchHeaderBG");
    if (cVar4 != '\0') {
      FUN_14203e230(*(undefined8 *)(param_1 + 800),param_1 + 0x3d8);
    }
    cVar4 = FUN_14208d2d0(*(undefined8 *)(param_1 + 0x2d8),param_1 + 0x330,L"branchFooterBG");
    if (cVar4 != '\0') {
      FUN_14203e230(*(undefined8 *)(param_1 + 0x330),param_1 + 0x3d8);
    }
    cVar4 = FUN_14208d2d0(*(undefined8 *)(param_1 + 0x2d8),param_1 + 0x340,L"branchDarkBG");
    if (cVar4 != '\0') {
      FUN_14203e230(*(undefined8 *)(param_1 + 0x340),param_1 + 0x3d8);
    }
    cVar4 = FUN_14208d2d0(*(undefined8 *)(param_1 + 0x2d8),param_1 + 0x350,L"glowBG");
    if (cVar4 != '\0') {
      FUN_14203e230(*(undefined8 *)(param_1 + 0x350),param_1 + 0x3d8);
    }
    cVar4 = FUN_14208d2d0(*(undefined8 *)(param_1 + 0x2d8),param_1 + 0x360,L"branchFillBG");
    if (cVar4 != '\0') {
      FUN_14203e230(*(undefined8 *)(param_1 + 0x360),param_1 + 0x3d8);
    }
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    cVar4 = FUN_14208d2d0(*(longlong *)(param_1 + 0x310),param_1 + 0x370,L"fill.branchFillColors");
    if (cVar4 != '\0') {
      FUN_14203e230(*(undefined8 *)(param_1 + 0x370),param_1 + 0x3d8);
    }
    cVar4 = FUN_14208d2d0(*(undefined8 *)(param_1 + 0x310),param_1 + 0x380,
                          L"fill.branchFillHighlight");
    if (cVar4 != '\0') {
      FUN_14203e230(*(undefined8 *)(param_1 + 0x380),param_1 + 0x3d8);
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x3a8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar6[1];
    bVar11 = iVar5 == 0;
    if (bVar11) {
      *(int *)(plVar6 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar11) {
      LOCK();
      bVar11 = iVar5 == (int)plVar6[1];
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar11) {
        if (plVar6 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x3a0) != 0) {
            FUN_14203e230(*(longlong *)(param_1 + 0x3a0),param_1 + 0x3d8);
          }
          LOCK();
          plVar2 = plVar6 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
        break;
      }
      LOCK();
      iVar5 = (int)plVar6[1];
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(plVar6 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  bVar11 = *(longlong *)(param_1 + 0x2d8) == 0;
  if (bVar11) {
    plVar6 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)FUN_142085870(*(longlong *)(param_1 + 0x2d8),local_38,L"branchName");
    lVar7 = *plVar6;
  }
  local_48 = lVar7;
  local_40 = (longlong *)plVar6[1];
  plVar6[1] = 0;
  *plVar6 = 0;
  plVar6 = plStack_50;
  if ((bVar11) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_50 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  if ((!bVar11) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar6 = local_30 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
    FUN_142ede330(param_1 + 0x2f8,&local_48);
    FUN_142f0bf30(param_1 + 0x2f8,param_1 + 1000,1);
  }
  plVar6 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
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
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    if ((*(longlong *)(param_1 + 0x300) != 0) && (*(longlong *)(param_1 + 0x308) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x308) + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        UMistDebugEntityScreen::InspectEntity
                  (param_1 + 0x2f8,*(longlong *)(param_1 + 0x2f0) + 0x30,1,0);
      }
    }
    plVar6 = *(longlong **)(param_1 + 0x3a8);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar6[1];
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(plVar6 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (!bVar11) {
        LOCK();
        bVar11 = iVar5 == (int)plVar6[1];
        if (bVar11) {
          *(int *)(plVar6 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar11) {
          if (plVar6 == (longlong *)0x0) {
            return;
          }
          if (*(longlong *)(param_1 + 0x3a0) != 0) {
            if (*(int *)(*(longlong *)(param_1 + 0x2f0) + 0xa0) == 0) {
              puVar10 = &DAT_143f3eda8;
            }
            else {
              puVar10 = *(undefined2 **)(*(longlong *)(param_1 + 0x2f0) + 0x98);
            }
            puVar8 = (undefined8 *)FUN_1420392d0(*(longlong *)(param_1 + 0x3a0),local_28,puVar10);
            *(undefined8 *)(param_1 + 0x3b0) = *puVar8;
            plVar2 = (longlong *)puVar8[1];
            plVar9 = *(longlong **)(param_1 + 0x3b8);
            if (plVar2 != plVar9) {
              if (plVar2 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
                UNLOCK();
                plVar9 = *(longlong **)(param_1 + 0x3b8);
              }
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
              }
              *(longlong **)(param_1 + 0x3b8) = plVar2;
            }
            if (local_20 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_20 + 1;
              lVar7 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_20)(local_20);
                LOCK();
                piVar1 = (int *)((longlong)local_20 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_20 + 8))(local_20,1);
                }
              }
            }
          }
          LOCK();
          plVar2 = plVar6 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 != 1) {
            return;
          }
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 != 1) {
            return;
          }
          (**(code **)(*plVar6 + 8))(plVar6,1);
          return;
        }
        LOCK();
        iVar5 = (int)plVar6[1];
        bVar11 = iVar5 == 0;
        if (bVar11) {
          *(int *)(plVar6 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 14105b700 FUN_14105b700 body=42 status=ok
// SIG undefined FUN_14105b700(void)

void FUN_14105b700(undefined8 param_1,undefined1 param_2)

{
  FUN_140a678a0();
  FUN_141056270(param_1,param_2);
  return;
}



// FUNCTION 14105b730 FUN_14105b730 body=57 status=ok
// SIG undefined FUN_14105b730(void)

void FUN_14105b730(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x418) = param_3;
  FUN_1410638d0(param_1,1,param_2);
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 0x32c) = *(undefined4 *)(param_1 + 0x418);
  }
  return;
}



// FUNCTION 14105b770 FUN_14105b770 body=1319 status=ok
// SIG undefined FUN_14105b770(void)

void FUN_14105b770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  float local_158;
  float local_154;
  longlong *local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong *local_b0;
  uint local_a8;
  undefined *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong *local_80;
  uint local_78;
  double local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_138 = 0xf;
  local_140 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_140,0xf,"rewardDateText",0xf,0x3f);
  local_150 = (longlong *)0x0;
  local_148 = 0;
  local_60 = 0;
  local_d0 = (longlong *)FUN_140ecc7d0(param_1,&local_140,0,6,&local_150);
  plVar8 = local_150;
  for (iVar7 = (int)local_148; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_150 != (longlong *)0x0) {
    FMemory::Free(local_150);
  }
  if (local_140 != 0) {
    FMemory::Free();
  }
  local_120 = 0;
  local_118 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_120,0x14,"rewardHistorySource",0x14,0x3f);
  local_130 = (longlong *)0x0;
  local_128 = 0;
  local_58 = 0;
  plVar4 = (longlong *)FUN_140ecc7d0(param_1,&local_120,0,6,&local_130);
  plVar8 = local_130;
  for (iVar7 = (int)local_128; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_130 != (longlong *)0x0) {
    FMemory::Free(local_130);
  }
  if (local_120 != 0) {
    FMemory::Free();
  }
  local_100 = 0;
  local_f8 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_100,0x1a,"rewardItemDescriptionText",0x1a,0x3f);
  local_110 = (longlong *)0x0;
  local_108 = 0;
  local_50 = 0;
  plVar5 = (longlong *)FUN_140ecc7d0(param_1,&local_100,0,6,&local_110);
  plVar8 = local_110;
  for (iVar7 = (int)local_108; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_110 != (longlong *)0x0) {
    FMemory::Free(local_110);
  }
  if (local_100 != 0) {
    FMemory::Free();
  }
  local_e0 = 0;
  local_d8 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_e0,0x10,"entryBackground",0x10,0x3f);
  local_f0 = (longlong *)0x0;
  local_e8 = 0;
  local_48 = 0;
  lVar6 = FUN_140ecbdf0(param_1,&local_e0,0,6,&local_f0);
  plVar8 = local_f0;
  for (iVar7 = (int)local_e8; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_f0 != (longlong *)0x0) {
    FMemory::Free(local_f0);
  }
  if (local_e0 != 0) {
    FMemory::Free();
  }
  plVar8 = local_d0;
  if ((((local_d0 != (longlong *)0x0) && (plVar4 != (longlong *)0x0)) && (plVar5 != (longlong *)0x0)
      ) && (lVar6 != 0)) {
    FUN_142087ad0(local_d0,local_c8,&local_158);
    FUN_142087ad0(lVar6,&local_d0,&local_154);
    (**(code **)(*plVar8 + 0x2b0))(plVar8,param_2,1,0);
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_3,1,0);
    (**(code **)(*plVar5 + 0x2b0))(plVar5,param_4,1,0);
    plVar8 = (longlong *)plVar5[0x2f];
    lVar2 = plVar5[0x2e];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar8 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (lVar2 != 0) {
      plVar8 = (longlong *)plVar5[0x2f];
      lVar2 = plVar5[0x2e];
      local_b0 = (longlong *)0x0;
      local_a8 = 6;
      local_a0 = &DAT_144662f00;
      local_c0 = 0xffffffffffffffff;
      uStack_b8 = 0xffffffffffffffff;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      FUN_1420523e0(lVar2,"autoSize",&local_c0);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar8 + 1;
        lVar2 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if ((local_a8 >> 6 & 1) != 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0,&local_c0,local_a0);
      }
      lVar2 = plVar5[0x2e];
      local_80 = (longlong *)0x0;
      local_78 = 0;
      plVar8 = (longlong *)plVar5[0x2f];
      local_90 = 0xffffffffffffffff;
      uStack_88 = 0xffffffffffffffff;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      FUN_14203acd0(lVar2,"height",&local_90);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar8 + 1;
        lVar2 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      FUN_142f0da80(lVar6,(double)(ABS(local_158 - local_154) + ABS(local_158 - local_154)) +
                          local_70);
      if ((local_78 >> 6 & 1) != 0) {
        (**(code **)(*local_80 + 0x10))(local_80,&local_90,local_70);
      }
    }
  }
  return;
}



// FUNCTION 14105bca0 FUN_14105bca0 body=287 status=ok
// SIG undefined FUN_14105bca0(void)

void FUN_14105bca0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468743ac) {
    _Init_thread_header(&DAT_1468743ac);
    if (DAT_1468743ac == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fcb0,0);
      FGenericPlatformString::Memcpy(DAT_14629fcb0,L"<font color=\"black\">{0}</font>",0x3e);
      atexit((_func_5014 *)&LAB_143e5d1f0);
      _Init_thread_footer(&DAT_1468743ac);
    }
  }
  if (*(longlong *)(param_1 + 0x420) != 0) {
    uVar5 = FTextFormat::FromString(local_38,&DAT_14629fcb0);
    FUN_14101f070(local_28,uVar5,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x420) + 0x2b0))
              (*(longlong **)(param_1 + 0x420),local_28,1,0);
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



// FUNCTION 14105bdc0 FUN_14105bdc0 body=287 status=ok
// SIG undefined FUN_14105bdc0(void)

void FUN_14105bdc0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468743b0) {
    _Init_thread_header(&DAT_1468743b0);
    if (DAT_1468743b0 == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fcc0,0);
      FGenericPlatformString::Memcpy(DAT_14629fcc0,L"<font color=\"#f10005\">{0}</font>",0x42);
      atexit((_func_5014 *)&LAB_143e5d210);
      _Init_thread_footer(&DAT_1468743b0);
    }
  }
  if (*(longlong *)(param_1 + 0x420) != 0) {
    uVar5 = FTextFormat::FromString(local_38,&DAT_14629fcc0);
    FUN_14101f070(local_28,uVar5,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x420) + 0x2b0))
              (*(longlong **)(param_1 + 0x420),local_28,1,0);
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



// FUNCTION 14105bee0 FUN_14105bee0 body=562 status=ok
// SIG undefined FUN_14105bee0(void)

void FUN_14105bee0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined2 local_res10;
  undefined1 local_res12;
  undefined1 local_res13;
  
  iVar6 = *(int *)((longlong)param_1 + 0x5c);
  if (param_2 != iVar6) {
    iVar4 = FUN_14103fac0(param_1,iVar6);
    iVar5 = FUN_14103fac0(param_1,param_2);
    plVar11 = (longlong *)0x0;
    *(int *)((longlong)param_1 + 0x5c) = param_2;
    if ((((-1 < iVar4) && (iVar4 < (int)param_1[0x11])) &&
        (lVar1 = *(longlong *)(param_1[0x10] + (longlong)iVar4 * 8), lVar1 != 0)) &&
       (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) {
      local_res10 = 0;
      local_res12 = 1;
      if ((iVar6 < 0) || (local_res13 = 0, (int)param_1[0xb] <= iVar6)) {
        local_res13 = 1;
      }
      if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
         (cVar3 = (**(code **)(*(longlong *)*param_1 + 0x18))(), cVar3 != '\0')) {
        plVar7 = plVar11;
        if ((int)param_1[1] != 0) {
          plVar7 = (longlong *)*param_1;
        }
        (**(code **)(*plVar7 + 0x40))(plVar7,iVar6,lVar1,&local_res10);
      }
    }
    if ((((-1 < iVar5) && (iVar5 < (int)param_1[0x11])) &&
        (lVar1 = *(longlong *)(param_1[0x10] + (longlong)iVar5 * 8), lVar1 != 0)) &&
       (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) {
      local_res10 = 0x100;
      local_res12 = 1;
      if ((param_2 < 0) || (local_res13 = 0, (int)param_1[0xb] <= param_2)) {
        local_res13 = 1;
      }
      if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
         (cVar3 = (**(code **)(*(longlong *)*param_1 + 0x18))(), cVar3 != '\0')) {
        plVar7 = plVar11;
        if ((int)param_1[1] != 0) {
          plVar7 = (longlong *)*param_1;
        }
        (**(code **)(*plVar7 + 0x40))(plVar7,param_2,lVar1,&local_res10);
      }
    }
    if (iVar4 != iVar5) {
      lVar1 = param_1[0xc];
      if ((param_1[0xd] != 0) && (*(longlong *)(param_1[0xd] + 0x10) != 0)) {
        iVar6 = FUN_142eed730();
        plVar9 = (longlong *)(longlong)(int)param_1[0x11];
        plVar10 = plVar11;
        plVar7 = plVar9;
        if (0 < (longlong)plVar9) {
          do {
            plVar8 = (longlong *)((longlong)plVar7 + -1);
            if ((char)lVar1 == '\0') {
              plVar8 = plVar10;
            }
            lVar2 = *(longlong *)(param_1[0x10] + (longlong)plVar8 * 8);
            if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 != 0)) {
              plVar8 = plVar11;
              if (param_1[0xd] != 0) {
                plVar8 = *(longlong **)(param_1[0xd] + 0x10);
              }
              FUN_142f0bc30(plVar8,lVar2,iVar6 + -1);
            }
            plVar10 = (longlong *)((longlong)plVar10 + 1);
            plVar7 = (longlong *)((longlong)plVar7 + -1);
          } while ((longlong)plVar10 < (longlong)plVar9);
        }
        iVar4 = FUN_14103fac0(param_1,*(undefined4 *)((longlong)param_1 + 0x5c));
        if ((((-1 < iVar4) && (iVar4 < (int)param_1[0x11])) &&
            (lVar1 = *(longlong *)(param_1[0x10] + (longlong)iVar4 * 8), lVar1 != 0)) &&
           (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) {
          if (param_1[0xd] != 0) {
            plVar11 = *(longlong **)(param_1[0xd] + 0x10);
          }
          FUN_142f0bc30(plVar11,lVar1,iVar6 + -1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14105c120 FUN_14105c120 body=96 status=ok
// SIG undefined FUN_14105c120(void)

void FUN_14105c120(longlong param_1,int param_2,char param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  if ((iVar1 != -1) && (iVar1 < param_2)) {
    param_2 = iVar1;
  }
  FUN_14105bee0(param_1,param_2);
  if (param_3 != '\0') {
    FUN_14105a3e0(param_1,param_2,param_4);
  }
  return;
}



// FUNCTION 14105c180 FUN_14105c180 body=78 status=ok
// SIG undefined FUN_14105c180(void)

void FUN_14105c180(float *param_1,float *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
     (param_1[3] != param_2[3])) {
    if (*(char *)(param_1 + 8) != '\0') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 6) = uVar1;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



// FUNCTION 14105c1d0 FUN_14105c1d0 body=237 status=ok
// SIG undefined FUN_14105c1d0(void)

longlong FUN_14105c1d0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    cVar1 = *(char *)(param_3 + 0x34);
    if (cVar1 == '\0') {
      lVar2 = 0x310;
    }
    else if (cVar1 == '\x01') {
      lVar2 = 0x318;
    }
    else if (cVar1 == '\x02') {
      lVar2 = 800;
    }
    else if (cVar1 == '\x03') {
      lVar2 = 0x308;
    }
    else {
      if (cVar1 != '\x04') {
        return 0;
      }
      lVar2 = 0x328;
    }
    lVar2 = *(longlong *)(lVar2 + param_1);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x460) = param_2;
      *(longlong *)(lVar2 + 0x458) = param_3;
      *(undefined8 *)(lVar2 + 0x468) = param_4;
      uVar3 = FUN_1404b03b0();
      FText::operator=(lVar2 + 0x508,uVar3);
      uVar3 = FUN_1404b03b0();
      FText::operator=(lVar2 + 0x520,uVar3);
      uVar3 = FUN_1404b03b0();
      FText::operator=(lVar2 + 0x550,uVar3);
      uVar3 = FUN_1404b03b0();
      FText::operator=(lVar2 + 0x568,uVar3);
      FUN_14105ce00(lVar2,0);
      FUN_141057000(lVar2,0);
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 14105c2c0 FUN_14105c2c0 body=802 status=ok
// SIG undefined FUN_14105c2c0(void)

void FUN_14105c2c0(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a0;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  lVar9 = *(longlong *)(param_1 + 0x2e0);
  if (lVar9 == 0) {
    return;
  }
  lVar11 = *(longlong *)(lVar9 + 0x278);
  lVar10 = (longlong)*(int *)(lVar9 + 0x280) * 0x20 + lVar11;
  if (lVar11 != lVar10) {
    do {
      lVar9 = *(longlong *)(lVar11 + 0x18);
      if (lVar9 != 0) {
        lVar6 = FUN_141397a70();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        lVar6 = 0;
        if ((bVar3) &&
           (plVar8 = (longlong *)(lVar9 + 0x308), plVar8 <= (longlong *)(lVar9 + 0x330U))) {
          do {
            lVar9 = *plVar8;
            if ((lVar9 != 0) &&
               (((*(longlong *)(lVar9 + 0x458) != 0 &&
                 ((**(code **)(*(longlong *)(lVar9 + 0x170) + 0x38))
                            ((longlong *)(lVar9 + 0x170),param_2), param_2 == '\0')) &&
                (*(char *)(lVar9 + 0x5b3) != '\0')))) {
              FUN_141064ec0(lVar9,0);
            }
            plVar8 = plVar8 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 5);
        }
      }
      lVar11 = lVar11 + 0x20;
    } while (lVar11 != lVar10);
    lVar9 = *(longlong *)(param_1 + 0x2e0);
  }
  local_b8 = 0;
  if ((*(longlong *)(lVar9 + 0x28) != 0) && (*(longlong *)(lVar9 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar9 + 0x30) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      local_d0 = *(longlong **)(lVar9 + 0x30);
      local_d8 = 0;
      bVar4 = true;
      bVar3 = false;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)local_d0[1];
        bVar12 = iVar5 == 0;
        if (bVar12) {
          *(int *)(local_d0 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (!bVar12) {
          LOCK();
          bVar12 = iVar5 == (int)local_d0[1];
          if (bVar12) {
            *(int *)(local_d0 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar12) {
            local_b8 = *(undefined8 *)(lVar9 + 0x28);
            puVar7 = &local_d8;
            local_d8 = local_b8;
            goto LAB_14105c494;
          }
          LOCK();
          iVar5 = (int)local_d0[1];
          bVar12 = iVar5 == 0;
          if (bVar12) {
            *(int *)(local_d0 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
        local_d0 = (longlong *)0x0;
      }
      local_b8 = 0;
      puVar7 = &local_d8;
      goto LAB_14105c494;
    }
  }
  puVar7 = &local_c8;
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  bVar4 = false;
  bVar3 = true;
LAB_14105c494:
  local_b0 = (longlong *)puVar7[1];
  puVar7[1] = 0;
  *puVar7 = 0;
  plVar8 = plStack_c0;
  if ((bVar3) && (plStack_c0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_c0 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  plVar8 = local_d0;
  if ((bVar4) && (local_d0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_d0 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  plVar8 = local_b0;
  local_a0 = local_b0;
  local_58 = 0;
  local_48 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_78);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_14467a4e8;
    puVar7[1] = local_b8;
    puVar7[2] = plVar8;
    local_a0 = (longlong *)0x0;
    *(char *)(puVar7 + 3) = param_2;
    plVar8 = (longlong *)0x0;
  }
  local_88[0] = &LAB_141032460;
  FUN_14208c5d0(param_1,local_88);
  plVar2 = local_a0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  return;
}



// FUNCTION 14105c5f0 FUN_14105c5f0 body=59 status=ok
// SIG undefined FUN_14105c5f0(void)

void FUN_14105c5f0(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  FUN_141015900();
  plVar1 = *(longlong **)(param_1 + 0xc58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x278))(plVar1,param_2 != '\0');
  }
  return;
}



// FUNCTION 14105c630 FUN_14105c630 body=149 status=ok
// SIG undefined FUN_14105c630(void)

void FUN_14105c630(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)param_1[1];
  iVar4 = (int)param_2;
  if (iVar1 < iVar4) {
    iVar5 = iVar4 - iVar1;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                ();
    }
    puVar3 = (undefined4 *)((longlong)iVar1 * 0x40 + *param_1);
    if (iVar5 != 0) {
      puVar2 = puVar3 + 5;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 0x10;
        *(undefined8 *)(puVar2 + -3) = 0;
        *(undefined8 *)(puVar2 + -1) = 0;
        *(undefined8 *)(puVar2 + 1) = 0;
        *(undefined8 *)(puVar2 + 3) = 0;
        *(undefined8 *)(puVar2 + 5) = 0;
        *(undefined8 *)(puVar2 + 7) = 0;
        *(undefined1 *)(puVar2 + 9) = 0;
        puVar2 = puVar2 + 0x10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (iVar4 < iVar1) {
    FUN_141059af0(param_1,param_2,iVar1 - iVar4,param_3);
    return;
  }
  return;
}



// FUNCTION 14105c6d0 FUN_14105c6d0 body=322 status=ok
// SIG undefined FUN_14105c6d0(void)

void FUN_14105c6d0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    pwVar7 = L"none";
    if (0 < param_2) {
      pwVar7 = L"available";
    }
    FUN_14203e4e0(*(longlong *)(param_1 + 8),pwVar7);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  uVar6 = FText::AsNumber(local_28,param_2,0,&local_38);
  if ((*(longlong *)(param_1 + 0xd8) != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xe0) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xd0,uVar6,1,0);
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  plVar2 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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
  if ((*(longlong *)(param_1 + 0xc0) != 0) && (*(longlong *)(param_1 + 200) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 200) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xb8,param_1 + 0x140,1,0);
    }
  }
  return;
}



// FUNCTION 14105c820 FUN_14105c820 body=266 status=ok
// SIG undefined FUN_14105c820(void)

void FUN_14105c820(longlong param_1,char param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  char local_res10 [8];
  longlong *local_18;
  int local_10;
  
  if (param_2 != *(char *)(param_1 + 0x1f0)) {
    *(char *)(param_1 + 0x1f0) = param_2;
    local_res10[0] = param_2;
    if (param_3 == '\0') {
      FUN_140801b20(local_res10,0);
    }
    else {
      local_18 = (longlong *)0x0;
      plVar1 = (longlong *)FMemory::Realloc(0,0x20);
      local_10 = 2;
      local_18 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        *(char *)(plVar1 + 1) = param_2;
        *plVar1 = (longlong)&PTR_GetPoolName_1440f8fb0;
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar1[2] = lVar2;
      }
      uVar3 = FUN_14164ab60();
      FUN_14158f860(uVar3,local_res8,&local_18,L"UGFxSHiFTMenuPage::SetRecordingEnabled",0x3f800000)
      ;
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 14105c930 FUN_14105c930 body=118 status=ok
// SIG undefined FUN_14105c930(void)

void FUN_14105c930(longlong param_1,undefined1 param_2)

{
  char cVar1;
  
  cVar1 = FUN_14208d120(param_1,param_1 + 0xac8,L"treeContainer.largeLockWrapper.largeLock");
  if (cVar1 != '\0') {
    FUN_142056670(*(undefined8 *)(param_1 + 0xac8),param_2);
  }
  cVar1 = FUN_14208d120(param_1,param_1 + 0xad8,L"treeContainer.unlockDetailsWrapper.unlockDetails")
  ;
  if (cVar1 != '\0') {
    FUN_142056670(*(undefined8 *)(param_1 + 0xad8),param_2);
  }
  return;
}



// FUNCTION 14105c9b0 FUN_14105c9b0 body=9 status=ok
// SIG undefined FUN_14105c9b0(void)

void FUN_14105c9b0(longlong param_1)

{
  FUN_142f0ee50(param_1 + 0x20);
  return;
}



// FUNCTION 14105c9c0 FUN_14105c9c0 body=1068 status=ok
// SIG undefined FUN_14105c9c0(void)

void FUN_14105c9c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  void *_Src;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if (param_2 == 0) {
    plVar7 = *(longlong **)(param_1 + 0x2d0);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      iVar10 = (int)plVar7[1];
      bVar11 = iVar10 == 0;
      if (bVar11) {
        *(int *)(plVar7 + 1) = 0;
        iVar10 = 0;
      }
      UNLOCK();
      while (!bVar11) {
        LOCK();
        bVar11 = iVar10 == (int)plVar7[1];
        if (bVar11) {
          *(int *)(plVar7 + 1) = iVar10 + 1;
        }
        UNLOCK();
        if (bVar11) {
          if (plVar7 != (longlong *)0x0) {
            if (*(longlong *)(param_1 + 0x2c8) != 0) {
              FUN_14203e230(*(longlong *)(param_1 + 0x2c8),param_1 + 1000);
            }
            goto LAB_14105cd9a;
          }
          break;
        }
        LOCK();
        iVar10 = (int)plVar7[1];
        bVar11 = iVar10 == 0;
        if (bVar11) {
          *(int *)(plVar7 + 1) = 0;
          iVar10 = 0;
        }
        UNLOCK();
      }
    }
    goto LAB_14105cdc3;
  }
  FUN_14105ce00(param_2,*(int *)(param_2 + 0x4ac) + 1);
  lVar5 = *(longlong *)(param_2 + 0x458);
  if (lVar5 == 0) goto LAB_14105cdc3;
  if ((*(longlong *)(param_1 + 0x2c8) == 0) || (*(longlong *)(param_1 + 0x2d0) == 0)) {
LAB_14105ca42:
    plVar7 = *(longlong **)(param_1 + 0x328);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      iVar10 = (int)plVar7[1];
      bVar11 = iVar10 == 0;
      if (bVar11) {
        *(int *)(plVar7 + 1) = 0;
        iVar10 = 0;
      }
      UNLOCK();
      while (!bVar11) {
        LOCK();
        bVar11 = iVar10 == (int)plVar7[1];
        if (bVar11) {
          *(int *)(plVar7 + 1) = iVar10 + 1;
        }
        UNLOCK();
        if (bVar11) {
          if (plVar7 != (longlong *)0x0) {
            if (*(longlong *)(param_1 + 800) != 0) {
              FUN_1420392d0(*(longlong *)(param_1 + 800),&local_68,L"SkillIconWrapper");
              if (local_68 != 0) {
                local_88 = 0;
                local_80 = 10;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
                FGenericPlatformString::Memcpy(local_88,L"SkillIcon",0x14);
                local_98 = (longlong *)0x0;
                local_90 = 0;
                puVar4 = (undefined8 *)
                         FUN_14202b6f0(local_68,local_48,PTR_s_SkillIcons_14629fca0,&local_88,
                                       0xffffffff,0,&local_98);
                *(undefined8 *)(param_1 + 0x2c8) = *puVar4;
                plVar8 = (longlong *)puVar4[1];
                plVar6 = *(longlong **)(param_1 + 0x2d0);
                if (plVar8 != plVar6) {
                  if (plVar8 != (longlong *)0x0) {
                    LOCK();
                    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
                    UNLOCK();
                    plVar6 = *(longlong **)(param_1 + 0x2d0);
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
                  *(longlong **)(param_1 + 0x2d0) = plVar8;
                }
                if (local_40 != (longlong *)0x0) {
                  LOCK();
                  plVar8 = local_40 + 1;
                  lVar2 = *plVar8;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)lVar2 == 1) {
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
              }
              if (local_60 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_60 + 1;
                lVar2 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar2 == 1) {
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
            LOCK();
            plVar8 = plVar7 + 1;
            lVar2 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
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
          break;
        }
        LOCK();
        iVar10 = (int)plVar7[1];
        bVar11 = iVar10 == 0;
        if (bVar11) {
          *(int *)(plVar7 + 1) = 0;
          iVar10 = 0;
        }
        UNLOCK();
      }
    }
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2d0) + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (iVar10 < 1) goto LAB_14105ca42;
  }
  plVar7 = *(longlong **)(param_1 + 0x2d0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar10 = (int)plVar7[1];
    bVar11 = iVar10 == 0;
    if (bVar11) {
      *(int *)(plVar7 + 1) = 0;
      iVar10 = 0;
    }
    UNLOCK();
    while (!bVar11) {
      LOCK();
      bVar11 = iVar10 == (int)plVar7[1];
      if (bVar11) {
        *(int *)(plVar7 + 1) = iVar10 + 1;
      }
      UNLOCK();
      if (bVar11) {
        if (plVar7 != (longlong *)0x0) {
          lVar2 = *(longlong *)(param_1 + 0x2c8);
          if (lVar2 != 0) {
            local_70 = *(int *)(lVar5 + 0x40);
            lVar9 = (longlong)local_70;
            local_78 = (void *)0x0;
            _Src = *(void **)(lVar5 + 0x38);
            if (local_70 == 0) {
              local_6c = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
              _guard_xfg_dispatch_icall_nop(local_78,_Src,lVar9 * 2);
            }
            FUN_14203e230(lVar2,&local_78);
            if (local_78 != (void *)0x0) {
              FMemory::Free();
            }
            cVar3 = FWeakObjectPtr::IsValid(param_2 + 0x470);
            local_58 = DAT_1464aa6c0;
            uStack_54 = DAT_1464aa6c4;
            uStack_50 = DAT_1464aa6c8;
            uStack_4c = DAT_1464aa6cc;
            if (cVar3 != '\0') {
              lVar5 = FWeakObjectPtr::Get(param_2 + 0x470);
              cVar3 = FWeakObjectPtr::IsValid(lVar5 + 0x368);
              local_58 = DAT_1464aa6c0;
              uStack_54 = DAT_1464aa6c4;
              uStack_50 = DAT_1464aa6c8;
              uStack_4c = DAT_1464aa6cc;
              if (cVar3 != '\0') {
                lVar5 = FWeakObjectPtr::Get(lVar5 + 0x368);
                local_58 = *(undefined4 *)(lVar5 + 0x78);
                uStack_54 = *(undefined4 *)(lVar5 + 0x7c);
                uStack_50 = *(undefined4 *)(lVar5 + 0x80);
                uStack_4c = *(undefined4 *)(lVar5 + 0x84);
              }
            }
            FUN_142050af0(lVar2,&local_58,1);
          }
LAB_14105cd9a:
          LOCK();
          plVar8 = plVar7 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
        break;
      }
      LOCK();
      iVar10 = (int)plVar7[1];
      bVar11 = iVar10 == 0;
      if (bVar11) {
        *(int *)(plVar7 + 1) = 0;
        iVar10 = 0;
      }
      UNLOCK();
    }
  }
LAB_14105cdc3:
  FWeakObjectPtr::operator=(param_1 + 0x420,param_2);
  return;
}



// FUNCTION 14105cdf0 SetNumPages body=11 status=ok
// SIG undefined SetNumPages(void)

void UItemViewerScrollSelector::SetNumPages(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x300) = param_2;
  FUN_141058a70();
  return;
}



// FUNCTION 14105ce00 FUN_14105ce00 body=694 status=ok
// SIG undefined FUN_14105ce00(void)

void FUN_14105ce00(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  undefined4 in_stack_ffffffffffffff98;
  undefined2 uVar8;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar8 = (undefined2)((uint)in_stack_ffffffffffffff98 >> 0x10);
  iVar6 = *(int *)(param_1 + 0x4ac);
  *(int *)(param_1 + 0x4ac) = param_2;
  if (0 < iVar6) {
    if (0 < param_2) {
      return;
    }
    plVar5 = *(longlong **)(param_1 + 0x3a0);
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    LOCK();
    iVar6 = (int)plVar5[1];
    bVar7 = iVar6 == 0;
    if (bVar7) {
      *(int *)(plVar5 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (bVar7) {
      return;
    }
    while( true ) {
      LOCK();
      bVar7 = iVar6 == (int)plVar5[1];
      if (bVar7) {
        *(int *)(plVar5 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar7) break;
      LOCK();
      iVar6 = (int)plVar5[1];
      bVar7 = iVar6 == 0;
      if (bVar7) {
        *(int *)(plVar5 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar7) {
        return;
      }
    }
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x398) != 0) {
      FUN_14203de70(*(longlong *)(param_1 + 0x398),&DAT_144660f84);
    }
    goto LAB_14105d07c;
  }
  if (param_2 < 1) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x398) == 0) || (*(longlong *)(param_1 + 0x3a0) == 0)) {
LAB_14105ce57:
    local_38 = 0;
    local_30 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_38,6,"Equip",6,CONCAT22(uVar8,0x3f));
    local_48 = (longlong *)0x0;
    local_40 = 0;
    puVar3 = (undefined8 *)FUN_142ee2c80(param_1,local_28,"Equip",&local_38,0xfffffffd,0,&local_48);
    *(undefined8 *)(param_1 + 0x398) = *puVar3;
    plVar5 = (longlong *)puVar3[1];
    plVar4 = *(longlong **)(param_1 + 0x3a0);
    if (plVar5 != plVar4) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(param_1 + 0x3a0);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(longlong **)(param_1 + 0x3a0) = plVar5;
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    plVar5 = local_48;
    for (iVar6 = (int)local_40; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x3a0) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 < 1) goto LAB_14105ce57;
  }
  plVar5 = *(longlong **)(param_1 + 0x3a0);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  LOCK();
  iVar6 = (int)plVar5[1];
  bVar7 = iVar6 == 0;
  if (bVar7) {
    *(int *)(plVar5 + 1) = 0;
    iVar6 = 0;
  }
  UNLOCK();
  if (bVar7) {
    return;
  }
  while( true ) {
    LOCK();
    bVar7 = iVar6 == (int)plVar5[1];
    if (bVar7) {
      *(int *)(plVar5 + 1) = iVar6 + 1;
    }
    UNLOCK();
    if (bVar7) break;
    LOCK();
    iVar6 = (int)plVar5[1];
    bVar7 = iVar6 == 0;
    if (bVar7) {
      *(int *)(plVar5 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (bVar7) {
      return;
    }
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x398) != 0) {
    FUN_14203de70(*(longlong *)(param_1 + 0x398),&DAT_144660f7c);
  }
LAB_14105d07c:
  LOCK();
  plVar4 = plVar5 + 1;
  lVar2 = *plVar4;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}



// FUNCTION 14105d0c0 FUN_14105d0c0 body=740 status=ok
// SIG undefined FUN_14105d0c0(void)

void FUN_14105d0c0(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  bool bVar12;
  ulonglong local_78;
  longlong *local_70;
  longlong local_68 [5];
  longlong *local_40;
  ulonglong local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *local_20;
  
  uVar9 = 0;
  *(char *)(param_1 + 0x41c) = param_2;
  if (param_2 == '\0') {
    local_68[2] = 0;
    local_68[3] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
    FGenericPlatformString::Memcpy(local_68[2],L"Standard",0x12);
    FUN_142088cf0(param_1,local_68 + 2);
    lVar10 = local_68[2];
  }
  else {
    local_68[0] = 0;
    local_68[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    FGenericPlatformString::Memcpy(local_68[0],L"Split",0xc);
    FUN_142088cf0(param_1,local_68);
    lVar10 = local_68[0];
  }
  if (lVar10 != 0) {
    FMemory::Free();
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      local_70 = *(longlong **)(param_1 + 0x30);
      bVar6 = true;
      bVar5 = false;
      local_78 = 0;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_70 + 1);
        bVar12 = uVar3 == 0;
        if (bVar12) {
          *(uint *)(local_70 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar12) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar12 = iVar8 == (int)local_70[1];
          if (bVar12) {
            *(int *)(local_70 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar12) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar11 = &local_78;
            local_78 = uVar9;
            goto LAB_14105d1f4;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_70 + 1);
          bVar12 = uVar3 == 0;
          if (bVar12) {
            *(uint *)(local_70 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_70 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar11 = &local_78;
      goto LAB_14105d1f4;
    }
  }
  puVar11 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar6 = false;
  bVar5 = true;
LAB_14105d1f4:
  local_68[4] = uVar9;
  plVar4 = (longlong *)puVar11[1];
  puVar11[1] = 0;
  plVar2 = plStack_30;
  local_40 = plVar4;
  *puVar11 = 0;
  if ((bVar5) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_30 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar6) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (local_68[4] != 0) {
    local_28 = *(undefined8 *)(local_68[4] + 0x78);
    plVar4 = *(longlong **)(local_68[4] + 0x80);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_20 = plVar4;
    FUN_142036df0(local_28);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_20)();
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    FUN_14204d040(local_68[4]);
  }
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    lVar10 = FUN_14139c4f0();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (cVar7 = (**(code **)(*plVar4 + 0x3f8))(plVar4), cVar7 == '\0')) {
      FUN_141037870(param_1);
    }
  }
  return;
}



// FUNCTION 14105d3b0 FUN_14105d3b0 body=211 status=ok
// SIG undefined FUN_14105d3b0(void)

void FUN_14105d3b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong local_18;
  undefined8 local_10;
  
  if (param_3 != 0) {
    if (param_2 != *(longlong *)(param_3 + 0x1a8)) {
      local_10 = 4;
      local_18 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_18,4,&DAT_144660c7c,4,0x3f);
      FUN_142088cf0(param_3,&local_18);
      if (local_18 != 0) {
        FMemory::Free();
      }
    }
    *(longlong *)(param_3 + 0x1a8) = param_2;
    if ((param_2 != 0) && (*(longlong *)(param_3 + 0x170) != 0)) {
      FUN_1413dced0(param_2,&local_18);
      if (1 < (int)local_10) {
        FUN_142088cf0(*(undefined8 *)(param_3 + 0x170),&local_18);
      }
      if (local_18 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14105d490 FUN_14105d490 body=4133 status=ok
// SIG undefined FUN_14105d490(void)

void FUN_14105d490(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  void *pvVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  void *_Src;
  bool bVar20;
  int local_res18;
  longlong local_380;
  undefined8 local_378;
  longlong local_370;
  undefined8 local_368;
  longlong local_360;
  undefined8 local_358;
  longlong *local_350;
  undefined8 local_348;
  longlong local_340;
  undefined8 local_338;
  longlong local_330;
  undefined8 local_328;
  longlong *local_320;
  undefined8 local_318;
  longlong local_310;
  undefined8 local_308;
  longlong local_300;
  undefined8 local_2f8;
  longlong *local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  longlong *local_2c0;
  undefined8 local_2b8;
  longlong *local_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  undefined8 local_298;
  longlong local_290;
  undefined8 local_288;
  longlong local_280;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_248;
  longlong *local_240;
  undefined8 local_238;
  longlong local_230;
  undefined8 local_228;
  longlong *local_220;
  undefined8 local_218;
  longlong local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  longlong local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  int local_1e0;
  void *local_1d8;
  int local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong local_180;
  void *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150 [2];
  longlong local_140 [2];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  
  if ((int)param_1[0xd6] == 0) {
    param_1[0xde] = param_2;
    FUN_140ad4c90(param_1,&local_1c8);
    if (local_1c8 != 0) {
      LOCK();
      bVar20 = *(int *)(local_1c8 + 0x90) == 0;
      if (bVar20) {
        *(int *)(local_1c8 + 0x90) = 0;
      }
      UNLOCK();
      if (!bVar20) {
        lVar7 = FUN_140e971d0(param_1);
        local_1f0 = lVar7;
        lVar8 = FUN_140f578e0(param_1);
        if ((lVar7 != 0) && (lVar8 != 0)) {
          local_res18 = 0;
          if ((int)param_1[0xd1] == 0) {
            puVar16 = &DAT_143f3eda8;
          }
          else {
            puVar16 = (undefined2 *)param_1[0xd0];
          }
          local_2b0 = (longlong *)0x0;
          local_2a8 = 0;
          local_110 = 0;
          FString::PrintfImpl(local_150,puVar16,0);
          lVar9 = FUN_14101f4d0(param_1,local_150,0,6,&local_2b0);
          if (local_150[0] != 0) {
            FMemory::Free();
          }
          plVar15 = local_2b0;
          for (iVar17 = (int)local_2a8; iVar17 != 0; iVar17 = iVar17 + -1) {
            if (*plVar15 != 0) {
              FMemory::Free();
            }
            plVar15 = plVar15 + 2;
          }
          if (local_2b0 != (longlong *)0x0) {
            FMemory::Free();
          }
          iVar17 = (int)param_1[0xe1];
          *(int *)(param_1 + 0xe1) = iVar17 + 4;
          if (*(int *)((longlong)param_1 + 0x70c) < iVar17 + 4) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xe0,iVar17);
          }
          puVar10 = (undefined8 *)((longlong)iVar17 * 0x10 + param_1[0xe0]);
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[6] = 0;
          puVar10[7] = 0;
          lVar7 = local_1f0;
          if (lVar9 != 0) {
            local_160 = 0;
            local_158 = 0;
            do {
              FName::FName(&local_190,L"WheelButtonPressed",1);
              FWeakObjectPtr::operator=(lVar9 + 0x1f0,param_1);
              *(undefined8 *)(lVar9 + 0x1f8) = local_190;
              FName::FName(&local_188,L"WheelButtonFocused",1);
              FWeakObjectPtr::operator=(lVar9 + 0x1d0,param_1);
              *(undefined8 *)(lVar9 + 0x1d8) = local_188;
              FName::FName(&local_198,L"WheelButtonUnfocused",1);
              FWeakObjectPtr::operator=(lVar9 + 0x1e0,param_1);
              *(undefined8 *)(lVar9 + 0x1e8) = local_198;
              iVar17 = (int)param_1[0xd6];
              *(int *)(param_1 + 0xd6) = iVar17 + 1;
              if (*(int *)((longlong)param_1 + 0x6b4) < iVar17 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (param_1 + 0xd5,iVar17);
              }
              *(longlong *)(param_1[0xd5] + (longlong)iVar17 * 8) = lVar9;
              local_1b8 = 0;
              local_1b0 = 0;
              local_1a8 = 0;
              local_1a0 = 0;
              FWeakObjectPtr::operator=(&local_1b8,0);
              FWeakObjectPtr::operator=(&local_1b0,0);
              FWeakObjectPtr::operator=(&local_1a8,0);
              FWeakObjectPtr::operator=(&local_1a0,0);
              local_178 = (void *)0x0;
              pvVar12 = (void *)0x0;
              local_180 = lVar9;
              if (lVar9 != 0) {
                uVar11 = UBlendableInterface::GetPrivateStaticClass();
                pvVar12 = (void *)UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar11);
              }
              local_178 = pvVar12;
              FUN_142ecfd10(param_1,&local_180,&local_1b8);
              dVar4 = (double)FUN_142eedcb0(lVar9);
              local_290 = 0;
              local_288 = 0x10;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_290,0);
              FGenericPlatformString::Memcpy(local_290,L"iconPlaceholder",0x20);
              local_2a0 = (longlong *)0x0;
              local_298 = 0;
              lVar7 = FUN_140ecbdf0(lVar9,&local_290,local_160,6,&local_2a0);
              plVar15 = local_2a0;
              for (iVar17 = (int)local_298; iVar17 != 0; iVar17 = iVar17 + -1) {
                if (*plVar15 != 0) {
                  FMemory::Free();
                }
                plVar15 = plVar15 + 2;
              }
              if (local_2a0 != (longlong *)0x0) {
                FMemory::Free(local_2a0);
              }
              if (local_290 != 0) {
                FMemory::Free();
              }
              if (lVar7 != 0) {
                FUN_142f0ee90(lVar7,SUB84(dVar4 * -1.0,0));
                iVar17 = (int)param_1[0xd6];
                lVar13 = (longlong)iVar17;
                iVar19 = iVar17 + -1;
                if (-1 < iVar19) {
                  if (iVar19 < 4) {
                    if (((iVar19 < 0) || (*(int *)(lVar8 + 0x26d8) <= iVar19)) ||
                       (lVar3 = *(longlong *)(*(longlong *)(lVar8 + 0x26d0) + -8 + lVar13 * 8),
                       lVar3 == 0)) {
                      local_310 = 0;
                      local_308 = 5;
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_310,0);
                      FGenericPlatformString::Memcpy(local_310,L"icon",10);
                      FUN_142088910(lVar7,&local_310);
                      if (local_310 != 0) {
                        FMemory::Free();
                      }
                      local_330 = 0;
                      local_328 = 0x1a;
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_330,0);
                      FGenericPlatformString::Memcpy(local_330,L"iconPlaceholder.emoteIcon",0x34);
                      local_320 = (longlong *)0x0;
                      local_318 = 0;
                      local_130 = 0;
                      lVar7 = FUN_140ecbdf0(lVar9,&local_330,0,6,&local_320);
                      plVar15 = local_320;
                      for (iVar17 = (int)local_318; iVar17 != 0; iVar17 = iVar17 + -1) {
                        if (*plVar15 != 0) {
                          FMemory::Free();
                        }
                        plVar15 = plVar15 + 2;
                      }
                      if (local_320 != (longlong *)0x0) {
                        FMemory::Free(local_320);
                      }
                      if (local_330 != 0) {
                        FMemory::Free();
                      }
                      if (lVar7 != 0) {
                        local_260 = 0;
                        local_258 = 6;
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,0);
                        FGenericPlatformString::Memcpy(local_260,L"empty",0xc);
                        FUN_142088cf0(lVar7,&local_260);
                        if (local_260 != 0) {
                          FMemory::Free();
                        }
                      }
                    }
                    else {
                      FText::operator=(lVar9 + 0x2c8,lVar3 + 0x30);
                      local_370 = 0;
                      local_368 = 5;
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_370,0);
                      FGenericPlatformString::Memcpy(local_370,L"icon",10);
                      FUN_142088910(lVar7,&local_370);
                      if (local_370 != 0) {
                        FMemory::Free();
                      }
                      local_340 = 0;
                      local_338 = 0x1a;
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_340,0);
                      FGenericPlatformString::Memcpy(local_340,L"iconPlaceholder.emoteIcon",0x34);
                      local_350 = (longlong *)0x0;
                      local_348 = 0;
                      local_118 = 0;
                      lVar7 = FUN_140ecbdf0(lVar9,&local_340,0,6,&local_350);
                      plVar15 = local_350;
                      for (iVar18 = (int)local_348; iVar18 != 0; iVar18 = iVar18 + -1) {
                        if (*plVar15 != 0) {
                          FMemory::Free();
                        }
                        plVar15 = plVar15 + 2;
                      }
                      if (local_350 != (longlong *)0x0) {
                        FMemory::Free(local_350);
                      }
                      if (local_340 != 0) {
                        FMemory::Free();
                      }
                      if (lVar7 != 0) {
                        local_200 = 0;
                        if (*(longlong *)
                             (*(longlong *)(*(longlong *)(lVar8 + 0x26d0) + -8 + lVar13 * 8) + 0xa0)
                            == 0) {
                          local_2e0 = 0;
                          local_2d8 = 5;
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e0,0);
                          FGenericPlatformString::Memcpy(local_2e0,L"text",10);
                          FUN_142088910(lVar7,&local_2e0);
                          if (local_2e0 != 0) {
                            FMemory::Free();
                          }
                          local_300 = 0;
                          local_2f8 = 0xd;
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_300,0);
                          FGenericPlatformString::Memcpy(local_300,L"fallbackText",0x1a);
                          local_2f0 = (longlong *)0x0;
                          local_2e8 = 0;
                          local_128 = 0;
                          plVar14 = (longlong *)FUN_140ecc7d0(lVar7,&local_300,0,6,&local_2f0);
                          plVar15 = local_2f0;
                          for (iVar17 = (int)local_2e8; iVar17 != 0; iVar17 = iVar17 + -1) {
                            if (*plVar15 != 0) {
                              FMemory::Free();
                            }
                            plVar15 = plVar15 + 2;
                          }
                          if (local_2f0 != (longlong *)0x0) {
                            FMemory::Free(local_2f0);
                          }
                          if (local_300 != 0) {
                            FMemory::Free();
                          }
                          if (plVar14 != (longlong *)0x0) {
                            (**(code **)(*plVar14 + 0x2b0))
                                      (plVar14,*(longlong *)
                                                (*(longlong *)(lVar8 + 0x26d0) + -8 + lVar13 * 8) +
                                               0x30,1,0);
                          }
                        }
                        else {
                          local_360 = 0;
                          local_358 = 5;
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_360,0);
                          FGenericPlatformString::Memcpy(local_360,L"icon",10);
                          FUN_142088910(lVar7,&local_360);
                          if (local_360 != 0) {
                            FMemory::Free();
                          }
                          local_2d0 = 0;
                          local_2c8 = 0xf;
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d0,0);
                          FGenericPlatformString::Memcpy(local_2d0,L"innerEmoteIcon",0x1e);
                          local_2c0 = (longlong *)0x0;
                          local_2b8 = 0;
                          local_120 = 0;
                          lVar7 = FUN_140ecbdf0(lVar7,&local_2d0,0,6,&local_2c0);
                          plVar15 = local_2c0;
                          for (iVar18 = (int)local_2b8; iVar18 != 0; iVar18 = iVar18 + -1) {
                            if (*plVar15 != 0) {
                              FMemory::Free();
                            }
                            plVar15 = plVar15 + 2;
                          }
                          if (local_2c0 != (longlong *)0x0) {
                            FMemory::Free(local_2c0);
                          }
                          if (local_2d0 != 0) {
                            FMemory::Free();
                          }
                          if (lVar7 != 0) {
                            FUN_142088ee0(lVar7,iVar17);
                            FWeakObjectPtr::operator=(&local_1f8,param_1);
                            local_1e8 = local_1f8;
                            local_1d0 = *(int *)(lVar8 + 0x26d8);
                            lVar7 = (longlong)local_1d0;
                            pvVar12 = *(void **)(lVar8 + 0x26d0);
                            local_1e4 = local_1f4;
                            local_1d8 = (void *)0x0;
                            _Src = (void *)0x0;
                            local_1e0 = iVar19;
                            if (local_1d0 != 0) {
                              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                                        (&local_1d8,local_1d0,0);
                              _Src = local_1d8;
                              _guard_xfg_dispatch_icall_nop(local_1d8,pvVar12,lVar7 << 3);
                            }
                            iVar19 = local_1d0;
                            iVar17 = local_1e0;
                            uVar6 = local_1e4;
                            uVar5 = local_1e8;
                            local_78 = 0;
                            local_68 = 0;
                            puVar10 = (undefined8 *)FUN_140438ef0(0x28,local_98);
                            if (puVar10 != (undefined8 *)0x0) {
                              *puVar10 = &PTR_FUN_14467a3d0;
                              *(undefined4 *)(puVar10 + 1) = uVar5;
                              puVar2 = puVar10 + 3;
                              *(undefined4 *)((longlong)puVar10 + 0xc) = uVar6;
                              *(int *)(puVar10 + 2) = iVar17;
                              *puVar2 = 0;
                              *(int *)(puVar10 + 4) = iVar19;
                              if (iVar19 == 0) {
                                *(undefined4 *)((longlong)puVar10 + 0x24) = 0;
                              }
                              else {
                                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::
                                ResizeForCopy(puVar2,iVar19,0);
                                _guard_xfg_dispatch_icall_nop
                                          ((void *)*puVar2,_Src,(longlong)iVar19 << 3);
                              }
                            }
                            local_a8[0] = &LAB_141032150;
                            FUN_14204c280(local_a8);
                            if (_Src != (void *)0x0) {
                              FMemory::Free(_Src);
                            }
                          }
                        }
                      }
                    }
                  }
                  else if (iVar19 == 4) {
                    uVar11 = FInternationalization::
                             ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                       (local_c0,L"Duel",&DAT_14466ae00,L"DuelText");
                    FText::operator=(lVar9 + 0x2c8,uVar11);
                    plVar15 = local_b8;
                    if (local_b8 != (longlong *)0x0) {
                      LOCK();
                      plVar14 = local_b8 + 1;
                      lVar9 = *plVar14;
                      *(int *)plVar14 = (int)*plVar14 + -1;
                      UNLOCK();
                      if ((int)lVar9 == 1) {
                        (**(code **)*local_b8)(local_b8);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar15 + 0xc);
                        iVar17 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar17 == 1) {
                          (**(code **)(*plVar15 + 8))(plVar15,1);
                        }
                      }
                    }
                    local_380 = 0;
                    local_378 = 5;
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_380,0);
                    FGenericPlatformString::Memcpy(local_380,L"duel",10);
                    FUN_142088910(lVar7,&local_380);
                    if (local_380 != 0) {
                      FMemory::Free();
                    }
                  }
                  else if (iVar19 == 5) {
                    uVar11 = FInternationalization::
                             ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                       (local_d8,L"Ping Map",L"QuickMenu",L"PingMapText");
                    FText::operator=(lVar9 + 0x2c8,uVar11);
                    plVar15 = local_d0;
                    if (local_d0 != (longlong *)0x0) {
                      LOCK();
                      plVar14 = local_d0 + 1;
                      lVar9 = *plVar14;
                      *(int *)plVar14 = (int)*plVar14 + -1;
                      UNLOCK();
                      if ((int)lVar9 == 1) {
                        (**(code **)*local_d0)(local_d0);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar15 + 0xc);
                        iVar17 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar17 == 1) {
                          (**(code **)(*plVar15 + 8))(plVar15,1);
                        }
                      }
                    }
                    local_270 = 0;
                    local_268 = 8;
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_270,0);
                    FGenericPlatformString::Memcpy(local_270,L"pingMap",0x10);
                    FUN_142088910(lVar7,&local_270);
                    if (local_270 != 0) {
                      FMemory::Free();
                    }
                  }
                  else if (iVar19 == 6) {
                    uVar11 = FInternationalization::
                             ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                       (local_f0,L"Photo Mode",L"QuickMenu",L"PhotoModeText");
                    FText::operator=(lVar9 + 0x2c8,uVar11);
                    plVar15 = local_e8;
                    if (local_e8 != (longlong *)0x0) {
                      LOCK();
                      plVar14 = local_e8 + 1;
                      lVar9 = *plVar14;
                      *(int *)plVar14 = (int)*plVar14 + -1;
                      UNLOCK();
                      if ((int)lVar9 == 1) {
                        (**(code **)*local_e8)(local_e8);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar15 + 0xc);
                        iVar17 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar17 == 1) {
                          (**(code **)(*plVar15 + 8))(plVar15,1);
                        }
                      }
                    }
                    local_280 = 0;
                    local_278 = 10;
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
                    FGenericPlatformString::Memcpy(local_280,L"photoMode",0x14);
                    FUN_142088910(lVar7,&local_280);
                    if (local_280 != 0) {
                      FMemory::Free();
                    }
                  }
                }
              }
              local_res18 = local_res18 + 1;
              if ((int)param_1[0xd1] == 0) {
                puVar16 = &DAT_143f3eda8;
              }
              else {
                puVar16 = (undefined2 *)param_1[0xd0];
              }
              local_250 = (longlong *)0x0;
              local_248 = 0;
              FString::PrintfImpl(local_140,puVar16,local_res18);
              lVar9 = FUN_14101f4d0(param_1,local_140,local_158,6,&local_250);
              if (local_140[0] != 0) {
                FMemory::Free();
              }
              plVar15 = local_250;
              for (iVar17 = (int)local_248; iVar17 != 0; iVar17 = iVar17 + -1) {
                if (*plVar15 != 0) {
                  FMemory::Free();
                }
                plVar15 = plVar15 + 2;
              }
              if (local_250 != (longlong *)0x0) {
                FMemory::Free(local_250);
              }
              lVar7 = local_1f0;
            } while (lVar9 != 0);
          }
        }
        local_230 = 0;
        local_228 = 0x17;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_230,0);
        FGenericPlatformString::Memcpy(local_230,L"hintwrapper.hintSelect",0x2e);
        local_240 = (longlong *)0x0;
        local_238 = 0;
        local_f8 = 0;
        lVar8 = FUN_140f139f0(param_1,&local_230,0,6,&local_240);
        param_1[0xd8] = lVar8;
        plVar15 = local_240;
        for (iVar17 = (int)local_238; iVar17 != 0; iVar17 = iVar17 + -1) {
          if (*plVar15 != 0) {
            FMemory::Free();
          }
          plVar15 = plVar15 + 2;
        }
        if (local_240 != (longlong *)0x0) {
          FMemory::Free(local_240);
        }
        if (local_230 != 0) {
          FMemory::Free();
        }
        local_210 = 0;
        local_208 = 0x15;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_210,0);
        FGenericPlatformString::Memcpy(local_210,L"hintwrapper.hintBack",0x2a);
        local_220 = (longlong *)0x0;
        local_218 = 0;
        local_100 = 0;
        lVar8 = FUN_140f139f0(param_1,&local_210,0,6,&local_220);
        param_1[0xd9] = lVar8;
        plVar15 = local_220;
        for (iVar17 = (int)local_218; iVar17 != 0; iVar17 = iVar17 + -1) {
          if (*plVar15 != 0) {
            FMemory::Free();
          }
          plVar15 = plVar15 + 2;
        }
        if (local_220 != (longlong *)0x0) {
          FMemory::Free(local_220);
        }
        if (local_210 != 0) {
          FMemory::Free();
        }
        if ((param_1[0xd8] != 0) && (param_1[0xd9] != 0)) {
          plVar15 = (longlong *)(param_1[0xd8] + 0x308);
          (**(code **)(*plVar15 + 0x10))(plVar15,0,lVar7);
          (**(code **)(*(longlong *)(param_1[0xd9] + 0x308) + 0x10))
                    ((longlong *)(param_1[0xd9] + 0x308),0,lVar7);
        }
        FUN_1410584d0(param_1);
        if ((longlong *)param_1[0xd7] != (longlong *)0x0) {
          lVar7 = *(longlong *)param_1[0xd7];
          uVar11 = FUN_1404b03b0();
          (**(code **)(lVar7 + 0x2b0))(param_1[0xd7],uVar11,1,0);
        }
        local_170 = 0;
        local_168 = 0;
        lVar7 = *param_1;
        puVar10 = (undefined8 *)FName::FName(local_108,L"Quick_Emote_Open",1);
        (**(code **)(lVar7 + 0x4e8))(param_1,*puVar10,&local_170);
        FUN_142ecd4d0(param_1);
      }
    }
    plVar15 = local_1c0;
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_1c0 + 1;
      lVar7 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14105e4c0 FUN_14105e4c0 body=716 status=ok
// SIG undefined FUN_14105e4c0(void)

void FUN_14105e4c0(longlong param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined8 local_res8;
  
  iVar1 = *param_2;
  *(int *)(param_1 + 0x428) = iVar1;
  if ((iVar1 == 2) || ((iVar1 - 1U & 0xfffffffd) == 0)) {
    FUN_142ed2600(param_1,3);
  }
  plVar2 = *(longlong **)(param_1 + 0x418);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2b0))(plVar2,*(undefined8 *)(param_2 + 2),1,0);
  }
  FUN_14105bca0(param_1,*(undefined8 *)(param_2 + 4));
  FUN_142ed5980(param_1,(char)param_2[6],0);
  FUN_142ed2620(param_1,param_2[7]);
  FUN_142ed3fe0(param_1,(char)param_2[6] == '\x04');
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3b8,param_2 + 8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3c8,param_2 + 0xc);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x378,param_2 + 0x10);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3a8,param_2 + 0x14);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x398,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x198) = 2;
  if (*(longlong *)(param_2 + 0x1c) != 0) {
    lVar8 = *(longlong *)(param_2 + 0x1c) + 0x184;
    cVar3 = FWeakObjectPtr::IsValid(lVar8);
    if (cVar3 != '\0') {
      lVar5 = FWeakObjectPtr::Get(lVar8);
      iVar1 = *(int *)(lVar5 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar6;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
        lVar8 = FWeakObjectPtr::Get(lVar8);
        if (lVar8 != 0) {
          puVar9 = &DAT_143f3eda8;
          if (*(int *)(lVar8 + 0x8f0) == 0) {
            puVar7 = &DAT_143f3eda8;
          }
          else {
            puVar7 = *(undefined2 **)(lVar8 + 0x8e8);
          }
          FName::FName(&local_res8,puVar7,1);
          *(undefined8 *)(param_1 + 0x1a8) = local_res8;
          if (*(int *)(lVar8 + 0x4f8) == 0) {
            puVar7 = &DAT_143f3eda8;
          }
          else {
            puVar7 = *(undefined2 **)(lVar8 + 0x4f0);
          }
          FName::FName(&local_res8,puVar7,1);
          *(undefined8 *)(param_1 + 0x1a0) = local_res8;
          if (*(int *)(lVar8 + 0x920) == 0) {
            puVar7 = &DAT_143f3eda8;
          }
          else {
            puVar7 = *(undefined2 **)(lVar8 + 0x918);
          }
          FName::FName(&local_res8,puVar7,1);
          *(undefined8 *)(param_1 + 0x3f8) = local_res8;
          if (*(int *)(lVar8 + 0x900) == 0) {
            puVar7 = &DAT_143f3eda8;
          }
          else {
            puVar7 = *(undefined2 **)(lVar8 + 0x8f8);
          }
          FName::FName(&local_res8,puVar7,1);
          *(undefined8 *)(param_1 + 1000) = local_res8;
          if (*(int *)(lVar8 + 0x910) != 0) {
            puVar9 = *(undefined2 **)(lVar8 + 0x908);
          }
          FName::FName(&local_res8,puVar9,1);
          *(undefined8 *)(param_1 + 0x3f0) = local_res8;
        }
      }
    }
    if ((param_2[0x1e] != 0) || (param_2[0x1f] != 0)) {
      FWeakObjectPtr::operator=(param_1 + 0x1b0,*(undefined8 *)(param_2 + 0x1c));
      *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1e);
    }
    if ((param_2[0x20] != 0) || (param_2[0x21] != 0)) {
      FWeakObjectPtr::operator=(param_1 + 0x1d0,*(undefined8 *)(param_2 + 0x1c));
      *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x20);
    }
  }
  return;
}



// FUNCTION 14105e790 FUN_14105e790 body=674 status=ok
// SIG undefined FUN_14105e790(void)

void FUN_14105e790(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  local_e0 = 0x14;
  local_e8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"shiftCodeMenuButton",0x28);
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  uVar3 = FUN_140f9a360(param_1,&local_e8,0,6,&local_f8);
  *(undefined8 *)(param_1 + 0x210) = uVar3;
  plVar6 = local_f8;
  for (iVar5 = (int)local_f0; iVar5 != 0; iVar5 = iVar5 + -1) {
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
  local_88 = *(undefined8 *)(param_1 + 0x210);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_58,L"SHiFT CODE",L"SHiFTMenu",L"SHiFTCodeText");
  local_80 = local_58;
  local_78 = param_1;
  puVar4 = (undefined8 *)FName::FName(local_res10,L"OnClickCodeRedemption",1);
  local_68 = 0;
  local_60 = 1;
  local_70 = *puVar4;
  FUN_14105eed0(param_1,&local_88);
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
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  local_c8 = 0;
  local_c0 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"rewardHistoryButton",0x28);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  local_res18 = 0;
  uVar3 = FUN_140f9a360(param_1,&local_c8,0,6,&local_d8);
  *(undefined8 *)(param_1 + 0x218) = uVar3;
  plVar6 = local_d8;
  for (iVar5 = (int)local_d0; iVar5 != 0; iVar5 = iVar5 + -1) {
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
  local_b8 = *(undefined8 *)(param_1 + 0x218);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_40,L"REWARD HISTORY",L"SHiFTMenu",L"RewardHistoryText");
  local_b0 = local_40;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = param_1;
  FUN_14105eed0(param_1,&local_b8);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_38 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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



// FUNCTION 14105ea40 FUN_14105ea40 body=416 status=ok
// SIG undefined FUN_14105ea40(void)

void FUN_14105ea40(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 != 0) {
    local_88 = param_5;
    local_80 = param_6;
    local_7c = param_7;
    local_78 = 0;
    local_70 = 0;
    local_98[0] = param_3;
    local_90 = param_4;
    if ((((longlong *)(param_1 + 400) != &local_78) && (*(int *)(param_1 + 0x198) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 400), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))(plVar1,&local_78);
    }
    local_68 = 0;
    local_60 = 0;
    if ((((longlong *)(param_1 + 0x1a0) != &local_68) && (*(int *)(param_1 + 0x1a8) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x1a0), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))(plVar1,&local_68);
    }
    local_58 = 0;
    local_50 = 0;
    if ((((longlong *)(param_1 + 0x1b0) != &local_58) && (*(int *)(param_1 + 0x1b8) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x1b0), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))(plVar1,&local_58);
    }
    local_48 = 0;
    local_40 = 0;
    if ((((longlong *)(param_1 + 0x1d0) != &local_48) && (*(int *)(param_1 + 0x1d8) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x1d0), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))(plVar1,&local_48);
    }
    local_38 = 0;
    local_30 = 0;
    if ((((longlong *)(param_1 + 0x1c0) != &local_38) && (*(int *)(param_1 + 0x1c8) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x1c0), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))(plVar1,&local_38);
    }
    local_20 = *(undefined8 *)(param_1 + 0x1e0);
    local_18 = *(undefined8 *)(param_1 + 0x1e8);
    local_28 = param_1;
    FUN_14105e4c0(param_2,local_98);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_78);
  }
  return;
}



// FUNCTION 14105ebe0 FUN_14105ebe0 body=210 status=ok
// SIG undefined FUN_14105ebe0(void)

void FUN_14105ebe0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((param_2 != 0) && (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x184), cVar4 != '\0')) {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x184);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"E-mail",L"SHiFTMenuPage",L"EmailText");
    FUN_14105ea40(param_1,param_2,1,uVar6,lVar5 + 0x710,3,0x40);
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
  return;
}



// FUNCTION 14105ecc0 FUN_14105ecc0 body=521 status=ok
// SIG undefined FUN_14105ecc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14105ecc0(longlong param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  *(undefined1 *)(param_1 + 0xed0) = 0;
  plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x594);
  if (plVar4 == (longlong *)0x0) goto LAB_14105ee31;
  lVar5 = FUN_1413f82e0();
  if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_14105ee31;
  uVar6 = AGFireballProjectile::GetPrivateStaticClass();
  lVar5 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar6);
  if ((lVar5 == 0) || (plVar4[0x21b] == 0)) goto LAB_14105ee31;
  *(longlong *)(param_1 + 0xc00) = plVar4[0x21b];
  iVar3 = (**(code **)(*(longlong *)plVar4[0x21b] + 0x408))();
  FUN_1410659b0(param_1,iVar3);
  if (iVar3 < *(int *)(param_1 + 0x910)) {
    uVar6 = 4;
  }
  else {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
    if (lVar5 != 0) {
      lVar7 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(char *)(lVar5 + 0x1950) == '\0')) {
        bVar2 = *(byte *)(param_1 + 0xc09);
        if (bVar2 == 0) {
          bVar2 = *(byte *)(param_1 + 0xc08);
        }
        if (((bVar2 & 0xfa) == 0) && (bVar2 != 1)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          *(undefined1 *)(param_1 + 0xed0) = 1;
          lVar5 = FUN_140e971d0(param_1);
          if (lVar5 != 0) {
            *(undefined1 *)(lVar5 + 0x1950) = 1;
          }
          uVar6 = 3;
          goto LAB_14105ee29;
        }
      }
    }
    uVar6 = 1;
  }
LAB_14105ee29:
  FUN_141065c60(param_1,uVar6);
LAB_14105ee31:
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = param_1;
    *puVar8 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_141031de0;
  FUN_14208c260(param_1,local_68);
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
  return;
}



// FUNCTION 14105eed0 FUN_14105eed0 body=324 status=ok
// SIG undefined FUN_14105eed0(void)

void FUN_14105eed0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 local_res10;
  
  if (*param_2 != 0) {
    param_1 = param_1 + 0x184;
    cVar1 = FWeakObjectPtr::IsValid(param_1);
    if (cVar1 != '\0') {
      FUN_142ed3af0(*param_2,param_2[1],0);
      FUN_142ed2600(*param_2,*(undefined1 *)((longlong)param_2 + 0x29));
      lVar2 = FWeakObjectPtr::Get(param_1);
      puVar4 = &DAT_143f3eda8;
      if (*(int *)(lVar2 + 0x508) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = *(undefined2 **)(lVar2 + 0x500);
      }
      FName::FName(&local_res10,puVar3,1);
      *(undefined8 *)(*param_2 + 0x1a8) = local_res10;
      lVar2 = FWeakObjectPtr::Get(param_1);
      if (*(int *)(lVar2 + 0x4f8) != 0) {
        puVar4 = *(undefined2 **)(lVar2 + 0x4f0);
      }
      FName::FName(&local_res10,puVar4,1);
      *(undefined8 *)(*param_2 + 0x1a0) = local_res10;
      (**(code **)(*(longlong *)(*param_2 + 0x170) + 0x38))
                ((longlong *)(*param_2 + 0x170),(char)param_2[5]);
      if (((int)param_2[3] != 0) || (*(int *)((longlong)param_2 + 0x1c) != 0)) {
        lVar2 = *param_2;
        FWeakObjectPtr::operator=(lVar2 + 0x1b0,param_2[2]);
        *(longlong *)(lVar2 + 0x1b8) = param_2[3];
      }
      if (((int)param_2[4] != 0) || (*(int *)((longlong)param_2 + 0x24) != 0)) {
        lVar2 = *param_2;
        FWeakObjectPtr::operator=(lVar2 + 0x1d0,param_2[2]);
        *(longlong *)(lVar2 + 0x1d8) = param_2[4];
      }
    }
  }
  return;
}



// FUNCTION 14105f020 FUN_14105f020 body=318 status=ok
// SIG undefined FUN_14105f020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14105f020(undefined8 param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uStack_d0 = *param_2;
  uStack_cc = param_2[1];
  uStack_c8 = param_2[2];
  uStack_c4 = param_2[3];
  uStack_c0 = *(undefined8 *)(param_2 + 4);
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_d8 = param_1;
  puVar1 = (undefined8 *)FUN_140438ef0(0x28,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143ff7760;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_d8._4_4_;
    *(undefined4 *)(puVar1 + 2) = uStack_d0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_cc;
    puVar1[3] = CONCAT44(uStack_c4,uStack_c8);
    puVar1[4] = uStack_c0;
  }
  local_b8[0] = &LAB_1410325a0;
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



// FUNCTION 14105f160 FUN_14105f160 body=437 status=ok
// SIG undefined FUN_14105f160(void)

void FUN_14105f160(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 local_res10;
  code *local_18;
  undefined8 uStack_10;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    *(longlong *)(param_1 + 0x2e8) = param_2;
    *(longlong *)(param_1 + 0x2f0) = param_3;
    if (plVar1 != (longlong *)0x0) {
      lVar6 = FUN_14139c4f0();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        cVar5 = (**(code **)(*plVar1 + 0x3f8))(plVar1);
        if (cVar5 == '\0') {
          cVar5 = *(char *)(param_1 + 0x2d4);
          while (cVar5 != '\x04') {
            FUN_141031aa0(param_1);
            cVar5 = *(char *)(param_1 + 0x2d4);
          }
        }
      }
    }
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = FUN_1410404c0;
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAbilityPointsChanged",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x2e8) + 0x48,param_1,&local_18,local_res10);
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_141040590;
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAbilityTierChanged",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x2e8) + 0x28,param_1,&local_18,local_res10);
  }
  return;
}



// FUNCTION 14105f320 FUN_14105f320 body=2527 status=ok
// SIG undefined FUN_14105f320(void)

void FUN_14105f320(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong *local_298;
  undefined8 local_290;
  longlong *local_288;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  longlong *local_268;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  longlong *local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
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
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 *local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined2 local_140;
  longlong local_138 [2];
  undefined8 local_128;
  undefined1 *local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  
  local_210 = 0x18;
  iVar10 = 0;
  local_218 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
  FGenericPlatformString::Memcpy(local_218,L"headerPanel.accountName",0x30);
  local_228 = (longlong *)0x0;
  local_220 = 0;
  uVar2 = FUN_140ecc7d0(param_1,&local_218,0,6,&local_228);
  *(undefined8 *)(param_1 + 0x208) = uVar2;
  plVar8 = local_228;
  for (iVar7 = (int)local_220; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_228 != (longlong *)0x0) {
    FMemory::Free(local_228);
  }
  if (local_218 != 0) {
    FMemory::Free();
  }
  local_1f8 = 0;
  local_1f0 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
  FGenericPlatformString::Memcpy(local_1f8,L"headerPanel.diamondKeys",0x30);
  local_208 = (longlong *)0x0;
  local_200 = 0;
  uVar2 = FUN_140ecc7d0(param_1,&local_1f8,0,6,&local_208);
  *(undefined8 *)(param_1 + 0x230) = uVar2;
  plVar8 = local_208;
  for (iVar7 = (int)local_200; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_208 != (longlong *)0x0) {
    FMemory::Free(local_208);
  }
  if (local_1f8 != 0) {
    FMemory::Free();
  }
  local_1d8 = 0;
  local_1d0 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
  FGenericPlatformString::Memcpy(local_1d8,L"headerPanel.goldenKeys",0x2e);
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0;
  uVar2 = FUN_140ecc7d0(param_1,&local_1d8,0,6,&local_1e8);
  *(undefined8 *)(param_1 + 0x238) = uVar2;
  plVar8 = local_1e8;
  for (iVar7 = (int)local_1e0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_1e8 != (longlong *)0x0) {
    FMemory::Free(local_1e8);
  }
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  plVar8 = *(longlong **)(param_1 + 0x230);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x278))(plVar8,0);
  }
  plVar8 = *(longlong **)(param_1 + 0x238);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x278))(plVar8,0);
  }
  local_1b8 = 0;
  local_1b0 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
  FGenericPlatformString::Memcpy(local_1b8,L"codeRedemptionTextFields",0x32);
  local_1c8 = (longlong *)0x0;
  local_1c0 = 0;
  local_50 = 0;
  lVar3 = FUN_140ecbdf0(param_1,&local_1b8,0,6,&local_1c8);
  plVar8 = local_1c8;
  for (iVar7 = (int)local_1c0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_1c8 != (longlong *)0x0) {
    FMemory::Free(local_1c8);
  }
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  if (lVar3 != 0) {
    plVar8 = (longlong *)(param_1 + 0x218);
    if (*(int *)(param_1 + 0x224) < 5) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8,5);
    }
    local_58 = 0;
    do {
      local_1a8 = (longlong *)0x0;
      local_1a0 = 0;
      FString::PrintfImpl(local_138,L"Segment%i",iVar10);
      lVar4 = FUN_14101fcb0(lVar3,local_138,0,6,&local_1a8);
      if (local_138[0] != 0) {
        FMemory::Free();
      }
      plVar9 = local_1a8;
      for (iVar7 = (int)local_1a0; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_1a8 != (longlong *)0x0) {
        FMemory::Free(local_1a8);
      }
      if (lVar4 != 0) {
        uVar2 = FUN_1404b03b0();
        uVar5 = FUN_1404b03b0();
        FUN_14105ea40(param_1,lVar4,4,uVar5,uVar2,5,5);
        iVar7 = *(int *)(param_1 + 0x220);
        *(int *)(param_1 + 0x220) = iVar7 + 1;
        if (*(int *)(param_1 + 0x224) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar7);
        }
        *(longlong *)(*plVar8 + (longlong)iVar7 * 8) = lVar4;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 5);
  }
  local_238 = 0;
  local_230 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
  FGenericPlatformString::Memcpy(local_238,L"shiftCodeMenuButton",0x28);
  local_298 = (longlong *)0x0;
  local_290 = 0;
  uVar2 = FUN_140f9a360(param_1,&local_238,0,6,&local_298);
  *(undefined8 *)(param_1 + 0x240) = uVar2;
  plVar8 = local_298;
  for (iVar7 = (int)local_290; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_298 != (longlong *)0x0) {
    FMemory::Free(local_298);
  }
  if (local_238 != 0) {
    FMemory::Free();
  }
  local_168 = *(undefined8 *)(param_1 + 0x240);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_a8,L"SHiFT CODE",L"SHiFTMenu",L"CodeRedemptionButton");
  local_160 = local_a8;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_158 = param_1;
  FUN_14105eed0(param_1,&local_168);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_a0 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  puVar6 = (undefined8 *)FName::FName(local_60,L"OnButtonFocused",1);
  local_258 = 0;
  local_250 = 0x14;
  uVar2 = *puVar6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
  FGenericPlatformString::Memcpy(local_258,L"rewardHistoryButton",0x28);
  local_248 = (longlong *)0x0;
  local_240 = 0;
  local_b0 = 0;
  uVar5 = FUN_140f9a360(param_1,&local_258,0,6,&local_248);
  *(undefined8 *)(param_1 + 0x248) = uVar5;
  plVar8 = local_248;
  for (iVar7 = (int)local_240; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_248 != (longlong *)0x0) {
    FMemory::Free(local_248);
  }
  if (local_258 != 0) {
    FMemory::Free();
  }
  local_f8 = *(undefined8 *)(param_1 + 0x248);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_90,L"REWARD HISTORY",L"SHiFTMenu",L"RewardHistoryButton");
  local_f0 = local_90;
  local_e8 = param_1;
  puVar6 = (undefined8 *)FName::FName(local_b8,L"OnClickRewardHistory",1);
  local_d0 = 1;
  local_e0 = *puVar6;
  local_d8 = uVar2;
  FUN_14105eed0(param_1,&local_f8);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_88 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  local_278 = 0;
  local_270 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
  FGenericPlatformString::Memcpy(local_278,L"submitButton",0x1a);
  local_268 = (longlong *)0x0;
  local_260 = 0;
  local_c0 = 0;
  uVar5 = FUN_140f9a360(param_1,&local_278,0,6,&local_268);
  *(undefined8 *)(param_1 + 0x250) = uVar5;
  plVar8 = local_268;
  for (iVar7 = (int)local_260; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_268 != (longlong *)0x0) {
    FMemory::Free(local_268);
  }
  if (local_278 != 0) {
    FMemory::Free();
  }
  local_128 = *(undefined8 *)(param_1 + 0x250);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_78,L"SUBMIT",L"SHiFTMenu",L"SubmitButton");
  local_120 = local_78;
  local_118 = param_1;
  puVar6 = (undefined8 *)FName::FName(local_c8,L"OnClickSubmit",1);
  local_100 = 0;
  local_110 = *puVar6;
  local_108 = uVar2;
  FUN_14105eed0(param_1,&local_128);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  local_198 = 0;
  local_190 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_198,0x16,"shiftCodeSuccessCheck",0x16,0x3f);
  local_288 = (longlong *)0x0;
  local_280 = 0;
  uVar2 = FUN_140ecbdf0(param_1,&local_198,0,6,&local_288);
  *(undefined8 *)(param_1 + 0x228) = uVar2;
  plVar8 = local_288;
  for (iVar7 = (int)local_280; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_288 != (longlong *)0x0) {
    FMemory::Free(local_288);
  }
  if (local_198 != 0) {
    FMemory::Free();
  }
  plVar8 = *(longlong **)(param_1 + 0x228);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x278))(plVar8,0);
  }
  local_178 = 0;
  local_170 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  FGenericPlatformString::Memcpy(local_178,L"errorMessage",0x1a);
  local_188 = (longlong *)0x0;
  local_180 = 0;
  uVar2 = FUN_140ecc7d0(param_1,&local_178,0,6,&local_188);
  *(undefined8 *)(param_1 + 0x200) = uVar2;
  plVar8 = local_188;
  for (iVar7 = (int)local_180; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x184);
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x2b0))
              (*(longlong **)(param_1 + 0x200),lVar3 + 0x818,1,0);
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x278))(*(longlong **)(param_1 + 0x200),0);
  }
  return;
}



// FUNCTION 14105fd00 FUN_14105fd00 body=1944 status=ok
// SIG undefined FUN_14105fd00(void)

void FUN_14105fd00(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
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
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  local_1e0 = 0xf;
  local_1e8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8,L"editTextFields",0x1e);
  local_1f8 = (longlong *)0x0;
  local_1f0 = 0;
  lVar3 = FUN_140ecbdf0(param_1,&local_1e8,0,6,&local_1f8);
  plVar8 = local_1f8;
  for (iVar9 = (int)local_1f0; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_1f8 != (longlong *)0x0) {
    FMemory::Free(local_1f8);
  }
  if (local_1e8 != 0) {
    FMemory::Free();
  }
  if (lVar3 != 0) {
    local_1c8 = 0;
    local_1c0 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
    FGenericPlatformString::Memcpy(local_1c8,L"emailEntry",0x16);
    local_1d8 = (longlong *)0x0;
    local_1d0 = 0;
    uVar4 = FUN_14101fcb0(lVar3,&local_1c8,0,6,&local_1d8);
    *(undefined8 *)(param_1 + 0x200) = uVar4;
    plVar8 = local_1d8;
    for (iVar9 = (int)local_1d0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_1d8 != (longlong *)0x0) {
      FMemory::Free(local_1d8);
    }
    if (local_1c8 != 0) {
      FMemory::Free();
    }
    local_1a8 = 0;
    local_1a0 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
    FGenericPlatformString::Memcpy(local_1a8,L"passwordEntry",0x1c);
    local_1b8 = (longlong *)0x0;
    local_1b0 = 0;
    uVar4 = FUN_14101fcb0(lVar3,&local_1a8,0,6,&local_1b8);
    *(undefined8 *)(param_1 + 0x208) = uVar4;
    plVar8 = local_1b8;
    for (iVar9 = (int)local_1b0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_1b8 != (longlong *)0x0) {
      FMemory::Free(local_1b8);
    }
    if (local_1a8 != 0) {
      FMemory::Free();
    }
    local_188 = 0;
    local_180 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
    FGenericPlatformString::Memcpy(local_188,L"confirmPasswordEntry",0x2a);
    local_198 = (longlong *)0x0;
    local_190 = 0;
    uVar4 = FUN_14101fcb0(lVar3,&local_188,0,6,&local_198);
    *(undefined8 *)(param_1 + 0x210) = uVar4;
    plVar8 = local_198;
    for (iVar9 = (int)local_190; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_198 != (longlong *)0x0) {
      FMemory::Free(local_198);
    }
    if (local_188 != 0) {
      FMemory::Free();
    }
    local_168 = 0;
    local_160 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
    FGenericPlatformString::Memcpy(local_168,L"ageEntry",0x12);
    local_178 = (longlong *)0x0;
    local_170 = 0;
    local_c8 = 0;
    uVar4 = FUN_140f9a360(lVar3,&local_168,0,6,&local_178);
    *(undefined8 *)(param_1 + 0x1f8) = uVar4;
    plVar8 = local_178;
    for (iVar9 = (int)local_170; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_178 != (longlong *)0x0) {
      FMemory::Free(local_178);
    }
    if (local_168 != 0) {
      FMemory::Free();
    }
  }
  FUN_14105ebe0(param_1,*(undefined8 *)(param_1 + 0x200));
  lVar3 = *(longlong *)(param_1 + 0x208);
  if ((lVar3 != 0) && (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x184), cVar2 != '\0')) {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x184);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,L"Password",L"SHiFTMenuPage",L"PasswordText");
    FUN_14105ea40(param_1,lVar3,3,uVar4,lVar5 + 0x740,4,0x40);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_80 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
  }
  lVar3 = *(longlong *)(param_1 + 0x210);
  if ((lVar3 != 0) && (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x184), cVar2 != '\0')) {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x184);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"Confirm Password",L"SHiFTMenuPage",L"ConfirmPasswordText");
    FUN_14105ea40(param_1,lVar3,2,uVar4,lVar5 + 0x758,4,0x40);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_68 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
  }
  puVar6 = (undefined8 *)FName::FName(local_c0,L"OnButtonFocused",1);
  uVar4 = *puVar6;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar2 != '\0') {
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      local_158 = 0;
      local_150 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
      FGenericPlatformString::Memcpy(local_158,L"agePrompt",0x14);
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"I certify that I am at least 13 years of age.",L"SHiFTMenu",
                         L"ConfirmAgeText");
      FUN_142f100e0(*(undefined8 *)(param_1 + 0x1f8),&local_158,uVar7);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_50 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      if (local_158 != 0) {
        FMemory::Free();
      }
    }
    local_128 = *(undefined8 *)(param_1 + 0x1f8);
    local_120 = FWeakObjectPtr::Get(param_1 + 0x184);
    local_120 = local_120 + 0x728;
    local_118 = param_1;
    puVar6 = (undefined8 *)FName::FName(local_b8,L"OnAgeConfirmedClicked",1);
    local_100 = 0x101;
    local_110 = *puVar6;
    local_108 = uVar4;
    FUN_14105eed0(param_1,&local_128);
  }
  local_138 = 0;
  local_130 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_138,0xd,"submitButton",0xd,0x3f);
  local_148 = (longlong *)0x0;
  local_140 = 0;
  local_b0 = 0;
  uVar7 = FUN_140f9a360(param_1,&local_138,0,6,&local_148);
  *(undefined8 *)(param_1 + 0x218) = uVar7;
  plVar8 = local_148;
  for (iVar9 = (int)local_140; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free(local_148);
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  local_f8 = *(undefined8 *)(param_1 + 0x218);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_a0,L"Submit",L"SHiFTMenu",L"SubmitText");
  local_f0 = local_a0;
  local_e8 = param_1;
  puVar6 = (undefined8 *)FName::FName(local_a8,L"OnClickSubmit",1);
  local_d0 = 0;
  local_e0 = *puVar6;
  local_d8 = uVar4;
  FUN_14105eed0(param_1,&local_f8);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_98 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  return;
}



// FUNCTION 1410604a0 FUN_1410604a0 body=617 status=ok
// SIG undefined FUN_1410604a0(void)

void FUN_1410604a0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 local_res18 [16];
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98 [3];
  undefined1 *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  local_c0 = 10;
  local_c8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"offlineMC",0x14);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  FUN_140e98b90(param_1,param_1 + 0x1f8,&local_c8,0,6,&local_d8);
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
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    local_a8 = 0;
    local_a0 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    FGenericPlatformString::Memcpy(local_a8,L"retryButton",0x18);
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    FUN_140f15b10(param_1,param_1 + 0x200,&local_a8,0,6,&local_b8);
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
    local_98[2] = *(undefined8 *)(param_1 + 0x200);
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_58,L"Retry",L"SHiFTMenuUnavailblePage",L"Retry");
    local_80 = local_58;
    local_78 = param_1;
    puVar3 = (undefined8 *)FName::FName(local_res18,L"OnClickRetry",1);
    local_68 = 0;
    local_60 = 1;
    local_70 = *puVar3;
    FUN_14105eed0(param_1,local_98 + 2);
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
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    local_98[0] = 0;
    local_98[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
    FGenericPlatformString::Memcpy(local_98[0],L"transitionOff",0x1c);
    FUN_142088910(*(undefined8 *)(param_1 + 0x1f8),local_98);
    if (local_98[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141060710 FUN_141060710 body=1251 status=ok
// SIG undefined FUN_141060710(void)

void FUN_141060710(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
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
  undefined8 local_b8;
  undefined1 *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  local_148 = 0;
  local_140 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
  FGenericPlatformString::Memcpy(local_148,L"resetPasswordPanelMC",0x2a);
  local_158 = (longlong *)0x0;
  local_150 = 0;
  lVar2 = FUN_140ecbdf0(param_1,&local_148,0,6,&local_158);
  plVar7 = local_158;
  for (iVar6 = (int)local_150; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free(local_158);
  }
  if (local_148 != 0) {
    FMemory::Free();
  }
  if (lVar2 != 0) {
    local_128 = 0;
    local_120 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    FGenericPlatformString::Memcpy(local_128,L"resetPasswordsTextFields",0x32);
    local_138 = (longlong *)0x0;
    local_130 = 0;
    lVar3 = FUN_140ecbdf0(lVar2,&local_128,0,6,&local_138);
    plVar7 = local_138;
    for (iVar6 = (int)local_130; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
    if (local_128 != 0) {
      FMemory::Free();
    }
    if (lVar3 != 0) {
      local_108 = 0;
      local_100 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
      FGenericPlatformString::Memcpy(local_108,L"emailEntry",0x16);
      local_118 = (longlong *)0x0;
      local_110 = 0;
      uVar4 = FUN_14101fcb0(lVar3,&local_108,0,6,&local_118);
      *(undefined8 *)(param_1 + 0x1f8) = uVar4;
      plVar7 = local_118;
      for (iVar6 = (int)local_110; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_118 != (longlong *)0x0) {
        FMemory::Free(local_118);
      }
      if (local_108 != 0) {
        FMemory::Free();
      }
    }
    local_e8 = 0;
    local_e0 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    FGenericPlatformString::Memcpy(local_e8,L"resetButton",0x18);
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    uVar4 = FUN_140f9a360(lVar2,&local_e8,0,6,&local_f8);
    *(undefined8 *)(param_1 + 0x208) = uVar4;
    plVar7 = local_f8;
    for (iVar6 = (int)local_f0; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free(local_f8);
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    local_c8 = 0;
    local_c0 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Memcpy(local_c8,L"errorBox",0x12);
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    local_88 = 0;
    uVar4 = FUN_140ecc7d0(lVar2,&local_c8,0,6,&local_d8);
    *(undefined8 *)(param_1 + 0x200) = uVar4;
    plVar7 = local_d8;
    for (iVar6 = (int)local_d0; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
    if (local_c8 != 0) {
      FMemory::Free();
    }
  }
  FUN_14105ebe0(param_1,*(undefined8 *)(param_1 + 0x1f8));
  local_b8 = *(undefined8 *)(param_1 + 0x208);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_70,L"Submit",L"SHiFTMenu",L"SubmitText");
  local_b0 = local_70;
  local_a8 = param_1;
  puVar5 = (undefined8 *)FName::FName(local_80,L"OnClickSubmit",1);
  local_a0 = *puVar5;
  puVar5 = (undefined8 *)FName::FName(local_78,L"OnSubmitFocused",1);
  local_90 = 0;
  local_98 = *puVar5;
  FUN_14105eed0(param_1,&local_b8);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_68 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0x200);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"E-mail is not correct.",L"SHiFTMenu",L"IncorrectEmailText");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x200),uVar4,1,0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x278))(*(longlong **)(param_1 + 0x200),0);
  }
  return;
}



// FUNCTION 141060c00 FUN_141060c00 body=2625 status=ok
// SIG undefined FUN_141060c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141060c00(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_308 [32];
  longlong **local_2e8;
  longlong local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  undefined8 local_290;
  longlong local_288;
  undefined8 local_280;
  longlong *local_278;
  undefined8 local_270;
  longlong *local_268;
  undefined8 local_260;
  longlong local_258;
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
  undefined4 *local_1e8;
  ulonglong *puStack_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [16];
  longlong local_148 [2];
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
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
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  local_258 = 0;
  local_250 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
  FGenericPlatformString::Memcpy(local_258,L"signInMC",0x12);
  local_2e8 = &local_268;
  local_268 = (longlong *)0x0;
  local_260 = 0;
  local_f0 = 0;
  lVar4 = FUN_140ecbdf0(param_1,&local_258,0,6);
  plVar8 = local_268;
  for (iVar7 = (int)local_260; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_268 != (longlong *)0x0) {
    FMemory::Free(local_268);
  }
  if (local_258 != 0) {
    FMemory::Free();
  }
  if (lVar4 != 0) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_138,&DAT_144663800,L"SHiFTMenu",L"SignInDescriptionText");
    local_248 = 0;
    local_240 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
    FGenericPlatformString::Memcpy(local_248,L"description",0x18);
    FUN_142f100e0(lVar4,&local_248,local_138);
    if (local_248 != 0) {
      FMemory::Free();
    }
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_130 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)local_130 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
  }
  local_228 = 0;
  local_220 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
  FGenericPlatformString::Memcpy(local_228,L"signInMC.descriptionStep1",0x34);
  local_2e8 = &local_238;
  local_238 = (longlong *)0x0;
  local_230 = 0;
  local_198 = 0;
  uVar5 = FUN_140ecc7d0(param_1,&local_228,0,6);
  *(undefined8 *)(param_1 + 0x218) = uVar5;
  plVar8 = local_238;
  for (iVar7 = (int)local_230; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_238 != (longlong *)0x0) {
    FMemory::Free(local_238);
  }
  if (local_228 != 0) {
    FMemory::Free();
  }
  local_208 = 0;
  local_200 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
  FGenericPlatformString::Memcpy(local_208,L"signInMC.descriptionStep2",0x34);
  local_2e8 = &local_218;
  local_218 = (longlong *)0x0;
  local_210 = 0;
  local_190 = 0;
  uVar5 = FUN_140ecc7d0(param_1,&local_208,0,6);
  *(undefined8 *)(param_1 + 0x220) = uVar5;
  plVar8 = local_218;
  for (iVar7 = (int)local_210; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_218 != (longlong *)0x0) {
    FMemory::Free(local_218);
  }
  if (local_208 != 0) {
    FMemory::Free();
  }
  if ((*(longlong *)(param_1 + 0x218) != 0) && (*(longlong *)(param_1 + 0x220) != 0)) {
    uVar5 = FUN_14103acb0(param_1,local_148);
    lVar4 = FText::FromString(local_78,uVar5);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d0,L"Visit {0} and enter the following 7-character code:",L"SHiFTMenu",
                       L"LinkCodeStep1Text");
    puVar6 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar5);
    local_60[0] = 4;
    FText::FText(local_50,lVar4);
    local_1d8 = *puVar6;
    local_1e8 = local_60;
    puStack_1e0 = &local_30;
    local_1d0 = puVar6[1];
    local_38 = '\x01';
    if (local_1d0 != 0) {
      LOCK();
      *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
      UNLOCK();
    }
    uVar5 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_1e8);
    uVar5 = FText::Format(local_e8,&local_1d8,uVar5);
    FText::FText(local_120,uVar5);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_e0 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_158);
    if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_48 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    plVar8 = (longlong *)puVar6[1];
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
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    plVar8 = *(longlong **)(lVar4 + 8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x218) + 0x2b0))
              (*(longlong **)(param_1 + 0x218),local_120,1,0);
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_118 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_c8 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar1 = (int *)((longlong)local_c8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
    }
    if (local_148[0] != 0) {
      FMemory::Free();
    }
    lVar4 = **(longlong **)(param_1 + 0x220);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"Return here after entering the code",L"SHiFTMenu",
                       L"LinkCodeStep2Text");
    (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x220),uVar5,1,0);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_b0 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  local_2c8 = 0;
  local_2c0 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
  FGenericPlatformString::Memcpy(local_2c8,L"signInMC.SHiFTCode",0x26);
  local_2e8 = &local_1f8;
  local_1f8 = (longlong *)0x0;
  local_1f0 = 0;
  local_160 = 0;
  uVar5 = FUN_140ecc7d0(param_1,&local_2c8,0,6);
  *(undefined8 *)(param_1 + 0x228) = uVar5;
  plVar8 = local_1f8;
  for (iVar7 = (int)local_1f0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_1f8 != (longlong *)0x0) {
    FMemory::Free(local_1f8);
  }
  if (local_2c8 != 0) {
    FMemory::Free();
  }
  local_2d8 = 0;
  local_2d0 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,0);
  FGenericPlatformString::Memcpy(local_2d8,L"signInMC.codeTimer",0x26);
  local_2e8 = &local_2b8;
  local_2b8 = (longlong *)0x0;
  local_2b0 = 0;
  local_168 = 0;
  uVar5 = FUN_140ecc7d0(param_1,&local_2d8,0,6);
  *(undefined8 *)(param_1 + 0x230) = uVar5;
  plVar8 = local_2b8;
  for (iVar7 = (int)local_2b0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_2b8 != (longlong *)0x0) {
    FMemory::Free(local_2b8);
  }
  if (local_2d8 != 0) {
    FMemory::Free();
  }
  plVar8 = *(longlong **)(param_1 + 0x228);
  if ((plVar8 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x230) != 0)) {
    (**(code **)(*plVar8 + 0x278))(plVar8,0);
    (**(code **)(**(longlong **)(param_1 + 0x230) + 0x278))(*(longlong **)(param_1 + 0x230),0);
  }
  local_288 = 0;
  local_280 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
  FGenericPlatformString::Memcpy(local_288,L"signInMC.errorBox",0x24);
  local_2e8 = &local_278;
  local_278 = (longlong *)0x0;
  local_270 = 0;
  local_170 = 0;
  uVar5 = FUN_140ecc7d0(param_1,&local_288,0,6);
  *(undefined8 *)(param_1 + 0x210) = uVar5;
  plVar8 = local_278;
  for (iVar7 = (int)local_270; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_278 != (longlong *)0x0) {
    FMemory::Free(local_278);
  }
  if (local_288 != 0) {
    FMemory::Free();
  }
  local_2a8 = 0;
  local_2a0 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
  FGenericPlatformString::Memcpy(local_2a8,L"signInMC.signInButton",0x2c);
  local_2e8 = &local_298;
  local_298 = (longlong *)0x0;
  local_290 = 0;
  local_178 = 0;
  uVar5 = FUN_140f9a360(param_1,&local_2a8,0,6);
  *(undefined8 *)(param_1 + 0x238) = uVar5;
  plVar8 = local_298;
  for (iVar7 = (int)local_290; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_298 != (longlong *)0x0) {
    FMemory::Free(local_298);
  }
  if (local_2a8 != 0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0x210) != (longlong *)0x0) {
    lVar4 = **(longlong **)(param_1 + 0x210);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"Link code expired",L"SHiFTMenu",L"LinkCodeExpiredText");
    (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x210),uVar5,1,0);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_98 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0x278))(*(longlong **)(param_1 + 0x210),0);
  }
  local_1c8 = *(undefined8 *)(param_1 + 0x238);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_108,L"Reveal Link Code",L"SHiFTMenu",L"RevealLinkCodeText");
  local_1c0 = local_108;
  local_1b8 = param_1;
  puVar6 = (undefined8 *)FName::FName(local_180,L"OnClickSubmit",1);
  local_1b0 = *puVar6;
  puVar6 = (undefined8 *)FName::FName(local_188,L"OnSubmitFocused",1);
  local_1a0 = 0;
  local_1a8 = *puVar6;
  FUN_14105eed0(param_1,&local_1c8);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_100 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  return;
}



// FUNCTION 141061650 FUN_141061650 body=88 status=ok
// SIG undefined FUN_141061650(void)

bool FUN_141061650(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146873e98;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 1410616b0 FUN_1410616b0 body=88 status=ok
// SIG undefined FUN_1410616b0(void)

bool FUN_1410616b0(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146873e80;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 141061710 FUN_141061710 body=618 status=ok
// SIG undefined FUN_141061710(void)

void FUN_141061710(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  plVar4 = *(longlong **)(param_1 + 0x1a8);
  if ((plVar4 != (longlong *)0x0) && (*(char *)(param_1 + 0x1b0) == '\0')) {
    (**(code **)(*plVar4 + 0x3b0))(plVar4,local_38);
    if (*(longlong *)(param_1 + 0x188) != 0) {
      if (*(char *)(param_2 + 0x10) == '\0') {
        iVar3 = 1;
      }
      else {
        iVar3 = *(int *)(param_2 + 0x14) + 1;
      }
      FUN_142088ee0(*(longlong *)(param_1 + 0x188),iVar3);
    }
    uVar5 = 0;
    if ((*(char *)(param_2 + 0x10) != '\0') && (uVar7 = uVar5, 0 < *(int *)(param_1 + 0x198))) {
      do {
        lVar1 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 400));
        if (lVar1 != 0) {
          local_58 = 0;
          local_50 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          FGenericPlatformString::Memcpy(local_58,L"icon",10);
          local_68 = (longlong *)0x0;
          local_60 = 0;
          lVar2 = FUN_140ecbdf0(lVar1,&local_58,0,6,&local_68);
          plVar4 = local_68;
          for (iVar3 = (int)local_60; iVar3 != 0; iVar3 = iVar3 + -1) {
            if (*plVar4 != 0) {
              FMemory::Free();
            }
            plVar4 = plVar4 + 2;
          }
          if (local_68 != (longlong *)0x0) {
            FMemory::Free(local_68);
          }
          if (local_58 != 0) {
            FMemory::Free();
          }
          if (lVar2 != 0) {
            local_48 = 0;
            local_40 = 3;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
            FGenericPlatformString::Memcpy(local_48,&DAT_14466b844,6);
            FUN_142088cf0(lVar1,&local_48);
            if (local_48 != 0) {
              FMemory::Free();
            }
            FUN_142088cf0(lVar2);
          }
        }
        uVar6 = (int)uVar7 + 1;
        uVar5 = uVar5 + 8;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < *(int *)(param_1 + 0x198));
    }
    plVar4 = *(longlong **)(param_1 + 0x1a0);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,0);
    }
    *(undefined1 *)(param_1 + 0x1b0) = 1;
    local_48 = 0;
    local_40 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"show",10);
    FUN_142088910(param_1,&local_48);
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141061980 FUN_141061980 body=314 status=ok
// SIG undefined FUN_141061980(void)

void FUN_141061980(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong local_20;
  
  iVar3 = *(int *)(param_1 + 0x6c0);
  if (iVar3 < *(int *)(param_1 + 0x6b8)) {
    do {
      lVar8 = (longlong)iVar3 * 0x40 + *(longlong *)(param_1 + 0x6b0);
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x38) == '\0')) {
        FWeakObjectPtr::operator=(local_28,0);
        local_20 = 0;
        pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGFxSHiFTMenu::HandleEULAResponse",L"::");
        pwVar2 = (wchar_t *)0x0;
        while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
          pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar2 = pwVar1;
        }
        FName::FName(&local_res10,pwVar2 + 2,1);
        FWeakObjectPtr::operator=(local_28,param_1);
        local_20 = local_res10;
        if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(local_28), lVar5 != 0)) {
          UObject::FindFunction(lVar5,local_20);
        }
        uVar6 = FWeakObjectPtr::Get(param_1 + 0x690);
        uVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
        FUN_1410f34f0(uVar7,lVar8,local_28,uVar6);
        return;
      }
      iVar3 = iVar3 + 1;
      *(int *)(param_1 + 0x6c0) = iVar3;
    } while (iVar3 < *(int *)(param_1 + 0x6b8));
  }
  FUN_1410300d0(param_1);
  return;
}



// FUNCTION 141061ac0 FUN_141061ac0 body=314 status=ok
// SIG undefined FUN_141061ac0(void)

void FUN_141061ac0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong local_20;
  
  iVar3 = *(int *)(param_1 + 0x8b0);
  if (iVar3 < *(int *)(param_1 + 0x8a8)) {
    do {
      lVar8 = (longlong)iVar3 * 0x40 + *(longlong *)(param_1 + 0x8a0);
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x38) == '\0')) {
        FWeakObjectPtr::operator=(local_28,0);
        local_20 = 0;
        pwVar4 = _guard_xfg_dispatch_icall_nop
                           (L"&UGFxSHiFTMenuNoCrossplay::HandleEULAResponse",L"::");
        pwVar2 = (wchar_t *)0x0;
        while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
          pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar2 = pwVar1;
        }
        FName::FName(&local_res10,pwVar2 + 2,1);
        FWeakObjectPtr::operator=(local_28,param_1);
        local_20 = local_res10;
        if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(local_28), lVar5 != 0)) {
          UObject::FindFunction(lVar5,local_20);
        }
        uVar6 = FWeakObjectPtr::Get(param_1 + 0x6d8);
        uVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
        FUN_1410f34f0(uVar7,lVar8,local_28,uVar6);
        return;
      }
      iVar3 = iVar3 + 1;
      *(int *)(param_1 + 0x8b0) = iVar3;
    } while (iVar3 < *(int *)(param_1 + 0x8a8));
  }
  FUN_141030330(param_1);
  return;
}



// FUNCTION 141061c00 FUN_141061c00 body=536 status=ok
// SIG undefined FUN_141061c00(void)

void FUN_141061c00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_158 [8];
  longlong *local_150;
  undefined8 local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  longlong local_d8;
  int local_d0;
  int local_cc;
  undefined8 local_70;
  
  FUN_140b99f70(local_108);
  FText::operator=(local_f0,param_3);
  FText::operator=(local_108,param_2);
  local_70 = FWeakObjectPtr::Get(param_1 + 0x6d8);
  uVar5 = FUN_1404b03b0();
  FText::FText(local_158,uVar5);
  local_130 = 1;
  local_140 = 0;
  local_138 = 0;
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_128,&DAT_14466f434,L"SHiFTMenu",L"DialogChoice_OK");
  FText::operator=(local_158,uVar5);
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_120 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)local_120 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  puVar6 = (undefined8 *)FName::FName(local_res8,&DAT_144660ff4,1);
  iVar3 = local_d0;
  lVar8 = (longlong)local_d0;
  local_140 = *puVar6;
  local_138 = DAT_146b3e2a0;
  local_d0 = local_d0 + 1;
  local_130._0_1_ = 1;
  if (local_cc < local_d0) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,iVar3);
  }
  lVar8 = lVar8 * 0x30 + local_d8;
  FText::FText(lVar8,local_158);
  *(undefined8 *)(lVar8 + 0x18) = local_140;
  *(undefined8 *)(lVar8 + 0x20) = local_138;
  *(undefined1 *)(lVar8 + 0x28) = (undefined1)local_130;
  *(undefined1 *)(lVar8 + 0x29) = local_130._1_1_;
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar8 != 0) {
    lVar7 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_141061db6;
  }
  lVar8 = 0;
LAB_141061db6:
  FUN_1410f3080(lVar8,local_108);
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_150 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)local_150 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  FUN_140b9d1a0(local_108);
  return;
}



// FUNCTION 141061e20 FUN_141061e20 body=1153 status=ok
// SIG undefined FUN_141061e20(void)

ulonglong FUN_141061e20(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  bool bVar6;
  wchar_t *pwVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  undefined8 uVar15;
  int *piVar16;
  undefined4 uVar17;
  longlong local_res18;
  undefined8 local_res20;
  int local_a8;
  int local_a4;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined1 local_50;
  undefined8 local_48;
  undefined2 local_40;
  
  FUN_141024370(param_1 + 200);
  uVar10 = FUN_140ad4c90(param_1,&local_98);
  if (local_98 == 0) goto LAB_141062252;
  uVar10 = 0;
  LOCK();
  uVar3 = *(uint *)(local_98 + 0x90);
  if (uVar3 == 0) {
    *(uint *)(local_98 + 0x90) = 0;
  }
  else {
    uVar10 = (ulonglong)uVar3;
  }
  UNLOCK();
  if (uVar3 == 0) goto LAB_141062252;
  cVar8 = FUN_142ebd920(param_1);
  if (cVar8 == '\0') {
    (**(code **)(*param_1 + 0x520))(param_1);
  }
  if (*(longlong *)(param_2 + 0x88) != 0) {
    local_88 = 0;
    local_80 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,*(undefined8 *)(param_2 + 0x88),&local_88);
  }
  param_1[0x132] = *(longlong *)(param_2 + 0x90);
  *(int *)(param_1 + 199) = (int)param_1[0x112];
  cVar8 = *(char *)(param_2 + 0x99);
  *(char *)(param_1 + 0xc6) = cVar8;
  if (cVar8 == '\0') {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined4 *)(param_2 + 0xa0);
  }
  *(undefined4 *)((longlong)param_1 + 0x634) = uVar17;
  FUN_14105b0f0(param_1,1);
  (**(code **)(*param_1 + 0x5e8))(param_1,param_2);
  if (*(char *)(param_2 + 0xa5) == '\0') {
    (**(code **)(*param_1 + 0x578))(param_1,0);
    uVar10 = FUN_142ecf690(param_1);
    *(undefined4 *)((longlong)param_1 + 0x63c) = 2;
    goto LAB_141062252;
  }
  lVar11 = FUN_140eccc40();
  uVar10 = 0;
  if (lVar11 == 0) goto LAB_141062252;
  lVar11 = FUN_140cff1b0(lVar11);
  uVar10 = 0;
  if (lVar11 == 0) goto LAB_141062252;
  pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxRolloutMessage::OnInputDeviceChanged",L"::");
  pwVar14 = (wchar_t *)0x0;
  while (pwVar7 = pwVar12, pwVar7 != (wchar_t *)0x0) {
    pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
    pwVar14 = pwVar7;
  }
  FName::FName(&local_res18,pwVar14 + 2,1);
  plVar2 = (longlong *)(lVar11 + 0x5f8);
  FWeakObjectPtr::operator=(&local_a8,0);
  local_a0 = 0;
  FWeakObjectPtr::operator=(&local_a8,param_1);
  local_a0 = local_res18;
  if ((local_res18 != 0) && (lVar13 = FWeakObjectPtr::Get(&local_a8), lVar13 != 0)) {
    UObject::FindFunction(lVar13,local_a0);
  }
  piVar4 = (int *)*plVar2;
  iVar9 = *(int *)(lVar11 + 0x600);
  for (piVar16 = piVar4; piVar16 != piVar4 + (longlong)iVar9 * 4; piVar16 = piVar16 + 4) {
    if (((*piVar16 == local_a8) && (piVar16[1] == local_a4)) ||
       ((cVar8 = FWeakObjectPtr::IsValid(piVar16), cVar8 == '\0' &&
        (cVar8 = FWeakObjectPtr::IsValid(&local_a8), cVar8 == '\0')))) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if ((bVar6) && (*(longlong *)(piVar16 + 2) == local_a0)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      if ((int)((longlong)piVar16 - (longlong)piVar4 >> 4) != -1) goto LAB_1410620b9;
      break;
    }
  }
  iVar9 = *(int *)(lVar11 + 0x600);
  lVar13 = (longlong)iVar9;
  *(int *)(lVar11 + 0x600) = iVar9 + 1;
  if (*(int *)(lVar11 + 0x604) < iVar9 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar9);
  }
  lVar5 = *plVar2;
  *(int *)(lVar5 + lVar13 * 0x10) = local_a8;
  *(int *)(lVar5 + 4 + lVar13 * 0x10) = local_a4;
  *(longlong *)(lVar5 + 8 + lVar13 * 0x10) = local_a0;
LAB_1410620b9:
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar2);
  param_1[0xb6] = param_1[0x10c];
  if (param_1[0x10c] != 0) {
    pwVar14 = (wchar_t *)FWeakObjectPtr::Get(param_1 + 0xbb);
    if (pwVar14 == (wchar_t *)0x0) {
LAB_141062136:
      pwVar14 = (wchar_t *)0x0;
    }
    else {
      lVar13 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(pwVar14 + 8) + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pwVar14 + 8) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
           ) != lVar13 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_141062136;
    }
    (**(code **)(*(longlong *)(param_1[0xb6] + 0x308) + 0x10))
              ((longlong *)(param_1[0xb6] + 0x308),0,pwVar14);
    local_78 = 0;
    local_70 = 0;
    uVar15 = FUN_1404b03b0();
    FText::FText(local_68,uVar15);
    local_48 = 0;
    local_40 = 1;
    local_50 = 1;
    FName::FName(&local_res20,L"OakPC_OpenStatusMenu",1);
    uVar10 = local_70;
    lVar13 = (longlong)(int)local_70;
    iVar9 = (int)local_70 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar9);
    if (local_70._4_4_ < iVar9) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_78,uVar10 & 0xffffffff);
    }
    *(undefined8 *)(local_78 + lVar13 * 8) = local_res20;
    (**(code **)(*(longlong *)(param_1[0xb6] + 0x308) + 0x20))
              ((longlong *)(param_1[0xb6] + 0x308),&local_78,1);
    FUN_142ed2e60(param_1[0xb6],0x3f800000);
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
              (&local_78);
  }
  cVar8 = FUN_140ccaa90(lVar11,param_1);
  if (cVar8 != '\0') {
    (**(code **)(*param_1 + 0x578))(param_1,0);
    FUN_142ecf690(param_1);
    *(undefined4 *)((longlong)param_1 + 0x63c) = 2;
  }
  uVar10 = FUN_141056270(param_1,cVar8);
LAB_141062252:
  plVar2 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 1);
    uVar3 = *puVar1;
    uVar10 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      uVar10 = (**(code **)*local_90)(local_90);
      LOCK();
      piVar4 = (int *)((longlong)plVar2 + 0xc);
      iVar9 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        uVar10 = (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  return uVar10;
}



// FUNCTION 1410622b0 FUN_1410622b0 body=161 status=ok
// SIG undefined FUN_1410622b0(void)

void FUN_1410622b0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x6f0) = param_2;
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    local_68 = (undefined4)param_1;
    uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar1 = &PTR_FUN_14465fbc8;
    *(undefined4 *)(puVar1 + 1) = local_68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
    *(undefined4 *)(puVar1 + 2) = param_2;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_5c;
    *(undefined4 *)(puVar1 + 3) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_resc;
  }
  local_58[0] = &LAB_141031d70;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 141062360 FUN_141062360 body=826 status=ok
// SIG undefined FUN_141062360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141062360(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined4 *local_118;
  ulonglong *puStack_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
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
  undefined1 local_68 [24];
  undefined4 local_50 [4];
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    FWeakObjectPtr::operator=(local_108,0);
    local_100 = 0;
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_c0,L"SHiFT Support ID",L"SHiFTMenu",L"SHiFTSupportIdHeaderText");
    uVar6 = FUN_142b4b180(*(undefined8 *)(param_1 + 0x6e0));
    lVar7 = FText::FromString(local_68,uVar6);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_90,
                       L"Your SHiFT Support ID is:\n<b>{0}</b>\n\nContact support.gearboxsoftware.com for help with SHiFT."
                       ,L"SHiFTMenu",L"SHiFTSupportIdBodyText");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_78,uVar6);
    local_50[0] = 4;
    FText::FText(local_40,lVar7);
    local_f8 = *puVar8;
    local_118 = local_50;
    puStack_110 = &local_20;
    local_f0 = puVar8[1];
    local_28 = '\x01';
    if (local_f0 != 0) {
      LOCK();
      *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
      UNLOCK();
    }
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_118);
    uVar6 = FText::Format(local_a8,&local_f8,uVar6);
    FText::FText(local_d8,uVar6);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_e8);
    if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_38 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    plVar4 = (longlong *)puVar8[1];
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
    plVar4 = *(longlong **)(lVar7 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x6d8);
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
    local_128 = 0;
    local_138 = 0;
    local_130 = uVar6;
    FUN_1410f3960(uVar9,local_c0,local_d8,local_108);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d0 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b8 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1410626a0 FUN_1410626a0 body=370 status=ok
// SIG undefined FUN_1410626a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410626a0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4 [3];
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
  local_e4[0] = 0xffffffff;
  if (param_3 != 0) {
    FUN_14170c210(local_e4,param_3);
  }
  local_e8 = 0xffffffff;
  uVar3 = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(&local_e8,param_2);
    uVar3 = local_e8;
  }
  uVar4 = local_e4[0];
  local_e8 = 0xffffffff;
  local_e4[0] = 0xffffffff;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c38;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = uVar3;
    uVar3 = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uVar4;
    uVar4 = 0xffffffff;
  }
  local_d8[0] = &LAB_141031fb0;
  uVar2 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c260(param_1,uVar2);
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
  if (local_98 != 0) {
    plVar5 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar5 = local_a8;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar4);
  FUN_1416f8340(uVar3);
  FUN_1416f8340(local_e8);
  FUN_1416f8340(local_e4[0]);
  return;
}



// FUNCTION 141062820 FUN_141062820 body=1050 status=ok
// SIG undefined FUN_141062820(void)

void FUN_141062820(longlong *param_1,byte param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  longlong local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  longlong local_38;
  undefined4 local_30;
  
  iVar4 = (uint)param_2 * 2 + -1 + *(int *)((longlong)param_1 + 0x6b4);
  *(int *)((longlong)param_1 + 0x6b4) = iVar4;
  if (iVar4 < 0) {
    iVar4 = (int)param_1[0xd9] + -1;
  }
  else if ((int)param_1[0xd9] <= iVar4) {
    iVar4 = 0;
  }
  *(int *)((longlong)param_1 + 0x6b4) = iVar4;
  uVar1 = *(undefined8 *)(param_1[0xd8] + 0x10);
  FUN_141063d10(param_1,param_2,0);
  if (param_1[0x140] == 0) {
    return;
  }
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_14687451c) && (_Init_thread_header(&DAT_14687451c), DAT_14687451c == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fd50,0);
    FGenericPlatformString::Memcpy(DAT_14629fd50,L"spinLeft",0x12);
    atexit((_func_5014 *)&LAB_143e5d7e0);
    _Init_thread_footer(&DAT_14687451c);
  }
  puVar8 = &DAT_14629fd60;
  if ((*piVar6 < DAT_146874520) && (_Init_thread_header(&DAT_146874520), DAT_146874520 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fd60,0);
    FGenericPlatformString::Memcpy(DAT_14629fd60,L"spinRight",0x14);
    atexit((_func_5014 *)&LAB_143e5d800);
    _Init_thread_footer(&DAT_146874520);
  }
  lVar7 = -1;
  if ((param_1[0x179] == 0) ||
     (cVar3 = FUN_140fb3d70(param_1[0x179],param_1 + 0x139), cVar3 == '\0')) {
    iVar4 = -1;
  }
  else {
    iVar4 = FUN_1406ab3e0(param_1[0x179]);
  }
  if ((iVar4 == (int)param_1[0x136]) || (iVar4 == *(int *)((longlong)param_1 + 0x9b4))) {
    pwVar9 = L"tutorial2spinRight";
    if (param_2 != 0) {
      pwVar9 = L"tutorial2spinLeft";
    }
    local_78 = 0;
    local_70 = 0;
    if (*pwVar9 != L'\0') {
      do {
        lVar7 = lVar7 + 1;
      } while (pwVar9[lVar7] != L'\0');
LAB_1410629da:
      local_78 = 0;
      uVar5 = (int)lVar7 + 1;
      local_70 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      }
      FGenericPlatformString::Memcpy(local_78,pwVar9,(longlong)(int)uVar5 * 2);
    }
  }
  else {
    if (((iVar4 != (int)param_1[0x137]) && (iVar4 != *(int *)((longlong)param_1 + 0x9bc))) &&
       (iVar4 != (int)param_1[0x138])) {
      if (param_2 != 0) {
        puVar8 = &DAT_14629fd50;
      }
      FUN_142088910(param_1[0x140],puVar8);
      goto LAB_141062a1e;
    }
    pwVar9 = L"tutorial3spinRight";
    if (param_2 != 0) {
      pwVar9 = L"tutorial3spinLeft";
    }
    local_78 = 0;
    local_70 = 0;
    if (*pwVar9 != L'\0') {
      do {
        lVar7 = lVar7 + 1;
      } while (pwVar9[lVar7] != L'\0');
      goto LAB_1410629da;
    }
  }
  FUN_142088910(param_1[0x140],&local_78);
  if (local_78 != 0) {
    FMemory::Free();
  }
LAB_141062a1e:
  cVar3 = '\x01';
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x17b));
  if (param_3 == '\0') {
    if (param_1[0x17c] != 0) {
      lVar7 = *(longlong *)(param_1[0x17c] + 0x458);
      if (lVar7 == 0) {
        cVar3 = '\x01';
      }
      else {
        cVar3 = *(char *)(lVar7 + 0x34);
      }
    }
  }
  else {
    cVar3 = (param_2 ^ 1) + 3;
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x17b));
  FUN_141063a00(param_1,uVar1,cVar3,0);
  if (iVar4 == (int)param_1[0x136]) {
    puVar8 = (undefined8 *)param_1[0xd8];
    puVar10 = puVar8 + (longlong)(int)param_1[0xd9] * 8;
    for (; puVar8 != puVar10; puVar8 = puVar8 + 8) {
      local_68 = *puVar8;
      local_58 = puVar8[2];
      local_60 = puVar8[1];
      local_50 = puVar8[3];
      local_48 = puVar8[4];
      local_40 = *(undefined1 *)(puVar8 + 5);
      local_3f = *(undefined1 *)((longlong)puVar8 + 0x29);
      local_38 = 0;
      local_30 = 0;
      if (((puVar8 + 6 != &local_38) && (*(int *)(puVar8 + 7) != 0)) &&
         (plVar2 = (longlong *)puVar8[6], plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_38);
      }
      if (local_58 != 0) {
        FUN_14105c2c0(local_58,0);
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
    }
  }
  local_78 = 0;
  local_70 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x127],&local_78);
  return;
}



// FUNCTION 141062c40 FUN_141062c40 body=503 status=ok
// SIG undefined FUN_141062c40(void)

void FUN_141062c40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  void *_Src;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  lVar3 = param_1 + 0x184;
  cVar6 = FWeakObjectPtr::IsValid(lVar3);
  if (cVar6 != '\0') {
    lVar7 = FWeakObjectPtr::Get(lVar3);
    plVar5 = *(longlong **)(lVar7 + 0x6e8);
    lVar7 = *(longlong *)(lVar7 + 0x6e0);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if ((lVar7 != 0) && (*(longlong *)(param_1 + 0x1f8) != 0)) {
      FUN_142eb8880(*(longlong *)(param_1 + 0x1f8) + 0x308,local_48);
      puVar8 = (undefined8 *)FText::ToString();
      local_58 = (void *)0x0;
      local_50 = *(int *)(puVar8 + 1);
      lVar11 = (longlong)local_50;
      _Src = (void *)*puVar8;
      if (local_50 == 0) {
        local_4c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
        _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar11 * 2);
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
      FUN_142b68e00(lVar7,&local_58);
      lVar7 = FWeakObjectPtr::Get(lVar3);
      uVar9 = FWeakObjectPtr::Get(lVar3);
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_30,L"Reset Password",L"SHiFTMenu",L"ResetPasswordText");
      FUN_141061c00(uVar9,uVar10,lVar7 + 0x7e8);
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      if (local_58 != (void *)0x0) {
        FMemory::Free();
      }
    }
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
  }
  return;
}



// FUNCTION 141062e40 FUN_141062e40 body=97 status=ok
// SIG undefined FUN_141062e40(void)

ulonglong FUN_141062e40(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x420);
  uVar4 = 0;
  if (((lVar3 != 0) && (uVar4 = FUN_141039bf0(lVar3), uVar4 != 0)) && (param_2 != 0)) {
    plVar5 = *(longlong **)(uVar4 + 0x88);
    piVar1 = (int *)(uVar4 + 0x90);
    uVar4 = (ulonglong)*piVar1;
    plVar2 = plVar5 + uVar4;
    for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
      if (*plVar5 == param_2) {
        return CONCAT71((int7)(int3)((uint)*piVar1 >> 8),1);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 141062eb0 FUN_141062eb0 body=41 status=ok
// SIG undefined FUN_141062eb0(void)

void FUN_141062eb0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142f13060(param_1 + 0x20);
  if (cVar1 != '\0') {
    FUN_141066b10(param_1);
    return;
  }
  return;
}



// FUNCTION 141062ee0 FUN_141062ee0 body=107 status=ok
// SIG undefined FUN_141062ee0(void)

wchar_t * FUN_141062ee0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return L"Success";
  case 1:
    return L"Expired";
  case 2:
    return L"NotValid";
  case 3:
    return L"Taken";
  case 4:
    return L"GeneralFailure";
  case 5:
    return L"NetworkFailure";
  case 6:
    return L"Timeout";
  case 7:
    return L"Duplicate";
  case 8:
    return L"AtItemCapacity";
  default:
    return L"";
  }
}



// FUNCTION 141062f70 FUN_141062f70 body=182 status=ok
// SIG undefined FUN_141062f70(void)

void FUN_141062f70(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xbb);
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
      if (*(char *)((longlong)param_1 + 0x6e5) == '\x01') {
        FUN_14145fc00(lVar2,param_1[0xf3]);
      }
      else if (*(char *)((longlong)param_1 + 0x6e5) == '\x02') {
        FUN_140d04500(lVar2);
      }
      lVar2 = FUN_140cff1b0(lVar2);
      if (lVar2 != 0) {
        FUN_140cc9500(lVar2,param_1);
      }
    }
  }
  (**(code **)(*param_1 + 0x580))(param_1,0);
  *(undefined4 *)((longlong)param_1 + 0x63c) = 3;
  return;
}



// FUNCTION 141063030 FUN_141063030 body=770 status=ok
// SIG undefined FUN_141063030(void)

void FUN_141063030(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res20;
  undefined4 local_res24;
  longlong *local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if (param_1[0x191] == 0) {
    return;
  }
  cVar2 = FUN_140e45c80();
  if (cVar2 != '\0') {
    FWeakObjectPtr::operator=(&local_res20,param_1);
    lVar4 = param_1[0xd9];
    local_58 = (longlong *)0x0;
    local_50 = local_50 & 0xffffffff00000000;
    plVar3 = (longlong *)FMemory::Realloc(0,0x20,0);
    if (plVar3 == (longlong *)0x0) {
      if ((((int)local_50 != 0) && (local_58 != (longlong *)0x0)) &&
         ((**(code **)(*local_58 + 0x28))(local_58,0), local_58 != (longlong *)0x0)) {
        local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
      }
    }
    else {
      *plVar3 = (longlong)&PTR_GetPoolName_14467a2b0;
      *(undefined4 *)(plVar3 + 1) = local_res20;
      *(undefined4 *)((longlong)plVar3 + 0xc) = local_res24;
      *(char *)(plVar3 + 2) = (char)lVar4;
      *(undefined1 *)((longlong)plVar3 + 0x11) = param_3;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[3] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_14467a2f8;
      FUN_1410337d0(plVar3,&local_58);
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    local_48 = 0;
    local_40 = (ulonglong)local_40._4_4_ << 0x20;
    if (((int)local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x30))(local_58,&local_48);
    }
    FUN_140e61440(param_1[0x191],param_2,&local_48);
    if ((int)local_50 != 0) {
      if (local_58 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_58 + 0x28))(local_58,0);
      if (local_58 != (longlong *)0x0) {
        local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
      }
      local_50 = local_50 & 0xffffffff00000000;
    }
    if (local_58 == (longlong *)0x0) {
      return;
    }
    FMemory::Free(local_58);
    return;
  }
  if (param_1[0x18d] != 0) {
    local_58 = (longlong *)0x0;
    local_50 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,&DAT_14466b298,6);
    FUN_142088910(param_1[0x18d],&local_58);
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146873ee8) && (_Init_thread_header(&DAT_146873ee8), DAT_146873ee8 == -1))
  {
    FName::FName(&DAT_146873ee0,L"NoMoney",1);
    _Init_thread_footer(&DAT_146873ee8);
  }
  local_48 = 0;
  local_40 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146873ee0,&local_48);
  lVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar4 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1410632cf;
  }
  lVar4 = 0;
LAB_1410632cf:
  FUN_140ab72e0(lVar4,4);
  return;
}



// FUNCTION 141063340 FUN_141063340 body=518 status=ok
// SIG undefined FUN_141063340(void)

void FUN_141063340(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_2 != 0) {
    cVar4 = FUN_14103ae70();
    if (cVar4 == '\x04') {
      plVar5 = (longlong *)FUN_140e97230(param_1);
      if (plVar5 != (longlong *)0x0) {
        uVar6 = AGFireballProjectile::GetPrivateStaticClass();
        lVar7 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
        if (lVar7 != 0) {
          if (*(longlong *)(param_2 + 0x410) == 0) {
            lVar2 = *(longlong *)(param_2 + 0x408);
            if (lVar2 != 0) {
              plVar9 = (longlong *)param_1[0x182];
              plVar5 = plVar9 + (int)param_1[0x183];
              for (; plVar9 != plVar5; plVar9 = plVar9 + 1) {
                lVar3 = *plVar9;
                if (lVar3 != 0) {
                  plVar8 = *(longlong **)(lVar3 + 0x140);
                  plVar1 = plVar8 + *(int *)(lVar3 + 0x148);
                  for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
                    if (*plVar8 == lVar2) {
                      FUN_141457460(lVar7,*(undefined8 *)(lVar3 + 0x10),lVar2,0);
                      if (DAT_14686ad35 == '\0') {
                        FUN_140bfdec0(&DAT_14686ad34);
                        DAT_14686ad35 = '\x01';
                      }
                      uVar6 = FUN_1410833d0(param_1);
                      FUN_140c038d0(&DAT_14686ad34,uVar6,*(undefined8 *)(param_2 + 0x408),0);
                      goto LAB_1410634be;
                    }
                  }
                }
              }
            }
          }
          else {
            FUN_141457410(lVar7,*(longlong *)(param_2 + 0x410),0);
            if (DAT_14686ad35 == '\0') {
              FUN_140bfdec0(&DAT_14686ad34);
              DAT_14686ad35 = '\x01';
            }
            uVar6 = FUN_1410833d0(param_1);
            FUN_140c041f0(&DAT_14686ad34,uVar6,*(undefined8 *)(param_2 + 0x410),0);
LAB_1410634be:
            local_28 = 0;
            local_20 = 0;
            (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x12d],&local_28);
            *(undefined1 *)((longlong)param_1 + 0x6bc) = 1;
          }
        }
      }
    }
    else {
      if (cVar4 == '\x03') {
        uVar6 = FText::FText(&local_28,param_1 + 0x1b0);
        FUN_141053760(param_1,uVar6);
        return;
      }
      if (cVar4 == '\x02') {
        uVar6 = FText::FText(&local_28,param_1 + 0x1b3);
        FUN_141053760(param_1,uVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141063550 FUN_141063550 body=881 status=ok
// SIG undefined FUN_141063550(void)

void FUN_141063550(longlong param_1,char param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  wchar_t *local_b8;
  undefined8 local_b0;
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
  
  uVar7 = 0;
  if ((*(char *)(param_1 + 0x670) == param_2) && (param_3 == '\0')) {
    return;
  }
  *(char *)(param_1 + 0x670) = param_2;
  uVar4 = FUN_1404b03b0();
  FText::FText(local_a8,uVar4);
  uVar4 = FUN_1404b03b0();
  FText::FText(local_90,uVar4);
  local_b0 = 8;
  local_b8 = (wchar_t *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"default",0x10);
  if (*(char *)(param_1 + 0x670) == '\x01') {
    puVar5 = (undefined8 *)FName::FName(local_res8,L"OakPC_Reload",1);
    uVar4 = FUN_140eccc40(param_1);
    uVar4 = FUN_142ef39a0(local_60,*puVar5,uVar4,0,0);
    FText::operator=(local_90,uVar4);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"Reload",L"ReloadWidget",L"ReloadPrompt");
    FText::operator=(local_a8,uVar4);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_b8 != L"reload") {
      uVar6 = local_b0._4_4_;
      local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
      iVar8 = 0;
      if (uVar6 != 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8,7);
        uVar6 = local_b0._4_4_;
        iVar8 = (int)local_b0;
      }
      local_b0 = CONCAT44(local_b0._4_4_,iVar8 + 7);
      if ((int)uVar6 < iVar8 + 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar8);
      }
      builtin_wcsncpy(local_b8,L"reload",7);
    }
  }
  else {
    if (*(char *)(param_1 + 0x670) != '\x03') goto LAB_141063816;
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_78,L"Out Of Ammo",L"ReloadWidget",L"OutOfAmmo");
    FText::operator=(local_a8,uVar4);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (local_b8 != L"outOfAmmo") {
      uVar6 = local_b0._4_4_;
      local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
      iVar8 = 0;
      if (uVar6 != 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8,10);
        uVar6 = local_b0._4_4_;
        iVar8 = (int)local_b0;
      }
      local_b0 = CONCAT44(local_b0._4_4_,iVar8 + 10);
      if ((int)uVar6 < iVar8 + 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar8);
      }
      builtin_wcsncpy(local_b8,L"outOfAmmo",10);
    }
  }
  uVar7 = 1;
LAB_141063816:
  FUN_141067410(param_1,local_90,local_a8,&local_b8,uVar7);
  if (local_b8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  return;
}



// FUNCTION 1410638d0 FUN_1410638d0 body=293 status=ok
// SIG undefined FUN_1410638d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410638d0(undefined8 param_1,undefined1 param_2,undefined1 param_3)

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
  uStack_c0._0_2_ = CONCAT11(param_3,param_2);
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
  local_b8[0] = &LAB_141031ed0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c9c0(param_1,uVar2);
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



// FUNCTION 141063a00 FUN_141063a00 body=363 status=ok
// SIG undefined FUN_141063a00(void)

void FUN_141063a00(longlong param_1,longlong param_2,undefined1 param_3,char param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if ((param_2 == 0) && (param_4 == '\0')) {
    lVar4 = *(longlong *)(param_1 + 0x6c0);
    lVar6 = (longlong)*(int *)(param_1 + 0x6c8) * 0x40 + lVar4;
    for (; lVar4 != lVar6; lVar4 = lVar4 + 0x40) {
      if ((*(longlong *)(lVar4 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x414) != '\0')) {
        return;
      }
    }
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
  uVar1 = *(undefined8 *)(param_1 + 0xbe0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xbd8));
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else if (*(longlong *)(param_2 + 0x2e0) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_141035dd0(*(longlong *)(param_2 + 0x2e0),uVar1);
  }
  lVar4 = *(longlong *)(param_1 + 0x6c0);
  lVar6 = *(longlong *)(lVar4 + 0x10);
  if (lVar6 != 0) {
    FUN_14105c2c0(lVar6,1);
    *(undefined1 *)(lVar6 + 0x414) = 1;
    lVar4 = *(longlong *)(lVar4 + 0x10);
    lVar6 = *(longlong *)(lVar4 + 0x2e0);
    if ((lVar6 != 0) && (cVar2 = FUN_14105a570(lVar6,0,uVar3,param_3), cVar2 == '\0')) {
      FUN_14105a570(*(undefined8 *)(lVar4 + 0x2e0),0,0,param_3);
    }
  }
  iVar5 = 1;
  if (1 < *(int *)(param_1 + 0x6c8)) {
    lVar4 = 0x40;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x6c0) + 0x10 + lVar4);
      if (lVar6 != 0) {
        FUN_14105c2c0(lVar6,0);
        *(undefined1 *)(lVar6 + 0x414) = 0;
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 0x40;
    } while (iVar5 < *(int *)(param_1 + 0x6c8));
  }
  return;
}



// FUNCTION 141063b70 FUN_141063b70 body=410 status=ok
// SIG undefined FUN_141063b70(void)

void FUN_141063b70(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar6 != 0) {
    lVar7 = FUN_14145f370();
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
      *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(lVar6 + 0x1970);
    }
  }
  if ((*(int *)(param_1 + 0x6b4) < 0) || (*(int *)(param_1 + 0x6c8) <= *(int *)(param_1 + 0x6b4))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    iVar5 = *(int *)(param_1 + 0x6c8);
    iVar8 = 0;
    if (0 < iVar5) {
      lVar6 = 0;
      lVar7 = 0;
      lVar9 = 0;
      do {
        uVar2 = *(uint *)(param_1 + 0x6b4);
        if (iVar5 == 4) {
          if (3 < uVar2) goto LAB_141063c8d;
          if ((lVar6 < 0) || (3 < iVar8)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_141063c8d;
          iVar5 = *(int *)(&DAT_14467a050 + ((longlong)(int)uVar2 + lVar6 * 4) * 4);
        }
        else {
          if ((iVar5 == 3) && (uVar2 < 3)) {
            if ((lVar6 < 0) || (2 < iVar8)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              iVar5 = *(int *)(&DAT_14467a150 + (lVar9 + (int)uVar2) * 4);
              goto LAB_141063c8f;
            }
          }
LAB_141063c8d:
          iVar5 = 0;
        }
LAB_141063c8f:
        plVar1 = (longlong *)(lVar7 + *(longlong *)(param_1 + 0x6c0));
        lVar3 = *(longlong *)((longlong)iVar5 * 0x40 + 0x18 + *(longlong *)(param_1 + 0x6c0));
        if ((*plVar1 != 0) && (FUN_142f05c70(*plVar1,0), lVar3 != 0)) {
          FUN_142ee17b0(*plVar1);
        }
        plVar1[2] = lVar3;
        iVar8 = iVar8 + 1;
        iVar5 = *(int *)(param_1 + 0x6c8);
        lVar6 = lVar6 + 1;
        lVar9 = lVar9 + 3;
        lVar7 = lVar7 + 0x40;
      } while (iVar8 < iVar5);
    }
  }
  return;
}



// FUNCTION 141063d10 FUN_141063d10 body=386 status=ok
// SIG undefined FUN_141063d10(void)

void FUN_141063d10(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (((-1 < *(int *)(param_1 + 0x6b4)) &&
      (iVar4 = *(int *)(param_1 + 0x6c8), *(int *)(param_1 + 0x6b4) < iVar4)) &&
     (iVar6 = 0, 0 < iVar4)) {
    lVar5 = 0;
    lVar8 = 0;
    lVar7 = 0;
    do {
      uVar3 = *(uint *)(param_1 + 0x6b4);
      if (iVar4 == 4) {
        if (((uVar3 < 4) && (-1 < lVar5)) && (iVar6 < 4)) {
          lVar1 = (longlong)(int)uVar3 + lVar5 * 4;
          if (param_3 == '\0') {
            if (param_2 == '\0') {
              iVar4 = *(int *)(&DAT_14467a110 + lVar1 * 4);
            }
            else {
              iVar4 = *(int *)(&DAT_14467a0d0 + lVar1 * 4);
            }
          }
          else if (param_2 == '\0') {
            iVar4 = *(int *)(&DAT_14467a090 + lVar1 * 4);
          }
          else {
            iVar4 = *(int *)(&DAT_14467a050 + lVar1 * 4);
          }
        }
        else {
LAB_141063e07:
          iVar4 = 0;
        }
      }
      else {
        if (((iVar4 != 3) || (2 < uVar3)) || ((lVar5 < 0 || (2 < iVar6)))) goto LAB_141063e07;
        lVar1 = (lVar7 + (int)uVar3) * 4;
        if (param_2 == '\0') {
          iVar4 = *(int *)(&DAT_14467a178 + lVar1);
        }
        else {
          iVar4 = *(int *)(&DAT_14467a150 + lVar1);
        }
      }
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x6c0) + lVar8);
      lVar1 = *(longlong *)((longlong)iVar4 * 0x40 + 0x18 + *(longlong *)(param_1 + 0x6c0));
      if ((*plVar2 != 0) && (FUN_142f05c70(*plVar2,0), lVar1 != 0)) {
        FUN_142ee17b0(*plVar2,lVar1);
      }
      plVar2[2] = lVar1;
      iVar6 = iVar6 + 1;
      iVar4 = *(int *)(param_1 + 0x6c8);
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 3;
      lVar8 = lVar8 + 0x40;
    } while (iVar6 < iVar4);
  }
  return;
}



// FUNCTION 141063ea0 FUN_141063ea0 body=446 status=ok
// SIG undefined FUN_141063ea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141063ea0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
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
  lVar3 = *(longlong *)(param_1 + 0x630);
  if (lVar3 == 0) {
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_1410321c0;
    uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
    FUN_14208c260(param_1,uVar2);
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
    lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x460) + 0x10))
                      ((longlong *)(lVar3 + 0x460),*(undefined1 *)(lVar3 + 0x690));
    if (lVar3 == *(longlong *)(param_1 + 0x640)) {
      return;
    }
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_1410324a0;
    uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
    FUN_14208c260(param_1,uVar2);
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



// FUNCTION 141064060 FUN_141064060 body=411 status=ok
// SIG undefined FUN_141064060(void)

void FUN_141064060(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  bool bVar10;
  
  if (*(longlong **)(param_1 + 0x640) == (longlong *)0x0) {
    cVar8 = '\0';
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x640) + 0x420))();
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x640) + 0x418))();
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x640) + 0x438))();
    lVar7 = *(longlong *)(param_1 + 0x630);
    cVar8 = '\0';
    iVar9 = 0;
    if ((lVar7 != 0) &&
       (plVar6 = (longlong *)FUN_14307cf20(lVar7,*(undefined1 *)(lVar7 + 0x690)), iVar9 = 0,
       plVar6 != (longlong *)0x0)) {
      iVar5 = (**(code **)(*plVar6 + 0x480))(plVar6);
      iVar9 = 0;
      if (-1 < iVar5 + -1) {
        iVar9 = iVar5 + -1;
      }
    }
    bVar10 = iVar4 == 0;
    if (iVar3 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x640) + 0x440))();
      bVar10 = iVar4 <= iVar9;
      iVar2 = iVar4;
    }
    if (*(longlong *)(param_1 + 0x638) == 0) {
      if (bVar10) {
        cVar8 = (iVar2 <= iVar9) + '\x02';
      }
      else {
        lVar7 = FWeakObjectPtr::Get(param_1 + 0x5e0);
        if (lVar7 != 0) {
          FUN_1413f82e0();
        }
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if ((((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
             (plVar6 = *(longlong **)(param_1 + 0x640), plVar6 != (longlong *)0x0)) &&
            (cVar1 = (**(code **)(*plVar6 + 0x478))
                               (plVar6,*(undefined4 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x238))
            , cVar1 != '\0')) &&
           ((cVar8 = '\0', *(longlong **)(param_1 + 0x648) != (longlong *)0x0 &&
            (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x648) + 0x3f8))(), cVar1 == '\0')))) {
          cVar8 = '\x01';
        }
      }
    }
    else if (iVar4 <= iVar9) {
      cVar8 = '\x03';
    }
  }
  FUN_141063550(param_1,cVar8,0);
  return;
}



// FUNCTION 141064200 FUN_141064200 body=1760 status=ok
// SIG undefined FUN_141064200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141064200(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  undefined1 auStack_258 [32];
  uint local_238;
  int local_230;
  longlong local_228;
  undefined4 local_220;
  uint local_218;
  uint local_214;
  longlong local_210;
  longlong local_208;
  undefined4 *local_1f8;
  ulonglong *puStack_1f0;
  longlong local_1e0;
  undefined4 local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  longlong local_1b0 [2];
  longlong local_1a0 [2];
  undefined1 local_190 [16];
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined1 local_f8 [32];
  undefined4 local_d8 [4];
  undefined1 local_c8 [24];
  undefined1 local_b0;
  undefined4 local_a8;
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_258;
  if ((*(char *)(param_1 + 0x588) == '\0') ||
     (*(int *)(param_1 + 0x584) == *(int *)(param_1 + 0x580))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((*(char *)(param_1 + 0x594) == '\0') ||
     (*(int *)(param_1 + 0x590) == *(int *)(param_1 + 0x58c))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((*(char *)(param_1 + 0x5a0) == '\0') ||
     (*(int *)(param_1 + 0x59c) == *(int *)(param_1 + 0x598))) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  puVar11 = (undefined4 *)FUN_141637b60(param_2);
  if (puVar11 != (undefined4 *)(param_1 + 0x5a8)) {
    if (*(char *)(param_1 + 0x5ac) != '\0') {
      *(undefined1 *)(param_1 + 0x5ac) = 0;
    }
    *(undefined4 *)(param_1 + 0x5a8) = *puVar11;
    *(undefined1 *)(param_1 + 0x5ac) = 1;
  }
  if ((*(char *)(param_1 + 0x5ac) == '\0') ||
     (*(int *)(param_1 + 0x5a8) == *(int *)(param_1 + 0x5a4))) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((*(longlong *)(param_1 + 0x328) != 0) && (*(longlong *)(param_1 + 0x330) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x330) + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if ((0 < iVar10) && ((((bVar6 || (bVar7)) || (bVar8)) || (bVar9)))) {
      if (*(char *)(param_1 + 0x588) != '\0') {
        if (*(int *)(param_1 + 0x584) != *(int *)(param_1 + 0x580)) {
          *(int *)(param_1 + 0x580) = *(int *)(param_1 + 0x584);
        }
        if (*(char *)(param_1 + 0x588) != '\0') {
          *(undefined1 *)(param_1 + 0x588) = 0;
        }
      }
      if (*(char *)(param_1 + 0x594) != '\0') {
        if (*(int *)(param_1 + 0x590) != *(int *)(param_1 + 0x58c)) {
          *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x590);
        }
        if (*(char *)(param_1 + 0x594) != '\0') {
          *(undefined1 *)(param_1 + 0x594) = 0;
        }
      }
      if (*(char *)(param_1 + 0x5a0) != '\0') {
        if (*(int *)(param_1 + 0x59c) != *(int *)(param_1 + 0x598)) {
          *(int *)(param_1 + 0x598) = *(int *)(param_1 + 0x59c);
        }
        if (*(char *)(param_1 + 0x5a0) != '\0') {
          *(undefined1 *)(param_1 + 0x5a0) = 0;
        }
      }
      if (*(char *)(param_1 + 0x5ac) != '\0') {
        if (*(int *)(param_1 + 0x5a8) != *(int *)(param_1 + 0x5a4)) {
          *(int *)(param_1 + 0x5a4) = *(int *)(param_1 + 0x5a8);
        }
        if (*(char *)(param_1 + 0x5ac) != '\0') {
          *(undefined1 *)(param_1 + 0x5ac) = 0;
        }
      }
      uVar4 = *(uint *)(param_1 + 0x5a4);
      local_208 = CONCAT44(local_208._4_4_,*(undefined4 *)(param_1 + 0x58c));
      local_214 = uVar4 >> 0x10;
      local_210 = CONCAT44(local_210._4_4_,uVar4 >> 8);
      local_218 = uVar4 >> 8;
      local_228 = 0;
      if (*(int *)(param_1 + 0x598) < 1) {
        local_238 = uVar4 & 0xff;
        local_230 = *(int *)(param_1 + 0x580);
        FString::PrintfImpl(&local_1d0,L"<font color=\'#%02X%02X%02X\'>%d</font>",
                            uVar4 >> 0x10 & 0xff,uVar4 >> 8 & 0xff);
        uVar18 = local_214;
        uVar17 = local_218;
        if (local_228 != 0) {
          FMemory::Free();
          uVar18 = uVar4 >> 0x10;
          uVar17 = (uint)local_210;
        }
        local_228 = local_1d0;
        local_220 = local_1c8;
      }
      else {
        FString::PrintfImpl(&local_1e0,L"<font color=\'#19FAFF\'>%d</font>",
                            *(int *)(param_1 + 0x598) + *(int *)(param_1 + 0x580));
        if (local_228 != 0) {
          FMemory::Free();
        }
        uVar17 = uVar4 >> 8;
        uVar18 = uVar4 >> 0x10;
        local_228 = local_1e0;
        local_220 = local_1d8;
      }
      local_238 = uVar4 & 0xff;
      FString::PrintfImpl(local_1a0,L"<font color=\'#%02X%02X%02X\'>/</font>",uVar18 & 0xff,
                          uVar17 & 0xff);
      local_230 = (undefined4)local_208;
      local_238 = uVar4 & 0xff;
      FString::PrintfImpl(local_1b0,L"<font color=\'#%02X%02X%02X\'>%d</font>",uVar18 & 0xff,
                          uVar17 & 0xff);
      lVar12 = FText::FromString(local_128,local_1b0);
      local_210 = lVar12;
      lVar13 = FText::FromString(local_110,local_1a0);
      local_208 = lVar13;
      lVar14 = FText::FromString(local_f8,&local_228);
      uVar15 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_150,L"{0}{1}{2}",L"GFxSkillScreenItem",
                          L"Skill Screen Ability Point Display");
      puVar16 = (undefined8 *)FTextFormat::FTextFormat(local_138,uVar15);
      local_d8[0] = 4;
      FText::FText(local_c8,lVar14);
      local_b0 = 1;
      local_a8 = 4;
      FText::FText(local_98,lVar13);
      local_80 = 1;
      local_78 = 4;
      FText::FText(local_68,lVar12);
      local_1f8 = local_d8;
      local_50 = 1;
      puStack_1f0 = local_48;
      local_1c0 = *puVar16;
      local_1b8 = puVar16[1];
      if (local_1b8 != 0) {
        LOCK();
        *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + 1;
        UNLOCK();
      }
      uVar15 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_190,&local_1f8);
      uVar15 = FText::Format(local_168,&local_1c0,uVar15);
      FText::FText(local_180,uVar15);
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_160 + 1;
        lVar12 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
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
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_190);
      lVar12 = 3;
      pcVar19 = &stack0xffffffffffffffe0;
      do {
        lVar12 = lVar12 + -1;
        pcVar2 = pcVar19 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar5 = *(longlong **)(pcVar19 + -0x40);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            lVar13 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
        }
        pcVar19 = pcVar2;
      } while (lVar12 != 0);
      plVar5 = (longlong *)puVar16[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar12 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = *(longlong **)(lVar14 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar12 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = *(longlong **)(local_208 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar12 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = *(longlong **)(local_210 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar12 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      UMistDebugEntityScreen::InspectEntity(param_1 + 800,local_180,1,0);
      if (local_178 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_178 + 1;
        lVar12 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar1 = (int *)((longlong)local_178 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_178 + 8))(local_178,1);
          }
        }
      }
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_148 + 1;
        lVar12 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar1 = (int *)((longlong)local_148 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_148 + 8))(local_148,1);
          }
        }
      }
      if (local_1b0[0] != 0) {
        FMemory::Free();
      }
      if (local_1a0[0] != 0) {
        FMemory::Free();
      }
      if (local_228 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1410648e0 FUN_1410648e0 body=219 status=ok
// SIG undefined FUN_1410648e0(void)

void FUN_1410648e0(longlong param_1,undefined8 param_2,float *param_3)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  
  pfVar2 = (float *)(param_1 + 0x478);
  if ((((*pfVar2 != *param_3) || (*(float *)(param_1 + 0x47c) != param_3[1])) ||
      (*(float *)(param_1 + 0x480) != param_3[2])) || (*(float *)(param_1 + 0x484) != param_3[3])) {
    fVar3 = param_3[1];
    fVar4 = param_3[2];
    fVar5 = param_3[3];
    *pfVar2 = *param_3;
    *(float *)(param_1 + 0x47c) = fVar3;
    *(float *)(param_1 + 0x480) = fVar4;
    *(float *)(param_1 + 0x484) = fVar5;
    if ((*(longlong *)(param_1 + 0x310) != 0) && (*(longlong *)(param_1 + 0x318) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x318) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) {
        FUN_142f0bf30(param_1 + 0x308,pfVar2,1);
      }
    }
    FUN_141064200(param_1,param_3);
  }
  cVar6 = FUN_14208d2d0(param_1,param_1 + 0x348,L"PointBG");
  if (cVar6 != '\0') {
    FUN_14203e230(*(undefined8 *)(param_1 + 0x348),param_2);
  }
  FUN_141056930(param_1);
  FUN_141056550(param_1);
  return;
}



// FUNCTION 1410649c0 FUN_1410649c0 body=703 status=ok
// SIG undefined FUN_1410649c0(void)

void FUN_1410649c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  short *psVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  
  plVar8 = *(longlong **)(param_1 + 0x1a8);
  if (plVar8 != (longlong *)0x0) {
    local_58 = *(longlong *)(param_1 + 0x1b4);
    uStack_50 = *(ulonglong *)(param_1 + 0x1bc);
    local_48 = *(undefined8 *)(param_1 + 0x1c4);
    (**(code **)(*plVar8 + 0x3b8))(plVar8,param_1 + 0x1b4);
    if (*(char *)(param_1 + 0x1b4) == '\0') {
      FUN_14103ce70();
      return;
    }
    FUN_141061710(param_1,param_1 + 0x1b4);
    uVar7 = 0;
    plVar8 = *(longlong **)(param_1 + 0x178);
    uVar10 = (longlong)*(int *)(param_1 + 0x180) & 0x1fffffffffffffff;
    if (plVar8 + *(int *)(param_1 + 0x180) < plVar8) {
      uVar10 = uVar7;
    }
    uVar6 = uVar7;
    if (uVar10 != 0) {
      do {
        if (*plVar8 != 0) {
          FUN_142f0ead0(*plVar8,*(undefined4 *)(param_1 + 0x1b8));
        }
        plVar8 = plVar8 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar10);
    }
    if (*(char *)(param_1 + 0x1c4) != '\0') {
      iVar1 = *(int *)(param_1 + 0x1c8);
      if (iVar1 != local_48._4_4_) {
        if ((*(longlong *)(param_1 + 0x188) != 0) && (local_48._4_4_ < iVar1)) {
          FUN_142088ee0(*(longlong *)(param_1 + 0x188),iVar1 + 1);
        }
        uVar10 = uVar7;
        if (0 < *(int *)(param_1 + 0x198)) {
          do {
            lVar2 = *(longlong *)(uVar10 + *(longlong *)(param_1 + 400));
            if (lVar2 != 0) {
              uStack_50 = 0;
              psVar9 = &DAT_14466b8a8;
              if ((int)uVar7 + 1 <= *(int *)(param_1 + 0x1c8)) {
                psVar9 = &DAT_14466b8a0;
              }
              local_58 = 0;
              if (*psVar9 != 0) {
                lVar4 = -1;
                do {
                  lVar3 = lVar4 + 1;
                  lVar4 = lVar4 + 1;
                } while (psVar9[lVar3] != 0);
                uVar5 = (int)lVar4 + 1;
                uStack_50 = (ulonglong)uVar5;
                if (0 < (int)uVar5) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
                }
                FGenericPlatformString::Memcpy(local_58,psVar9,(longlong)(int)uVar5 * 2);
              }
              FUN_142088cf0(lVar2);
              if (local_58 != 0) {
                FMemory::Free();
              }
            }
            uVar5 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar5;
            uVar10 = uVar10 + 8;
          } while ((int)uVar5 < *(int *)(param_1 + 0x198));
        }
      }
    }
    if ((*(char *)(param_1 + 0x1bc) != '\0') &&
       (plVar8 = *(longlong **)(param_1 + 0x1a0), plVar8 != (longlong *)0x0)) {
      if (ABS(*(float *)(param_1 + 0x1c0) - 1.0) <= 1e-08) {
                    /* WARNING: Could not recover jumptable at 0x000141064c2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x278))(plVar8,0);
        return;
      }
      (**(code **)(*plVar8 + 0x278))(plVar8,1);
      fVar11 = 100.0 - *(float *)(param_1 + 0x1c0) * 100.0;
      fVar12 = 1.0;
      if ((1.0 <= fVar11) && (fVar12 = fVar11, 100.0 <= fVar11)) {
        fVar12 = 100.0;
      }
      FUN_142088ee0(*(undefined8 *)(param_1 + 0x1a0),(int)fVar12);
    }
  }
  return;
}



// FUNCTION 141064c80 FUN_141064c80 body=226 status=ok
// SIG undefined FUN_141064c80(void)

void FUN_141064c80(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (((*(longlong *)(param_1 + 0xc98) == 0) || (*(longlong *)(param_1 + 0xc28) == 0)) ||
     (*(longlong *)(param_1 + 0xc90) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_142ff7c90();
  }
  if (*(longlong *)(param_1 + 0xc50) != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 0x90);
    if (lVar1 != 0) {
      lVar4 = FUN_1414d9130();
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
        puVar5 = (undefined8 *)FUN_1411e2300(lVar1);
        FUN_140f0abd0(*(undefined8 *)(param_1 + 0xc50),*puVar5,uVar3,param_2);
      }
    }
  }
  return;
}



// FUNCTION 141064d70 FUN_141064d70 body=334 status=ok
// SIG undefined FUN_141064d70(void)

void FUN_141064d70(longlong param_1,char param_2,char param_3)

{
  longlong local_18 [2];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((param_2 == '\x03') || (param_2 == '\x06')) {
    if (*(longlong *)(param_1 + 0x6d8) != 0) {
      local_18[0] = 0;
      local_18[1] = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"initialization",0x1e);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x6d8),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    if (param_3 == '\0') {
      if (*(longlong *)(param_1 + 0x5f0) == 0) {
        return;
      }
      local_18[0] = 0;
      local_18[1] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"reinitializeAnim",0x22);
      FUN_142088910(*(undefined8 *)(param_1 + 0x5f0),local_18);
    }
    else {
      *(undefined1 *)(param_1 + 0x5f9) = 1;
      if (*(longlong *)(param_1 + 0x5f0) == 0) {
        return;
      }
      local_18[0] = 0;
      local_18[1] = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],&DAT_14466d308,8);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x5f0),local_18);
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141064ec0 FUN_141064ec0 body=992 status=ok
// SIG undefined FUN_141064ec0(void)

void FUN_141064ec0(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (*(char *)(param_1 + 0x5b3) == param_2) {
    if ((*(longlong *)(param_1 + 0x3f0) != 0) && (*(longlong *)(param_1 + 0x3f8) != 0)) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x3f8) + 8);
      LOCK();
      iVar5 = *piVar2;
      if (iVar5 == 0) {
        *piVar2 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        FUN_142f04d10(param_1 + 1000);
      }
    }
    if ((*(longlong *)(param_1 + 0x430) != 0) && (*(longlong *)(param_1 + 0x438) != 0)) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x438) + 8);
      LOCK();
      iVar5 = *piVar2;
      if (iVar5 == 0) {
        *piVar2 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        FUN_142f04d10(param_1 + 0x428);
      }
    }
  }
  else {
    *(char *)(param_1 + 0x5b3) = param_2;
    uVar6 = FUN_1404b03b0();
    FText::FText(local_50,uVar6);
    uVar6 = FUN_1404b03b0();
    FText::FText(local_68,uVar6);
    uVar6 = FUN_1404b03b0();
    FText::FText(local_20,uVar6);
    uVar6 = FUN_1404b03b0();
    FText::FText(local_38,uVar6);
    FUN_14103a5e0(param_1,param_2,local_50,local_68,local_20,local_38);
    if (*(longlong *)(param_1 + 0x3d8) != 0) {
      cVar4 = FText::IsEmpty(local_50);
      if (cVar4 == '\0') {
        if (*(char *)(param_1 + 0x4b2) == '\0') {
          FUN_142056670(*(undefined8 *)(param_1 + 0x3d8),1);
          FUN_14203e030(*(undefined8 *)(param_1 + 0x3d8),&DAT_144661428);
          *(undefined1 *)(param_1 + 0x4b2) = 1;
        }
        if ((*(longlong *)(param_1 + 0x408) != 0) && (*(longlong *)(param_1 + 0x410) != 0)) {
          piVar2 = (int *)(*(longlong *)(param_1 + 0x410) + 8);
          LOCK();
          iVar5 = *piVar2;
          if (iVar5 == 0) {
            *piVar2 = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (0 < iVar5) {
            UMistDebugEntityScreen::InspectEntity(param_1 + 0x400,local_50,1,0);
          }
        }
        if ((*(longlong *)(param_1 + 0x3f0) != 0) && (*(longlong *)(param_1 + 0x3f8) != 0)) {
          piVar2 = (int *)(*(longlong *)(param_1 + 0x3f8) + 8);
          LOCK();
          iVar5 = *piVar2;
          if (iVar5 == 0) {
            *piVar2 = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (0 < iVar5) {
            UMistDebugEntityScreen::InspectEntity(param_1 + 1000,local_20,1,0);
          }
        }
      }
      else if (*(char *)(param_1 + 0x4b2) != '\0') {
        FUN_142056670(*(undefined8 *)(param_1 + 0x3d8),0);
        FUN_14203e4e0(*(undefined8 *)(param_1 + 0x3d8),&DAT_144661420);
        *(undefined1 *)(param_1 + 0x4b2) = 0;
      }
    }
    if (*(longlong *)(param_1 + 0x418) != 0) {
      cVar4 = FText::IsEmpty(local_68);
      if (cVar4 == '\0') {
        if (*(char *)(param_1 + 0x4b3) == '\0') {
          FUN_142056670(*(undefined8 *)(param_1 + 0x418),1);
          FUN_14203e030(*(undefined8 *)(param_1 + 0x418),&DAT_144661438);
          *(undefined1 *)(param_1 + 0x4b3) = 1;
        }
        if ((*(longlong *)(param_1 + 0x448) != 0) && (*(longlong *)(param_1 + 0x450) != 0)) {
          piVar2 = (int *)(*(longlong *)(param_1 + 0x450) + 8);
          LOCK();
          iVar5 = *piVar2;
          if (iVar5 == 0) {
            *piVar2 = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (0 < iVar5) {
            UMistDebugEntityScreen::InspectEntity(param_1 + 0x440,local_68,1,0);
          }
        }
        if ((*(longlong *)(param_1 + 0x430) != 0) && (*(longlong *)(param_1 + 0x438) != 0)) {
          piVar2 = (int *)(*(longlong *)(param_1 + 0x438) + 8);
          LOCK();
          iVar5 = *piVar2;
          if (iVar5 == 0) {
            *piVar2 = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (0 < iVar5) {
            UMistDebugEntityScreen::InspectEntity(param_1 + 0x428,local_38,1,0);
          }
        }
      }
      else if (*(char *)(param_1 + 0x4b3) != '\0') {
        FUN_142056670(*(undefined8 *)(param_1 + 0x418),0);
        FUN_14203e4e0(*(undefined8 *)(param_1 + 0x418),&DAT_144661430);
        *(undefined1 *)(param_1 + 0x4b3) = 0;
      }
    }
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
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1410652a0 FUN_1410652a0 body=866 status=ok
// SIG undefined FUN_1410652a0(void)

void FUN_1410652a0(longlong param_1,byte param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (*(byte *)(param_1 + 0xec8) == param_2) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0xaa8);
  bVar6 = (param_2 & 0xfb) == 0;
  if ((lVar5 != 0) && (bVar6 != ((*(byte *)(param_1 + 0xec8) & 0xfb) == 0))) {
    if (bVar6) {
      FUN_14203e4e0(lVar5,L"equipped");
    }
    else {
      FUN_14203e030(lVar5,L"description");
    }
  }
  if ((*(longlong *)(param_1 + 0xb00) == 0) || (*(longlong *)(param_1 + 0xb08) == 0)) {
LAB_141065342:
    if (*(longlong *)(param_1 + 0xaa8) != 0) {
      uVar4 = FUN_1420392d0(*(longlong *)(param_1 + 0xaa8),local_88,L"header");
      FUN_142ede260(param_1 + 0xaf8,uVar4);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_80 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb08) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (iVar3 < 1) goto LAB_141065342;
  }
  if ((*(longlong *)(param_1 + 0xb00) != 0) && (*(longlong *)(param_1 + 0xb08) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb08) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      bVar6 = !bVar6;
      if (bVar6) {
        uVar4 = FUN_141039e10(param_1,local_50,param_2);
      }
      else {
        uVar4 = FText::FText(local_38,param_1 + 0xd50);
      }
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xaf8,uVar4,1,0);
      if ((bVar6) && (local_48 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_48 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if ((!bVar6) && (local_30 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_30 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0xb18) != 0) && (*(longlong *)(param_1 + 0xb20) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb20) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) goto LAB_141065527;
  }
  if (*(longlong *)(param_1 + 0xaa8) != 0) {
    uVar4 = FUN_1420392d0(*(longlong *)(param_1 + 0xaa8),local_78,L"description");
    FUN_142ede260(param_1 + 0xb10,uVar4);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  }
LAB_141065527:
  if ((*(longlong *)(param_1 + 0xb18) != 0) && (*(longlong *)(param_1 + 0xb20) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb20) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      if (param_2 == 1) {
        lVar5 = param_1 + 0xcc0;
      }
      else if (param_2 == 2) {
        lVar5 = param_1 + 0xcf0;
      }
      else if (param_2 == 3) {
        lVar5 = param_1 + 0xd20;
      }
      else {
        lVar5 = FUN_1404b03b0();
      }
      FText::FText(local_68,lVar5);
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xb10,local_68,1,0);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
    }
  }
  *(byte *)(param_1 + 0xec8) = param_2;
  return;
}



// FUNCTION 141065610 FUN_141065610 body=670 status=ok
// SIG undefined FUN_141065610(void)

void FUN_141065610(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  bool bVar8;
  
  if ((*(longlong *)(param_1 + 0x7f0) != 0) && (*(longlong *)(param_1 + 0x7f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x7f8) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x7e8,param_2,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x820) != 0) && (*(longlong *)(param_1 + 0x828) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x828) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x818,param_2 + 0x18,1,0);
    }
  }
  cVar5 = FText::IsEmpty(param_2 + 0x48);
  if (cVar5 == '\0') {
    if ((*(longlong *)(param_1 + 0x838) != 0) && (*(longlong *)(param_1 + 0x840) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x840) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) {
        FUN_142f10d20(param_1 + 0x830,0);
      }
    }
    if ((*(longlong *)(param_1 + 0x850) != 0) && (*(longlong *)(param_1 + 0x858) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x858) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) {
        FUN_142f10d20(param_1 + 0x848,1);
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x848,param_2 + 0x30,1,0);
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x860);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x278))(plVar3,1);
      FUN_142ed7df0(*(undefined8 *)(param_1 + 0x860),param_2 + 0x48);
    }
    uVar6 = 1;
  }
  else {
    if ((*(longlong *)(param_1 + 0x850) != 0) && (*(longlong *)(param_1 + 0x858) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x858) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) {
        FUN_142f10d20(param_1 + 0x848,0);
      }
    }
    if ((*(longlong *)(param_1 + 0x838) != 0) && (*(longlong *)(param_1 + 0x840) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x840) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) {
        FUN_142f10d20(param_1 + 0x830,1);
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x830,param_2 + 0x30,1,0);
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x860);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x278))(plVar3,0);
    }
    uVar6 = 0;
  }
  *(undefined1 *)(param_1 + 0x868) = uVar6;
  if ((*(longlong *)(param_1 + 0x808) != 0) && (*(longlong *)(param_1 + 0x810) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x810) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x800,param_2 + 0x60,1,0);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x7c0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar8 = iVar7 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar7 == (int)plVar3[1];
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar8) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x7b8) != 0) {
            FUN_14203e230(*(longlong *)(param_1 + 0x7b8),param_2 + 0x78);
          }
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
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar8 = iVar7 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  *(undefined1 *)(param_1 + 0x631) = *(undefined1 *)(param_2 + 0xa4);
  return;
}



// FUNCTION 1410658b0 FUN_1410658b0 body=244 status=ok
// SIG undefined FUN_1410658b0(void)

void FUN_1410658b0(longlong param_1,char param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  if ((*(longlong *)(param_1 + 0x2e0) != 0) && (*(char *)(param_1 + 0x2f0) != param_2)) {
    *(char *)(param_1 + 0x2f0) = param_2;
    if (param_2 == '\0') {
      local_18[1] = 4;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar2 = 8;
      pwVar1 = L"off";
    }
    else if (param_2 == '\x01') {
      local_18[1] = 10;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar2 = 0x14;
      pwVar1 = L"available";
    }
    else {
      if (param_2 != '\x02') goto LAB_141065997;
      local_18[1] = 7;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar2 = 0xe;
      pwVar1 = L"active";
    }
    FGenericPlatformString::Memcpy(local_18[0],pwVar1,uVar2);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x2e0),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
LAB_141065997:
  FUN_141058a70(param_1);
  return;
}



// FUNCTION 1410659b0 FUN_1410659b0 body=680 status=ok
// SIG undefined FUN_1410659b0(void)

void FUN_1410659b0(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar5 = FUN_14208d120(param_1,param_1 + 0x15b,L"treeContainer.unlockDetailsWrapper.unlockDetails")
  ;
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = FUN_14208d120(param_1,param_1 + 0x15d,L"unlockMeter");
  if (cVar5 != '\0') {
    FUN_14203e3e0(param_1[0x15d],param_2);
  }
  if ((param_1[0x144] != 0) && (param_1[0x145] != 0)) {
    piVar1 = (int *)(param_1[0x145] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) goto LAB_141065ae0;
  }
  uVar7 = (**(code **)(*param_1 + 0x4a8))(param_1,local_48,L"unlockedTitle");
  FUN_142ede260(param_1 + 0x143,uVar7);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if ((param_1[0x144] != 0) && (param_1[0x145] != 0)) {
    piVar1 = (int *)(param_1[0x145] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x143,param_1 + 0x1ad,1,0);
    }
  }
LAB_141065ae0:
  if ((param_1[0x147] != 0) && (param_1[0x148] != 0)) {
    piVar1 = (int *)(param_1[0x148] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      return;
    }
  }
  uVar7 = (**(code **)(*param_1 + 0x4a8))(param_1,local_38,L"unlockedLevel");
  FUN_142ede260(param_1 + 0x146,uVar7);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if ((param_1[0x147] != 0) && (param_1[0x148] != 0)) {
    piVar1 = (int *)(param_1[0x148] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      uVar7 = FText::AsNumber(local_28,(int)param_1[0x122],0,&local_58);
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x146,uVar7,1,0);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
      plVar2 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_50 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141065c60 FUN_141065c60 body=3733 status=ok
// SIG undefined FUN_141065c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141065c60(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong **pplVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8;
  char local_2c8;
  wchar_t *local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  int local_2a0;
  longlong local_298;
  undefined8 local_290;
  longlong local_288;
  undefined8 local_280;
  longlong *local_278;
  undefined8 local_270;
  longlong *local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  longlong *local_238 [2];
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 *local_1c8 [2];
  undefined1 local_1b8 [32];
  undefined8 local_198;
  undefined4 local_188;
  code *local_178 [2];
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  if ((char)param_1[0x181] == param_2) {
    return local_38;
  }
  *(char *)((longlong)param_1 + 0xc09) = param_2;
  local_2c8 = param_2;
  switch(param_2) {
  case '\x01':
    FUN_141063a00(param_1,0,1,0);
    FUN_14105c930(param_1,0);
    lVar13 = param_1[0xd8];
    lVar15 = (longlong)(int)param_1[0xd9] * 0x40 + lVar13;
    for (; lVar13 != lVar15; lVar13 = lVar13 + 0x40) {
      lVar16 = *(longlong *)(lVar13 + 0x10);
      if ((lVar16 != 0) && (*(char *)(lVar13 + 0x28) == '\x02')) {
        FUN_14105c2c0(lVar16,*(undefined1 *)(lVar16 + 0x414));
      }
    }
    if (param_1[0x140] != 0) {
      local_298 = 0;
      local_290 = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
      FGenericPlatformString::Memcpy(local_298,&DAT_14466d148,6);
      FUN_142088910(param_1[0x140],&local_298);
      if (local_298 != 0) {
        FMemory::Free();
      }
    }
    FUN_141053470(param_1);
    FWeakObjectPtr::operator=(&local_2b0,param_1);
    uVar5 = (undefined4)local_2b0;
    uVar6 = local_2b0._4_4_;
    local_198 = 0;
    local_188 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_1b8);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_FUN_1444f8920;
      puVar9[1] = param_1;
      *(undefined4 *)(puVar9 + 2) = uVar5;
      *(undefined4 *)((longlong)puVar9 + 0x14) = uVar6;
    }
    local_1c8[0] = &LAB_141031e20;
    FUN_14208c4f0(param_1,local_1c8);
    break;
  case '\x02':
    lVar13 = param_1[0xd8];
    lVar15 = (longlong)(int)param_1[0xd9] * 0x40 + lVar13;
    for (; lVar13 != lVar15; lVar13 = lVar13 + 0x40) {
      if (*(longlong *)(lVar13 + 0x10) != 0) {
        FUN_14105c2c0(*(longlong *)(lVar13 + 0x10),0);
      }
    }
    local_2d8 = 1;
    FUN_141034dc0(param_1,2,0,1);
    break;
  case '\x03':
    lVar13 = param_1[0xd8];
    lVar15 = (longlong)(int)param_1[0xd9] * 0x40 + lVar13;
    for (; lVar13 != lVar15; lVar13 = lVar13 + 0x40) {
      if (*(longlong *)(lVar13 + 0x10) != 0) {
        FUN_14105c2c0(*(longlong *)(lVar13 + 0x10),0);
      }
    }
    uVar10 = (**(code **)(*param_1 + 0x4a8))(param_1,local_228,L"unlockAbilityName");
    FUN_142ede260(param_1 + 0x165,uVar10);
    if (local_220 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_220 + 1;
      lVar13 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_220)(local_220);
        LOCK();
        piVar1 = (int *)((longlong)local_220 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_220 + 8))(local_220,1);
        }
      }
    }
    if ((param_1[0x166] != 0) && (param_1[0x167] != 0)) {
      piVar1 = (int *)(param_1[0x167] + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x165,param_1 + 399,1,0);
      }
    }
    uVar10 = (**(code **)(*param_1 + 0x4a8))(param_1,local_218,L"unlockAbilityNameGlow1");
    FUN_142ede260(param_1 + 0x168,uVar10);
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_210 + 1;
      lVar13 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar1 = (int *)((longlong)local_210 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_210 + 8))(local_210,1);
        }
      }
    }
    if ((param_1[0x169] != 0) && (param_1[0x16a] != 0)) {
      piVar1 = (int *)(param_1[0x16a] + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x168,param_1 + 399,1,0);
      }
    }
    uVar10 = (**(code **)(*param_1 + 0x4a8))(param_1,local_208,L"unlockAbilityNameGlow2");
    FUN_142ede260(param_1 + 0x16b,uVar10);
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_200 + 1;
      lVar13 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar1 = (int *)((longlong)local_200 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_200 + 8))(local_200,1);
        }
      }
    }
    if ((param_1[0x16c] != 0) && (param_1[0x16d] != 0)) {
      piVar1 = (int *)(param_1[0x16d] + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x16b,param_1 + 399,1,0);
      }
    }
    uVar10 = (**(code **)(*param_1 + 0x4a8))(param_1,local_1f8,L"abilityUnlockedText");
    FUN_142ede260(param_1 + 0x16e,uVar10);
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_1f0 + 1;
      lVar13 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar1 = (int *)((longlong)local_1f0 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_1f0 + 8))(local_1f0,1);
        }
      }
    }
    if ((param_1[0x16f] != 0) && (param_1[0x170] != 0)) {
      piVar1 = (int *)(param_1[0x170] + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x16e,param_1 + 0x192,1,0);
      }
    }
    if (param_1[0x140] != 0) {
      local_288 = 0;
      local_280 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
      FGenericPlatformString::Memcpy(local_288,L"firstTimeUnlock",0x20);
      FUN_142088910(param_1[0x140],&local_288);
      if (local_288 != 0) {
        FMemory::Free();
      }
    }
    local_248 = (undefined1 *)0x0;
    uStack_240 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x129],&local_248);
    local_148 = (longlong *)0x0;
    local_138 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_168);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[1] = param_1;
      *puVar9 = &PTR_FUN_143f77b70;
    }
    local_178[0] = FUN_141032390;
    uVar10 = FUN_1420849a0(param_1,local_d8,local_178);
    FUN_14208c260(param_1,uVar10);
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
    if (local_138 != 0) {
      plVar11 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar11 = local_148;
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,0);
      }
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(float *)(param_1 + 299) <= 0.0) {
      FUN_141053b70(param_1);
    }
    else {
      *(float *)((longlong)param_1 + 0xecc) = *(float *)(param_1 + 299);
    }
    break;
  case '\x04':
    FUN_14105c930(param_1,1);
    FUN_141045cb0(param_1 + 0xdc,param_1,param_1 + 0x108);
    local_1e8 = 0;
    uStack_1e0 = 0;
    FUN_142ed36d0(param_1,&local_1e8,0);
    lVar13 = param_1[0xd8];
    lVar15 = (longlong)(int)param_1[0xd9] * 0x40 + lVar13;
    for (; lVar13 != lVar15; lVar13 = lVar13 + 0x40) {
      if (*(longlong *)(lVar13 + 0x10) != 0) {
        FUN_14105c2c0(*(longlong *)(lVar13 + 0x10),0);
      }
    }
    if ((char)param_1[0x181] == '\x05') {
      uVar17 = 0;
      if (((-1 < *(int *)((longlong)param_1 + 0x6b4)) &&
          (iVar8 = (int)param_1[0xd9], *(int *)((longlong)param_1 + 0x6b4) < iVar8)) &&
         (iVar14 = 0, 0 < iVar8)) {
        local_2b0 = 0;
        uVar18 = uVar17;
        uVar20 = uVar17;
        do {
          uVar3 = *(uint *)((longlong)param_1 + 0x6b4);
          iVar19 = (int)uVar20;
          iVar7 = iVar14;
          if (iVar8 == 4) {
            if (((uVar3 < 4) && (-1 < (longlong)uVar17)) && (iVar19 < 4)) {
              iVar7 = *(int *)(&DAT_14467a050 + ((longlong)(int)uVar3 + uVar17 * 4) * 4);
            }
          }
          else if (((iVar8 == 3) && (uVar3 < 3)) && ((-1 < (longlong)uVar17 && (iVar19 < 3)))) {
            iVar7 = *(int *)(&DAT_14467a150 + (local_2b0 + (int)uVar3) * 4);
          }
          lVar13 = param_1[0xd8];
          lVar15 = *(longlong *)((longlong)iVar7 * 0x40 + 0x18 + lVar13);
          if ((*(longlong *)(lVar13 + uVar18) != 0) &&
             (FUN_142f05c70(*(longlong *)(lVar13 + uVar18),0), lVar15 != 0)) {
            FUN_142ee17b0(*(undefined8 *)(lVar13 + uVar18));
          }
          *(longlong *)(lVar13 + 0x10 + uVar18) = lVar15;
          uVar20 = (ulonglong)(iVar19 + 1U);
          iVar8 = (int)param_1[0xd9];
          local_2b0 = local_2b0 + 3;
          uVar17 = uVar17 + 1;
          uVar18 = uVar18 + 0x40;
        } while ((int)(iVar19 + 1U) < iVar8);
      }
      if (param_1[0x140] == 0) break;
      local_278 = (longlong *)0x0;
      local_270 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
      FGenericPlatformString::Memcpy(local_278,L"lockedHideTree",0x1e);
      FUN_142088910(param_1[0x140],&local_278);
      plVar11 = local_278;
    }
    else {
      if (param_1[0x140] == 0) break;
      local_260 = 0x12;
      local_268 = (longlong *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
      FGenericPlatformString::Memcpy(local_268,L"lockedDescription",0x24);
      FUN_142088910(param_1[0x140],&local_268);
      plVar11 = local_268;
    }
    goto joined_r0x000141066a68;
  case '\x05':
    FUN_141063a00(param_1,0,1,0);
    lVar13 = param_1[0xd8];
    lVar15 = (longlong)(int)param_1[0xd9] * 0x40 + lVar13;
    for (; lVar13 != lVar15; lVar13 = lVar13 + 0x40) {
      lVar16 = *(longlong *)(lVar13 + 0x10);
      if ((lVar16 != 0) && (*(char *)(lVar13 + 0x28) == '\x02')) {
        FUN_14105c2c0(lVar16,*(undefined1 *)(lVar16 + 0x414));
      }
    }
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x17b));
    lVar13 = param_1[0x17c];
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x17b));
    if (lVar13 != 0) {
      uVar10 = TScriptInterface<IBlendableInterface>::
               TScriptInterface<IBlendableInterface><UMaterialInterface>(local_1d8,lVar13);
      FUN_142ed36d0(param_1,uVar10,0);
    }
    if (param_1[0x140] == 0) break;
    local_250 = 0xf;
    local_258 = (longlong *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
    FGenericPlatformString::Memcpy(local_258,L"lockedShowTree",0x1e);
    FUN_142088910(param_1[0x140],&local_258);
    plVar11 = local_258;
    goto joined_r0x000141066a68;
  case '\x06':
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x17b));
    lVar13 = param_1[0x17c];
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x17b));
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x17d));
    param_1[0x17e] = lVar13;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x17d));
    lVar15 = param_1[0xd8];
    lVar16 = (longlong)(int)param_1[0xd9] * 0x40 + lVar15;
    for (; lVar15 != lVar16; lVar15 = lVar15 + 0x40) {
      if (*(longlong *)(lVar15 + 0x10) != 0) {
        FUN_14105c2c0(*(longlong *)(lVar15 + 0x10),0);
      }
    }
    local_2d8 = 0;
    FUN_141034dc0(param_1,1,lVar13,0);
    if (param_1[0x1d7] != 0) {
      FUN_142ed9eb0(param_1[0x1d7],param_1[0x178],param_1,0);
      local_f8 = (longlong *)0x0;
      local_e8 = 0;
      puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_118);
      if (puVar9 != (undefined8 *)0x0) {
        puVar9[1] = param_1;
        *puVar9 = &PTR_FUN_143f77b70;
      }
      local_128[0] = &LAB_141032340;
      uVar10 = FUN_1420849a0(param_1,local_88,local_128);
      pplVar2 = (longlong **)(param_1 + 0x1dd);
      plVar11 = (longlong *)FMemory::Realloc(0,0x70);
      local_238[0] = plVar11;
      if (plVar11 != (longlong *)0x0) {
        *plVar11 = (longlong)&PTR_GetPoolName_14467a548;
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(plVar11 + 2,uVar10);
        lVar15 = FDelegateHandle::GenerateNewID();
        plVar11[0xd] = lVar15;
        *plVar11 = (longlong)&PTR_GetPoolName_14467a590;
      }
      if (local_238 != pplVar2) {
        if (plVar11 == (longlong *)0x0) {
          if (((int)param_1[0x1de] != 0) && (plVar12 = *pplVar2, plVar12 != (longlong *)0x0)) {
            (**(code **)(*plVar12 + 0x28))(plVar12,0);
            if (*pplVar2 != (longlong *)0x0) {
              plVar12 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
              *pplVar2 = plVar12;
            }
            *(undefined4 *)(param_1 + 0x1de) = 0;
          }
        }
        else {
          (**(code **)(*plVar11 + 0x30))(plVar11,pplVar2);
        }
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x28))(plVar11,0);
        local_238[0] = (longlong *)FMemory::Realloc(plVar11,0,0);
        if (local_238[0] != (longlong *)0x0) {
          FMemory::Free(local_238[0]);
        }
      }
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
      if (local_e8 != 0) {
        plVar11 = local_118;
        if (local_f8 != (longlong *)0x0) {
          plVar11 = local_f8;
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11,0);
        }
      }
      if (local_f8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    lVar15 = param_1[0x178];
    if (((lVar15 != 0) && (lVar13 != 0)) && (lVar13 = param_1[0x17e], lVar13 != 0)) {
      cVar4 = *(char *)(lVar13 + 0x500);
      local_2c0 = (wchar_t *)0x0;
      local_2b8 = 0;
      if (cVar4 == '\x01') {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2c0,0xc);
        iVar8 = (int)local_2b8 + 0xc;
        local_2b8 = CONCAT44(local_2b8._4_4_,iVar8);
        if (local_2b8._4_4_ < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c0);
        }
        builtin_wcsncpy(local_2c0,L"actionSkill",0xc);
      }
      else if (cVar4 == '\x02') {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2c0,0xb);
        iVar8 = (int)local_2b8 + 0xb;
        local_2b8 = CONCAT44(local_2b8._4_4_,iVar8);
        if (local_2b8._4_4_ < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c0);
        }
        builtin_wcsncpy(local_2c0,L"modPrimary",0xb);
      }
      else if (cVar4 == '\x03') {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2c0,0xd);
        iVar8 = (int)local_2b8 + 0xd;
        local_2b8 = CONCAT44(local_2b8._4_4_,iVar8);
        if (local_2b8._4_4_ < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c0);
        }
        builtin_wcsncpy(local_2c0,L"modSecondary",0xd);
      }
      else if (cVar4 == '\x04') {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2c0,8);
        iVar8 = (int)local_2b8 + 8;
        local_2b8 = CONCAT44(local_2b8._4_4_,iVar8);
        if (local_2b8._4_4_ < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c0);
        }
        builtin_wcsncpy(local_2c0,L"passive",8);
      }
      if (*(longlong *)(lVar15 + 0x170) != 0) {
        FUN_14203e230(*(longlong *)(lVar15 + 0x170),&local_2c0);
      }
      if (*(longlong *)(lVar15 + 400) != 0) {
        FUN_142088cf0(*(longlong *)(lVar15 + 400),lVar13 + 0x5b8);
      }
      if (local_2c0 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    lVar13 = FUN_1410833d0(param_1);
    if (((lVar13 == 0) || (lVar13 = FUN_1410833d0(param_1), *(longlong *)(lVar13 + 0xa88) == 0)) ||
       (lVar13 = FUN_142eee1b0(), lVar13 == 0)) break;
    uStack_240 = uStack_240 & 0xffffffff00000000;
    local_2a8 = (longlong *)0x0;
    local_248 = &LAB_14104e960;
    plVar11 = (longlong *)FMemory::Realloc(0,0x30);
    local_2a0 = 3;
    local_2a8 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar11 + 1,param_1);
      *(undefined4 *)(plVar11 + 2) = (undefined4)local_248;
      *(undefined4 *)((longlong)plVar11 + 0x14) = local_248._4_4_;
      *(undefined4 *)(plVar11 + 3) = (undefined4)uStack_240;
      *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_240._4_4_;
      lVar15 = FDelegateHandle::GenerateNewID();
      plVar11[5] = lVar15;
      *plVar11 = (longlong)&PTR_FUN_143fcff08;
    }
    FUN_142ee1c00(lVar13,PTR_s_mouseUp_14629f818,param_1 + 0x1d8,&local_2a8);
    plVar11 = local_2a8;
    if (local_2a0 != 0) {
      if (local_2a8 == (longlong *)0x0) break;
      (**(code **)(*local_2a8 + 0x28))(local_2a8,0);
      if (local_2a8 != (longlong *)0x0) {
        local_2a8 = (longlong *)FMemory::Realloc(local_2a8,0,0);
      }
      local_2a0 = 0;
      plVar11 = local_2a8;
    }
joined_r0x000141066a68:
    if (plVar11 != (longlong *)0x0) {
      FMemory::Free(plVar11);
    }
  }
  cVar4 = local_2c8;
  if (*(char *)((longlong)param_1 + 0x839) == '\0') {
    FUN_141045cb0(param_1 + 0xdc,param_1,param_1 + 0x108);
  }
  *(char *)(param_1 + 0x181) = cVar4;
  *(undefined1 *)((longlong)param_1 + 0xc09) = 0;
  LOCK();
  uVar3 = *(uint *)(param_1 + 0x1dc);
  *(uint *)(param_1 + 0x1dc) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  return (ulonglong)uVar3;
}



// FUNCTION 141066b10 FUN_141066b10 body=472 status=ok
// SIG undefined FUN_141066b10(void)

void FUN_141066b10(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  float fVar7;
  
  plVar6 = (longlong *)0x0;
  iVar2 = *(int *)(param_1 + 0x94);
  if (*(float *)(param_1 + 0x90) <= 0.0) {
    iVar5 = 0;
  }
  else {
    fVar7 = (float)FUN_142eedeb0(param_1 + 0x20);
    fVar7 = fVar7 / *(float *)(param_1 + 0x90);
    iVar5 = (int)ROUND((fVar7 + fVar7) - 0.5) >> 1;
  }
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x54) * iVar5;
  fVar7 = (float)FUN_142eedeb0(param_1 + 0x20);
  *(float *)(param_1 + 0x98) = fVar7 - (float)iVar5 * *(float *)(param_1 + 0x90);
  if (iVar2 != *(int *)(param_1 + 0x94)) {
    FUN_14103cc60(param_1);
  }
  if ((*(longlong *)(param_1 + 0x68) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) != 0)) {
    FUN_14208ff10();
  }
  lVar3 = *(longlong *)(param_1 + 0x70);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x10) != 0)) {
    fVar7 = *(float *)(param_1 + 0x44);
    fVar1 = *(float *)(param_1 + 0x40);
    if (1e-08 < ABS(fVar7)) {
      if (1e-08 < ABS(fVar7 - fVar1)) {
        FUN_142eedeb0(param_1 + 0x20);
        lVar3 = *(longlong *)(param_1 + 0x70);
      }
      plVar4 = plVar6;
      if (lVar3 != 0) {
        plVar4 = *(longlong **)(lVar3 + 0x10);
      }
      FUN_142f10880(plVar4,fVar1 / fVar7);
      plVar4 = plVar6;
      if (*(longlong *)(param_1 + 0x70) != 0) {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x10);
      }
      FUN_142f0fa70(plVar4);
    }
    else {
      FUN_142f10880();
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x10);
    }
    (**(code **)(*plVar6 + 0x278))(plVar6,fVar1 < fVar7);
  }
  return;
}



// FUNCTION 141066cf0 FUN_141066cf0 body=583 status=ok
// SIG undefined FUN_141066cf0(void)

void FUN_141066cf0(longlong param_1,int param_2,float param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  longlong local_68 [5];
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((param_2 != *(int *)(param_1 + 0x6f8)) ||
     ((*(longlong *)(param_1 + 0x6d8) != 0 && (fVar7 = (float)FUN_142eedc90(), fVar7 != param_3))))
  {
    if (*(longlong *)(param_1 + 0x6d8) != 0) {
      local_68[4] = 0;
      plStack_40 = (longlong *)0x0;
      uVar6 = FText::AsNumber(local_38,param_2,0,local_68 + 4);
      FUN_142f0c7d0(*(undefined8 *)(param_1 + 0x6d8),uVar6);
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
      if (param_4 == '\x03') {
        FUN_142f0ead0(*(undefined8 *)(param_1 + 0x6d8),param_3);
      }
      else {
        FUN_142ef4810();
      }
    }
    if (((param_2 < *(int *)(param_1 + 0x6f8)) && (*(longlong *)(param_1 + 0x6e0) != 0)) &&
       (*(longlong *)(param_1 + 0x6d8) != 0)) {
      local_68[1] = 3;
      local_68[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
      FGenericPlatformString::Memcpy(local_68[0],&DAT_14466b500,6);
      FUN_142088910(*(undefined8 *)(param_1 + 0x6e0),local_68);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_1 + 0x6e8) != 0) {
        local_68[2] = 0;
        local_68[3] = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
        FGenericPlatformString::Memcpy(local_68[2],&DAT_14466b508,6);
        FUN_142088910(*(undefined8 *)(param_1 + 0x6e8),local_68 + 2);
        if (local_68[2] != 0) {
          FMemory::Free();
        }
      }
      FUN_142f12c40(*(undefined8 *)(param_1 + 0x6d8));
    }
    else if ((*(int *)(param_1 + 0x6f8) < param_2) && (*(longlong *)(param_1 + 0x6d8) != 0)) {
      FUN_142f03c80();
    }
    *(int *)(param_1 + 0x6f8) = param_2;
  }
  return;
}



// FUNCTION 141066f40 FUN_141066f40 body=272 status=ok
// SIG undefined FUN_141066f40(void)

void FUN_141066f40(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x688);
  while( true ) {
    while( true ) {
      while (cVar1 == '\0') {
        if ((*(longlong *)(param_1 + 0x6e0) == 0) ||
           (*(char *)(*(longlong *)(param_1 + 0x6e0) + 0x18) == '\0')) {
          FUN_141034410(param_1);
          return;
        }
        *(undefined1 *)(param_1 + 0x688) = 1;
        cVar1 = '\x01';
      }
      if (cVar1 != '\x01') break;
      if (*(longlong *)(param_1 + 0x6e0) != 0) {
        cVar1 = FUN_142b4f460();
        if (cVar1 != '\0') {
          FUN_141055dd0(param_1);
          return;
        }
      }
      *(undefined1 *)(param_1 + 0x688) = 2;
      cVar1 = '\x02';
    }
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        return;
      }
      cVar1 = FUN_142b54800(*(undefined8 *)(param_1 + 0x6e0));
      if (cVar1 != '\0') {
        FUN_1410622b0(param_1,2);
        return;
      }
      FUN_1410622b0(param_1,*(undefined4 *)(param_1 + 0x6f4));
      return;
    }
    if (*(longlong **)(param_1 + 0x6e0) == (longlong *)0x0) break;
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x10))();
    if (cVar1 == '\0') break;
    *(undefined1 *)(param_1 + 0x688) = 3;
    cVar1 = '\x03';
  }
  if (*(int *)(param_1 + 0x6f0) != 0) {
    FUN_1410622b0(param_1,*(undefined4 *)(param_1 + 0x6f4));
    return;
  }
  FUN_1410622b0(param_1,1);
  return;
}



// FUNCTION 141067050 FUN_141067050 body=958 status=ok
// SIG undefined FUN_141067050(void)

void FUN_141067050(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  void *_Src;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 uVar11;
  PSRWLOCK SRWLock;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  int local_res10;
  undefined1 local_68 [8];
  longlong *local_60;
  
  uVar13 = 0;
  plVar2 = param_1 + 0x188;
  *(undefined4 *)(param_1 + 0x189) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xc4c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2,0);
  }
  local_res10 = 0;
  if ((longlong *)param_1[0x180] != (longlong *)0x0) {
    local_res10 = (**(code **)(*(longlong *)param_1[0x180] + 0x408))();
  }
  if ((param_1[0x1d7] == 0) ||
     (cVar7 = TBaseSPMethodDelegateInstance<0,SSearchBox,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,FText>
              ::IsSafeToExecute(), cVar7 == '\0')) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x17b));
    lVar16 = param_1[0x17c];
    SRWLock = (PSRWLOCK)(param_1 + 0x17b);
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x17d));
    lVar16 = param_1[0x17e];
    SRWLock = (PSRWLOCK)(param_1 + 0x17d);
  }
  ReleaseSRWLockShared(SRWLock);
  if (((param_1[0xda] != 0) && (lVar16 != 0)) && (lVar3 = *(longlong *)(lVar16 + 0x458), lVar3 != 0)
     ) {
    cVar7 = *(char *)((longlong)param_1 + 0xc09);
    cVar8 = cVar7;
    if (cVar7 == '\0') {
      cVar8 = (char)param_1[0x181];
    }
    if ((local_res10 < (int)param_1[0x122]) || ((cVar8 != '\x01' && (cVar8 != '\x06')))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    plVar14 = (longlong *)param_1[0x186];
    uVar15 = (longlong)(int)param_1[0x187] & 0x1fffffffffffffff;
    if (plVar14 + (int)param_1[0x187] < plVar14) {
      uVar15 = uVar13;
    }
    if (uVar15 != 0) {
      do {
        lVar4 = *plVar14;
        if (lVar4 != 0) {
          if ((bVar6) &&
             (cVar7 = (**(code **)(*param_1 + 0x5b8))(param_1,lVar4,lVar3,local_res10),
             cVar7 != '\0')) {
            plVar5 = (longlong *)*plVar2;
            iVar10 = (int)param_1[0x189];
            for (plVar12 = plVar5; plVar12 != plVar5 + iVar10; plVar12 = plVar12 + 1) {
              if (*plVar12 == lVar4) {
                if ((int)((longlong)plVar12 - (longlong)plVar5 >> 3) != -1) goto LAB_14106723c;
                break;
              }
            }
            *(int *)(param_1 + 0x189) = iVar10 + 1;
            if (*(int *)((longlong)param_1 + 0xc4c) < iVar10 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar10);
            }
            *(longlong *)((longlong)iVar10 * 8 + *plVar2) = lVar4;
LAB_14106723c:
            uVar11 = 1;
          }
          else {
            uVar11 = 0;
          }
          FUN_1410658b0(lVar4,uVar11);
        }
        plVar14 = plVar14 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar15);
      cVar7 = *(char *)((longlong)param_1 + 0xc09);
    }
    cVar8 = cVar7;
    if (cVar7 == '\0') {
      cVar8 = (char)param_1[0x181];
    }
    if (cVar8 != '\x01') {
      if (cVar7 == '\0') {
        cVar7 = (char)param_1[0x181];
      }
      if (cVar7 != '\x05') goto LAB_14106735f;
    }
    uVar9 = FUN_141037600(param_1,lVar16);
    FUN_141064ec0(lVar16,uVar9);
    FUN_141047400(param_1 + 0xdc,param_1,lVar16);
    uVar11 = FUN_141039660(param_1,local_68,lVar16);
    if ((param_1[0xfd] != 0) && (param_1[0xfe] != 0)) {
      piVar1 = (int *)(param_1[0xfe] + 8);
      LOCK();
      iVar10 = *piVar1;
      if (iVar10 == 0) {
        *piVar1 = 0;
        iVar10 = 0;
      }
      UNLOCK();
      if (0 < iVar10) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0xfc,uVar11,1,0);
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_60 + 1;
      lVar3 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
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
    FUN_1410652a0(param_1,*(undefined1 *)(lVar16 + 0x500));
  }
LAB_14106735f:
  plVar14 = (longlong *)0x0;
  if (((param_1[0x1d7] != 0) &&
      (cVar7 = TBaseSPMethodDelegateInstance<0,SSearchBox,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,FText>
               ::IsSafeToExecute(), cVar7 != '\0')) && (plVar5 = param_1 + 0x18a, plVar5 != plVar2))
  {
    iVar10 = (int)param_1[0x189];
    _Src = (void *)*plVar2;
    *(int *)(param_1 + 0x18b) = iVar10;
    if ((iVar10 == 0) && (*(int *)((longlong)param_1 + 0xc5c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc5c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar5,iVar10);
      _guard_xfg_dispatch_icall_nop((void *)*plVar5,_Src,(longlong)iVar10 << 3);
    }
  }
  if ((((int)param_1[0x1de] != 0) && ((longlong *)param_1[0x1dd] != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(*(longlong *)param_1[0x1dd] + 0x18))(), cVar7 != '\0')) {
    if ((int)param_1[0x1de] != 0) {
      plVar14 = (longlong *)param_1[0x1dd];
    }
    (**(code **)(*plVar14 + 0x40))(plVar14);
  }
  return;
}



// FUNCTION 141067410 FUN_141067410 body=443 status=ok
// SIG undefined FUN_141067410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_141067410(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char param_5
             )

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined1 local_120 [24];
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (param_5 != '\0') {
    local_128 = param_1;
    FText::FText(local_120);
    FText::FText(local_108,param_3);
    FString::FString(local_f0,param_4);
    uVar4 = 0;
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x50,local_c8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_14467a298;
      puVar3[1] = local_128;
      FText::FText(puVar3 + 2,local_120);
      FText::FText(puVar3 + 5,local_108);
      FString::FString(puVar3 + 8,local_f0);
    }
    local_d8[0] = thunk_FUN_14102fb20;
    FUN_141023220(&local_128);
    cVar2 = FUN_142ebdc00(param_1);
    if ((cVar2 == '\0') || (cVar2 = FUN_142eba870(param_1), cVar2 != '\0')) {
      if (local_98 != 0) {
        plVar5 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar5 = local_a8;
        }
        if (plVar5 != (longlong *)0x0) {
          uVar4 = (**(code **)(*plVar5 + 8))();
        }
      }
      (*local_d8[0])(uVar4);
    }
    else {
      uVar4 = FUN_1420849a0(param_1,local_88,local_d8);
      FUN_14208d480(param_1,uVar4);
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
      FUN_142eb05b0(param_1);
    }
    if (local_98 != 0) {
      plVar5 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar5 = local_a8;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x678);
  *(undefined4 *)(param_1 + 0x678) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1410675d0 FUN_1410675d0 body=423 status=ok
// SIG undefined FUN_1410675d0(void)

void FUN_1410675d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  lVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar4 == 0) {
LAB_141067629:
    lVar4 = 0;
  }
  else {
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
    if (!bVar2) goto LAB_141067629;
  }
  if (param_2 != 0) {
    lVar5 = FUN_1413930c0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar5 = param_2;
    if (bVar2) goto LAB_14106766d;
  }
  lVar5 = 0;
LAB_14106766d:
  param_1[0xdf] = lVar5;
  if ((((lVar4 != 0) && (param_1[0xd7] != 0)) && (lVar5 != 0)) && (param_1[0xda] != 0)) {
    iVar7 = 0;
    if (0 < (int)param_1[0xd6]) {
      lVar4 = 0;
      do {
        lVar5 = param_1[0xd5];
        lVar1 = *(longlong *)(lVar4 + lVar5);
        if ((lVar1 != 0) && (param_2 != lVar1)) {
          iVar3 = FUN_142eed730(param_1[0xda]);
          FUN_142f0bc30(param_1[0xda],*(undefined8 *)(lVar4 + lVar5),iVar3 + -1);
        }
        iVar7 = iVar7 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar7 < (int)param_1[0xd6]);
    }
    lVar4 = *param_1;
    local_28 = 0;
    local_20 = 0;
    puVar6 = (undefined8 *)FName::FName(local_res8,L"Quick_Emote_Tile_Appear",1);
    (**(code **)(lVar4 + 0x4e8))(param_1,*puVar6,&local_28);
    (**(code **)(*(longlong *)param_1[0xd7] + 0x2b0))
              ((longlong *)param_1[0xd7],param_1[0xdf] + 0x2c8,1,0);
  }
  return;
}



// FUNCTION 141067780 FUN_141067780 body=1455 status=ok
// SIG undefined FUN_141067780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141067780(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 uVar11;
  int iVar12;
  undefined1 auStack_338 [32];
  undefined2 local_318;
  undefined1 local_308;
  undefined4 local_304;
  longlong *local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  longlong local_2c0;
  LARGE_INTEGER local_2b8;
  longlong local_2b0;
  longlong *local_2a8;
  undefined8 local_298;
  undefined4 local_290;
  undefined1 local_28c;
  undefined8 local_288;
  undefined8 local_280;
  longlong *local_278;
  undefined1 local_270;
  undefined1 *local_258 [2];
  undefined1 local_248 [32];
  undefined8 local_228;
  undefined4 local_218;
  undefined1 *local_208 [2];
  undefined1 local_1f8 [32];
  undefined8 local_1d8;
  undefined4 local_1c8;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8 [16];
  longlong local_198 [4];
  longlong *local_178;
  int local_168;
  undefined1 *local_158 [2];
  longlong local_148 [4];
  longlong *local_128;
  int local_118;
  LARGE_INTEGER local_108 [24];
  longlong local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  local_2c0 = param_1;
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
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
    if (bVar3) goto LAB_141067803;
  }
  lVar5 = 0;
LAB_141067803:
  iVar12 = -1;
  if (param_2 != 0) {
    iVar4 = 0;
    iVar12 = -1;
    if (0 < *(int *)(param_1 + 0x6b0)) {
      plVar10 = *(longlong **)(param_1 + 0x6a8);
      do {
        if ((*plVar10 != 0) && (iVar12 = iVar4, param_2 == *plVar10)) break;
        iVar4 = iVar4 + 1;
        plVar10 = plVar10 + 1;
        iVar12 = -1;
      } while (iVar4 < *(int *)(param_1 + 0x6b0));
    }
  }
  if ((lVar5 != 0) && (iVar12 != -1)) {
    local_304 = *(undefined4 *)(param_3 + 1);
    plVar10 = (longlong *)param_3[4];
    local_308 = *(undefined1 *)((longlong)param_3 + 0xc);
    local_2f0 = param_3[2];
    local_2e8 = param_3[3];
    uVar2 = *param_3;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    uVar11 = *(undefined1 *)(param_3 + 5);
    local_228 = 0;
    local_218 = 0;
    local_298 = uVar2;
    local_290 = local_304;
    local_28c = local_308;
    local_288 = local_2f0;
    local_280 = local_2e8;
    local_278 = plVar10;
    local_270 = uVar11;
    puVar7 = (undefined8 *)FUN_140438ef0(0x50,local_248);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_14467a3e8;
      puVar7[1] = local_2c0;
      *(undefined4 *)(puVar7 + 3) = local_304;
      *(undefined1 *)((longlong)puVar7 + 0x1c) = local_308;
      puVar7[2] = uVar2;
      puVar7[4] = local_2f0;
      puVar7[5] = local_2e8;
      puVar7[6] = plVar10;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        plVar10 = local_278;
        uVar11 = local_270;
      }
      *(undefined1 *)(puVar7 + 7) = uVar11;
      *(int *)(puVar7 + 8) = iVar12;
      puVar7[9] = lVar5;
    }
    local_2d8 = 0x22;
    plVar9 = (longlong *)0x0;
    local_258[0] = &LAB_141031db0;
    local_2e0 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e0,0);
    local_318 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_2e0,0x22,"UGFxQuickMenu::WheelButtonPressed");
    FUN_140cdf730(local_108,&local_2e0,local_258);
    plVar8 = local_278;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar10 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_278)(local_278);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_278 + 8))(local_278,1);
        }
      }
    }
    QueryPerformanceCounter(&local_2b8);
    local_108[0] = local_2b8;
    plVar8 = (longlong *)operator_new(0x18);
    plVar10 = plVar9;
    if (plVar8 != (longlong *)0x0) {
      TPromiseBase<int>::TPromiseBase<int>(plVar8);
      *(undefined1 *)(plVar8 + 2) = 0;
      plVar10 = plVar8;
    }
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *plVar8 = (longlong)&PTR_DestroyObject_1444f8938;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      plVar8[2] = (longlong)plVar10;
      plVar9 = plVar8;
    }
    local_300 = plVar10;
    local_2f8 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_300,plVar10,plVar10);
    *(undefined1 *)(local_300 + 2) = 1;
    local_2c8 = (longlong *)local_300[1];
    local_2b0 = *local_300;
    if (local_2c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2c8 + 1) = (int)local_2c8[1] + 1;
      UNLOCK();
    }
    local_2d0 = 0;
    local_2a8 = local_2c8;
    local_48 = local_2b0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_40,&local_2c8);
    plVar10 = local_2c8;
    if (local_2c8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_2c8 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_2c8)(local_2c8);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_2c8 + 8))(local_2c8,1);
        }
      }
    }
    local_128 = (longlong *)0x0;
    local_118 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_148);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_1444f8620;
      puVar7[1] = local_108;
    }
    local_158[0] = &LAB_140cee980;
    local_1b8 = local_300;
    local_1b0 = local_2f8;
    if (local_2f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2f8 + 1) = (int)local_2f8[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_1a8,local_158);
    local_1d8 = 0;
    local_1c8 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x70,local_1f8);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_CopyToEmptyStorage_1444f8578;
      puVar7[2] = local_1b8;
      puVar7[3] = local_1b0;
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
        UNLOCK();
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar7 + 4,local_1a8);
    }
    local_208[0] = &LAB_140cee8d0;
    if (local_168 != 0) {
      plVar10 = local_198;
      if (local_178 != (longlong *)0x0) {
        plVar10 = local_178;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_178 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar10 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1b0 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1b0)(local_1b0);
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
    if (local_118 != 0) {
      plVar10 = local_148;
      if (local_128 != (longlong *)0x0) {
        plVar10 = local_128;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar10 = local_2f8;
    if (local_2f8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_2f8 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_2f8)(local_2f8);
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
    FUN_14204c280(local_208);
    FUN_140d1b3a0(local_108);
    FUN_140ce1dc0(local_108);
  }
  return;
}



// FUNCTION 141067d30 FUN_141067d30 body=66 status=ok
// SIG undefined FUN_141067d30(void)

void FUN_141067d30(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_1 + 0x6b8) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x6b8);
    uVar2 = FUN_1404b03b0();
    (**(code **)(lVar1 + 0x2b0))(*(undefined8 *)(param_1 + 0x6b8),uVar2,1,0);
  }
  return;
}



// FUNCTION 141067d80 FUN_141067d80 body=46 status=ok
// SIG undefined FUN_141067d80(void)

void FUN_141067d80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x690) != 0) {
    FUN_14105c820(*(longlong *)(param_1 + 0x690),1);
  }
  FUN_142eb3990(param_1);
  return;
}



// FUNCTION 141067db0 FUN_141067db0 body=32 status=ok
// SIG undefined FUN_141067db0(void)

void FUN_141067db0(longlong *param_1)

{
  FUN_142edc1c0();
                    /* WARNING: Could not recover jumptable at 0x000141067dc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5c8))(param_1);
  return;
}



// FUNCTION 141067dd0 FUN_141067dd0 body=113 status=ok
// SIG undefined FUN_141067dd0(void)

void FUN_141067dd0(longlong param_1)

{
  longlong local_18 [2];
  
  FUN_142edc290();
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    local_18[1] = 8;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"default",0x10);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x6d8),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141067e50 FUN_141067e50 body=172 status=ok
// SIG undefined FUN_141067e50(void)

void FUN_141067e50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar1 = *(longlong *)(param_1 + 0xc78);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x188) = 0;
    bVar4 = false;
    *(int *)(lVar1 + 0x1a4) = *(int *)(lVar1 + 0x1a4) + 1;
    iVar7 = *(int *)(lVar1 + 0x1a4);
    iVar6 = *(int *)(lVar1 + 0x198) + -1;
    lVar9 = (longlong)iVar6;
    if (-1 < iVar6) {
      lVar8 = lVar9 << 4;
      bVar4 = false;
      do {
        lVar2 = *(longlong *)(lVar1 + 400);
        if ((*(int *)(lVar8 + 8 + lVar2) == 0) ||
           (plVar3 = *(longlong **)(lVar8 + lVar2), plVar3 == (longlong *)0x0)) {
LAB_141067ebd:
          bVar4 = true;
        }
        else {
          cVar5 = (**(code **)(*plVar3 + 0x40))();
          if (cVar5 == '\0') goto LAB_141067ebd;
        }
        lVar8 = lVar8 + -0x10;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
      iVar7 = *(int *)(lVar1 + 0x1a4);
    }
    *(int *)(lVar1 + 0x1a4) = iVar7 + -1;
    if (bVar4) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar1 + 400),0);
      return;
    }
  }
  return;
}



// FUNCTION 141067f00 FUN_141067f00 body=112 status=ok
// SIG undefined FUN_141067f00(void)

void FUN_141067f00(longlong param_1)

{
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  if (*(int *)(param_1 + 0x63c) == 2) {
    *(undefined4 *)(param_1 + 0x63c) = 0;
    FUN_14105b0f0(param_1,*(undefined1 *)(param_1 + 0x631));
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x870,local_res8);
  }
  else if (*(int *)(param_1 + 0x63c) == 3) {
    *(undefined4 *)(param_1 + 0x63c) = 1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x880,local_res8);
    return;
  }
  return;
}



// FUNCTION 141067f70 FUN_141067f70 body=296 status=ok
// SIG undefined FUN_141067f70(void)

void FUN_141067f70(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (((-1 < *(int *)(param_1 + 0x6b4)) &&
      (iVar4 = *(int *)(param_1 + 0x6c8), *(int *)(param_1 + 0x6b4) < iVar4)) &&
     (iVar6 = 0, 0 < iVar4)) {
    lVar5 = 0;
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x6b4);
      if (iVar4 == 4) {
        if (((uVar2 < 4) && (-1 < lVar5)) && (iVar6 < 4)) {
          iVar4 = *(int *)(&DAT_14467a050 + ((longlong)(int)uVar2 + lVar5 * 4) * 4);
        }
        else {
LAB_141068019:
          iVar4 = 0;
        }
      }
      else {
        if (((iVar4 != 3) || (2 < uVar2)) || ((lVar5 < 0 || (2 < iVar6)))) goto LAB_141068019;
        iVar4 = *(int *)(&DAT_14467a150 + (lVar8 + (int)uVar2) * 4);
      }
      plVar1 = (longlong *)(lVar7 + *(longlong *)(param_1 + 0x6c0));
      lVar3 = *(longlong *)((longlong)iVar4 * 0x40 + 0x18 + *(longlong *)(param_1 + 0x6c0));
      if ((*plVar1 != 0) && (FUN_142f05c70(*plVar1,0), lVar3 != 0)) {
        FUN_142ee17b0(*plVar1);
      }
      plVar1[2] = lVar3;
      iVar6 = iVar6 + 1;
      iVar4 = *(int *)(param_1 + 0x6c8);
      lVar5 = lVar5 + 1;
      lVar8 = lVar8 + 3;
      lVar7 = lVar7 + 0x40;
    } while (iVar6 < iVar4);
  }
  return;
}



// FUNCTION 1410680a0 FUN_1410680a0 body=296 status=ok
// SIG undefined FUN_1410680a0(void)

void FUN_1410680a0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (((-1 < *(int *)(param_1 + 0x6b4)) &&
      (iVar4 = *(int *)(param_1 + 0x6c8), *(int *)(param_1 + 0x6b4) < iVar4)) &&
     (iVar6 = 0, 0 < iVar4)) {
    lVar5 = 0;
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x6b4);
      if (iVar4 == 4) {
        if (((uVar2 < 4) && (-1 < lVar5)) && (iVar6 < 4)) {
          iVar4 = *(int *)(&DAT_14467a090 + ((longlong)(int)uVar2 + lVar5 * 4) * 4);
        }
        else {
LAB_141068149:
          iVar4 = 0;
        }
      }
      else {
        if (((iVar4 != 3) || (2 < uVar2)) || ((lVar5 < 0 || (2 < iVar6)))) goto LAB_141068149;
        iVar4 = *(int *)(&DAT_14467a178 + (lVar8 + (int)uVar2) * 4);
      }
      plVar1 = (longlong *)(lVar7 + *(longlong *)(param_1 + 0x6c0));
      lVar3 = *(longlong *)((longlong)iVar4 * 0x40 + 0x18 + *(longlong *)(param_1 + 0x6c0));
      if ((*plVar1 != 0) && (FUN_142f05c70(*plVar1,0), lVar3 != 0)) {
        FUN_142ee17b0(*plVar1);
      }
      plVar1[2] = lVar3;
      iVar6 = iVar6 + 1;
      iVar4 = *(int *)(param_1 + 0x6c8);
      lVar5 = lVar5 + 1;
      lVar8 = lVar8 + 3;
      lVar7 = lVar7 + 0x40;
    } while (iVar6 < iVar4);
  }
  return;
}



// FUNCTION 1410681d0 FUN_1410681d0 body=291 status=ok
// SIG undefined FUN_1410681d0(void)

void FUN_1410681d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 6;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"wheel",0xc);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x6d0) = uVar2;
  plVar3 = local_28;
  for (iVar4 = (int)local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (((0 < *(int *)(param_1 + 0x6b0)) &&
      (*(float *)(param_1 + 0x6e4) = 360.0 / (float)*(int *)(param_1 + 0x6b0),
      *(longlong *)(param_1 + 0x430) != 0)) && (cVar1 = FUN_142dd3d20(), cVar1 != '\0')) {
    uVar2 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (&local_18,**(undefined8 **)(param_1 + 0x6a8));
    FUN_142ed36d0(param_1,uVar2,0);
  }
  return;
}



// FUNCTION 141068300 FUN_141068300 body=218 status=ok
// SIG undefined FUN_141068300(void)

undefined8 *
FUN_141068300(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res10 [8];
  
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_1444f8638;
    FWeakObjectPtr::operator=(plVar7 + 1,param_3);
    *(undefined4 *)(plVar7 + 2) = uVar3;
    *(undefined4 *)((longlong)plVar7 + 0x14) = uVar4;
    *(undefined4 *)(plVar7 + 3) = uVar5;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar6;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_1444f8680;
  }
  *param_2 = 0;
  if (plVar7 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar9;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar9 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar9 = plVar7;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 1410683e0 FUN_1410683e0 body=202 status=ok
// SIG undefined FUN_1410683e0(void)

ulonglong FUN_1410683e0(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  puVar4 = (ulonglong *)*param_1;
  uVar2 = (ulonglong)(int)param_1[1];
  puVar5 = puVar4 + uVar2 * 0xb;
  do {
    if (puVar4 == puVar5) {
      return uVar2 & 0xffffffffffffff00;
    }
    uVar2 = *param_2;
    if ((*puVar4 == uVar2) && (uVar2 = param_2[7], puVar4[7] == uVar2)) {
      if (puVar4[9] != 0) {
        uVar2 = AGShrineUsable::GetPrivateStaticClass();
        uVar6 = puVar4[9];
        for (uVar3 = uVar6; uVar3 != 0; uVar3 = *(ulonglong *)(uVar3 + 0x30)) {
          if (uVar3 == uVar2) goto LAB_141068450;
        }
      }
      uVar6 = 0;
LAB_141068450:
      if (param_2[9] != 0) {
        uVar2 = AGShrineUsable::GetPrivateStaticClass();
        uVar3 = param_2[9];
        for (uVar1 = uVar3; uVar1 != 0; uVar1 = *(ulonglong *)(uVar1 + 0x30)) {
          if (uVar1 == uVar2) goto LAB_141068478;
        }
      }
      uVar3 = 0;
LAB_141068478:
      if ((uVar6 == uVar3) && (uVar2 = 0, (char)puVar4[10] == (char)param_2[10])) {
        return 1;
      }
    }
    puVar4 = puVar4 + 0xb;
  } while( true );
}



// FUNCTION 1410684b0 FUN_1410684b0 body=441 status=ok
// SIG undefined FUN_1410684b0(void)

int * FUN_1410684b0(longlong *param_1,int *param_2,ulonglong *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar4 = *param_3;
  uVar3 = param_3[1];
  bVar11 = false;
  *param_2 = local_38[0];
  *local_30 = uVar4;
  local_30[1] = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar4 = param_3[3];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(int *)(local_30 + 2) = (int)param_3[2];
  *(undefined4 *)((longlong)local_30 + 0x14) = uVar1;
  *(int *)(local_30 + 3) = (int)uVar4;
  *(undefined4 *)((longlong)local_30 + 0x1c) = uVar2;
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar4 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(int *)(local_30 + 4) = (int)param_3[4];
  *(undefined4 *)((longlong)local_30 + 0x24) = uVar1;
  *(int *)(local_30 + 5) = (int)uVar4;
  *(undefined4 *)((longlong)local_30 + 0x2c) = uVar2;
  *(undefined4 *)(local_30 + 6) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*local_30);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x38 + *param_1),local_30,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_141068641;
    }
  }
  cVar5 = TSet<TTuple<TSharedRef<FString,1>,FTextId>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,FTextId,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar5 == '\0') {
    iVar9 = (int)(*local_30 >> 4);
    uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar10 = -(uVar8 + iVar9) ^ uVar8 >> 0xd;
    uVar7 = (iVar9 - uVar8) - uVar10 ^ uVar10 >> 0xc;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 0x10;
    uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 5;
    uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar10 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 10;
    uVar7 = ((uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x34) = uVar7;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 6) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_141068641:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 141068670 FUN_141068670 body=409 status=ok
// SIG undefined FUN_141068670(void)

longlong FUN_141068670(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  void *_Dst;
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int local_res8 [2];
  int local_28 [2];
  undefined8 *local_20;
  
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  FString::FString(local_20,param_2);
  *(undefined4 *)(local_20 + 2) = *param_3;
  local_20[3] = *(undefined8 *)(param_3 + 2);
  local_20[3] = *(undefined8 *)(param_3 + 2);
  *(undefined4 *)(local_20 + 3) = param_3[2];
  local_20[3] = *(undefined8 *)(param_3 + 2);
  *(undefined1 *)(local_20 + 7) = 0;
  if (*(char *)(param_3 + 10) != '\0') {
    FText::FText(local_20 + 4);
    *(undefined1 *)(local_20 + 7) = 1;
  }
  *(undefined4 *)(local_20 + 8) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_20);
    if (local_res8[0] != -1) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x48);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0x40);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_28[0],1);
      goto LAB_1410687e3;
    }
  }
  cVar1 = TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  local_res8[0] = local_28[0];
  if (cVar1 == '\0') {
    if (*(int *)(local_20 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*local_20;
    }
    uVar2 = FCrc::StrCrc32<wchar_t>(puVar4,0);
    uVar2 = uVar2 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_20 + 0x44) = uVar2;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 8) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         local_28[0];
  }
LAB_1410687e3:
  return *param_1 + (longlong)local_res8[0] * 0x48 + 0x10;
}



// FUNCTION 141068810 FUN_141068810 body=892 status=ok
// SIG undefined FUN_141068810(void)

int * FUN_141068810(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulonglong *_Src;
  uint *puVar16;
  int iVar17;
  bool bVar18;
  
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar11 = *(int *)((longlong)iVar12 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar11 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar12;
  lVar7 = (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar16 = (uint *)((longlong)plVar8 + lVar7);
  *puVar16 = *puVar16 | 1 << ((byte)iVar12 & 0x1f);
  puVar1 = (ulonglong *)param_3[1];
  bVar18 = false;
  lVar10 = (longlong)iVar12 * 0x20;
  _Src = (ulonglong *)(*param_1 + lVar10);
  uVar2 = *(ulonglong *)*param_3;
  *_Src = uVar2;
  _Src[1] = *puVar1;
  *(int *)(_Src + 2) = (int)puVar1[1];
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    iVar11 = iVar17;
    if (iVar6 != 0) {
      iVar14 = (int)(uVar2 >> 4);
      uVar13 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
      uVar9 = -(uVar13 + iVar14) ^ uVar13 >> 0xd;
      uVar15 = (iVar14 - uVar13) - uVar9 ^ uVar9 >> 0xc;
      uVar13 = (uVar13 - uVar15) - uVar9 ^ uVar15 << 0x10;
      uVar9 = (uVar9 - uVar13) - uVar15 ^ uVar13 >> 5;
      uVar15 = (uVar15 - uVar13) - uVar9 ^ uVar9 >> 3;
      uVar13 = (uVar13 - uVar15) - uVar9 ^ uVar15 << 10;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar14 = *(int *)((longlong)plVar8 +
                       (((longlong)(int)((uVar9 - uVar13) - uVar15) ^ (ulonglong)(uVar13 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar14 != -1) {
        do {
          iVar11 = iVar14;
          if (*(ulonglong *)((longlong)iVar14 * 0x20 + *param_1) == uVar2) break;
          iVar14 = *(int *)((longlong)iVar14 * 0x20 + 0x18 + *param_1);
          iVar11 = iVar17;
        } while (iVar14 != -1);
      }
    }
    bVar18 = iVar11 != -1;
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar11 * 0x20 + *param_1),_Src,0x18);
      bVar4 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar12;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar10 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      *(int *)(lVar10 + 4 + lVar3) = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar8 + lVar7);
      *puVar16 = *puVar16 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_141068b62;
    }
  }
  cVar5 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar5 == '\0') {
    iVar17 = (int)(*_Src >> 4);
    uVar13 = 0x9e3779b9U - iVar17 ^ iVar17 << 8;
    uVar15 = -(uVar13 + iVar17) ^ uVar13 >> 0xd;
    uVar9 = (iVar17 - uVar13) - uVar15 ^ uVar15 >> 0xc;
    uVar13 = (uVar13 - uVar9) - uVar15 ^ uVar9 << 0x10;
    uVar15 = (uVar15 - uVar13) - uVar9 ^ uVar13 >> 5;
    uVar9 = (uVar9 - uVar13) - uVar15 ^ uVar15 >> 3;
    uVar13 = (uVar13 - uVar9) - uVar15 ^ uVar9 << 10;
    uVar9 = ((uVar15 - uVar13) - uVar9 ^ uVar13 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar9;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_141068b62:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 141068b90 FUN_141068b90 body=457 status=ok
// SIG undefined FUN_141068b90(void)

int * FUN_141068b90(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  char cVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (ulonglong *)param_3[1];
  bVar12 = false;
  puVar2 = (ulonglong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = *puVar2;
  uVar5 = puVar1[1];
  local_30[1] = *puVar1;
  local_30[2] = uVar5;
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uVar5 = puVar1[3];
  uVar4 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  *(int *)(local_30 + 3) = (int)puVar1[2];
  *(undefined4 *)((longlong)local_30 + 0x1c) = uVar3;
  *(int *)(local_30 + 4) = (int)uVar5;
  *(undefined4 *)((longlong)local_30 + 0x24) = uVar4;
  local_30[5] = puVar1[4];
  *(undefined4 *)(local_30 + 6) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x38 + *param_1),local_30,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_141068d31;
    }
  }
  cVar6 = TSet<TTuple<TSharedRef<FString,1>,FTextId>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,FTextId,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar6 == '\0') {
    iVar10 = (int)(*local_30 >> 4);
    uVar9 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar11 = -(uVar9 + iVar10) ^ uVar9 >> 0xd;
    uVar8 = (iVar10 - uVar9) - uVar11 ^ uVar11 >> 0xc;
    uVar9 = (uVar9 - uVar8) - uVar11 ^ uVar8 << 0x10;
    uVar11 = (uVar11 - uVar9) - uVar8 ^ uVar9 >> 5;
    uVar8 = (uVar8 - uVar9) - uVar11 ^ uVar11 >> 3;
    uVar9 = (uVar9 - uVar8) - uVar11 ^ uVar8 << 10;
    uVar8 = ((uVar11 - uVar9) - uVar8 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x34) = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 6) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_141068d31:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 141068d60 FUN_141068d60 body=438 status=ok
// SIG undefined FUN_141068d60(void)

longlong FUN_141068d60(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  void *_Dst;
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int local_res8 [2];
  int local_28 [2];
  undefined8 *local_20;
  
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *local_20 = 0;
  *local_20 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(local_20 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)local_20 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined4 *)(local_20 + 2) = *param_3;
  local_20[3] = *(undefined8 *)(param_3 + 2);
  local_20[3] = *(undefined8 *)(param_3 + 2);
  *(undefined4 *)(local_20 + 3) = param_3[2];
  local_20[3] = *(undefined8 *)(param_3 + 2);
  *(undefined1 *)(local_20 + 7) = 0;
  if (*(char *)(param_3 + 10) != '\0') {
    FText::FText(local_20 + 4);
    *(undefined1 *)(local_20 + 7) = 1;
  }
  *(undefined4 *)(local_20 + 8) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_20);
    if (local_res8[0] != -1) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x48);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0x40);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_28[0],1);
      goto LAB_141068eea;
    }
  }
  cVar1 = TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  local_res8[0] = local_28[0];
  if (cVar1 == '\0') {
    if (*(int *)(local_20 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*local_20;
    }
    uVar2 = FCrc::StrCrc32<wchar_t>(puVar4,0);
    uVar2 = uVar2 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_20 + 0x44) = uVar2;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 8) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         local_28[0];
  }
LAB_141068eea:
  return *param_1 + (longlong)local_res8[0] * 0x48 + 0x10;
}



// FUNCTION 141068f20 FUN_141068f20 body=128 status=ok
// SIG undefined FUN_141068f20(void)

void FUN_141068f20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  
  if (param_1 != param_2) {
    uVar2 = param_2[1];
    uVar3 = *param_1;
    uVar4 = param_1[1];
    uVar5 = param_1[2];
    uVar6 = param_1[3];
    uVar7 = param_1[4];
    uVar8 = param_1[5];
    uVar1 = param_1[10];
    uVar9 = param_1[6];
    uVar10 = param_1[7];
    uVar11 = param_1[8];
    uVar12 = param_1[9];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    uVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar2;
    uVar2 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar2;
    uVar2 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar2;
    uVar2 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar2;
    param_1[10] = param_2[10];
    *param_2 = uVar3;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
    param_2[4] = uVar7;
    param_2[5] = uVar8;
    param_2[6] = uVar9;
    param_2[7] = uVar10;
    param_2[8] = uVar11;
    param_2[9] = uVar12;
    param_2[10] = uVar1;
  }
  return;
}



// FUNCTION 141068fa0 FUN_141068fa0 body=384 status=ok
// SIG undefined FUN_141068fa0(void)

longlong * FUN_141068fa0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  longlong local_28;
  longlong *local_20;
  undefined8 *local_18;
  longlong *local_10;
  
  plVar8 = (longlong *)*param_1;
  plVar3 = plVar8 + (longlong)(int)param_1[1] * 3;
  do {
    if (plVar8 == plVar3) {
      return (longlong *)0x0;
    }
    local_28 = *plVar8;
    if (local_28 != 0) {
      local_20 = (longlong *)plVar8[1];
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_140bbc6f0(*(undefined8 *)*param_2,&local_18,&local_28);
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
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      plVar6 = local_10;
      if (local_18 == (undefined8 *)0x0) {
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_10)(local_10);
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
      else {
        cVar7 = (**(code **)*local_18)(local_18,*(undefined8 *)param_2[1]);
        plVar6 = local_10;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_10)(local_10);
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
        if (cVar7 != '\0') {
          return plVar8;
        }
      }
    }
    plVar8 = plVar8 + 3;
  } while( true );
}



// FUNCTION 141069120 FUN_141069120 body=231 status=ok
// SIG undefined FUN_141069120(void)

longlong * FUN_141069120(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined8 *puVar9;
  bool bVar10;
  longlong *plVar11;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar11 = (longlong *)*param_1;
  bVar10 = false;
  plVar3 = plVar11 + (longlong)(int)param_1[1] * 3;
  do {
    if (plVar11 == plVar3) {
      return (longlong *)0x0;
    }
    if (*plVar11 == 0) {
LAB_14106918b:
      bVar5 = false;
    }
    else {
      bVar10 = true;
      puVar9 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_28)
      ;
      cVar8 = (*(code *)**(undefined8 **)*puVar9)((undefined8 *)*puVar9,*plVar11);
      if (cVar8 == '\0') goto LAB_14106918b;
      bVar5 = true;
    }
    plVar7 = local_20;
    if ((bVar10) && (bVar10 = false, local_20 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_20)(local_20);
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
    if (bVar5) {
      return plVar11;
    }
    plVar11 = plVar11 + 3;
  } while( true );
}



// FUNCTION 141069210 FUN_141069210 body=666 status=ok
// SIG undefined FUN_141069210(void)

longlong FUN_141069210(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_141069376;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_1413592a0();
LAB_141069376:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_1413592a0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_1410693e9;
  }
  lVar7 = 0;
LAB_1410693e9:
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



// FUNCTION 1410694b0 FUN_1410694b0 body=666 status=ok
// SIG undefined FUN_1410694b0(void)

longlong FUN_1410694b0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_141069616;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_141359140();
LAB_141069616:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_141359140();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_141069689;
  }
  lVar7 = 0;
LAB_141069689:
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



// FUNCTION 141069750 FUN_141069750 body=917 status=ok
// SIG undefined FUN_141069750(void)

longlong FUN_141069750(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
LAB_1410697ff:
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
      if (iVar9 < 1) goto LAB_1410697ff;
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
            goto LAB_141069814;
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
LAB_141069814:
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
      if (lVar12 == lVar11) goto LAB_14106999d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_1413699d0();
LAB_14106999d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_1413699d0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_141069a1a;
  }
  lVar12 = 0;
LAB_141069a1a:
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



// FUNCTION 141069af0 FUN_141069af0 body=917 status=ok
// SIG undefined FUN_141069af0(void)

longlong FUN_141069af0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
LAB_141069b9f:
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
      if (iVar9 < 1) goto LAB_141069b9f;
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
            goto LAB_141069bb4;
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
LAB_141069bb4:
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
      if (lVar12 == lVar11) goto LAB_141069d3d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
LAB_141069d3d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_141069dba;
  }
  lVar12 = 0;
LAB_141069dba:
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



// FUNCTION 141069e90 FUN_141069e90 body=917 status=ok
// SIG undefined FUN_141069e90(void)

longlong FUN_141069e90(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
LAB_141069f3f:
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
      if (iVar9 < 1) goto LAB_141069f3f;
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
            goto LAB_141069f54;
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
LAB_141069f54:
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
      if (lVar12 == lVar11) goto LAB_14106a0dd;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_14106a0dd:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14106a15a;
  }
  lVar12 = 0;
LAB_14106a15a:
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



// FUNCTION 14106a230 FUN_14106a230 body=917 status=ok
// SIG undefined FUN_14106a230(void)

longlong FUN_14106a230(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
LAB_14106a2df:
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
      if (iVar9 < 1) goto LAB_14106a2df;
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
            goto LAB_14106a2f4;
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
LAB_14106a2f4:
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
      if (lVar12 == lVar11) goto LAB_14106a47d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_14106a47d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14106a4fa;
  }
  lVar12 = 0;
LAB_14106a4fa:
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



// FUNCTION 14106a5d0 FUN_14106a5d0 body=666 status=ok
// SIG undefined FUN_14106a5d0(void)

longlong FUN_14106a5d0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_14106a736;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_1413a0720();
LAB_14106a736:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_1413a0720();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_14106a7a9;
  }
  lVar7 = 0;
LAB_14106a7a9:
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



// FUNCTION 14106a870 FUN_14106a870 body=666 status=ok
// SIG undefined FUN_14106a870(void)

longlong FUN_14106a870(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_14106a9d6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UGGenericPostProcessAnimInstance::GetPrivateStaticClass();
LAB_14106a9d6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UGGenericPostProcessAnimInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_14106aa49;
  }
  lVar7 = 0;
LAB_14106aa49:
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



// FUNCTION 14106ab10 FUN_14106ab10 body=666 status=ok
// SIG undefined FUN_14106ab10(void)

longlong FUN_14106ab10(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_14106ac76;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_1413a6560();
LAB_14106ac76:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_1413a6560();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_14106ace9;
  }
  lVar7 = 0;
LAB_14106ace9:
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



// FUNCTION 14106adb0 FUN_14106adb0 body=491 status=ok
// SIG undefined FUN_14106adb0(void)

longlong FUN_14106adb0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar10 == lVar8) goto LAB_14106ae0a;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_3 = FUN_142f18d50();
LAB_14106ae0a:
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
    lVar8 = FUN_142f18d50();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14106aec6;
  }
  lVar10 = 0;
LAB_14106aec6:
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



// FUNCTION 14106afa0 FUN_14106afa0 body=491 status=ok
// SIG undefined FUN_14106afa0(void)

longlong FUN_14106afa0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar10 == lVar8) goto LAB_14106affa;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_3 = UGameInstanceGameParameters::GetPrivateStaticClass();
LAB_14106affa:
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
    lVar8 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14106b0b6;
  }
  lVar10 = 0;
LAB_14106b0b6:
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



// FUNCTION 14106b190 FUN_14106b190 body=917 status=ok
// SIG undefined FUN_14106b190(void)

longlong FUN_14106b190(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
LAB_14106b23f:
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
      if (iVar9 < 1) goto LAB_14106b23f;
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
            goto LAB_14106b254;
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
LAB_14106b254:
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
      if (lVar12 == lVar11) goto LAB_14106b3dd;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = UPackageMapClient::GetPrivateStaticClass();
LAB_14106b3dd:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = UPackageMapClient::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14106b45a;
  }
  lVar12 = 0;
LAB_14106b45a:
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



// FUNCTION 14106b530 FUN_14106b530 body=917 status=ok
// SIG undefined FUN_14106b530(void)

longlong FUN_14106b530(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
LAB_14106b5df:
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
      if (iVar9 < 1) goto LAB_14106b5df;
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
            goto LAB_14106b5f4;
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
LAB_14106b5f4:
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
      if (lVar12 == lVar11) goto LAB_14106b77d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_14136a870();
LAB_14106b77d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_14136a870();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14106b7fa;
  }
  lVar12 = 0;
LAB_14106b7fa:
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



// FUNCTION 14106b8d0 FUN_14106b8d0 body=51 status=ok
// SIG undefined FUN_14106b8d0(void)

longlong FUN_14106b8d0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_141368f90();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return lVar2;
}



// FUNCTION 14106b910 FUN_14106b910 body=634 status=ok
// SIG undefined FUN_14106b910(void)

void FUN_14106b910(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar11 = iVar7 * 2 + 1;
    iVar1 = iVar11;
    iVar8 = iVar7;
joined_r0x00014106b956:
    do {
      if (iVar11 < param_2) {
        iVar11 = iVar7 * 2;
        iVar13 = iVar11 + 1;
        if (iVar11 + 2 < param_2) {
          uVar9 = FUN_1410776c0(param_4 + 1,param_1 + (longlong)(iVar11 + 2) * 2,*param_4,param_4[2]
                               );
          uVar10 = FUN_1410776c0(param_4 + 1,param_1 + (longlong)iVar13 * 2,*param_4,param_4[2]);
          if (uVar10 < uVar9) {
            iVar13 = iVar11;
          }
          iVar13 = iVar13 + 1;
        }
        puVar14 = param_1 + (longlong)iVar7 * 2;
        uVar9 = FUN_1410776c0(param_4 + 1,puVar14,*param_4,param_4[2]);
        puVar12 = param_1 + (longlong)iVar13 * 2;
        uVar10 = FUN_1410776c0(param_4 + 1,puVar12,*param_4,param_4[2]);
        if (uVar10 < uVar9) {
          if (puVar14 != puVar12) {
            uVar2 = *(undefined4 *)((longlong)puVar12 + 4);
            uVar3 = *(undefined4 *)(puVar12 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar12 + 0xc);
            uVar5 = *puVar14;
            uVar6 = puVar14[1];
            *(undefined4 *)puVar14 = *(undefined4 *)puVar12;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar2;
            *(undefined4 *)(puVar14 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar4;
            *puVar12 = uVar5;
            puVar12[1] = uVar6;
          }
          iVar11 = iVar13 * 2 + 1;
          iVar7 = iVar13;
          goto joined_r0x00014106b956;
        }
      }
      iVar7 = iVar8 + -1;
      iVar11 = iVar1 + -2;
      iVar1 = iVar11;
      iVar8 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar12 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar12) {
        uVar2 = *(undefined4 *)((longlong)puVar12 + 4);
        uVar3 = *(undefined4 *)(puVar12 + 1);
        uVar4 = *(undefined4 *)((longlong)puVar12 + 0xc);
        uVar5 = *param_1;
        uVar6 = param_1[1];
        *(undefined4 *)param_1 = *(undefined4 *)puVar12;
        *(undefined4 *)((longlong)param_1 + 4) = uVar2;
        *(undefined4 *)(param_1 + 1) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
        *puVar12 = uVar5;
        puVar12[1] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar7 * 2;
          iVar11 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            uVar9 = FUN_1410776c0(param_4 + 1,param_1 + (longlong)(iVar1 + 2) * 2,*param_4,
                                  param_4[2]);
            uVar10 = FUN_1410776c0(param_4 + 1,param_1 + (longlong)iVar11 * 2,*param_4,param_4[2]);
            if (uVar10 < uVar9) {
              iVar11 = iVar1;
            }
            iVar11 = iVar11 + 1;
          }
          puVar15 = param_1 + (longlong)iVar7 * 2;
          uVar9 = FUN_1410776c0(param_4 + 1,puVar15,*param_4,param_4[2]);
          puVar14 = param_1 + (longlong)iVar11 * 2;
          uVar10 = FUN_1410776c0(param_4 + 1,puVar14,*param_4,param_4[2]);
          if (uVar9 <= uVar10) break;
          if (puVar15 != puVar14) {
            uVar2 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar3 = *(undefined4 *)(puVar14 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar5 = *puVar15;
            uVar6 = puVar15[1];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar2;
            *(undefined4 *)(puVar15 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar4;
            *puVar14 = uVar5;
            puVar14[1] = uVar6;
          }
          iVar7 = iVar11;
        } while (iVar11 * 2 + 1 < param_2);
      }
      puVar12 = puVar12 + -2;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14106bb90 FUN_14106bb90 body=848 status=ok
// SIG undefined FUN_14106bb90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14106bb90(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  float fVar15;
  undefined1 auStack_398 [32];
  longlong *local_378;
  int local_370;
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_398;
    lStack_340 = param_2 * 0x10 + -0x10 + param_1;
    fVar15 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
    local_338 = (undefined4)(longlong)(fVar15 + fVar15);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    local_378 = &local_348;
    do {
      puVar11 = (undefined8 *)*local_378;
      puVar9 = (undefined8 *)local_378[1];
      local_358 = local_378[2];
      local_370 = (int)local_358;
      lVar8 = ((longlong)puVar9 - (longlong)puVar11 >> 4) + 1;
      puVar10 = puVar11;
      if ((int)local_358 != 0) {
LAB_14106bc70:
        if (8 < lVar8) {
          puVar11 = puVar10 + (lVar8 / 2) * 2;
          if (puVar11 != puVar10) {
            uVar3 = *(undefined4 *)((longlong)puVar10 + 4);
            uVar4 = *(undefined4 *)(puVar10 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar10 + 0xc);
            uVar1 = *puVar11;
            uVar2 = puVar11[1];
            *(undefined4 *)puVar11 = *(undefined4 *)puVar10;
            *(undefined4 *)((longlong)puVar11 + 4) = uVar3;
            *(undefined4 *)(puVar11 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uVar5;
            *puVar10 = uVar1;
            puVar10[1] = uVar2;
          }
          puVar13 = puVar9 + 2;
          puVar11 = puVar10;
LAB_14106bcb0:
          puVar12 = puVar11;
          puVar11 = puVar12 + 2;
          if (puVar11 <= puVar9) goto code_r0x00014106bcb9;
          goto LAB_14106bce5;
        }
        for (; puVar13 = puVar10, puVar11 = puVar10, puVar10 < puVar9; puVar9 = puVar9 + -2) {
          while (puVar11 = puVar11 + 2, puVar11 <= puVar9) {
            uVar6 = FUN_1410776c0(param_4 + 1,puVar13,*param_4,param_4[2]);
            uVar7 = FUN_1410776c0(param_4 + 1,puVar11,*param_4,param_4[2]);
            if (uVar7 < uVar6) {
              puVar13 = puVar11;
            }
          }
          if (puVar13 != puVar9) {
            uVar3 = *(undefined4 *)((longlong)puVar9 + 4);
            uVar4 = *(undefined4 *)(puVar9 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar9 + 0xc);
            uVar1 = *puVar13;
            uVar2 = puVar13[1];
            *(undefined4 *)puVar13 = *(undefined4 *)puVar9;
            *(undefined4 *)((longlong)puVar13 + 4) = uVar3;
            *(undefined4 *)(puVar13 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar13 + 0xc) = uVar5;
            *puVar9 = uVar1;
            puVar9[1] = uVar2;
          }
        }
        goto LAB_14106bdfc;
      }
LAB_14106bde8:
      FUN_14106b910(puVar11,lVar8,param_3,param_4);
LAB_14106bdfc:
      local_378 = local_378 + -3;
    } while (&local_348 <= local_378);
  }
  return;
code_r0x00014106bcb9:
  uVar6 = FUN_1410776c0(param_4 + 1,puVar10,*param_4,param_4[2]);
  uVar7 = FUN_1410776c0(param_4 + 1,puVar11,*param_4,param_4[2]);
  if (uVar6 <= uVar7) goto LAB_14106bcb0;
LAB_14106bce5:
  do {
    puVar14 = puVar13;
    puVar13 = puVar14 + -2;
    if (puVar13 <= puVar10) break;
    uVar6 = FUN_1410776c0(param_4 + 1,puVar13,*param_4,param_4[2]);
    uVar7 = FUN_1410776c0(param_4 + 1,puVar10,*param_4,param_4[2]);
  } while (uVar6 <= uVar7);
  if (puVar11 <= puVar13) {
    if (puVar11 != puVar13) {
      uVar3 = *(undefined4 *)((longlong)puVar14 + -0xc);
      uVar4 = *(undefined4 *)(puVar14 + -1);
      uVar5 = *(undefined4 *)((longlong)puVar14 + -4);
      uVar1 = *puVar11;
      uVar2 = puVar12[3];
      *(undefined4 *)puVar11 = *(undefined4 *)puVar13;
      *(undefined4 *)((longlong)puVar12 + 0x14) = uVar3;
      *(undefined4 *)(puVar12 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar5;
      *puVar13 = uVar1;
      puVar14[-1] = uVar2;
    }
    goto LAB_14106bcb0;
  }
  if (puVar10 != puVar13) {
    uVar3 = *(undefined4 *)((longlong)puVar14 + -0xc);
    uVar4 = *(undefined4 *)(puVar14 + -1);
    uVar5 = *(undefined4 *)((longlong)puVar14 + -4);
    uVar1 = *puVar10;
    uVar2 = puVar10[1];
    *(undefined4 *)puVar10 = *(undefined4 *)puVar13;
    *(undefined4 *)((longlong)puVar10 + 4) = uVar3;
    *(undefined4 *)(puVar10 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar10 + 0xc) = uVar5;
    *puVar13 = uVar1;
    puVar14[-1] = uVar2;
  }
  local_370 = local_370 + -1;
  if ((longlong)((longlong)puVar13 + (-0x10 - (longlong)puVar10) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar9 - (longlong)puVar11 & 0xfffffffffffffff0U)) {
    if (puVar11 < puVar9) {
      *local_378 = (longlong)puVar11;
      local_378[1] = (longlong)puVar9;
      *(int *)(local_378 + 2) = local_370;
      local_378 = local_378 + 3;
    }
    if (puVar13 <= puVar10 + 2) goto LAB_14106bdfc;
    puVar9 = puVar14 + -4;
    puVar11 = puVar10;
  }
  else {
    if (puVar10 + 2 < puVar13) {
      *local_378 = (longlong)puVar10;
      local_378[1] = (longlong)(puVar14 + -4);
      *(int *)(local_378 + 2) = local_370;
      local_378 = local_378 + 3;
    }
    if (puVar9 <= puVar11) goto LAB_14106bdfc;
  }
  lVar8 = ((longlong)puVar9 - (longlong)puVar11 >> 4) + 1;
  puVar10 = puVar11;
  if (local_370 == 0) goto LAB_14106bde8;
  goto LAB_14106bc70;
}



// FUNCTION 14106bee0 FUN_14106bee0 body=69 status=ok
// SIG undefined FUN_14106bee0(void)

ulonglong FUN_14106bee0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UMovieScene3DTransformSection::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 14106bf30 FUN_14106bf30 body=89 status=ok
// SIG undefined FUN_14106bf30(void)

void FUN_14106bf30(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_142f35520();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 14106bf90 FUN_14106bf90 body=879 status=ok
// SIG undefined FUN_14106bf90(void)

bool FUN_14106bf90(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
LAB_14106c04f:
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
      if (iVar8 < 1) goto LAB_14106c04f;
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
            goto LAB_14106c064;
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
LAB_14106c064:
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
  if (local_68 == 0) goto LAB_14106c29f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_14106c1ed;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141369040();
LAB_14106c1ed:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_14106c266:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_141369040();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_14106c266;
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
LAB_14106c29f:
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



// FUNCTION 14106c300 FUN_14106c300 body=617 status=ok
// SIG undefined FUN_14106c300(void)

bool FUN_14106c300(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_14106c514;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_14106c457;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413a03b0();
LAB_14106c457:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_14106c4cb:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_1413a03b0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14106c4cb;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_14106c514:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 14106c570 FUN_14106c570 body=617 status=ok
// SIG undefined FUN_14106c570(void)

bool FUN_14106c570(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_14106c784;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_14106c6c7;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413a0460();
LAB_14106c6c7:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_14106c73b:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_1413a0460();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14106c73b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_14106c784:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 14106c7e0 FUN_14106c7e0 body=617 status=ok
// SIG undefined FUN_14106c7e0(void)

bool FUN_14106c7e0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_14106c9f4;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_14106c937;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413a0550();
LAB_14106c937:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_14106c9ab:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_1413a0550();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14106c9ab;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_14106c9f4:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 14106ca50 FUN_14106ca50 body=1034 status=ok
// SIG undefined FUN_14106ca50(void)

int FUN_14106ca50(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  byte bVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  uint local_res20;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  iVar3 = (int)param_1[1];
  lVar20 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar14 = 0;
  iVar17 = 0;
  cVar9 = FUN_141070810(param_2,*param_1);
  bVar22 = cVar9 == '\0';
  uVar21 = uVar14;
  do {
    uVar21 = uVar21 + 1;
    iVar13 = (int)uVar14;
    local_res20 = iVar13 + 1;
    uVar14 = (ulonglong)local_res20;
    if ((longlong)uVar21 < lVar20) {
      lVar19 = uVar21 * 0x10;
      do {
        lVar12 = *param_1;
        plVar18 = *(longlong **)(*(longlong *)(lVar12 + lVar19) + 0x10);
        if ((plVar18 != (longlong *)0x0) &&
           (cVar9 = (**(code **)(*plVar18 + 0x20))(), cVar9 != '\0')) {
          local_68 = *(undefined8 *)(*(longlong *)(lVar12 + lVar19) + 0x10);
          local_60 = *(longlong **)(*(longlong *)(lVar12 + lVar19) + 0x18);
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          cVar9 = FUN_140bca1f0(*(undefined8 *)*param_2,&local_68,1);
          plVar18 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_60 + 1;
            lVar8 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar18 + 8))(plVar18,1);
              }
            }
          }
          if (cVar9 == '\0') {
            puVar4 = *(undefined8 **)param_2[1];
            lVar8 = ((longlong *)param_2[1])[1];
            for (puVar16 = puVar4; puVar16 != puVar4 + (longlong)(int)lVar8 * 2;
                puVar16 = puVar16 + 2) {
              lVar5 = *(longlong *)(lVar12 + lVar19);
              puVar11 = (undefined8 *)
                        (**(code **)(*(longlong *)*puVar16 + 8))((longlong *)*puVar16,local_58);
              if (((*(longlong **)(lVar5 + 0x10) == (longlong *)0x0) ||
                  (cVar9 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x20))(), cVar9 == '\0')) ||
                 (cVar9 = (**(code **)(*(longlong *)*puVar11 + 0x20))(), cVar9 == '\0')) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if ((((*(longlong **)(lVar5 + 0x10) == (longlong *)0x0) ||
                   (cVar9 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x20))(), cVar9 == '\0'))
                  && (cVar9 = (**(code **)(*(longlong *)*puVar11 + 0x20))(), cVar9 == '\0')) ||
                 ((bVar7 && (cVar9 = (**(code **)**(undefined8 **)(lVar5 + 0x10))
                                               (*(undefined8 **)(lVar5 + 0x10),*puVar11),
                            cVar9 != '\0')))) {
                bVar7 = true;
              }
              else {
                bVar7 = false;
              }
              plVar18 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar6 = local_50 + 1;
                lVar5 = *plVar6;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar18 + 0xc);
                  iVar15 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar18 + 8))(plVar18,1);
                  }
                }
              }
              if (bVar7) {
                iVar15 = (int)((longlong)puVar16 - (longlong)puVar4 >> 4);
                if ((-1 < iVar15) && (iVar15 < (int)((longlong *)param_2[1])[1])) {
                  lVar12 = (**(code **)(**(longlong **)
                                          (*(longlong *)param_2[1] + (longlong)iVar15 * 0x10) + 0x38
                                       ))();
                  uVar14 = (ulonglong)local_res20;
                  bVar10 = ~(byte)(*(uint *)(lVar12 + 0x10) >> 2) & 1;
                  goto LAB_14106ccbe;
                }
                break;
              }
            }
          }
          uVar14 = (ulonglong)local_res20;
        }
        bVar10 = 1;
LAB_14106ccbe:
        if (bVar22 != (bool)(bVar10 ^ 1)) break;
        local_res20 = (int)uVar14 + 1;
        uVar14 = (ulonglong)local_res20;
        uVar21 = uVar21 + 1;
        lVar19 = lVar19 + 0x10;
      } while ((longlong)uVar21 < lVar20);
    }
    iVar15 = (int)uVar14 - iVar13;
    if (bVar22 == false) {
      if (iVar15 != 0) {
        plVar18 = (longlong *)((longlong)iVar13 * 0x10 + 8 + *param_1);
        do {
          plVar6 = (longlong *)*plVar18;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar6 + 1;
            lVar19 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar19 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          plVar18 = plVar18 + 2;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        uVar14 = (ulonglong)local_res20;
      }
    }
    else {
      if (iVar17 != iVar13) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar17 * 0x10 + *param_1),
                   (void *)((longlong)iVar13 * 0x10 + *param_1),(longlong)iVar15 << 4);
      }
      iVar17 = iVar17 + iVar15;
    }
    bVar22 = (bool)(bVar22 ^ 1);
    if (lVar20 <= (longlong)uVar21) {
      *(int *)(param_1 + 1) = iVar17;
      return iVar3 - iVar17;
    }
  } while( true );
}



// FUNCTION 14106ce60 FUN_14106ce60 body=761 status=ok
// SIG undefined FUN_14106ce60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14106ce60(longlong param_1,int param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_198 [32];
  uint local_178;
  longlong local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong local_b0;
  
  if (param_4 != 0) {
    local_b0 = DAT_1468387a8 ^ (ulonglong)auStack_198;
    param_3 = param_3 - param_2;
    iVar12 = param_3;
    iVar8 = param_4;
    do {
      iVar7 = iVar8;
      local_170 = (longlong)iVar7;
      iVar8 = iVar12 % iVar7;
      iVar12 = iVar7;
    } while (iVar8 != 0);
    uVar9 = 0;
    local_178 = (uint)((longlong)param_3 / (longlong)iVar7);
    uVar11 = (longlong)param_3 / (longlong)iVar7 & 0xffffffff;
    if (0 < iVar7) {
      lVar10 = param_1 + 0x20 + (longlong)param_2 * 0x58;
      do {
        local_168 = *(undefined8 *)(lVar10 + -0x20);
        FText::FText(&uStack_160,lVar10 + -0x18);
        FText::FText(&local_148,lVar10);
        uStack_130 = *(undefined8 *)(lVar10 + 0x18);
        iVar12 = (int)uVar9;
        local_128 = *(undefined8 *)(lVar10 + 0x20);
        uStack_120 = *(undefined8 *)(lVar10 + 0x28);
        local_118 = CONCAT71(local_118._1_7_,*(undefined1 *)(lVar10 + 0x30));
        if (0 < (int)uVar11) {
          local_128._4_4_ = (undefined4)((ulonglong)local_128 >> 0x20);
          uStack_120._4_4_ = (undefined4)((ulonglong)uStack_120 >> 0x20);
          uStack_130._4_4_ = (undefined4)((ulonglong)uStack_130 >> 0x20);
          uVar13 = local_118;
          uVar18 = local_138;
          uVar19 = uStack_134;
          uVar22 = local_148;
          uVar23 = uStack_144;
          uVar24 = uStack_140;
          uVar25 = uStack_13c;
          uVar26 = local_158;
          uVar27 = uStack_154;
          uVar28 = uStack_150;
          uVar29 = uStack_14c;
          uVar32 = uStack_160;
          uVar33 = uStack_15c;
          do {
            uVar3 = (longlong)(param_4 + (int)uVar9) % (longlong)param_3;
            uVar9 = uVar3 & 0xffffffff;
            puVar6 = (undefined8 *)((longlong)(param_2 + (int)uVar3) * 0x58 + param_1);
            local_118 = uVar13;
            uVar14 = (undefined4)local_128;
            uVar15 = local_128._4_4_;
            uVar16 = (undefined4)uStack_120;
            uVar17 = uStack_120._4_4_;
            local_138 = uVar18;
            uStack_134 = uVar19;
            uVar20 = (undefined4)uStack_130;
            uVar21 = uStack_130._4_4_;
            local_148 = uVar22;
            uStack_144 = uVar23;
            uStack_140 = uVar24;
            uStack_13c = uVar25;
            local_158 = uVar26;
            uStack_154 = uVar27;
            uStack_150 = uVar28;
            uStack_14c = uVar29;
            uVar30 = (undefined4)local_168;
            uVar31 = local_168._4_4_;
            uStack_160 = uVar32;
            uStack_15c = uVar33;
            if (puVar6 != &local_168) {
              uVar30 = *(undefined4 *)puVar6;
              uVar31 = *(undefined4 *)((longlong)puVar6 + 4);
              uStack_160 = *(undefined4 *)(puVar6 + 1);
              uStack_15c = *(undefined4 *)((longlong)puVar6 + 0xc);
              local_158 = *(undefined4 *)(puVar6 + 2);
              uStack_154 = *(undefined4 *)((longlong)puVar6 + 0x14);
              uStack_150 = *(undefined4 *)(puVar6 + 3);
              uStack_14c = *(undefined4 *)((longlong)puVar6 + 0x1c);
              local_148 = *(undefined4 *)(puVar6 + 4);
              uStack_144 = *(undefined4 *)((longlong)puVar6 + 0x24);
              uStack_140 = *(undefined4 *)(puVar6 + 5);
              uStack_13c = *(undefined4 *)((longlong)puVar6 + 0x2c);
              local_138 = *(undefined4 *)(puVar6 + 6);
              uStack_134 = *(undefined4 *)((longlong)puVar6 + 0x34);
              uVar20 = *(undefined4 *)(puVar6 + 7);
              uVar21 = *(undefined4 *)((longlong)puVar6 + 0x3c);
              uVar14 = *(undefined4 *)(puVar6 + 8);
              uVar15 = *(undefined4 *)((longlong)puVar6 + 0x44);
              uVar16 = *(undefined4 *)(puVar6 + 9);
              uVar17 = *(undefined4 *)((longlong)puVar6 + 0x4c);
              local_118 = puVar6[10];
              *(undefined4 *)puVar6 = (undefined4)local_168;
              *(undefined4 *)((longlong)puVar6 + 4) = local_168._4_4_;
              *(undefined4 *)(puVar6 + 1) = uVar32;
              *(undefined4 *)((longlong)puVar6 + 0xc) = uVar33;
              *(undefined4 *)(puVar6 + 2) = uVar26;
              *(undefined4 *)((longlong)puVar6 + 0x14) = uVar27;
              *(undefined4 *)(puVar6 + 3) = uVar28;
              *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar29;
              *(undefined4 *)(puVar6 + 4) = uVar22;
              *(undefined4 *)((longlong)puVar6 + 0x24) = uVar23;
              *(undefined4 *)(puVar6 + 5) = uVar24;
              *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar25;
              *(undefined4 *)(puVar6 + 6) = uVar18;
              *(undefined4 *)((longlong)puVar6 + 0x34) = uVar19;
              *(undefined4 *)(puVar6 + 7) = (undefined4)uStack_130;
              *(undefined4 *)((longlong)puVar6 + 0x3c) = uStack_130._4_4_;
              *(undefined4 *)(puVar6 + 8) = (undefined4)local_128;
              *(undefined4 *)((longlong)puVar6 + 0x44) = local_128._4_4_;
              *(undefined4 *)(puVar6 + 9) = (undefined4)uStack_120;
              *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_120._4_4_;
              puVar6[10] = uVar13;
              local_108 = uVar30;
              uStack_104 = uVar31;
              uStack_100 = uStack_160;
              uStack_fc = uStack_15c;
              local_f8 = local_158;
              uStack_f4 = uStack_154;
              uStack_f0 = uStack_150;
              uStack_ec = uStack_14c;
              local_e8 = local_148;
              uStack_e4 = uStack_144;
              uStack_e0 = uStack_140;
              uStack_dc = uStack_13c;
              local_d8 = local_138;
              uStack_d4 = uStack_134;
              uStack_d0 = uVar20;
              uStack_cc = uVar21;
              local_c8 = uVar14;
              uStack_c4 = uVar15;
              uStack_c0 = uVar16;
              uStack_bc = uVar17;
              local_b8 = local_118;
            }
            uVar11 = uVar11 - 1;
            uVar13 = local_118;
            local_128._0_4_ = uVar14;
            local_128._4_4_ = uVar15;
            uStack_120._0_4_ = uVar16;
            uStack_120._4_4_ = uVar17;
            uVar18 = local_138;
            uVar19 = uStack_134;
            uStack_130._0_4_ = uVar20;
            uStack_130._4_4_ = uVar21;
            uVar22 = local_148;
            uVar23 = uStack_144;
            uVar24 = uStack_140;
            uVar25 = uStack_13c;
            uVar26 = local_158;
            uVar27 = uStack_154;
            uVar28 = uStack_150;
            uVar29 = uStack_14c;
            local_168._0_4_ = uVar30;
            local_168._4_4_ = uVar31;
            uVar32 = uStack_160;
            uVar33 = uStack_15c;
          } while (uVar11 != 0);
          local_128 = CONCAT44(uVar15,uVar14);
          uStack_120 = CONCAT44(uVar17,uVar16);
          uStack_130 = CONCAT44(uVar21,uVar20);
          local_168 = CONCAT44(uVar31,uVar30);
        }
        plVar4 = (longlong *)CONCAT44(uStack_13c,uStack_140);
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
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar4 = (longlong *)CONCAT44(uStack_154,local_158);
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
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        uVar11 = (ulonglong)local_178;
        uVar9 = (ulonglong)(iVar12 + 1);
        lVar10 = lVar10 + 0x58;
        local_170 = local_170 + -1;
      } while (local_170 != 0);
    }
  }
  return;
}



// FUNCTION 14106d160 FUN_14106d160 body=629 status=ok
// SIG undefined FUN_14106d160(void)

void FUN_14106d160(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int local_78;
  int local_64;
  int local_60;
  int local_5c;
  
  iVar5 = 0;
  lVar7 = param_1;
  if (0 < param_2) {
    do {
      if ((iVar5 + 1 < param_2) &&
         (cVar2 = FUN_141073e00(*param_3,lVar7 + 0x58,lVar7), cVar2 != '\0')) {
        FUN_141068f20(lVar7);
      }
      iVar5 = iVar5 + 2;
      lVar7 = lVar7 + 0xb0;
    } while (iVar5 < param_2);
  }
  local_5c = 2;
  if (2 < param_2) {
    do {
      local_64 = 0;
      iVar5 = local_5c * 2;
      local_60 = param_2;
      do {
        iVar3 = local_60;
        if (iVar5 <= local_60) {
          iVar3 = iVar5;
        }
        iVar8 = 0;
        lVar7 = (longlong)local_64 * 0x58 + param_1;
        local_78 = local_5c;
        if (0 < local_5c) {
          do {
            if (iVar3 <= local_78) break;
            uVar1 = *param_3;
            lVar4 = 0;
            if (local_78 - iVar8 != 0) {
              uVar6 = (longlong)(local_78 - iVar8);
              do {
                uVar9 = uVar6 >> 1;
                cVar2 = FUN_141073e00(uVar1,(longlong)local_78 * 0x58 + lVar7,
                                      (uVar9 + lVar4 + (longlong)iVar8) * 0x58 + lVar7);
                if (cVar2 == '\0') {
                  lVar4 = (ulonglong)((uint)uVar6 & 1) + uVar9 + lVar4;
                }
                uVar6 = uVar9;
              } while (uVar9 != 0);
            }
            iVar8 = iVar8 + (int)lVar4;
            if (local_78 <= iVar8) break;
            uVar1 = *param_3;
            uVar6 = 0;
            if (iVar3 - local_78 != 0) {
              uVar9 = (longlong)(iVar3 - local_78);
              do {
                uVar10 = uVar9 >> 1;
                cVar2 = FUN_141073e00(uVar1,(uVar10 + uVar6 + (longlong)local_78) * 0x58 + lVar7,
                                      (longlong)iVar8 * 0x58 + lVar7);
                if (cVar2 != '\0') {
                  uVar6 = (ulonglong)((uint)uVar9 & 1) + uVar10 + uVar6;
                }
                uVar9 = uVar10;
              } while (uVar10 != 0);
            }
            local_78 = local_78 + (int)uVar6;
            FUN_14106ce60(lVar7,iVar8,local_78,uVar6 & 0xffffffff);
            iVar8 = iVar8 + 1 + (int)uVar6;
          } while (iVar8 < local_78);
        }
        local_64 = local_64 + local_5c * 2;
        local_60 = local_60 + local_5c * -2;
      } while (local_64 < param_2);
      local_5c = iVar5;
    } while (iVar5 < param_2);
  }
  return;
}



// FUNCTION 14106d3e0 FUN_14106d3e0 body=544 status=ok
// SIG undefined FUN_14106d3e0(void)

undefined8 FUN_14106d3e0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  float fVar7;
  float extraout_XMM0_Da;
  longlong local_78 [5];
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if ((param_1 != 0) &&
     (cVar6 = UCharacterMovementComponent::IsAsyncCallbackRegistered(), cVar6 != '\0')) {
    fVar7 = (float)FUN_1430d5c20(param_1);
    FUN_1430d6f10(param_1);
    if ((param_2 != 0) && (param_3 != (longlong *)0x0)) {
      if (*(char *)(param_1 + 0x1c0) != '\0') {
        local_78[0] = 0;
        local_78[1] = 0xe;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78);
        FGenericPlatformString::Memcpy(local_78[0],L"infiniteBoost",0x1c);
        FUN_142088cf0(param_3,local_78);
        if (local_78[0] != 0) {
          FMemory::Free();
        }
        FUN_142f0ead0(param_2,0x3f800000);
        return 1;
      }
      local_78[2] = 0;
      local_78[3] = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 2);
      FGenericPlatformString::Memcpy(local_78[2],L"singleBoost",0x18);
      FUN_142088cf0(param_3,local_78 + 2);
      if (local_78[2] != 0) {
        FMemory::Free();
      }
      FUN_142f0ead0(param_2,ABS(fVar7 / extraout_XMM0_Da));
      local_78[4] = 0;
      plStack_50 = (longlong *)0x0;
      FText::AsNumber(local_48,(int)ROUND(fVar7 * 2.0 - 0.5) >> 1,0,local_78 + 4);
      plVar3 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_50)(plStack_50);
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
      (**(code **)(*param_3 + 0x2b0))(param_3,local_48,1,0);
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
    return 1;
  }
  return 0;
}



// FUNCTION 14106d600 TFunction<void___cdecl(void)> body=185 status=ok
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
      goto LAB_14106d695;
    }
  }
  pcVar1 = FUN_14107d2e0;
LAB_14106d695:
  *param_1 = pcVar1;
  *param_2 = FUN_14107d2e0;
  return param_1;
}



// FUNCTION 14106d6c0 FUN_14106d6c0 body=212 status=ok
// SIG undefined FUN_14106d6c0(void)

undefined8 * FUN_14106d6c0(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FString::FString(param_1 + 1);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 6);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_14468ebf0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_3);
  }
  param_1[4] = FUN_14107db70;
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



// FUNCTION 14106d7a0 FUN_14106d7a0 body=73 status=ok
// SIG undefined FUN_14106d7a0(void)

undefined8 * FUN_14106d7a0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[4] = AK::MemoryMgr::StartProfileThreadUsage;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xe] = FUN_1407c3030;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return param_1;
}



// FUNCTION 14106d7f0 TFunction<void___cdecl(void)> body=112 status=ok
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
  *param_1 = FUN_14107d2e0;
  return param_1;
}



// FUNCTION 14106d860 FUN_14106d860 body=156 status=ok
// SIG undefined FUN_14106d860(void)

undefined8 * FUN_14106d860(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_140e9a1b0(param_1 + 9);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined1 *)((longlong)param_1 + 0x192) = 0;
  return param_1;
}



// FUNCTION 14106d900 FUN_14106d900 body=598 status=ok
// SIG undefined FUN_14106d900(void)

undefined8 * FUN_14106d900(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_14106e9c0(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_14468e0c0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x2e] = &PTR_LAB_14468e368;
  FUN_140e9a2b0(param_1 + 0x31);
  *(undefined4 *)(param_1 + 0x43) = 0x40e00000;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  param_1[0x48] = 0;
  *(undefined1 *)((longlong)param_1 + 0x249) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 2;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x76,0);
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ea) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x438dcccd;
  *(undefined4 *)(param_1 + 0x3e) = 0x420d3333;
  param_1[0x32] = 0;
  *(undefined1 *)((longlong)param_1 + 0x189) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b2) = 1;
  return param_1;
}



// FUNCTION 14106db60 FUN_14106db60 body=3674 status=ok
// SIG undefined FUN_14106db60(void)

undefined8 * FUN_14106db60(undefined8 *param_1)

{
  undefined2 local_res8;
  undefined1 local_resa;
  
  FUN_140e9a810();
  *param_1 = &PTR__scalar_deleting_destructor__14468d6e8;
  param_1[0x9b] = &PTR_LAB_14468dc50;
  FUN_140e9a1b0(param_1 + 0xd3);
  *(undefined4 *)(param_1 + 0xf6) = 6;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 0x43520000;
  param_1[0xf7] = 0x43078000;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c4) = 0x44898000;
  *(undefined4 *)(param_1 + 0xf9) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x7cc) = 0x442f0000;
  *(undefined4 *)(param_1 + 0xfa) = 0x42c80000;
  FName::FName(param_1 + 0xfb,"Default",1);
  FName::FName(param_1 + 0xfc,&DAT_14468c9d0,1);
  FName::FName(param_1 + 0xfd,"Compare_Inventory",1);
  FName::FName(param_1 + 0xfe,"Compare_Machine",1);
  FName::FName(param_1 + 0xff,"VendingMachine_Buy",1);
  FName::FName(param_1 + 0x100,"VendingMachine_Sell",1);
  FName::FName(param_1 + 0x101,"VendingMachine_Compare_Inventory",1);
  FName::FName(param_1 + 0x102,"VendingMachine_Compare_Machine",1);
  FName::FName(param_1 + 0x103,"rightItemCardLoader",1);
  *(undefined4 *)(param_1 + 0x104) = 0x3f4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x824) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x105) = 0x3f4ccccd;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x109) = 0x41200000;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0x41200000;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  *(undefined1 *)(param_1 + 0x110) = 1;
  *(undefined4 *)((longlong)param_1 + 0x884) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x111) = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  *(undefined4 *)(param_1 + 0x115) = 0x40a00000;
  *(undefined2 *)(param_1 + 0x116) = 0x200;
  *(undefined1 *)((longlong)param_1 + 0x8b2) = 1;
  param_1[0x117] = 0;
  *(undefined4 *)(param_1 + 0x118) = 3;
  local_res8 = 0x200;
  local_resa = 1;
  TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x117,3,0);
  _guard_xfg_dispatch_icall_nop((void *)param_1[0x117],&local_res8,3);
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  FName::FName(param_1 + 0x11b,&DAT_14468ca8c,1);
  FName::FName(param_1 + 0x11c,&DAT_14468ca94,1);
  FName::FName(param_1 + 0x11d,&DAT_14468ca9c,1);
  FName::FName(param_1 + 0x11e,&DAT_14468caa4,1);
  FName::FName(param_1 + 0x11f,&DAT_14468caac,1);
  FName::FName(param_1 + 0x120,&DAT_14468cab4,1);
  FName::FName(param_1 + 0x121,&DAT_14468cabc,1);
  FName::FName(param_1 + 0x122,&DAT_14468cac4,1);
  FName::FName(param_1 + 0x123,&DAT_14468cacc,1);
  FName::FName(param_1 + 0x124,&DAT_14468caf8,1);
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  *(undefined1 *)(param_1 + 0x127) = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  *(undefined4 *)(param_1 + 0x12a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x954) = 0x43a78000;
  param_1[299] = 0x40400000;
  *(undefined4 *)(param_1 + 300) = 0xc;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  *(undefined4 *)(param_1 + 0x12d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x96c) = 0;
  param_1[0x12f] = 0;
  *(undefined4 *)(param_1 + 0x131) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x98c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x130,0);
  }
  if ((undefined2 *)param_1[0x130] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x130] = 0;
  }
  *(undefined4 *)(param_1 + 0x12e) = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  *(undefined4 *)(param_1 + 0x132) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x994) = 0;
  param_1[0x134] = 0;
  *(undefined4 *)(param_1 + 0x136) = 0;
  if ((*(int *)((longlong)param_1 + 0x9b4) < 0) && (*(int *)((longlong)param_1 + 0x9b4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x135,0);
  }
  if ((undefined2 *)param_1[0x135] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x135] = 0;
  }
  *(undefined4 *)(param_1 + 0x133) = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  *(undefined4 *)(param_1 + 0x139) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9cc) = 0;
  param_1[0x13a] = 0;
  *(undefined2 *)(param_1 + 0x13b) = 0x100;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  *(undefined4 *)(param_1 + 0x13f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x140) = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  *(undefined4 *)(param_1 + 0x14a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa54) = 0;
  param_1[0x14c] = 0;
  *(undefined4 *)(param_1 + 0x14d) = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb04) = 0;
  *(undefined4 *)(param_1 + 0x161) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb0c) = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  *(undefined1 *)(param_1 + 0x164) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb24) = 0xffffffff;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  *(undefined4 *)(param_1 + 0x167) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb3c) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb44) = 1;
  *(undefined1 *)(param_1 + 0x169) = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x174] = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  param_1[0x175] = 0;
  *(undefined4 *)(param_1 + 0x173) = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  FUN_14106d860(param_1 + 0x17b);
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  param_1[0x1b7] = 0;
  *(undefined4 *)(param_1 + 0x1b3) = 0;
  param_1[0x1b8] = 0;
  *(undefined4 *)(param_1 + 0x1b6) = 0;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1be] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c1] = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  param_1[0x1c3] = 0x3e800000;
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1c4,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (param_1[0x1c4],0x15,"vendingMachinePlayer",0x15,0x3f);
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1c6,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (param_1[0x1c6],0x19,"marcusToolTip.marcusHead",0x19,0x3f);
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1c8,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1c8],0xe,"marcusToolTip",0xe,0x3f);
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1ca,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (param_1[0x1ca],0x20,"marcusToolTip.itemOfTheDayShelf",0x20,0x3f);
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1cc,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1cc],0x13,"vendingMachineList",0x13,0x3f);
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1ce,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1ce],10,"BuyButton",10,0x3f);
  param_1[0x1d0] = 0;
  param_1[0x1d1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1d0,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1d0],0xe,"BuyBackButton",0xe,0x3f);
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1d2,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1d2],0x10,"InventoryButton",0x10,0x3f);
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1d4,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1d4],8,"textTop",8,0x3f);
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0x29;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1d6,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (param_1[0x1d6],0x29,"marcusToolTip.itemOfTheDayShelf.iodTimer",0x29,0x3f);
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0x31;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1d8,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (param_1[0x1d8],0x31,"marcusToolTip.itemOfTheDayShelf.itemOfTheDayText",0x31,0x3f);
  param_1[0x1da] = 0;
  param_1[0x1db] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1da,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1da],0xb,"buttonsTop",0xb,0x3f);
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1dc,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1dc],10,"buyButton",10,0x3f);
  param_1[0x1de] = 0;
  param_1[0x1df] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1de,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1de],0xe,"buybackButton",0xe,0x3f);
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1e0,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1e0],0xb,"sellButton",0xb,0x3f);
  param_1[0x1e2] = 0;
  param_1[0x1e3] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1e2,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1e2],0x11,"navMenuLeftGlyph",0x11,0x3f);
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1e4,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1e4],0x12,"navMenuRightGlyph",0x12,0x3f);
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1e6,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1e6],8,"tooltip",8,0x3f);
  param_1[0x1e8] = 0;
  param_1[0x1e9] = 0x37;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1e8,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (param_1[0x1e8],0x37,"veningMachineBackpack.backpack.backpackHeader.sortText",0x37,0x3f)
  ;
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0x39;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1ea,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (param_1[0x1ea],0x39,"veningMachineBackpack.backpack.backpackHeader.headerText",0x39,
             0x3f);
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1ec,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1ec],9,"backpack",9,0x3f);
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0x47;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1ee,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (param_1[0x1ee],0x47,
             "veningMachineBackpack.backpack.backpackHeader.navMenuLeftGlyphBackpack",0x47,0x3f);
  param_1[0x1f0] = 0;
  param_1[0x1f1] = 0x48;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1f0,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (param_1[0x1f0],0x48,
             "veningMachineBackpack.backpack.backpackHeader.navMenuRightGlyphBackpack",0x48,0x3f);
  param_1[0x1f2] = 0;
  param_1[499] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1f2,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1f2],0xe,"marcusToolTip",0xe,0x3f);
  param_1[500] = 0;
  param_1[0x1f5] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 500,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[500],0x11,"tooltipContainer",0x11,0x3f);
  param_1[0x1f6] = 0;
  param_1[0x1f7] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1f6,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0x1f6],0xf,"TempWeaponSlot",0xf,0x3f);
  FText::FText(param_1 + 0x1f8);
  FText::FText(param_1 + 0x1fb);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x1fe,L"FAVORITE",L"GFxVendingMachineMenu",L"CantSellFavoriteText");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x201,L"STORY ITEM",L"GFxVendingMachineMenu",L"CantSellItemGenericText");
  FText::FText(param_1 + 0x204);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x207,L"Cancel",L"GFxVendingMachineMenu",L"CancelText");
  FText::FText(param_1 + 0x20a);
  FText::FText(param_1 + 0x20d);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x210,L"Buy Back",L"GFxVendingMachineMenu",L"BuyBackText");
  FText::FText(param_1 + 0x213);
  FText::FText(param_1 + 0x216);
  FText::FText(param_1 + 0x219);
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined1 *)((longlong)param_1 + 0x571) = 1;
  return param_1;
}



// FUNCTION 14106e9c0 FUN_14106e9c0 body=154 status=ok
// SIG undefined FUN_14106e9c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14106e9c0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14468d2f8;
  uVar1 = uRam00000001468747fc;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(uint *)((longlong)param_1 + 0x4c) = uVar1;
  uVar1 = uRam00000001468747f4 & uRam0000000146874804;
  uVar2 = uRam00000001468747f8 & uRam0000000146874808;
  uVar3 = uRam00000001468747fc & uRam000000014687480c;
  *(uint *)(param_1 + 0xc) = _DAT_1468747f0 & _DAT_146874800;
  *(uint *)((longlong)param_1 + 100) = uVar1;
  *(uint *)(param_1 + 0xd) = uVar2;
  *(uint *)((longlong)param_1 + 0x6c) = uVar3;
  uVar1 = uRam00000001468747fc;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(uint *)((longlong)param_1 + 0x7c) = uVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = uRam00000001468747f4 & uRam0000000146874804;
  uVar2 = uRam00000001468747f8 & uRam0000000146874808;
  uVar3 = uRam00000001468747fc & uRam000000014687480c;
  *(uint *)(param_1 + 0x12) = _DAT_1468747f0 & _DAT_146874800;
  *(uint *)((longlong)param_1 + 0x94) = uVar1;
  *(uint *)(param_1 + 0x13) = uVar2;
  *(uint *)((longlong)param_1 + 0x9c) = uVar3;
  FUN_14106d7a0(param_1 + 0x14);
  return param_1;
}



// FUNCTION 14106ea60 ~FKey body=77 status=ok
// SIG undefined ~FKey(void)

void FKey::~FKey(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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



// FUNCTION 14106eab0 ~<lambda_1> body=142 status=ok
// SIG undefined ~<lambda_1>(void)

void ``FOnlineSessionEOS::OnLobbyInviteReceived'::`2'::<lambda_1>::operator()'::`15'::<lambda_1>::
     ~<lambda_1>(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  return;
}



// FUNCTION 14106eb40 ~TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32>_> body=159 status=ok
// SIG undefined ~TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32>_>(void)

void TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32>_>::
     ~TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32>_>
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
    plVar7 = (longlong *)(lVar5 + 0x28);
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



// FUNCTION 14106ebe0 ~TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator> body=112 status=ok
// SIG undefined ~TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>(void)

void TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>::
     ~TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    do {
      *(undefined4 *)(lVar1 + 0x48) = 0;
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        FMemory::Free();
      }
      FUN_14106ed30(lVar1);
      lVar1 = lVar1 + 0x50;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    return;
  }
  FMemory::Free(lVar1);
  return;
}



// FUNCTION 14106ec50 ~TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator> body=112 status=ok
// SIG undefined ~TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>(void)

void TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>::
     ~TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    do {
      *(undefined4 *)(lVar1 + 0x48) = 0;
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        FMemory::Free();
      }
      FUN_14106ecc0(lVar1);
      lVar1 = lVar1 + 0x50;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    return;
  }
  FMemory::Free(lVar1);
  return;
}



// FUNCTION 14106ecc0 FUN_14106ecc0 body=100 status=ok
// SIG undefined FUN_14106ecc0(void)

void FUN_14106ecc0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14106ed30 FUN_14106ed30 body=396 status=ok
// SIG undefined FUN_14106ed30(void)

void FUN_14106ed30(longlong *param_1)

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
      if (bVar4) goto LAB_14106edf1;
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
LAB_14106edf1:
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
      if (*(longlong *)((longlong)iStack_1c * 0x40 + *param_1) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
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



// FUNCTION 14106eec0 FUN_14106eec0 body=124 status=ok
// SIG undefined FUN_14106eec0(void)

void FUN_14106eec0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}



// FUNCTION 14106ef40 FUN_14106ef40 body=94 status=ok
// SIG undefined FUN_14106ef40(void)

void FUN_14106ef40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
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



// FUNCTION 14106efa0 FUN_14106efa0 body=266 status=ok
// SIG undefined FUN_14106efa0(void)

void FUN_14106efa0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  plVar4 = *(longlong **)(param_1 + 0x28);
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



// FUNCTION 14106f0b0 FUN_14106f0b0 body=437 status=ok
// SIG undefined FUN_14106f0b0(void)

void FUN_14106f0b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 0x3e0);
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FMemory::Free();
  }
  FUN_14106eec0(param_1 + 0x370);
  plVar3 = *(longlong **)(param_1 + 0x368);
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
  plVar3 = *(longlong **)(param_1 + 0x338);
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
  plVar3 = *(longlong **)(param_1 + 800);
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
  plVar3 = *(longlong **)(param_1 + 0x310);
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
  plVar3 = *(longlong **)(param_1 + 0x2f8);
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x280);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x270);
  FUN_14099a700(param_1 + 0x228);
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x170) = &PTR_FUN_14468d298;
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  return;
}


