// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1411d7ea0 FUN_1411d7ea0 body=332 status=ok
// SIG undefined FUN_1411d7ea0(void)

undefined8 * FUN_1411d7ea0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_1446fe970;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1411d7ff0 FUN_1411d7ff0 body=565 status=ok
// SIG undefined FUN_1411d7ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1411d7ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_res18 [2];
  undefined1 auStack_1b8 [32];
  undefined2 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 *local_178;
  code *local_168 [2];
  undefined1 local_158 [32];
  undefined8 local_138;
  undefined4 local_128;
  undefined1 local_118 [192];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_178 = local_res18;
  local_138 = 0;
  local_128 = 0;
  local_res18[0] = param_3;
  local_188 = param_4;
  uStack_180 = param_1;
  puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_158);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_188;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_188._4_4_;
    *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_180;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_180._4_4_;
    *puVar3 = &PTR_FUN_143f4d0b0;
    puVar3[3] = local_178;
  }
  local_188 = 0;
  local_168[0] = FUN_1411d51b0;
  uStack_180 = 0x2c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
  local_198 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_188,0x2c,"UOakThumbnailManager::CreateTextureForActor");
  FUN_1411c80f0(local_118,&local_188,local_168);
  uVar4 = FUN_1411e0580(local_118,local_168);
  FUN_14204c280(uVar4);
  lVar5 = local_58;
  if (local_58 != 0) {
    while ((lVar5 = local_58, local_58 != 0 && (*(char *)(local_58 + 0x58) == '\0'))) {
      cVar1 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar1 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)))) {
        lVar5 = FUN_14203ca70();
        if (lVar5 != 0) {
          FUN_1420714f0(lVar5);
        }
      }
      else {
        FUN_142036de0();
      }
      lVar5 = local_58;
      if (local_58 == 0) break;
      if (*(char *)(local_58 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))(*(longlong **)(local_58 + 0x50),5);
      }
    }
  }
  cVar1 = *(char *)(lVar5 + 0x58);
  while (cVar1 == '\0') {
    (**(code **)(**(longlong **)(lVar5 + 0x50) + 0x20))(*(longlong **)(lVar5 + 0x50),0x5d638865,0);
    cVar1 = *(char *)(lVar5 + 0x58);
  }
  FUN_140f16ab0(param_2,lVar5 + 0x60);
  FUN_140ce1dc0(local_118);
  return param_2;
}



// FUNCTION 1411d8230 FUN_1411d8230 body=930 status=ok
// SIG undefined FUN_1411d8230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411d8230(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_2a8 [32];
  undefined2 local_288;
  longlong *local_278;
  longlong *local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  longlong *local_250;
  LARGE_INTEGER local_248 [2];
  undefined1 *local_238 [2];
  undefined1 local_228 [32];
  undefined8 local_208;
  undefined4 local_1f8;
  undefined1 *local_1e8 [2];
  undefined1 local_1d8 [32];
  undefined8 local_1b8;
  undefined4 local_1a8;
  longlong *local_198;
  longlong *local_190;
  undefined1 local_188 [16];
  longlong local_178 [4];
  longlong *local_158;
  int local_148;
  undefined1 *local_138 [2];
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  LARGE_INTEGER local_e8 [24];
  longlong local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  plVar7 = (longlong *)0x0;
  local_208 = 0;
  local_1f8 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_228);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_1;
    *puVar3 = &PTR_FUN_143f77b70;
  }
  local_268 = 0;
  local_238[0] = &LAB_1411d5110;
  local_260 = 0x36;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
  local_288 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_268,0x36,"UOakThumbnailManager::CreateThumbnailMaterialInstance");
  FUN_140cdf730(local_e8,&local_268,local_238);
  QueryPerformanceCounter(local_248);
  local_e8[0] = local_248[0];
  lVar4 = operator_new(0x18);
  plVar5 = plVar7;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_140cdf810(lVar4);
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *plVar6 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    plVar6[2] = (longlong)plVar5;
    plVar7 = plVar6;
  }
  local_278 = plVar5;
  local_270 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_278,plVar5,plVar5);
  *(undefined1 *)(local_278 + 2) = 1;
  local_250 = (longlong *)local_278[1];
  local_28 = *local_278;
  if (local_250 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_250 + 1) = (int)local_250[1] + 1;
    UNLOCK();
  }
  local_258 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_20,&local_250);
  plVar7 = local_250;
  if (local_250 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_250 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_250)(local_250);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_250 + 8))(local_250,1);
      }
    }
  }
  local_108 = (longlong *)0x0;
  local_f8 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_128);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8620;
    puVar3[1] = local_e8;
  }
  local_138[0] = &LAB_140cee980;
  local_198 = local_278;
  local_190 = local_270;
  if (local_270 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_270 + 1) = (int)local_270[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_188,local_138);
  local_1b8 = 0;
  local_1a8 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x70,local_1d8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar3[2] = local_198;
    puVar3[3] = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_190 + 1) = (int)local_190[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 4,local_188);
  }
  local_1e8[0] = &LAB_140cee8d0;
  if (local_148 != 0) {
    plVar7 = local_178;
    if (local_158 != (longlong *)0x0) {
      plVar7 = local_158;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar7 = local_190;
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_190 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_190)(local_190);
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
  if (local_f8 != 0) {
    plVar7 = local_128;
    if (local_108 != (longlong *)0x0) {
      plVar7 = local_108;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar7 = local_270;
  if (local_270 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_270 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_270)(local_270);
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
  FUN_142032330(local_1e8);
  FUN_140d1b3a0(local_e8);
  FUN_140ce1dc0(local_e8);
  return;
}



// FUNCTION 1411d85e0 FUN_1411d85e0 body=484 status=ok
// SIG undefined FUN_1411d85e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411d85e0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  if (param_1 != 0) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
    lVar2 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FWeakObjectPtr::operator=(&local_e8,param_1);
      lVar2 = *(longlong *)(param_1 + 0x120);
      local_e0 = local_e8;
      if ((((lVar2 != 0) || (lVar2 = FUN_1423407b0(param_1), lVar2 != 0)) &&
          (*(longlong *)(lVar2 + 400) != 0)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 400) + 0xa0) != 0)) {
        uVar4 = 0;
        local_a8 = (longlong *)0x0;
        local_98 = 0;
        puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_CopyToEmptyStorage_143fcfe50;
          *(undefined4 *)((longlong)puVar3 + 0xc) = local_e0._4_4_;
          *(int *)(puVar3 + 1) = (int)local_e8;
        }
        local_d8[0] = FUN_1411d51d0;
        if (*(longlong *)(lVar2 + 400) != 0) {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0xa0);
        }
        local_88 = 0;
        local_80 = 0;
        FWeakObjectPtr::operator=(local_78,0);
        local_70 = 0;
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_68,local_d8);
        FUN_142880af0(uVar4,&local_88);
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
    }
  }
  return;
}



// FUNCTION 1411d87d0 FUN_1411d87d0 body=749 status=ok
// SIG undefined FUN_1411d87d0(void)

void FUN_1411d87d0(longlong param_1,char param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 local_res8;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  undefined2 local_b;
  undefined1 local_9;
  
  *(undefined1 *)(param_1 + 0xf8) = 0;
  lVar5 = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    param_3 = CONCAT71((int7)(param_3 >> 8),1);
    FUN_142227350(*(longlong *)(param_1 + 0x80),0);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (param_2 == '\0') {
    FUN_1411d6750(param_1,0);
  }
  else {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      param_3 = CONCAT71((int7)(param_3 >> 8),1);
      FUN_142227350(*(longlong *)(param_1 + 0x68),0);
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(param_1 + 0x308);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != 0) {
    FUN_1411d6b60(lVar2);
    FWeakObjectPtr::operator=(&local_res8,0);
    param_3 = param_3 & 0xffffffffffffff00;
    bVar3 = false;
    *(undefined4 *)(lVar2 + 0x480) = (undefined4)local_res8;
    *(undefined4 *)(lVar2 + 0x484) = local_res8._4_4_;
    if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x68) + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar6;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
      }
      param_3 = 0;
      bVar3 = false;
      if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
        param_3 = 0;
        bVar3 = true;
      }
    }
    if (bVar3) {
      local_68 = *(undefined8 *)(param_1 + 0x68);
      local_60 = *(undefined8 *)(param_1 + 0x48);
      FUN_140ce51b0(*(longlong *)(param_1 + 0x40),&local_68);
    }
    else {
      FUN_142227350(*(undefined8 *)(param_1 + 0x48),0,CONCAT71((int7)(param_3 >> 8),1));
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if ((*(int *)(param_1 + 0x5c) < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x50,0);
    }
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_142dbb6a0(param_1 + 0x198);
  FUN_142dbb6a0(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_res8 = 0;
  local_57 = 0;
  local_53 = 0;
  local_51 = 0;
  local_40 = 0;
  local_30 = 0;
  local_20 = 0;
  local_b = 0;
  local_9 = 0;
  local_58 = 0;
  local_38 = 0;
  local_28 = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_1411cb1b0(param_1 + 0x230,&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_48);
  local_57 = 0;
  local_53 = 0;
  local_51 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_20 = 0;
  local_b = 0;
  local_9 = 0;
  local_58 = 0;
  local_38 = 0;
  local_28 = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_1411cb1b0(param_1 + 0xa8,&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_48);
  lVar5 = FUN_1411e5ff0(param_1);
  if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    FUN_140e5e920(lVar5 + 0x26f0,0,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18));
  }
  FUN_14288e3d0(param_1 + 0x2b0,0);
  FTickFunction::UnRegisterTickFunction(param_1 + 0x2b0);
  FUN_1407d7790(param_1 + 0x290,0);
  *(undefined4 *)(param_1 + 0x288) = 0;
  if ((*(int *)(param_1 + 0x28c) < 0) && (*(int *)(param_1 + 0x28c) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x280,0);
  }
  return;
}



// FUNCTION 1411d8ac0 FUN_1411d8ac0 body=133 status=ok
// SIG undefined FUN_1411d8ac0(void)

void FUN_1411d8ac0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x70);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x70);
    FUN_1407665e0(lVar1 + 0x188,param_1);
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x70);
    FUN_1407665e0(lVar1 + 0x198,param_1);
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x70);
    FUN_1407665e0(lVar1 + 0x1a8,param_1);
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x70);
    FUN_1407665e0(lVar1 + 0x1b8,param_1);
  }
  return;
}



// FUNCTION 1411d8b50 FUN_1411d8b50 body=201 status=ok
// SIG undefined FUN_1411d8b50(void)

void FUN_1411d8b50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x5b0))();
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x148))(), lVar1 != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x168 + lVar1;
    if (lVar1 != lVar3) {
      puVar4 = (undefined8 *)(lVar1 + 0xa8);
      do {
        uVar2 = FUN_14164ab60();
        FUN_141597530(uVar2,*puVar4);
        lVar1 = lVar1 + 0x168;
        puVar4 = puVar4 + 0x2d;
      } while (lVar1 != lVar3);
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x50) = local_res8;
  *(undefined4 *)(param_1 + 0x54) = local_resc;
  return;
}



// FUNCTION 1411d8c20 FUN_1411d8c20 body=467 status=ok
// SIG undefined FUN_1411d8c20(void)

void FUN_1411d8c20(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  ulonglong uVar8;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar2 = FUN_14203bd30();
    TBaseMulticastDelegate<void>::Remove(uVar2,*(undefined8 *)(param_1 + 0x28));
  }
  uVar8 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_14203bd20();
    TBaseMulticastDelegate<void>::Remove(uVar2,*(undefined8 *)(param_1 + 0x30));
  }
  lVar5 = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar5 != 0) {
    plVar3 = (longlong *)FUN_14203bd40();
    uVar10 = uVar8;
    if (0 < (int)plVar3[1]) {
      do {
        plVar9 = (longlong *)(*plVar3 + uVar10);
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
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar10 = uVar10 + 0x10;
      } while ((int)uVar7 < (int)plVar3[1]);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,0);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar5 = FUN_1422312c0();
    if (lVar5 != 0) {
      lVar6 = FUN_14141f270();
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
        TBaseMulticastDelegate<void>::Remove(lVar5 + 0x930,*(undefined8 *)(param_1 + 0x80));
        TBaseMulticastDelegate<void>::Remove(lVar5 + 0x948,*(undefined8 *)(param_1 + 0x88));
      }
    }
    FUN_1407665e0(*(longlong *)(param_1 + 0x58) + 0xb98,param_1);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1411d8b50();
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1411d8b50();
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1411d8b50();
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 1411d8e00 FUN_1411d8e00 body=9 status=ok
// SIG undefined FUN_1411d8e00(void)

void FUN_1411d8e00(longlong param_1)

{
  FUN_141033a10(param_1 + 0x28);
  return;
}



// FUNCTION 1411d8e10 FUN_1411d8e10 body=589 status=ok
// SIG undefined FUN_1411d8e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411d8e10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0x120);
  if ((((lVar1 == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) ||
      (lVar1 = FUN_140c12480(lVar1), lVar1 == 0)) ||
     (lVar1 = FARSupportInterface::GetXRTrackingSystem(lVar1), lVar1 == 0)) {
    if (*(longlong *)(param_1 + 0x288) != 0) {
      uVar2 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
      FUN_142880530(uVar2,param_1 + 0x288);
      *(undefined8 *)(param_1 + 0x288) = 0;
    }
    local_a8 = FUN_1411d8e10;
    uStack_a0 = 0;
    uVar2 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_9c;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar1;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,param_1 + 0x288,&local_98,0x3dcccccd);
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
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar1 = FMemory::Realloc(plVar3,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
  }
  else if (*(char *)(param_1 + 0x271) == '\0') {
    FUN_1411de930(lVar1,param_1);
  }
  else {
    FUN_1411d48d0();
  }
  return;
}



// FUNCTION 1411d9060 FUN_1411d9060 body=127 status=ok
// SIG undefined FUN_1411d9060(void)

void FUN_1411d9060(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x6e8) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x6d8) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0xd8) != 0) {
      FMemory::Free();
    }
    FUN_140ddef50(lVar1 + 0x58);
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x28) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x710);
    return;
  }
  return;
}



// FUNCTION 1411d90e0 FUN_1411d90e0 body=110 status=ok
// SIG undefined FUN_1411d90e0(void)

void FUN_1411d90e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140ddef50(lVar1 + 0x60);
    FUN_1415b5910();
    *(undefined8 *)(lVar1 + 0x50) = 0;
    if (*(int *)(lVar1 + 0x40) != 0) {
      plVar2 = *(longlong **)(lVar1 + 0x30);
      if (*(longlong **)(lVar1 + 0x30) == (longlong *)0x0) {
        plVar2 = (longlong *)(lVar1 + 0x10);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x90);
    return;
  }
  return;
}



// FUNCTION 1411d9150 FUN_1411d9150 body=62 status=ok
// SIG undefined FUN_1411d9150(void)

undefined8 * FUN_1411d9150(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"[StandInUIControllerTick]",0x34);
  return param_2;
}



// FUNCTION 1411d9190 FUN_1411d9190 body=259 status=ok
// SIG undefined FUN_1411d9190(void)

undefined8 *
FUN_1411d9190(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  undefined1 local_2e8 [164];
  undefined1 local_244;
  undefined8 local_1a8;
  undefined1 local_178 [368];
  
  FUN_1411c9410(local_2e8);
  if (*(longlong *)(param_1 + 0x70) == 0) goto LAB_1411d9262;
  if (*(longlong **)(param_1 + 0x58) == (longlong *)0x0) {
LAB_1411d91e9:
    local_res8[0] = 0;
  }
  else {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x148))();
    if (lVar1 == 0) goto LAB_1411d91e9;
    local_res8[0] = *(undefined4 *)(lVar1 + 0x790);
  }
  uVar2 = FUN_1411c91b0(local_178,param_3,param_4,param_5,&stack0x00000030,local_res8);
  FUN_1411cbfb0(local_2e8,uVar2);
  FUN_1411ca750(local_178);
  local_244 = 1;
  FUN_1411d2ce0(*(undefined8 *)(param_1 + 0x70),local_res8,local_2e8);
LAB_1411d9262:
  *param_2 = local_1a8;
  FUN_1411ca750(local_2e8);
  return param_2;
}



// FUNCTION 1411d92a0 FUN_1411d92a0 body=275 status=ok
// SIG undefined FUN_1411d92a0(void)

undefined8 *
FUN_1411d92a0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  undefined1 local_2e8 [152];
  undefined1 local_250;
  undefined1 local_244;
  undefined8 local_1a8;
  undefined1 local_178 [368];
  
  FUN_1411c9410(local_2e8);
  if (*(longlong *)(param_1 + 0x70) == 0) goto LAB_1411d9382;
  if (*(longlong **)(param_1 + 0x58) == (longlong *)0x0) {
LAB_1411d92f9:
    local_res8[0] = 0;
  }
  else {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x148))();
    if (lVar1 == 0) goto LAB_1411d92f9;
    local_res8[0] = *(undefined4 *)(lVar1 + 0x790);
  }
  uVar2 = FUN_1411c91b0(local_178,param_3,param_4,param_5,&stack0x00000030,local_res8);
  FUN_1411cbfb0(local_2e8,uVar2);
  FUN_1411ca750(local_178);
  local_250 = 1;
  local_244 = 1;
  FUN_1411d2ce0(*(undefined8 *)(param_1 + 0x70),local_res8,local_2e8);
  FUN_1411fe4d0(param_1);
LAB_1411d9382:
  *param_2 = local_1a8;
  FUN_1411ca750(local_2e8);
  return param_2;
}



// FUNCTION 1411d93c0 FUN_1411d93c0 body=289 status=ok
// SIG undefined FUN_1411d93c0(void)

undefined8 *
FUN_1411d93c0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  undefined1 local_2f8 [152];
  undefined1 local_260;
  undefined1 local_254;
  undefined8 local_1b8;
  undefined1 local_188 [368];
  
  local_res8[0] = param_5;
  uVar1 = FUN_1404b03b0();
  FUN_1411c9410(local_2f8);
  if (*(longlong *)(param_1 + 0x70) == 0) goto LAB_1411d94b1;
  if (*(longlong **)(param_1 + 0x58) == (longlong *)0x0) {
LAB_1411d942d:
    param_5 = 0;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x148))();
    if (lVar2 == 0) goto LAB_1411d942d;
    param_5 = *(undefined4 *)(lVar2 + 0x790);
  }
  uVar1 = FUN_1411c91b0(local_188,param_3,uVar1,param_4,local_res8,&param_5);
  FUN_1411cbfb0(local_2f8,uVar1);
  FUN_1411ca750(local_188);
  local_260 = 1;
  local_254 = 1;
  FUN_1411d2ce0(*(undefined8 *)(param_1 + 0x70),local_res8,local_2f8);
  FUN_1411fe4d0(param_1);
LAB_1411d94b1:
  *param_2 = local_1b8;
  FUN_1411ca750(local_2f8);
  return param_2;
}



// FUNCTION 1411d94f0 FUN_1411d94f0 body=280 status=ok
// SIG undefined FUN_1411d94f0(void)

undefined8 *
FUN_1411d94f0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined1 local_2e8 [152];
  undefined1 local_250;
  undefined4 local_24c;
  undefined1 local_244;
  undefined8 local_1a8;
  undefined1 local_178 [368];
  
  FUN_1411c9410(local_2e8);
  if (*(longlong *)(param_1 + 0x70) == 0) goto LAB_1411d95d7;
  uVar1 = FUN_1411d4c90(param_1,local_178,param_3,param_4,param_5,param_7,param_6);
  FUN_1411cbfb0(local_2e8,uVar1);
  FUN_1411ca750(local_178);
  local_250 = 1;
  local_244 = 1;
  if (*(longlong **)(param_1 + 0x58) == (longlong *)0x0) {
LAB_1411d95ad:
    local_24c = 0;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x148))();
    if (lVar2 == 0) goto LAB_1411d95ad;
    local_24c = *(undefined4 *)(lVar2 + 0x790);
  }
  FUN_1411d2ce0(*(undefined8 *)(param_1 + 0x70),local_res8,local_2e8);
  FUN_1411fe4d0(param_1);
LAB_1411d95d7:
  *param_2 = local_1a8;
  FUN_1411ca750(local_2e8);
  return param_2;
}



// FUNCTION 1411d9610 FUN_1411d9610 body=418 status=ok
// SIG undefined FUN_1411d9610(void)

void FUN_1411d9610(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined1 local_res20 [8];
  longlong *local_38;
  int local_30;
  
  plVar1 = (longlong *)FUN_1411e4550(param_1,1);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if ((((*(char *)(param_2 + 0x99) != '\0') && (*(longlong **)(param_1 + 0x48) != (longlong *)0x0))
      && (1e-08 < *(float *)(param_2 + 0xa0))) &&
     (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x148))(), lVar2 != 0)) {
    FWeakObjectPtr::operator=(&local_res18,param_1);
    lVar2 = *(longlong *)(param_2 + 0x140);
    local_38 = (longlong *)0x0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    local_30 = 3;
    local_38 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_GetPoolName_1446fea20;
      *(undefined4 *)(plVar3 + 1) = local_res18;
      *(undefined4 *)((longlong)plVar3 + 0xc) = local_res1c;
      plVar3[2] = lVar2;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar2;
    }
    uVar4 = FUN_14164ab60();
    puVar5 = (undefined8 *)
             FUN_14158f860(uVar4,local_res20,&local_38,L"UMessageStackManager_Lambda",
                           *(undefined4 *)(param_2 + 0xa0));
    *(undefined8 *)(param_2 + 0xa8) = *puVar5;
    if (local_30 != 0) {
      if (local_38 == (longlong *)0x0) goto LAB_1411d9796;
      (**(code **)(*local_38 + 0x28))(local_38,0);
      if (local_38 != (longlong *)0x0) {
        local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
      }
      local_30 = 0;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
LAB_1411d9796:
  *(undefined1 *)(param_1 + 0x60) = 1;
  (**(code **)(*plVar1 + 0x5e0))(plVar1,param_2);
  return;
}



// FUNCTION 1411d97c0 FUN_1411d97c0 body=367 status=ok
// SIG undefined FUN_1411d97c0(void)

undefined8 *
FUN_1411d97c0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined1 local_2f8 [72];
  undefined1 local_2b0 [80];
  undefined2 local_260;
  undefined4 local_258;
  undefined1 local_253;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined1 local_188 [368];
  
  FUN_1411c9410(local_2f8);
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x30);
    lVar2 = (longlong)*(int *)(lVar2 + 0x38) * 0x168 + lVar3;
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x168) {
      if (*(char *)(lVar3 + 0xa5) == '\x02') goto LAB_1411d9904;
    }
    if ((*(longlong **)(param_1 + 0x58) == (longlong *)0x0) ||
       (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x148))(), lVar2 == 0)) {
      local_res8[0] = 0;
    }
    else {
      local_res8[0] = *(undefined4 *)(lVar2 + 0x790);
    }
    local_res10[0] = 2;
    uVar1 = FUN_1404b03b0();
    uVar1 = FUN_1411c91b0(local_188,param_3,uVar1,param_4,local_res10,local_res8);
    FUN_1411cbfb0(local_2f8,uVar1);
    FUN_1411ca750(local_188);
    local_258 = 0x41200000;
    local_260 = 0x100;
    local_1c0 = 1;
    FText::operator=(local_2b0,param_5);
    local_253 = 2;
    FUN_1411d2ce0(*(undefined8 *)(param_1 + 0x70),local_res8,local_2f8);
  }
LAB_1411d9904:
  *param_2 = local_1b8;
  FUN_1411ca750(local_2f8);
  return param_2;
}



// FUNCTION 1411d9930 FUN_1411d9930 body=1458 status=ok
// SIG undefined FUN_1411d9930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1411d9930(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,longlong param_7)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 auStack_448 [32];
  undefined4 *local_428;
  undefined4 *local_420;
  undefined4 local_418 [2];
  undefined8 local_410;
  undefined4 local_408 [2];
  undefined8 local_400;
  longlong *plStack_3f8;
  longlong local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 *local_3d8;
  undefined8 local_3d0;
  longlong *local_3c8;
  undefined8 local_3c0;
  longlong *local_3b8;
  undefined8 local_3b0;
  longlong *local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  longlong local_388;
  longlong *plStack_380;
  longlong local_378;
  longlong *plStack_370;
  undefined1 local_368 [8];
  undefined1 local_360 [8];
  longlong *local_358;
  undefined1 local_350 [8];
  longlong *local_348;
  undefined1 local_338 [72];
  undefined1 local_2f0 [80];
  undefined2 local_2a0;
  undefined4 local_298;
  undefined1 local_293;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong *plStack_1e8;
  longlong local_1e0;
  undefined1 local_1c8 [360];
  undefined8 local_60;
  longlong *plStack_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_448;
  uVar13 = 0;
  local_410 = param_5;
  local_3f0 = param_7;
  local_418[0] = 0;
  local_3e8 = param_3;
  local_3e0 = param_4;
  local_3d8 = param_2;
  FUN_1411c9410(local_338);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    lVar9 = 0;
    uVar8 = uVar13;
  }
  else {
    uVar8 = FUN_140cff230();
    lVar9 = *(longlong *)(param_1 + 0x58);
  }
  if ((lVar9 != 0) && (lVar9 = FUN_1422312c0(), param_5 = local_410, lVar9 != 0)) {
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
    param_5 = local_410;
    if ((bVar5) && (uVar8 != 0)) {
      local_3c0 = *param_6;
      local_3b8 = (longlong *)param_6[1];
      if (local_3b8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_3b8 + 1) = (int)local_3b8[1] + 1;
        UNLOCK();
      }
      puVar11 = (undefined8 *)FUN_142dcf3a0(*(undefined8 *)(param_1 + 0x58),local_360);
      local_3d0 = *puVar11;
      local_3c8 = (longlong *)puVar11[1];
      if (local_3c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_3c8 + 1) = (int)local_3c8[1] + 1;
        UNLOCK();
      }
      uVar12 = FUN_140bb74b0(lVar9);
      cVar7 = FUN_140d89890(uVar12,&local_3d0,&local_3c0,0);
      plVar2 = local_3c8;
      if (local_3c8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_3c8 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_3c8)(local_3c8);
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
      if (local_358 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_358 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_358)(local_358);
          LOCK();
          piVar1 = (int *)((longlong)local_358 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_358 + 8))(local_358,1);
          }
        }
      }
      plVar2 = local_3b8;
      if (local_3b8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_3b8 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_3b8)(local_3b8);
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
      local_3b0 = *param_6;
      local_3a8 = (longlong *)param_6[1];
      if (local_3a8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_3a8 + 1) = (int)local_3a8[1] + 1;
        UNLOCK();
      }
      FUN_140bbc6f0(lVar9,&local_388,&local_3b0);
      plVar2 = local_3a8;
      if (local_3a8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_3a8 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_3a8)(local_3a8);
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
      if (local_388 != 0) {
        if (cVar7 == '\0') {
          uVar13 = 7;
          local_378 = local_388;
          plStack_370 = plStack_380;
          if (plStack_380 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_380 + 1) = (int)plStack_380[1] + 1;
            UNLOCK();
          }
          puVar11 = (undefined8 *)FUN_142dcf3a0(*(undefined8 *)(param_1 + 0x58),local_350);
          local_3a0 = *puVar11;
          local_398 = (longlong *)puVar11[1];
          if (local_398 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_398 + 1) = (int)local_398[1] + 1;
            UNLOCK();
          }
          uVar12 = FUN_140bb74b0(lVar9);
          cVar7 = FUN_140d89890(uVar12,&local_3a0,&local_378,0);
          if (cVar7 != '\0') goto LAB_1411d9c08;
          cVar7 = '\0';
        }
        else {
LAB_1411d9c08:
          cVar7 = '\x01';
        }
        plVar2 = local_398;
        if (((uVar13 & 4) != 0) &&
           (uVar13 = (ulonglong)((uint)uVar13 & 0xfffffffb), local_398 != (longlong *)0x0)) {
          LOCK();
          plVar6 = local_398 + 1;
          lVar9 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_398)(local_398);
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
        if (((uVar13 & 2) != 0) &&
           (uVar13 = (ulonglong)((uint)uVar13 & 0xfffffffd), local_348 != (longlong *)0x0)) {
          LOCK();
          plVar2 = local_348 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_348)(local_348);
            LOCK();
            piVar1 = (int *)((longlong)local_348 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_348 + 8))(local_348,1);
            }
          }
        }
        plVar2 = plStack_370;
        if (((uVar13 & 1) != 0) && (plStack_370 != (longlong *)0x0)) {
          LOCK();
          plVar6 = plStack_370 + 1;
          lVar9 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_370)(plStack_370);
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
      if ((*(char *)(uVar8 + 0x252) == '\x02') ||
         ((*(char *)(uVar8 + 0x252) == '\x01' && (cVar7 == '\0')))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (plStack_380 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_380 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_380)(plStack_380);
          LOCK();
          piVar1 = (int *)((longlong)plStack_380 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_380 + 8))(plStack_380,1);
          }
        }
      }
      param_3 = local_3e8;
      param_7 = local_3f0;
      param_5 = local_410;
      if (!bVar5) goto LAB_1411d9ea4;
    }
  }
  if ((param_7 != 0) && (lVar9 = *(longlong *)(param_1 + 0x70), lVar9 != 0)) {
    lVar10 = *(longlong *)(lVar9 + 0x30);
    lVar9 = (longlong)*(int *)(lVar9 + 0x38) * 0x168 + lVar10;
    for (; lVar10 != lVar9; lVar10 = lVar10 + 0x168) {
      if (*(char *)(lVar10 + 0xa5) == '\x01') goto LAB_1411d9ea4;
    }
    local_408[0] = FUN_1411e6e70(param_1);
    local_418[0] = 2;
    uVar12 = FUN_1404b03b0();
    local_420 = local_408;
    local_428 = local_418;
    uVar12 = FUN_1411c91b0(local_1c8,param_3,uVar12,local_3e0);
    FUN_1411cbfb0(local_338,uVar12);
    FUN_1411ca750(local_1c8);
    plVar2 = plStack_1e8;
    local_298 = 0x41200000;
    local_2a0 = 0x100;
    local_60 = *param_6;
    plStack_58 = (longlong *)param_6[1];
    if (plStack_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_58 + 1) = (int)plStack_58[1] + 1;
      UNLOCK();
    }
    local_400 = local_1f0;
    plStack_3f8 = plStack_1e8;
    local_1f0 = local_60;
    plVar6 = plStack_58;
    if (plStack_1e8 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_1e8 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        puVar11 = (undefined8 *)*plStack_1e8;
        plStack_1e8 = plStack_58;
        (*(code *)*puVar11)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar6 = plStack_1e8;
        if (iVar4 == 1) {
          (**(code **)(*plStack_3f8 + 8))(plStack_3f8,1);
          plVar6 = plStack_1e8;
        }
      }
    }
    plStack_1e8 = plVar6;
    local_200 = 1;
    local_1e0 = param_7;
    FText::operator=(local_2f0,param_5);
    local_293 = 1;
    FUN_1411d2ce0(*(undefined8 *)(param_1 + 0x70),local_368,local_338);
  }
LAB_1411d9ea4:
  puVar11 = local_3d8;
  *local_3d8 = local_1f8;
  FUN_1411ca750(local_338);
  return puVar11;
}



// FUNCTION 1411d9ef0 FUN_1411d9ef0 body=2913 status=ok
// SIG undefined FUN_1411d9ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1411d9ef0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong **pplVar17;
  undefined2 *puVar18;
  longlong *plVar19;
  undefined1 auStack_688 [32];
  undefined4 local_668;
  longlong local_658;
  undefined8 *local_650;
  longlong local_648;
  longlong local_640;
  undefined4 local_638 [4];
  longlong *local_628;
  longlong *plStack_620;
  longlong *local_618;
  longlong *plStack_610;
  longlong local_608 [2];
  longlong *local_5f8;
  longlong *plStack_5f0;
  longlong *local_5e8;
  longlong *plStack_5e0;
  undefined4 *local_5d8;
  ulonglong *puStack_5d0;
  undefined8 local_5c8;
  longlong *local_5c0;
  undefined4 *local_5b8;
  longlong *local_5a8;
  longlong *plStack_5a0;
  longlong *local_598;
  longlong *plStack_590;
  undefined8 local_588;
  longlong local_580;
  longlong *local_578;
  longlong *plStack_570;
  undefined1 local_568 [8];
  longlong *local_560;
  undefined1 local_550 [8];
  longlong *local_548;
  longlong local_538 [2];
  undefined1 local_528 [16];
  longlong local_518 [2];
  undefined1 local_508 [8];
  longlong local_500 [2];
  undefined1 local_4f0 [8];
  longlong *local_4e8;
  undefined1 local_4d8 [8];
  longlong *local_4d0;
  undefined1 local_4c0 [8];
  longlong *local_4b8;
  undefined1 local_4a8 [8];
  longlong *local_4a0;
  undefined1 local_490 [8];
  longlong *local_488;
  undefined1 local_478 [8];
  longlong *local_470;
  undefined1 local_460 [16];
  undefined1 local_450 [16];
  undefined1 local_440 [24];
  undefined1 local_428 [24];
  undefined1 local_410 [360];
  undefined1 local_2a8 [368];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [4];
  undefined1 local_d8 [8];
  longlong *local_d0;
  char local_c0;
  undefined4 local_b8 [4];
  undefined1 local_a8 [24];
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_78 [24];
  undefined1 local_60;
  ulonglong local_58 [3];
  longlong lStack_40;
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_688;
  local_638[0] = 0;
  lVar11 = *(longlong *)(param_1 + 0x78);
  local_658 = param_1;
  local_650 = param_2;
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    if ((*(longlong *)(lVar11 + 0x40) == 0) && (*(longlong *)(lVar11 + 0x58) != 0)) {
      lVar10 = AXActionCue::GetPrivateStaticClass();
      for (lVar16 = *(longlong *)(lVar11 + 0x58); (lVar16 != 0 && (lVar16 != lVar10));
          lVar16 = *(longlong *)(lVar16 + 0x30)) {
      }
    }
    lVar11 = *(longlong *)(lVar11 + 0x40);
  }
  if (lVar11 == 0) {
    lVar11 = FUN_1411c9410(local_410);
    *param_2 = *(undefined8 *)(lVar11 + 0x140);
    FUN_1411ca750(local_410);
  }
  else if (*(int *)(param_3 + 0x20) < 2) {
    if (*(int *)(lVar11 + 0x940) != *(int *)(lVar11 + 0x96c)) {
      lVar16 = *(longlong *)(lVar11 + 0x978);
      if (*(longlong *)(lVar11 + 0x978) == 0) {
        lVar16 = lVar11 + 0x970;
      }
      iVar9 = *(int *)(lVar16 + ((longlong)*(int *)(lVar11 + 0x980) - 1U &
                                (longlong)*(int *)(param_3 + 0x10)) * 4);
      if (iVar9 != -1) {
        lVar11 = *(longlong *)(lVar11 + 0x938);
LAB_1411da060:
        lVar16 = (longlong)iVar9 * 0x60;
        if (*(int *)(lVar16 + lVar11) != *(int *)(param_3 + 0x10)) goto code_r0x0001411da071;
        if (((iVar9 != -1) && (lVar11 = (longlong)iVar9 * 0x60 + lVar11, lVar11 != 0)) &&
           (lVar16 = lVar11 + 8, local_640 = lVar16, lVar16 != 0)) {
          lVar10 = *(longlong *)(param_3 + 0x28);
          uVar3 = *(undefined4 *)(lVar11 + 0x50);
          lVar11 = 0x18;
          if (lVar10 == 0) {
            lVar11 = 0x30;
          }
          lVar11 = lVar11 + lVar16;
          local_648 = lVar11;
          FText::FText(local_550,lVar11);
          if (lVar10 != 0) {
            uVar12 = FUN_14270d290(*(undefined8 *)(param_3 + 0x28),local_500);
            FText::FromString(local_568,uVar12);
            if (local_500[0] != 0) {
              FMemory::Free();
            }
            if ((*(longlong *)(param_1 + 0x58) != 0) &&
               (lVar10 = FUN_1422312c0(), param_1 = local_658, lVar10 != 0)) {
              lVar14 = FUN_14141f270();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              param_1 = local_658;
              if (bVar5) {
                TSharedFromThis<FSceneViewExtensionBase,1>::AsShared
                          (*(longlong *)(*(longlong *)(param_3 + 0x28) + 0x4b8) + 8,&local_618);
                FUN_140bbc6f0(lVar10,&local_578,&local_618);
                puVar15 = (undefined8 *)(**(code **)(*local_618 + 8))(local_618,local_508);
                cVar7 = FUN_140bcac80(lVar10,*puVar15);
                lVar11 = 2;
                if (cVar7 == '\0') {
                  bVar6 = false;
                  bVar5 = true;
                  local_5f8 = local_578;
                  plStack_5f0 = plStack_570;
                  if (plStack_570 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_570 + 1) = (int)plStack_570[1] + 1;
                    UNLOCK();
                  }
                  pplVar17 = (longlong **)(local_608 + 2);
                }
                else {
                  bVar6 = true;
                  bVar5 = false;
                  local_5e8 = local_618;
                  plStack_5e0 = plStack_610;
                  if (plStack_610 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_610 + 1) = (int)plStack_610[1] + 1;
                    UNLOCK();
                  }
                  pplVar17 = &local_5e8;
                }
                local_628 = *pplVar17;
                plStack_620 = pplVar17[1];
                pplVar17[1] = (longlong *)0x0;
                *pplVar17 = (longlong *)0x0;
                plVar19 = plStack_5f0;
                if ((bVar5) && (plStack_5f0 != (longlong *)0x0)) {
                  LOCK();
                  plVar4 = plStack_5f0 + 1;
                  lVar16 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar16 == 1) {
                    (**(code **)*plStack_5f0)(plStack_5f0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar19 + 0xc);
                    iVar9 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plStack_5f0 + 8))(plStack_5f0,1);
                    }
                  }
                }
                plVar19 = plStack_5e0;
                if ((bVar6) && (plStack_5e0 != (longlong *)0x0)) {
                  LOCK();
                  plVar4 = plStack_5e0 + 1;
                  lVar16 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar16 == 1) {
                    (**(code **)*plStack_5e0)(plStack_5e0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar19 + 0xc);
                    iVar9 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plStack_5e0 + 8))(plStack_5e0,1);
                    }
                  }
                }
                if (local_628 == (longlong *)0x0) {
                  local_5a8 = local_618;
                  plStack_5a0 = plStack_610;
                  if (plStack_610 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_610 + 1) = (int)plStack_610[1] + 1;
                    UNLOCK();
                  }
                  pplVar17 = &local_5a8;
                  bVar6 = false;
                  bVar5 = true;
                }
                else {
                  local_598 = local_628;
                  plStack_590 = plStack_620;
                  if (plStack_620 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_620 + 1) = (int)plStack_620[1] + 1;
                    UNLOCK();
                  }
                  pplVar17 = &local_598;
                  bVar6 = true;
                  bVar5 = false;
                }
                uVar8 = FUN_140bbd2a0(lVar10,pplVar17);
                plVar19 = plStack_5a0;
                if ((bVar5) && (plStack_5a0 != (longlong *)0x0)) {
                  LOCK();
                  plVar4 = plStack_5a0 + 1;
                  lVar16 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar16 == 1) {
                    (**(code **)*plStack_5a0)(plStack_5a0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar19 + 0xc);
                    iVar9 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plVar19 + 8))(plVar19,1);
                    }
                  }
                }
                plVar19 = plStack_590;
                if ((bVar6) && (plStack_590 != (longlong *)0x0)) {
                  LOCK();
                  plVar4 = plStack_590 + 1;
                  lVar16 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar16 == 1) {
                    (**(code **)*plStack_590)(plStack_590);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar19 + 0xc);
                    iVar9 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plVar19 + 8))(plVar19,1);
                    }
                  }
                }
                puVar15 = (undefined8 *)FUN_1411f1490(local_538,uVar8);
                if (*(int *)(puVar15 + 1) == 0) {
                  puVar18 = &DAT_143f3eda8;
                }
                else {
                  puVar18 = (undefined2 *)*puVar15;
                }
                FName::FName(&local_5c8,puVar18,1);
                if (local_538[0] != 0) {
                  FMemory::Free();
                }
                local_668 = 0;
                FUN_142eff210(local_4d8,local_5c8,*(undefined8 *)(local_658 + 0x58),0x41800000);
                uVar12 = FUN_14270d290(*(undefined8 *)(param_3 + 0x28),local_518);
                lVar16 = FText::FromString(local_440,uVar12);
                lVar10 = FText::FText(local_428,local_4d8);
                uVar12 = FInternationalization::
                         ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                   (local_490,L"{0}{1}",L"UIManager",L"PlayerNameWithPlatformIcon");
                puVar15 = (undefined8 *)FTextFormat::FTextFormat(local_460,uVar12);
                local_b8[0] = 4;
                FText::FText(local_a8,lVar10);
                local_90 = 1;
                local_88 = 4;
                FText::FText(local_78,lVar16);
                local_5d8 = local_b8;
                local_60 = 1;
                puStack_5d0 = local_58;
                local_588 = *puVar15;
                local_580 = puVar15[1];
                if (local_580 != 0) {
                  LOCK();
                  *(int *)(local_580 + 8) = *(int *)(local_580 + 8) + 1;
                  UNLOCK();
                }
                uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                         TArray<FFormatArgumentValue,FDefaultAllocator>(local_528,&local_5d8);
                uVar12 = FText::Format(local_4a8,&local_588,uVar12);
                FText::FText(local_4f0,uVar12);
                if (local_4a0 != (longlong *)0x0) {
                  LOCK();
                  plVar19 = local_4a0 + 1;
                  lVar14 = *plVar19;
                  *(int *)plVar19 = (int)*plVar19 + -1;
                  UNLOCK();
                  if ((int)lVar14 == 1) {
                    (**(code **)*local_4a0)(local_4a0);
                    LOCK();
                    piVar2 = (int *)((longlong)local_4a0 + 0xc);
                    iVar9 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*local_4a0 + 8))(local_4a0,1);
                    }
                  }
                }
                TArray<FFormatArgumentValue,FDefaultAllocator>::
                ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_528);
                plVar19 = &lStack_40;
                do {
                  lVar11 = lVar11 + -1;
                  if ((char)plVar19[-4] != '\0') {
                    *(undefined1 *)(plVar19 + -4) = 0;
                    plVar4 = (longlong *)plVar19[-6];
                    if (plVar4 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = plVar4 + 1;
                      lVar14 = *plVar1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)lVar14 == 1) {
                        (**(code **)*plVar4)(plVar4);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar4 + 0xc);
                        iVar9 = *piVar2;
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (iVar9 == 1) {
                          (**(code **)(*plVar4 + 8))(plVar4,1);
                        }
                      }
                    }
                  }
                  plVar19 = plVar19 + -6;
                } while (lVar11 != 0);
                plVar19 = (longlong *)puVar15[1];
                if (plVar19 != (longlong *)0x0) {
                  LOCK();
                  plVar4 = plVar19 + 1;
                  lVar11 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar19)(plVar19);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar19 + 0xc);
                    iVar9 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plVar19 + 8))(plVar19,1);
                    }
                  }
                }
                plVar19 = *(longlong **)(lVar10 + 8);
                if (plVar19 != (longlong *)0x0) {
                  LOCK();
                  plVar4 = plVar19 + 1;
                  lVar11 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar19)(plVar19);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar19 + 0xc);
                    iVar9 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plVar19 + 8))(plVar19,1);
                    }
                  }
                }
                plVar19 = *(longlong **)(lVar16 + 8);
                if (plVar19 != (longlong *)0x0) {
                  LOCK();
                  plVar4 = plVar19 + 1;
                  lVar11 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar19)(plVar19);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar19 + 0xc);
                    iVar9 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plVar19 + 8))(plVar19,1);
                    }
                  }
                }
                FText::operator=(local_568,local_4f0);
                if (local_4e8 != (longlong *)0x0) {
                  LOCK();
                  plVar19 = local_4e8 + 1;
                  lVar11 = *plVar19;
                  *(int *)plVar19 = (int)*plVar19 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_4e8)(local_4e8);
                    LOCK();
                    piVar2 = (int *)((longlong)local_4e8 + 0xc);
                    iVar9 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*local_4e8 + 8))(local_4e8,1);
                    }
                  }
                }
                if (local_488 != (longlong *)0x0) {
                  LOCK();
                  plVar19 = local_488 + 1;
                  lVar11 = *plVar19;
                  *(int *)plVar19 = (int)*plVar19 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_488)(local_488);
                    LOCK();
                    piVar2 = (int *)((longlong)local_488 + 0xc);
                    iVar9 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*local_488 + 8))(local_488,1);
                    }
                  }
                }
                if (local_518[0] != 0) {
                  FMemory::Free();
                }
                if (local_4d0 != (longlong *)0x0) {
                  LOCK();
                  plVar19 = local_4d0 + 1;
                  lVar11 = *plVar19;
                  *(int *)plVar19 = (int)*plVar19 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_4d0)(local_4d0);
                    LOCK();
                    piVar2 = (int *)((longlong)local_4d0 + 0xc);
                    iVar9 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*local_4d0 + 8))(local_4d0,1);
                    }
                  }
                }
                plVar19 = plStack_620;
                if (plStack_620 != (longlong *)0x0) {
                  LOCK();
                  plVar4 = plStack_620 + 1;
                  lVar11 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plStack_620)(plStack_620);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar19 + 0xc);
                    iVar9 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plStack_620 + 8))(plStack_620,1);
                    }
                  }
                }
                if (plStack_570 != (longlong *)0x0) {
                  LOCK();
                  plVar19 = plStack_570 + 1;
                  lVar11 = *plVar19;
                  *(int *)plVar19 = (int)*plVar19 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plStack_570)(plStack_570);
                    LOCK();
                    piVar2 = (int *)((longlong)plStack_570 + 0xc);
                    iVar9 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plStack_570 + 8))(plStack_570,1);
                    }
                  }
                }
                param_2 = local_650;
                param_1 = local_658;
                lVar11 = local_648;
                lVar16 = local_640;
                if (plStack_610 != (longlong *)0x0) {
                  LOCK();
                  plVar19 = plStack_610 + 1;
                  lVar10 = *plVar19;
                  *(int *)plVar19 = (int)*plVar19 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*plStack_610)(plStack_610);
                    LOCK();
                    piVar2 = (int *)((longlong)plStack_610 + 0xc);
                    iVar9 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    param_2 = local_650;
                    param_1 = local_658;
                    lVar11 = local_648;
                    lVar16 = local_640;
                    if (iVar9 == 1) {
                      (**(code **)(*plStack_610 + 8))(plStack_610,1);
                      param_2 = local_650;
                      param_1 = local_658;
                      lVar11 = local_648;
                      lVar16 = local_640;
                    }
                  }
                }
              }
            }
            local_108 = 0xffffffff;
            local_138 = 0;
            local_130 = 0;
            local_118 = 0;
            local_110 = 0;
            local_104 = 0;
            local_f8 = 0;
            local_f0 = 0;
            local_e8[0] = 4;
            FText::FText(local_d8,local_568);
            local_c0 = '\x01';
            local_608[0] = 0;
            local_608[1] = 0xb;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_608,0);
            FGenericPlatformString::Memcpy(local_608[0],L"PlayerName",0x16);
            local_5c0 = local_608;
            local_5b8 = local_e8;
            FUN_1407484b0(&local_138,local_638,&local_5c0,0);
            if (local_608[0] != 0) {
              FMemory::Free();
            }
            if ((local_c0 != '\0') && (local_c0 = '\0', local_d0 != (longlong *)0x0)) {
              LOCK();
              plVar19 = local_d0 + 1;
              lVar10 = *plVar19;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_d0)(local_d0);
                LOCK();
                piVar2 = (int *)((longlong)local_d0 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*local_d0 + 8))(local_d0,1);
                }
              }
            }
            uVar12 = FTextFormat::FTextFormat(local_450,lVar11);
            uVar12 = FText::Format(local_478,uVar12,&local_138);
            FText::operator=(local_550,uVar12);
            if (local_470 != (longlong *)0x0) {
              LOCK();
              plVar19 = local_470 + 1;
              lVar11 = *plVar19;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*local_470)(local_470);
                LOCK();
                piVar2 = (int *)((longlong)local_470 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*local_470 + 8))(local_470,1);
                }
              }
            }
            local_f0 = 0;
            if (local_f8 != 0) {
              FMemory::Free();
            }
            TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                      (&local_138);
            if (local_560 != (longlong *)0x0) {
              LOCK();
              plVar19 = local_560 + 1;
              lVar11 = *plVar19;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*local_560)(local_560);
                LOCK();
                piVar2 = (int *)((longlong)local_560 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*local_560 + 8))(local_560,1);
                }
              }
            }
          }
          local_668 = uVar3;
          FUN_1411db1a0(param_1,param_2,lVar16,local_550);
          if (local_548 == (longlong *)0x0) {
            return param_2;
          }
          goto LAB_1411daa1b;
        }
      }
    }
LAB_1411da07b:
    lVar11 = FUN_1411c9410(local_2a8);
    *param_2 = *(undefined8 *)(lVar11 + 0x140);
    FUN_1411ca750(local_2a8);
  }
  else {
    uVar3 = *(undefined4 *)(lVar11 + 0x890);
    uVar12 = FText::FromString(local_4c0,param_3 + 0x18);
    uVar13 = FUN_1404b03b0();
    local_668 = uVar3;
    FUN_1411db1a0(param_1,param_2,uVar13,uVar12);
    local_548 = local_4b8;
    if (local_4b8 != (longlong *)0x0) {
LAB_1411daa1b:
      LOCK();
      plVar19 = local_548 + 1;
      lVar11 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_548)(local_548);
        LOCK();
        piVar2 = (int *)((longlong)local_548 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_548 + 8))(local_548,1);
        }
      }
    }
  }
  return param_2;
code_r0x0001411da071:
  iVar9 = *(int *)(lVar16 + 0x58 + lVar11);
  if (iVar9 == -1) goto LAB_1411da07b;
  goto LAB_1411da060;
}



// FUNCTION 1411daa60 FUN_1411daa60 body=1846 status=ok
// SIG undefined FUN_1411daa60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1411daa60(longlong param_1,undefined8 *param_2,longlong param_3,int param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 auStack_558 [32];
  longlong local_538 [7];
  undefined1 local_500 [4];
  undefined1 local_4fc [4];
  undefined1 local_4f8 [8];
  undefined8 local_4f0;
  undefined8 *local_4e8;
  longlong *local_4e0;
  undefined4 *local_4d8;
  longlong *local_4d0;
  undefined4 *local_4c8;
  undefined8 local_4c0;
  longlong *plStack_4b8;
  longlong *local_4b0;
  undefined4 *local_4a8;
  undefined1 local_4a0 [8];
  undefined1 local_498 [8];
  longlong *local_490;
  undefined1 local_480 [8];
  longlong *local_478;
  undefined1 local_468 [8];
  longlong *local_460;
  undefined1 local_450 [8];
  longlong *local_448;
  undefined1 local_438 [16];
  undefined1 local_428 [48];
  undefined1 local_3f8 [48];
  undefined1 local_3c8 [24];
  wchar_t *local_3b0;
  int local_3a8;
  int local_3a4;
  undefined1 local_38f;
  undefined4 local_388;
  undefined8 local_2e8;
  undefined1 local_2b8 [368];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  undefined4 local_f8 [4];
  undefined1 local_e8 [8];
  longlong *local_e0;
  char local_d0;
  undefined4 local_c8 [4];
  undefined1 local_b8 [8];
  longlong *local_b0;
  char local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_558;
  local_538[6] = param_6;
  local_4f0 = param_7;
  local_4e8 = param_2;
  FUN_1411c9410(local_428);
  if (*(longlong *)(param_1 + 0x78) == 0) goto LAB_1411db15b;
  if ((*(longlong *)(param_1 + 0x58) == 0) ||
     (plVar7 = (longlong *)FUN_1422312c0(), plVar7 == (longlong *)0x0)) {
LAB_1411dab30:
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_14141f270();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1411dab30;
    lVar8 = (**(code **)(*plVar7 + 0x148))(plVar7);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = *(longlong *)(DAT_146b33f38 + 0x98);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_140cff230();
  }
  if (((((lVar8 != 0) && (lVar3 != 0)) && (lVar9 != 0)) &&
      ((1 < *(int *)(param_3 + 8) && (0 < param_4)))) &&
     ((cVar6 = FText::IsEmpty(param_5), cVar6 == '\0' &&
      (cVar6 = FText::IsEmpty(local_538[6]), cVar6 == '\0')))) {
    local_148 = 0;
    local_140 = 0;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0xffffffff;
    local_114 = 0;
    local_108 = 0;
    local_100 = 0;
    uVar10 = FText::FromString(local_480,param_3);
    local_f8[0] = 4;
    FText::FText(local_e8,uVar10);
    local_d0 = '\x01';
    local_538[0] = 0;
    local_538[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_538,0);
    FGenericPlatformString::Memcpy(local_538[0],L"PlayerName",0x16);
    local_4e0 = local_538;
    local_4d8 = local_f8;
    FUN_1407484b0(&local_148,local_500,&local_4e0,0);
    if (local_538[0] != 0) {
      FMemory::Free();
    }
    if ((local_d0 != '\0') && (local_d0 = '\0', local_e0 != (longlong *)0x0)) {
      LOCK();
      plVar7 = local_e0 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    if (local_478 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_478 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_478)(local_478);
        LOCK();
        piVar1 = (int *)((longlong)local_478 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_478 + 8))(local_478,1);
        }
      }
    }
    local_4c0 = 0;
    plStack_4b8 = (longlong *)0x0;
    uVar10 = FText::AsNumber(local_468,param_4,0,&local_4c0);
    local_c8[0] = 4;
    FText::FText(local_b8,uVar10);
    local_a0 = '\x01';
    local_538[2] = 0;
    local_538[3] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_538 + 2,0);
    FGenericPlatformString::Memcpy(local_538[2],L"Level",0xc);
    local_4d0 = local_538 + 2;
    local_4c8 = local_c8;
    FUN_1407484b0(&local_148,local_4fc,&local_4d0,0);
    if (local_538[2] != 0) {
      FMemory::Free();
    }
    if ((local_a0 != '\0') && (local_a0 = '\0', local_b0 != (longlong *)0x0)) {
      LOCK();
      plVar7 = local_b0 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    if (local_460 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_460 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_460)(local_460);
        LOCK();
        piVar1 = (int *)((longlong)local_460 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_460 + 8))(local_460,1);
        }
      }
    }
    plVar7 = plStack_4b8;
    if (plStack_4b8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_4b8 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_4b8)(plStack_4b8);
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
    local_98[0] = 4;
    FText::FText(local_88,param_5);
    local_70 = '\x01';
    local_538[4] = 0;
    local_538[5] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_538 + 4,0);
    FGenericPlatformString::Memcpy(local_538[4],L"ClassName",0x14);
    local_4b0 = local_538 + 4;
    local_4a8 = local_98;
    FUN_1407484b0(&local_148,local_4f8,&local_4b0,0);
    if (local_538[4] != 0) {
      FMemory::Free();
    }
    if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
      LOCK();
      plVar7 = local_80 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_450,L"{PlayerName} - Lvl. {Level} {ClassName}",L"OakSocialEvent",
                        L"SocialEventTitleText");
    uVar10 = FTextFormat::FTextFormat(local_438,uVar10);
    FText::Format(local_498,uVar10,&local_148);
    if (local_448 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_448 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_448)(local_448);
        LOCK();
        piVar1 = (int *)((longlong)local_448 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_448 + 8))(local_448,1);
        }
      }
    }
    cVar6 = *(char *)(lVar9 + 0x250);
    uVar12 = 0x40800000;
    if (cVar6 == '\0') {
      uVar12 = *(undefined4 *)(lVar3 + 0x68);
    }
    else if (cVar6 == '\x01') {
      uVar12 = *(undefined4 *)(lVar3 + 0x6c);
    }
    else if (cVar6 == '\x02') {
      uVar12 = *(undefined4 *)(lVar3 + 0x70);
    }
    uVar10 = FUN_1411c9410(local_2b8);
    FUN_1411cbfb0(local_428,uVar10);
    FUN_1411ca750(local_2b8);
    FText::operator=(local_428,local_498);
    FText::operator=(local_3f8,local_538[6]);
    FText::operator=(local_3c8,local_4f0);
    local_38f = 1;
    local_388 = uVar12;
    if (local_3b0 != L"DefaultFrame") {
      local_3a8 = 0;
      iVar11 = 0;
      if (local_3a4 != 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_3b0,0xd);
        iVar11 = local_3a8;
      }
      local_3a8 = iVar11 + 0xd;
      if (local_3a4 < local_3a8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3b0);
      }
      builtin_wcsncpy(local_3b0,L"DefaultFrame",0xd);
    }
    FUN_1411d2ce0(*(undefined8 *)(param_1 + 0x78),local_4a0,local_428);
    if (local_490 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_490 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_490)(local_490);
        LOCK();
        piVar1 = (int *)((longlong)local_490 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_490 + 8))(local_490,1);
        }
      }
    }
    local_100 = 0;
    if (local_108 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_148);
  }
LAB_1411db15b:
  puVar5 = local_4e8;
  *local_4e8 = local_2e8;
  FUN_1411ca750(local_428);
  return puVar5;
}



// FUNCTION 1411db1a0 FUN_1411db1a0 body=528 status=ok
// SIG undefined FUN_1411db1a0(void)

undefined8 *
FUN_1411db1a0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             float param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined4 local_308 [4];
  undefined1 local_2f8 [136];
  undefined8 local_270;
  undefined8 local_268;
  undefined1 local_25f;
  float local_258;
  undefined1 local_254;
  undefined8 local_1b8;
  undefined1 local_188 [368];
  
  FUN_1411c9410(local_2f8);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    if (*(longlong *)(param_1 + 0x58) == 0) {
LAB_1411db263:
      lVar2 = 0;
    }
    else {
      plVar3 = (longlong *)FUN_1422312c0();
      if (plVar3 == (longlong *)0x0) goto LAB_1411db263;
      lVar2 = FUN_14141f270();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_1411db263;
      lVar2 = (**(code **)(*plVar3 + 0x148))(plVar3);
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_140cff230();
    }
    if (lVar2 != 0) {
      if (*(longlong **)(param_1 + 0x58) == (longlong *)0x0) {
LAB_1411db2a5:
        local_res8 = 0;
      }
      else {
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x148))();
        if (lVar2 == 0) goto LAB_1411db2a5;
        local_res8 = *(undefined4 *)(lVar2 + 0x790);
      }
      local_308[0] = 2;
      uVar4 = FUN_1404b03b0();
      uVar4 = FUN_1411c91b0(local_188,param_3,uVar4,param_4,local_308,&local_res8);
      FUN_1411cbfb0(local_2f8,uVar4);
      FUN_1411ca750(local_188);
      FName::FName(&local_res8,L"Network_PL_Joined",1);
      local_270 = CONCAT44(uStackX_c,local_res8);
      FName::FName(&local_res8,L"Network_PL_Leaves",1);
      local_268 = CONCAT44(uStackX_c,local_res8);
      local_254 = 1;
      local_25f = 1e-08 < param_5;
      if ((bool)local_25f) {
        local_258 = param_5;
      }
      FUN_1411d2ce0(*(undefined8 *)(param_1 + 0x78),&local_res8,local_2f8);
      *param_2 = local_1b8;
      goto LAB_1411db38a;
    }
  }
  lVar2 = FUN_1411c9410(local_188);
  *param_2 = *(undefined8 *)(lVar2 + 0x140);
  FUN_1411ca750(local_188);
LAB_1411db38a:
  FUN_1411ca750(local_2f8);
  return param_2;
}



// FUNCTION 1411db3b0 FUN_1411db3b0 body=307 status=ok
// SIG undefined FUN_1411db3b0(void)

undefined8 *
FUN_1411db3b0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  undefined1 local_2e8 [152];
  undefined1 local_250;
  undefined1 local_24f;
  undefined4 local_248;
  undefined1 local_244;
  undefined8 local_1a8;
  undefined1 local_178 [368];
  
  FUN_1411c9410(local_2e8);
  if (*(longlong *)(param_1 + 0x70) == 0) goto LAB_1411db4b2;
  if (*(longlong **)(param_1 + 0x58) == (longlong *)0x0) {
LAB_1411db409:
    local_res8[0] = 0;
  }
  else {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x148))();
    if (lVar1 == 0) goto LAB_1411db409;
    local_res8[0] = *(undefined4 *)(lVar1 + 0x790);
  }
  uVar2 = FUN_1411c91b0(local_178,param_3,param_4,param_5,&stack0x00000040,local_res8);
  FUN_1411cbfb0(local_2e8,uVar2);
  FUN_1411ca750(local_178);
  local_248 = param_6;
  local_244 = param_7;
  local_250 = param_7;
  local_24f = 1;
  FUN_1411d2ce0(*(undefined8 *)(param_1 + 0x70),local_res8,local_2e8);
  FUN_1411fe4d0(param_1);
LAB_1411db4b2:
  *param_2 = local_1a8;
  FUN_1411ca750(local_2e8);
  return param_2;
}



// FUNCTION 1411db4f0 FUN_1411db4f0 body=115 status=ok
// SIG undefined FUN_1411db4f0(void)

undefined8
FUN_1411db4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1404b03b0();
  FUN_1411db3b0(param_1,param_2,param_3,uVar1,param_4,param_5,param_6,param_7);
  return param_2;
}



// FUNCTION 1411db570 FUN_1411db570 body=134 status=ok
// SIG undefined FUN_1411db570(void)

undefined8
FUN_1411db570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1404b03b0();
  uVar2 = FUN_1404b03b0();
  FUN_1411db3b0(param_1,param_2,param_3,uVar2,uVar1,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 1411db600 FUN_1411db600 body=267 status=ok
// SIG undefined FUN_1411db600(void)

undefined8 *
FUN_1411db600(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
             undefined1 param_9)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  undefined1 local_2e8 [152];
  undefined1 local_250;
  undefined1 local_24f;
  undefined4 local_248;
  undefined1 local_244;
  undefined8 local_1a8;
  undefined1 local_178 [368];
  
  FUN_1411c9410(local_2e8);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    uVar1 = FUN_1411d4c90(param_1,local_178,param_3,param_4,param_5,param_9,param_8);
    FUN_1411cbfb0(local_2e8,uVar1);
    FUN_1411ca750(local_178);
    local_248 = param_6;
    local_244 = param_7;
    local_250 = param_7;
    local_24f = 1;
    FUN_1411d2ce0(*(undefined8 *)(param_1 + 0x70),local_res8,local_2e8);
    FUN_1411fe4d0(param_1);
  }
  *param_2 = local_1a8;
  FUN_1411ca750(local_2e8);
  return param_2;
}



// FUNCTION 1411db710 FUN_1411db710 body=268 status=ok
// SIG undefined FUN_1411db710(void)

undefined8 *
FUN_1411db710(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  undefined1 local_2f8 [152];
  undefined1 local_260;
  undefined1 local_25f;
  undefined4 local_258;
  undefined1 local_254;
  undefined8 local_1b8;
  undefined1 local_188 [368];
  
  uVar1 = FUN_1404b03b0();
  FUN_1411c9410(local_2f8);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    uVar1 = FUN_1411d4c90(param_1,local_188,param_3,uVar1,param_4,param_8,param_7);
    FUN_1411cbfb0(local_2f8,uVar1);
    FUN_1411ca750(local_188);
    local_258 = param_5;
    local_254 = param_6;
    local_260 = param_6;
    local_25f = 1;
    FUN_1411d2ce0(*(undefined8 *)(param_1 + 0x70),local_res8,local_2f8);
    FUN_1411fe4d0(param_1);
  }
  *param_2 = local_1b8;
  FUN_1411ca750(local_2f8);
  return param_2;
}



// FUNCTION 1411db820 FUN_1411db820 body=274 status=ok
// SIG undefined FUN_1411db820(void)

undefined8 *
FUN_1411db820(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined1 local_2f8 [153];
  undefined1 local_25f;
  undefined4 local_258;
  undefined8 local_1b8;
  undefined1 local_188 [368];
  
  FUN_1411c9410(local_2f8);
  if (*(longlong *)(param_1 + 0x68) == 0) goto LAB_1411db907;
  if (*(longlong **)(param_1 + 0x58) == (longlong *)0x0) {
LAB_1411db871:
    local_res8[0] = 0;
  }
  else {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x148))();
    if (lVar1 == 0) goto LAB_1411db871;
    local_res8[0] = *(undefined4 *)(lVar1 + 0x790);
  }
  local_res10[0] = 2;
  uVar2 = FUN_1411c91b0(local_188,param_3,param_4,param_5,local_res10,local_res8);
  FUN_1411cbfb0(local_2f8,uVar2);
  FUN_1411ca750(local_188);
  local_258 = param_6;
  local_25f = 1;
  FUN_1411d2ce0(*(undefined8 *)(param_1 + 0x68),local_res8,local_2f8);
LAB_1411db907:
  *param_2 = local_1b8;
  FUN_1411ca750(local_2f8);
  return param_2;
}



// FUNCTION 1411db940 FUN_1411db940 body=209 status=ok
// SIG undefined FUN_1411db940(void)

void FUN_1411db940(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xe0);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0xe0);
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
    *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) & 0xbfffffff;
    FWeakObjectPtr::operator=(&local_res8,0);
    *(undefined4 *)(param_1 + 0xe0) = local_res8;
    *(undefined4 *)(param_1 + 0xe4) = local_resc;
  }
  cVar2 = FPreLoadScreenManager::ArePreLoadScreensEnabled();
  if (cVar2 != '\0') {
    plVar5 = (longlong *)GetMoviePlayer();
    cVar2 = (**(code **)(*plVar5 + 0x60))(plVar5);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined1 *)(param_1 + 0x38) = 1;
      FUN_1411e7a30(param_1,0,0);
      *(undefined1 *)(param_1 + 0x38) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 3;
  return;
}



// FUNCTION 1411dba20 FUN_1411dba20 body=1622 status=ok
// SIG undefined FUN_1411dba20(void)

undefined8 FUN_1411dba20(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  void *_Src;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  longlong lVar15;
  PSRWLOCK pRVar16;
  bool bVar17;
  undefined8 *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  int *local_68;
  longlong *local_60;
  undefined8 **local_58;
  PSRWLOCK local_50;
  
  pRVar16 = (PSRWLOCK)(param_1 + 0x68);
  local_50 = pRVar16;
  AcquireSRWLockShared(pRVar16);
  plVar8 = *(longlong **)(param_1 + 0x58);
  plVar11 = plVar8 + (longlong)*(int *)(param_1 + 0x60) * 2;
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  local_58 = (undefined8 **)(param_1 + 0x58);
  uVar5 = local_a0;
  for (; local_a0 = uVar5, plVar8 != plVar11; plVar8 = plVar8 + 2) {
    LOCK();
    bVar17 = *(int *)(*plVar8 + 0x70c) == 0;
    if (bVar17) {
      *(int *)(*plVar8 + 0x70c) = 0;
    }
    UNLOCK();
    if (bVar17) {
      local_a0._0_4_ = (int)uVar5;
      lVar12 = (longlong)(int)local_a0;
      local_a0._0_4_ = (int)local_a0 + 1;
      local_a0._4_4_ = (int)(uVar5 >> 0x20);
      if (local_a0._4_4_ < (int)local_a0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_a8,uVar5 & 0xffffffff);
      }
      local_a8[lVar12 * 2] = *plVar8;
      lVar7 = plVar8[1];
      (local_a8 + lVar12 * 2)[1] = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
    }
    uVar5 = local_a0;
  }
  ReleaseSRWLockShared(pRVar16);
  local_60 = local_a8 + (longlong)(int)local_a0 * 2;
  ppuVar14 = (undefined8 **)(param_1 + 0x58);
  if (local_a8 != local_60) {
    local_68 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
    plVar8 = local_a8;
    do {
      plVar11 = (longlong *)plVar8[1];
      lVar12 = *plVar8;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      pRVar16 = (PSRWLOCK)(lVar12 + 0x80);
      local_78 = lVar12;
      AcquireSRWLockShared(pRVar16);
      iVar10 = *(int *)(lVar12 + 0x70);
      ReleaseSRWLockShared(pRVar16);
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
      if ((-1 < iVar10) && (iVar10 < *(int *)(param_1 + 0x44))) {
        iVar6 = *(int *)(param_1 + 0x90);
        *(int *)(param_1 + 0x90) = iVar6 + 1;
        if (*(int *)(param_1 + 0x94) < iVar6 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x88,iVar6);
        }
        *(int *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar6 * 4) = iVar10;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
      AcquireSRWLockShared(pRVar16);
      plVar4 = *(longlong **)(lVar12 + 0x68);
      plVar1 = (longlong *)(lVar12 + 0x60);
      lVar7 = *plVar1;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      ReleaseSRWLockShared(pRVar16);
      lVar15 = lVar12;
      if (lVar7 != 0) {
        AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x80));
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        iVar10 = *(int *)(param_1 + 0x78);
        *(int *)(param_1 + 0x78) = iVar10 + 1;
        if (*(int *)(param_1 + 0x7c) < iVar10 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x70,iVar10);
        }
        lVar15 = *(longlong *)(param_1 + 0x70);
        *(longlong *)(lVar15 + (longlong)iVar10 * 0x10) = lVar7;
        *(longlong **)(lVar15 + 8 + (longlong)iVar10 * 0x10) = plVar4;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar4 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            iVar10 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x80));
        lVar15 = local_78;
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          iVar10 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      AcquireSRWLockExclusive(pRVar16);
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      if (plVar1 != &local_88) {
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar12 + 0x68,&plStack_80);
        plVar1 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar4 = plStack_80 + 1;
          lVar12 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            iVar10 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plStack_80 + 8))(plStack_80,1);
            }
          }
        }
      }
      ReleaseSRWLockExclusive(pRVar16);
      AcquireSRWLockShared(pRVar16);
      lVar12 = FUN_1416f8720(*(undefined4 *)(lVar15 + 0x58));
      ReleaseSRWLockShared(pRVar16);
      if (lVar12 != 0) {
        iVar10 = *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x30) = iVar10 + 1;
        if (*(int *)(param_1 + 0x34) < iVar10 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar10);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10 * 8) = lVar12;
      }
      if ((*local_68 < DAT_146876aa8) && (_Init_thread_header(&DAT_146876aa8), DAT_146876aa8 == -1))
      {
        FName::FName(&DAT_146876aa0,L"OnlineSubsystemUtils",1);
        _Init_thread_footer(&DAT_146876aa8);
      }
      lVar7 = FModuleManager::GetModulePtr_Internal(DAT_146876aa0);
      lVar12 = 0;
      if (lVar7 != 0) {
        lVar12 = *(longlong *)(lVar7 + 0x18);
      }
      pRVar16 = (PSRWLOCK)(lVar15 + 0x50);
      AcquireSRWLockShared(pRVar16);
      iVar10 = *(int *)(lVar15 + 0x48);
      ReleaseSRWLockShared(pRVar16);
      iVar6 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar6 = 0;
      }
      if ((0 < iVar6) && (lVar12 != 0)) {
        AcquireSRWLockShared(pRVar16);
        local_98 = (void *)0x0;
        local_90 = *(int *)(lVar15 + 0x48);
        lVar7 = (longlong)local_90;
        _Src = *(void **)(lVar15 + 0x40);
        if (local_90 == 0) {
          local_8c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
          _guard_xfg_dispatch_icall_nop(local_98,_Src,lVar7 * 2);
        }
        ReleaseSRWLockShared(pRVar16);
        FUN_1404c7090(lVar12,&local_98);
        if (local_98 != (void *)0x0) {
          FMemory::Free();
        }
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar11 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar3 = (int *)((longlong)plVar11 + 0xc);
          iVar10 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar8 = plVar8 + 2;
      ppuVar14 = local_58;
      pRVar16 = local_50;
    } while (plVar8 != local_60);
  }
  AcquireSRWLockShared(pRVar16);
  plVar8 = *ppuVar14;
  plVar11 = plVar8 + (longlong)*(int *)(ppuVar14 + 1) * 2;
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  uVar5 = local_b0;
  for (; local_b0 = uVar5, plVar8 != plVar11; plVar8 = plVar8 + 2) {
    LOCK();
    bVar17 = *(int *)(*plVar8 + 0x70c) == 0;
    if (bVar17) {
      *(int *)(*plVar8 + 0x70c) = 0;
    }
    UNLOCK();
    if (!bVar17) {
      local_b0._0_4_ = (int)uVar5;
      lVar12 = (longlong)(int)local_b0;
      local_b0._0_4_ = (int)local_b0 + 1;
      local_b0._4_4_ = (int)(uVar5 >> 0x20);
      if (local_b0._4_4_ < (int)local_b0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_b8,uVar5 & 0xffffffff);
      }
      local_b8[lVar12 * 2] = *plVar8;
      lVar7 = plVar8[1];
      (local_b8 + lVar12 * 2)[1] = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
    }
    uVar5 = local_b0;
  }
  ReleaseSRWLockShared(pRVar16);
  AcquireSRWLockExclusive(pRVar16);
  if (ppuVar14 != &local_b8) {
    iVar10 = *(int *)(ppuVar14 + 1);
    if (iVar10 != 0) {
      plVar8 = *ppuVar14 + 1;
      do {
        plVar11 = (longlong *)*plVar8;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar11 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar3 = (int *)((longlong)plVar11 + 0xc);
            iVar6 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        plVar8 = plVar8 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = (int)local_b0;
    *(int *)(ppuVar14 + 1) = (int)local_b0;
    if (((int)local_b0 == 0) && (*(int *)((longlong)ppuVar14 + 0xc) == 0)) {
      *(undefined4 *)((longlong)ppuVar14 + 0xc) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(ppuVar14,local_b0 & 0xffffffff);
      puVar13 = *ppuVar14;
      puVar9 = local_b8;
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar13 = *puVar9;
        lVar12 = puVar9[1];
        puVar13[1] = lVar12;
        if (lVar12 != 0) {
          LOCK();
          *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
          UNLOCK();
        }
        puVar13 = puVar13 + 2;
        puVar9 = puVar9 + 2;
      }
    }
  }
  ReleaseSRWLockExclusive(pRVar16);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_b8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_a8);
  return 1;
}



// FUNCTION 1411dc080 FUN_1411dc080 body=2129 status=ok
// SIG undefined FUN_1411dc080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411dc080(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_448 [32];
  undefined8 *local_428;
  undefined4 *local_420;
  undefined *local_418;
  float local_408;
  float fStack_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  float local_3e0 [2];
  longlong *local_3d8;
  longlong *local_3d0;
  longlong local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  longlong *local_390;
  undefined8 local_388;
  int local_380;
  undefined1 local_37c;
  undefined1 local_378 [8];
  longlong *local_370;
  undefined **local_358;
  float local_350;
  float fStack_34c;
  undefined4 local_344;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  float local_320;
  float local_31c;
  undefined4 local_2d8;
  undefined1 local_2d4;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [56];
  longlong *local_270;
  undefined **local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined4 local_21c;
  uint local_218;
  uint local_214;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined2 local_1d0;
  undefined1 local_1ce;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined1 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 local_1b0 [136];
  undefined1 local_128 [24];
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined1 local_bc;
  undefined1 local_b8;
  ulonglong local_b0;
  
  if (param_2 == 0) {
    return;
  }
  local_b0 = DAT_1468387a8 ^ (ulonglong)auStack_448;
  if (*(longlong *)(param_2 + 0x58) == 0) {
    return;
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 4);
  if (cVar6 == '\0') {
    return;
  }
  lVar9 = FWeakObjectPtr::Get(param_1 + 4);
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
  cVar6 = FUN_140becb30(lVar9);
  if (cVar6 == '\0') {
    return;
  }
  cVar6 = FUN_140bc9f40(lVar9);
  if (cVar6 == '\0') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 200));
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0xc0);
  if (cVar6 == '\0') goto LAB_1411dc85c;
  uVar7 = FUN_141a00660();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146876ab4) && (_Init_thread_header(&DAT_146876ab4), DAT_146876ab4 == -1))
  {
    DAT_146876ab0 = FUN_141a00610();
    _Init_thread_footer(&DAT_146876ab4);
  }
  uVar8 = FUN_141a00540();
  if (DAT_146876ab0 == 0) {
    DAT_146876ab0 = uVar8;
  }
  if (uVar8 == 0) goto LAB_1411dc85c;
  uVar11 = (ulonglong)DAT_146876ab0;
  puVar12 = (uint *)(**(code **)(**(longlong **)(param_2 + 0x58) + 0x20))
                              (*(longlong **)(param_2 + 0x58),local_2b8);
  uVar8 = *puVar12;
  lVar9 = (**(code **)(**(longlong **)(param_2 + 0x58) + 0x20))
                    (*(longlong **)(param_2 + 0x58),local_2b0);
  uVar4 = *(uint *)(lVar9 + 4);
  fVar13 = (float)uVar8 * _DAT_1462a1fd4;
  fVar14 = (float)DAT_1462a1fd0;
  local_408 = ((float)uVar8 - fVar13) * 0.5;
  fStack_404 = (float)uVar4 * 0.5;
  lVar9 = FWeakObjectPtr::Get(param_1 + 0xc0);
  local_428 = (undefined8 *)&local_2d8;
  local_2d8 = 0;
  local_2c8 = DAT_1464aa6e0;
  uStack_2c4 = DAT_1464aa6e4;
  uStack_2c0 = DAT_1464aa6e8;
  uStack_2bc = DAT_1464aa6ec;
  local_2d4 = 0;
  local_2d0 = 0;
  FSlateFontInfo::FSlateFontInfo(local_2a8,lVar9,*(undefined4 *)(lVar9 + 0x13c),lVar9 + 0x140);
  if (local_270 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_270 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_270)(local_270);
      LOCK();
      piVar2 = (int *)((longlong)local_270 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_270 + 8))(local_270,1);
      }
    }
  }
  local_418 = &DAT_1462a1fb0;
  local_420 = &local_400;
  local_400 = 0x3f800000;
  local_428 = &local_3f8;
  local_3fc = 0x3f800000;
  local_3f8 = 0;
  local_3f0 = 0;
  local_3e8 = 0;
  FCanvasTileItem::FCanvasTileItem(&local_358,&local_3e8,DAT_146ac3d68,&local_3f0);
  local_344 = 0;
  local_320 = fVar14 + fVar14 + fVar13;
  local_31c = fVar14 + fVar14 + 40.0;
  _local_350 = CONCAT44((fStack_404 - fVar14) + 20.0,local_408 - fVar14);
  local_330 = _DAT_1462a1fc0;
  uStack_32c = uRam00000001462a1fc4;
  uStack_328 = uRam00000001462a1fc8;
  uStack_324 = uRam00000001462a1fcc;
  FCanvas::DrawItem(param_2,&local_358);
  local_31c = 40.0;
  local_330 = _DAT_1462a1fa0;
  uStack_32c = uRam00000001462a1fa4;
  uStack_328 = uRam00000001462a1fa8;
  uStack_324 = uRam00000001462a1fac;
  _local_350 = CONCAT44(fStack_404 + 20.0,local_408);
  local_320 = fVar13;
  FCanvas::DrawItem(param_2,&local_358);
  local_31c = 40.0;
  local_330 = _DAT_1462a1fb0;
  uStack_32c = uRam00000001462a1fb4;
  uStack_328 = uRam00000001462a1fb8;
  uStack_324 = uRam00000001462a1fbc;
  _local_350 = CONCAT44(fStack_404 + 20.0,local_408);
  local_320 = fVar13 * ((float)uVar7 / (float)uVar11);
  FCanvas::DrawItem(param_2,&local_358);
  FUN_1417efd90(&local_3c8);
  local_3c8 = FWeakObjectPtr::Get(param_1 + 0xc0);
  fVar14 = (float)*(int *)(*(longlong *)(param_1 + 0xd0) + 0x358) * (float)uVar4 * 0.0013888889;
  local_380 = (int)ROUND((fVar14 + fVar14) - 0.5) >> 1;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_378,L"Optimizing Shaders...",L"OakLoadingScreen",L"OakLoadingScreen_DX12Init");
  local_250 = CONCAT44(fStack_404,local_408);
  local_218 = local_218 & 0xfffffffc;
  local_214 = local_214 & 0xfffffffe;
  local_230 = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
  uStack_228 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_258 = &PTR__scalar_deleting_destructor__1444d54b8;
  local_210 = 0;
  uStack_208 = 0;
  local_220 = 0;
  local_1e0 = (undefined4)DAT_1468b5d88;
  uStack_1dc = DAT_1468b5d88._4_4_;
  uStack_1d8 = (undefined4)DAT_1468b5d88;
  uStack_1d4 = DAT_1468b5d88._4_4_;
  local_21c = 0x3f800000;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1d0 = 0;
  local_1f0 = DAT_1464aa6e0;
  uStack_1ec = DAT_1464aa6e4;
  uStack_1e8 = DAT_1464aa6e8;
  uStack_1e4 = DAT_1464aa6ec;
  local_1ce = 0;
  local_1cc = DAT_1464aa6e0;
  uStack_1c8 = DAT_1464aa6e4;
  uStack_1c4 = DAT_1464aa6e8;
  uStack_1c0 = DAT_1464aa6ec;
  local_1bc = 1;
  FCanvasTileItem::FCanvasTileItem(local_1b0,&local_408,&DAT_1468b5d88,&DAT_1464aa6c0);
  local_1b8 = 0x3f800000;
  local_1b4 = 0x3f800000;
  local_248 = CONCAT44(2,(undefined4)local_248);
  local_230 = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
  uStack_228 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
  local_258 = &PTR_FUN_1444d5500;
  FText::FText(local_128,local_378);
  local_110 = local_3c8;
  if (local_3c8 == 0) {
LAB_1411dc655:
    local_110 = 0;
  }
  else {
    lVar10 = UFont::GetPrivateStaticClass();
    lVar9 = *(longlong *)(local_110 + 0x10);
    if ((*(int *)(lVar9 + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar9 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_1411dc655;
  }
  local_108 = local_3c8;
  local_100 = local_3c0;
  local_d8 = local_398;
  local_d0 = local_390;
  local_f8 = local_3b8;
  uStack_f4 = uStack_3b4;
  uStack_f0 = uStack_3b0;
  uStack_ec = uStack_3ac;
  local_e8 = local_3a8;
  uStack_e0 = uStack_3a0;
  if (local_390 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_390 + 1) = (int)local_390[1] + 1;
    UNLOCK();
  }
  local_c8 = local_388;
  local_c0 = local_380;
  local_bc = local_37c;
  local_b8 = 1;
  local_248 = CONCAT44(0xb,(undefined4)local_248);
  FUN_1418388a0(*(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 8),&local_3d8);
  local_428 = (undefined8 *)CONCAT44(local_428._4_4_,0x3f800000);
  (**(code **)(*local_3d8 + 0x10))(local_3d8,local_3e0,local_378,&local_3c8);
  if (local_3d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3d0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_3d0)(local_3d0);
      LOCK();
      piVar2 = (int *)((longlong)local_3d0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3d0 + 8))(local_3d0,1);
      }
    }
  }
  local_1ce = 1;
  local_250 = CONCAT44((local_250._4_4_ - 20.0) - 4.0,
                       (float)local_250 + (fVar13 * 0.5 - local_3e0[0] * 0.5));
  local_1cc = DAT_1464aa6e0;
  uStack_1c8 = DAT_1464aa6e4;
  uStack_1c4 = DAT_1464aa6e8;
  uStack_1c0 = DAT_1464aa6ec;
  FCanvas::DrawItem(param_2,&local_258);
  FUN_140c64b70(&local_258);
  if (local_370 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_370 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_370)(local_370);
      LOCK();
      piVar2 = (int *)((longlong)local_370 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_370 + 8))(local_370,1);
      }
    }
  }
  if (local_390 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_390 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_390)(local_390);
      LOCK();
      piVar2 = (int *)((longlong)local_390 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_390 + 8))(local_390,1);
      }
    }
  }
  local_358 = &PTR_FUN_143f4c5f0;
LAB_1411dc85c:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 200));
  return;
}



// FUNCTION 1411dc8e0 FUN_1411dc8e0 body=2084 status=ok
// SIG undefined FUN_1411dc8e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411dc8e0(longlong param_1,float param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  uint *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_418 [32];
  longlong **local_3f8;
  undefined8 local_3f0;
  float local_3e8;
  float local_3e4;
  undefined2 *local_3e0;
  int local_3d8;
  undefined4 local_3d4;
  longlong *local_3d0;
  ulonglong local_3c8;
  longlong local_3c0;
  undefined8 local_3b8;
  uint local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  PSRWLOCK local_398;
  undefined8 local_390;
  float local_388;
  float local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined8 local_378;
  undefined8 local_370;
  longlong *local_368;
  longlong *local_360;
  longlong local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  longlong *local_320;
  undefined8 local_318;
  int local_310;
  undefined1 local_30c;
  undefined4 local_308;
  undefined1 local_304;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [8];
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined1 local_2a8 [56];
  longlong *local_270;
  int local_260;
  undefined **local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined4 local_21c;
  uint local_218;
  uint local_214;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined2 local_1d0;
  undefined1 local_1ce;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined1 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 local_1b0 [136];
  undefined1 local_128 [24];
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined1 local_bc;
  undefined1 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_1468387a8 ^ (ulonglong)auStack_418;
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    return;
  }
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xe0);
  if (cVar5 == '\0') {
    return;
  }
  *(float *)(param_1 + 0xe8) = param_2 + *(float *)(param_1 + 0xe8);
  puVar6 = (uint *)(**(code **)(**(longlong **)(param_3 + 0x58) + 0x20))
                             (*(longlong **)(param_3 + 0x58),local_2e8);
  local_3b0 = *puVar6;
  lVar7 = (**(code **)(**(longlong **)(param_3 + 0x58) + 0x20))
                    (*(longlong **)(param_3 + 0x58),local_2e0);
  uVar11 = *(uint *)(lVar7 + 4);
  iVar13 = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x358);
  fVar16 = *(float *)(*(longlong *)(param_1 + 0xd0) + 0x35c);
  local_3c0 = 0;
  local_3b8 = 0;
  plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xe0);
  local_3a8 = (longlong)(*(float *)(param_1 + 0xe8) * 1e+07);
  (**(code **)(*plVar8 + 0x280))(plVar8,&local_3a8,&local_3c0);
  local_398 = (PSRWLOCK)(param_1 + 200);
  AcquireSRWLockShared(local_398);
  if (((int)local_3b8 == 0) || (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xc0), cVar5 == '\0'))
  goto LAB_1411dd078;
  local_3e0 = (undefined2 *)0x0;
  local_3d8 = *(int *)(local_3c0 + 0x18);
  lVar7 = (longlong)local_3d8;
  _Src = *(void **)(local_3c0 + 0x10);
  if (local_3d8 == 0) {
    local_3d4 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_3e0,local_3d8,0);
    _guard_xfg_dispatch_icall_nop(local_3e0,_Src,lVar7 * 2);
  }
  FText::FromString(local_2d8,&local_3e0);
  FUN_1417efd90(&local_358);
  local_358 = FWeakObjectPtr::Get(param_1 + 0xc0);
  fVar20 = (float)uVar11;
  fVar18 = fVar20 * 0.0013888889 * (float)iVar13;
  local_310 = (int)ROUND((fVar18 + fVar18) - 0.5) >> 1;
  lVar7 = FWeakObjectPtr::Get(param_1 + 0xc0);
  local_2f8 = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
  uStack_2f0 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
  local_3f8 = (longlong **)&local_308;
  local_308 = 0;
  local_304 = 0;
  local_300 = 0;
  FSlateFontInfo::FSlateFontInfo(local_2a8,lVar7,*(undefined4 *)(lVar7 + 0x13c),lVar7 + 0x140);
  if (local_270 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_270 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_270)(local_270);
      LOCK();
      piVar1 = (int *)((longlong)local_270 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_270 + 8))(local_270,1);
      }
    }
  }
  FUN_1418388a0(*(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 8),&local_368);
  local_3f8 = (longlong **)CONCAT44(local_3f8._4_4_,0x3f800000);
  (**(code **)(*local_368 + 0x18))(local_368,&local_3e8,&local_3e0,&local_358);
  if (local_360 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_360 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_360)(local_360);
      LOCK();
      piVar1 = (int *)((longlong)local_360 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_360 + 8))(local_360,1);
      }
    }
  }
  local_218 = local_218 & 0xfffffffc;
  local_214 = local_214 & 0xfffffffe;
  local_248 = 0;
  fVar19 = (float)local_3b0;
  local_240 = 0;
  local_238 = 0;
  local_258 = &PTR__scalar_deleting_destructor__1444d54b8;
  local_220 = 0;
  local_21c = 0x3f800000;
  local_1d0 = 0;
  local_1ce = 0;
  local_1f0 = DAT_1464aa6e0;
  uStack_1ec = DAT_1464aa6e4;
  uStack_1e8 = DAT_1464aa6e8;
  uStack_1e4 = DAT_1464aa6ec;
  local_1bc = 1;
  fVar17 = (1.0 - fVar16) * fVar20;
  local_1cc = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
  uStack_1c4 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
  local_3a0 = CONCAT44(fVar17 - local_3e4,(fVar19 - local_3e8) * 0.5);
  local_200 = 0;
  uStack_1f8 = 0;
  local_230 = _DAT_1464aa6c0;
  uStack_228 = _DAT_1464aa6c8;
  local_210 = 0;
  uStack_208 = 0;
  local_1e0 = DAT_1468b5d88;
  uStack_1d8 = DAT_1468b5d88;
  local_250 = local_3a0;
  FCanvasTileItem::FCanvasTileItem(local_1b0,&local_3a0,&DAT_1468b5d88,&DAT_1464aa6c0);
  local_1b8 = 0x3f800000;
  local_1b4 = 0x3f800000;
  local_248 = CONCAT44(2,(undefined4)local_248);
  local_230 = _DAT_1464aa6c0;
  uStack_228 = _DAT_1464aa6c8;
  local_258 = &PTR_FUN_1444d5500;
  FText::FText(local_128,local_2d8);
  local_110 = local_358;
  if (local_358 == 0) {
LAB_1411dcd9c:
    local_110 = 0;
  }
  else {
    lVar9 = UFont::GetPrivateStaticClass();
    lVar7 = *(longlong *)(local_110 + 0x10);
    if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1411dcd9c;
  }
  local_108 = local_358;
  local_100 = local_350;
  local_d8 = local_328;
  local_d0 = local_320;
  local_f8 = local_348;
  uStack_f0 = uStack_340;
  local_e8 = local_338;
  uStack_e4 = uStack_334;
  uStack_e0 = uStack_330;
  uStack_dc = uStack_32c;
  if (local_320 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_320 + 1) = (int)local_320[1] + 1;
    UNLOCK();
  }
  local_1cc = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
  uStack_1c4 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
  local_c8 = local_318;
  local_c0 = local_310;
  local_bc = local_30c;
  local_b8 = 1;
  local_248 = CONCAT44(0xb,(undefined4)local_248);
  local_1ce = 1;
  local_378 = FWeakObjectPtr::Get(param_1 + 0xc0);
  local_388 = 1.0 / (fVar18 / (float)local_260);
  local_3f8 = &local_3d0;
  local_3f0 = 0;
  local_390 = 0;
  puVar15 = &DAT_143f3eda8;
  if (local_3d8 != 0) {
    puVar15 = local_3e0;
  }
  local_380 = 0x3f800000;
  local_37c = 0x3f800000;
  local_370 = 0;
  local_3d0 = (longlong *)0x0;
  local_3c8 = 0;
  fVar16 = 1.0 - (fVar16 + fVar16);
  local_384 = fVar16 * fVar20 * local_388;
  local_388 = fVar16 * fVar19 * local_388;
  FUN_1428bfb00(param_3,&local_390,0,puVar15);
  uVar12 = (ulonglong)(int)local_3c8;
  plVar8 = local_3d0 + uVar12 * 3;
  plVar14 = local_3d0;
  fVar16 = fVar17 - (float)(int)local_3c8 * local_3e4;
  if (local_3d0 != plVar8) {
    do {
      uVar10 = FText::FromString(local_2c0,plVar14);
      FText::operator=(local_128,uVar10);
      plVar4 = local_2b8;
      if (local_2b8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_2b8 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_2b8)(local_2b8);
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
      fVar20 = fVar16 + local_3e4;
      local_250 = CONCAT44(fVar16,(fVar19 - (fVar18 / (float)local_260) * *(float *)(plVar14 + 2)) *
                                  0.5);
      FCanvas::DrawItem(param_3,&local_258);
      plVar14 = plVar14 + 3;
      fVar16 = fVar20;
    } while (plVar14 != plVar8);
    uVar12 = local_3c8 & 0xffffffff;
  }
  uVar11 = (uint)uVar12;
  plVar8 = local_3d0;
  while (uVar11 != 0) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 3;
    uVar11 = (int)uVar12 - 1;
    uVar12 = (ulonglong)uVar11;
  }
  if (local_3d0 != (longlong *)0x0) {
    FMemory::Free(local_3d0);
  }
  FUN_140c64b70(&local_258);
  if (local_320 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_320 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_320)(local_320);
      LOCK();
      piVar1 = (int *)((longlong)local_320 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_320 + 8))(local_320,1);
      }
    }
  }
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2d0 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar1 = (int *)((longlong)local_2d0 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_2d0 + 8))(local_2d0,1);
      }
    }
  }
  if (local_3e0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_1411dd078:
  ReleaseSRWLockShared(local_398);
  if ((int)local_3b8 != 0) {
    plVar8 = (longlong *)(local_3c0 + 0x10);
    iVar13 = (int)local_3b8;
    do {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 5;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if (local_3c0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411dd110 FUN_1411dd110 body=1584 status=ok
// SIG undefined FUN_1411dd110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411dd110(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  char *pcVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_4a8 [32];
  undefined8 *local_488;
  float local_478;
  float local_474;
  int local_470;
  float local_46c;
  float local_468;
  float local_464;
  float local_460;
  float local_45c;
  float local_458;
  float local_454;
  PSRWLOCK local_450;
  undefined4 local_448;
  undefined1 local_444;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined1 local_428 [8];
  undefined1 local_420 [8];
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined1 local_3f8 [8];
  longlong *local_3f0;
  undefined1 local_3e0 [56];
  longlong *local_3a8;
  int local_398;
  undefined1 local_388 [20];
  undefined4 local_374;
  undefined1 local_308 [20];
  undefined4 local_2f4;
  undefined **local_288 [2];
  undefined4 local_274;
  undefined1 local_1fe;
  undefined8 local_1fc;
  undefined8 uStack_1f4;
  float local_1e8;
  float local_1e4;
  undefined1 local_158 [24];
  undefined8 local_140;
  undefined1 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1468387a8 ^ (ulonglong)auStack_4a8;
  if (((((*(char *)(param_1 + 0x60) == '\0') || ((*(byte *)(param_1 + 0x58) & 1) == 0)) &&
       (*(int *)(param_1 + 0x5c) != 0)) && ((param_2 != 0 && (*(longlong *)(param_2 + 0x58) != 0))))
     && ((*(longlong *)(param_1 + 0xd0) != 0 &&
         ((*(longlong *)(param_1 + 0x68) != 0 &&
          (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x60) != 0)))))) {
    local_450 = (PSRWLOCK)(param_1 + 200);
    AcquireSRWLockShared(local_450);
    cVar6 = FWeakObjectPtr::IsValid(param_1 + 0xc0);
    if (cVar6 != '\0') {
      puVar9 = (uint *)(**(code **)(**(longlong **)(param_2 + 0x58) + 0x20))
                                 (*(longlong **)(param_2 + 0x58),local_428);
      uVar5 = *puVar9;
      fVar18 = (float)uVar5 * 0.00052083336;
      local_464 = fVar18;
      lVar10 = (**(code **)(**(longlong **)(param_2 + 0x58) + 0x20))
                         (*(longlong **)(param_2 + 0x58),local_420);
      fVar17 = (float)*(uint *)(lVar10 + 4);
      fVar3 = *(float *)(*(longlong *)(param_1 + 0xd0) + 0x2fc);
      fVar19 = fVar17 * *(float *)(*(longlong *)(param_1 + 0xd0) + 0x300);
      local_468 = fVar17 * 0.0009259259;
      uVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x68) + 0x60) + 0x40))();
      uVar8 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x68) + 0x60) + 0x48))();
      fVar20 = (float)uVar7 * fVar18;
      local_46c = (float)uVar8;
      fVar21 = local_46c * fVar17 * 0.0009259259;
      lVar10 = FWeakObjectPtr::Get(param_1 + 0xc0);
      lVar14 = 0;
      local_488 = (undefined8 *)&local_448;
      local_448 = 0;
      local_444 = 0;
      local_440 = 0;
      local_438 = _DAT_1464aa6e0;
      uStack_430 = _DAT_1464aa6e8;
      FSlateFontInfo::FSlateFontInfo
                (local_3e0,lVar10,*(undefined4 *)(lVar10 + 0x13c),lVar10 + 0x140);
      fVar17 = ((float)*(int *)(*(longlong *)(param_1 + 0xd0) + 0x2f8) * fVar17 * 0.0013888889) /
               (float)local_398;
      if (local_3a8 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_3a8 + 1;
        lVar10 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_3a8)(local_3a8);
          LOCK();
          piVar16 = (int *)((longlong)local_3a8 + 0xc);
          iVar4 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_3a8 + 8))(local_3a8,1);
          }
        }
      }
      pcVar15 = (char *)(param_1 + 0x61);
      lVar10 = 4;
      piVar16 = (int *)(param_1 + 0x118);
      do {
        if ((*pcVar15 != '\0') && (1 < *piVar16)) {
          local_478 = (float)uVar5 * fVar3;
          local_474 = fVar19;
          TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x70,&local_470,param_1 + 0x150 + lVar14);
          if (local_470 == -1) {
            lVar12 = 0;
          }
          else {
            lVar12 = (longlong)local_470 * 0x20 + *(longlong *)(param_1 + 0x70);
          }
          plVar13 = (longlong *)(lVar12 + 0x10);
          if (lVar12 == 0) {
            plVar13 = (longlong *)0x0;
          }
          if ((plVar13 != (longlong *)0x0) && (*plVar13 != 0)) {
            uVar7 = (**(code **)(**(longlong **)(*plVar13 + 0x60) + 0x40))();
            uVar8 = (**(code **)(**(longlong **)(*plVar13 + 0x60) + 0x48))();
            local_418 = 0x3f8000003f800000;
            uStack_410 = 0x3f8000003f800000;
            local_488 = &local_418;
            local_45c = local_46c / (float)uVar8;
            fVar18 = fVar18 * (float)uVar7 * local_45c;
            local_45c = local_468 * (float)uVar8 * local_45c;
            local_460 = fVar18;
            FCanvasTileItem::FCanvasTileItem
                      (local_388,&local_478,*(undefined8 *)(*plVar13 + 0x60),&local_460);
            local_374 = 10;
            FCanvas::DrawItem(param_2,local_388);
            local_478 = local_478 + fVar18 * 1.1;
            fVar18 = local_464;
          }
          local_488 = &local_408;
          local_408 = 0x3f8000003f800000;
          uStack_400 = 0x3f8000003f800000;
          local_458 = fVar20;
          local_454 = fVar21;
          FCanvasTileItem::FCanvasTileItem
                    (local_308,&local_478,*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x60),
                     &local_458);
          local_2f4 = 10;
          FCanvas::DrawItem(param_2,local_308);
          local_478 = local_478 + fVar20 * 1.1;
          FText::FromString(local_3f8,param_1 + 0x110 + lVar14);
          uVar11 = FWeakObjectPtr::Get(param_1 + 0xc0);
          FCanvasTextItemBase::FCanvasTextItemBase
                    (local_288,&local_478,*(longlong *)(param_1 + 0xd0) + 0x2e8);
          local_288[0] = &PTR_FUN_1444d5500;
          FText::FText(local_158,local_3f8);
          local_1fc = _DAT_1464aa6e0;
          uStack_1f4 = _DAT_1464aa6e8;
          local_e8 = 0;
          local_274 = 2;
          local_1fe = 1;
          local_1e8 = fVar17;
          local_1e4 = fVar17;
          local_140 = uVar11;
          FCanvas::DrawItem(param_2,local_288);
          fVar19 = fVar19 + fVar21 * 1.1;
          FUN_140c64b70(local_288);
          plVar13 = local_3f0;
          if (local_3f0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_3f0 + 1;
            lVar12 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*local_3f0)(local_3f0);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
        }
        lVar14 = lVar14 + 0x10;
        pcVar15 = pcVar15 + 1;
        piVar16 = piVar16 + 4;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    ReleaseSRWLockShared(local_450);
  }
  return;
}



// FUNCTION 1411dd740 FUN_1411dd740 body=471 status=ok
// SIG undefined FUN_1411dd740(void)

void FUN_1411dd740(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_1411dd811;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1411dd811:
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
      lVar5 = (longlong)iStack_2c * 0x690 + *param_1;
      if (*(longlong *)(lVar5 + 0x668) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x658) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x58) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1411f92d0(param_1,param_2);
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



// FUNCTION 1411dd920 FUN_1411dd920 body=497 status=ok
// SIG undefined FUN_1411dd920(void)

void FUN_1411dd920(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_1411dd9f1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1411dd9f1:
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
      lVar5 = (longlong)iStack_2c * 0xa0 + *param_1;
      if (*(longlong *)(lVar5 + 0x88) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x70) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x58) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x30) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 8) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
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



// FUNCTION 1411ddb20 FUN_1411ddb20 body=499 status=ok
// SIG undefined FUN_1411ddb20(void)

void FUN_1411ddb20(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_1411ddbf1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1411ddbf1:
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
      lVar5 = (longlong)iStack_2c * 0xb0 + *param_1;
      if (*(longlong *)(lVar5 + 0x98) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x80) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x68) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x40) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x18) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(param_1,param_2);
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



// FUNCTION 1411ddd20 FUN_1411ddd20 body=483 status=ok
// SIG undefined FUN_1411ddd20(void)

void FUN_1411ddd20(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_1411dddf1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1411dddf1:
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
      lVar5 = (longlong)iStack_2c * 0xa0 + *param_1;
      if (*(longlong *)(lVar5 + 0x88) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x70) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x18) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
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



// FUNCTION 1411ddf10 Empty body=482 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar6) goto LAB_1411ddfe4;
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
LAB_1411ddfe4:
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
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iStack_2c * 0x28);
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



// FUNCTION 1411de100 FUN_1411de100 body=447 status=ok
// SIG undefined FUN_1411de100(void)

void FUN_1411de100(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_1411de1d1;
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
LAB_1411de1d1:
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
      plVar6 = (longlong *)((longlong)iStack_2c * 0x40 + *param_1);
      if (plVar6[5] != 0) {
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
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
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



// FUNCTION 1411de2c0 Empty body=451 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,FResourceTableEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_1411de391;
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
LAB_1411de391:
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
      if (plVar6[2] != 0) {
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



// FUNCTION 1411de490 FUN_1411de490 body=788 status=ok
// SIG undefined FUN_1411de490(void)

void FUN_1411de490(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  PSRWLOCK SRWLock;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  void *_Src;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong *plStack_40;
  
  plVar1 = (longlong *)(param_1 + 0x58);
  uVar13 = (ulonglong)*(int *)(param_1 + 0x60);
  plVar14 = (longlong *)*plVar1;
  plVar10 = plVar14 + uVar13 * 2;
  if (plVar14 != plVar10) {
    do {
      plVar6 = (longlong *)plVar14[1];
      lVar7 = *plVar14;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      AcquireSRWLockShared((PSRWLOCK)(lVar7 + 0x80));
      plVar8 = *(longlong **)(lVar7 + 0x68);
      plVar2 = (longlong *)(lVar7 + 0x60);
      lVar11 = *plVar2;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar7 + 0x80));
      if (lVar11 != 0) {
        FUN_142833de0(lVar11);
        FUN_14283ef20(lVar11);
      }
      AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x80));
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      if (plVar2 != &local_48) {
        *plVar2 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar7 + 0x68,&plStack_40);
        plVar2 = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_40 + 1;
          lVar11 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plStack_40)(plStack_40);
            LOCK();
            piVar4 = (int *)((longlong)plVar2 + 0xc);
            iVar9 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plStack_40 + 8))(plStack_40,1);
            }
          }
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x80));
      if (param_2 != 0) {
        SRWLock = (PSRWLOCK)(lVar7 + 0x50);
        AcquireSRWLockShared(SRWLock);
        iVar5 = *(int *)(lVar7 + 0x48);
        ReleaseSRWLockShared(SRWLock);
        iVar9 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar9 = 0;
        }
        if (0 < iVar9) {
          AcquireSRWLockShared(SRWLock);
          local_58 = (void *)0x0;
          local_50 = *(int *)(lVar7 + 0x48);
          lVar11 = (longlong)local_50;
          _Src = *(void **)(lVar7 + 0x40);
          if (local_50 == 0) {
            local_4c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
            _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar11 * 2);
          }
          ReleaseSRWLockShared(SRWLock);
          FUN_1404c7090(param_2,&local_58);
          if (local_58 != (void *)0x0) {
            FMemory::Free();
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar4 = (int *)((longlong)plVar8 + 0xc);
          iVar9 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar4 = (int *)((longlong)plVar6 + 0xc);
          iVar9 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      plVar14 = plVar14 + 2;
    } while (plVar14 != plVar10);
    uVar13 = (ulonglong)*(uint *)(param_1 + 0x60);
  }
  if ((int)uVar13 != 0) {
    plVar14 = (longlong *)(*plVar1 + 8);
    do {
      plVar10 = (longlong *)*plVar14;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar10 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar4 = (int *)((longlong)plVar10 + 0xc);
          iVar9 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      plVar14 = plVar14 + 2;
      uVar12 = (int)uVar13 - 1;
      uVar13 = (ulonglong)uVar12;
    } while (uVar12 != 0);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) == 0) {
    return;
  }
  TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1,0);
  return;
}



// FUNCTION 1411de7b0 FUN_1411de7b0 body=194 status=ok
// SIG undefined FUN_1411de7b0(void)

void FUN_1411de7b0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  FWeakObjectPtr::operator=(param_1 + 0x4c8,0);
  local_res8 = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  FUN_1411d59a0(param_1);
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
      local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
      FUN_142dbb5d0(lVar1 + 0xd58,&local_res8);
      if (*(longlong *)(lVar1 + 0x1430) != 0) {
        FUN_140e59210();
      }
    }
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 1411de880 FUN_1411de880 body=167 status=ok
// SIG undefined FUN_1411de880(void)

void FUN_1411de880(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x274);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x274);
    FUN_1407665e0(lVar1 + 0xf18,param_1);
    if (*(longlong *)(param_1 + 0x280) != 0) {
      lVar1 = FWeakObjectPtr::Get(param_1 + 0x274);
      if (*(longlong *)(lVar1 + 0x938) != 0) {
        TBaseMulticastDelegate<void>::Remove
                  (*(longlong *)(lVar1 + 0x938) + 0x218,*(undefined8 *)(param_1 + 0x280));
        *(undefined8 *)(param_1 + 0x280) = 0;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x270) = 0;
  FUN_1411f0560(param_1);
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 1411de930 FUN_1411de930 body=457 status=ok
// SIG undefined FUN_1411de930(void)

void FUN_1411de930(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  ulonglong local_res10;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  if (param_2 != 0) {
    iVar6 = 0;
    local_res10 = local_res10 & 0xffffffff00000000;
    lVar7 = *(longlong *)(param_1 + 0x58);
    lVar1 = lVar7 + (longlong)*(int *)(param_1 + 0x60) * 8;
    for (; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      cVar3 = FUN_14058c1e0(lVar7,param_2);
      if (cVar3 != '\0') {
        FWeakObjectPtr::operator=(&local_res10,param_2);
        if (0 < *(int *)(param_1 + 0x60)) {
          do {
            cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                              (*(longlong *)(param_1 + 0x58) + (longlong)iVar6 * 8,&local_res10);
            if (cVar3 != '\0') {
              iVar2 = *(int *)(param_1 + 0x60);
              iVar4 = (iVar2 - iVar6) + -1;
              if (0 < iVar4) {
                iVar4 = 1;
              }
              if (iVar4 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar6 * 8),
                           (void *)(*(longlong *)(param_1 + 0x58) + (longlong)(iVar2 - iVar4) * 8),
                           (longlong)iVar4 << 3);
                iVar2 = *(int *)(param_1 + 0x60);
              }
              *(int *)(param_1 + 0x60) = iVar2 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x58);
              iVar6 = iVar6 + -1;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(param_1 + 0x60));
        }
        local_res10 = param_2;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x48,&local_res10);
        return;
      }
    }
    bVar8 = *(longlong *)(param_2 + 0x118) == 0;
    if (bVar8) {
      local_38 = 0;
      local_30 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,L"-Unknown Actor-",0x20);
      plVar5 = &local_38;
    }
    else {
      local_res10 = *(ulonglong *)(*(longlong *)(param_2 + 0x118) + 0x18);
      FName::ToString(&local_res10,local_28);
      plVar5 = local_28;
    }
    lVar1 = *plVar5;
    *plVar5 = 0;
    plVar5[1] = 0;
    if ((bVar8) && (local_38 != 0)) {
      FMemory::Free();
    }
    if ((!bVar8) && (local_28[0] != 0)) {
      FMemory::Free();
    }
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  }
  return;
}



// FUNCTION 1411deb00 FUN_1411deb00 body=179 status=ok
// SIG undefined FUN_1411deb00(void)

void FUN_1411deb00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if ((cVar4 != '\0') && (lVar3 = *(longlong *)(param_1 + 8), param_2 != 0)) {
    plVar5 = *(longlong **)(lVar3 + 0x70);
    iVar2 = *(int *)(lVar3 + 0x78);
    plVar1 = plVar5 + iVar2;
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if (*plVar5 == param_2) {
        return;
      }
    }
    *(int *)(lVar3 + 0x78) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x7c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar3 + 0x70);
    }
    *(longlong *)((longlong)iVar2 * 8 + *(longlong *)(lVar3 + 0x70)) = param_2;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      FUN_1411d31b0(*(longlong *)(lVar3 + 0x48),param_2,1);
    }
    FUN_1411d3760(lVar3);
    FUN_1411e02b0(param_2);
  }
  return;
}



// FUNCTION 1411debc0 FUN_1411debc0 body=251 status=ok
// SIG undefined FUN_1411debc0(void)

void FUN_1411debc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar3 = (longlong)*(int *)(lVar1 + 0x78);
    if (*(int *)(lVar1 + 0x78) != 0) {
      iVar8 = 0;
      bVar9 = **(longlong **)(lVar1 + 0x70) != param_2;
      lVar5 = 0;
      iVar6 = 0;
      do {
        lVar5 = lVar5 + 1;
        iVar7 = iVar6 + 1;
        if (lVar5 < lVar3) {
          plVar4 = (longlong *)(*(longlong *)(lVar1 + 0x70) + lVar5 * 8);
          do {
            if (bVar9 != (*plVar4 != param_2)) break;
            iVar7 = iVar7 + 1;
            lVar5 = lVar5 + 1;
            plVar4 = plVar4 + 1;
          } while (lVar5 < lVar3);
        }
        if (bVar9 != false) {
          if (iVar8 != iVar6) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar1 + 0x70) + (longlong)iVar8 * 8),
                       (void *)(*(longlong *)(lVar1 + 0x70) + (longlong)iVar6 * 8),
                       (longlong)(iVar7 - iVar6) << 3);
          }
          iVar8 = iVar8 + (iVar7 - iVar6);
        }
        bVar9 = (bool)(bVar9 ^ 1);
        iVar6 = iVar7;
      } while (lVar5 < lVar3);
      *(int *)(lVar1 + 0x78) = iVar8;
    }
  }
  return;
}



// FUNCTION 1411decc0 FUN_1411decc0 body=152 status=ok
// SIG undefined FUN_1411decc0(void)

void FUN_1411decc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if ((cVar3 != '\0') && (lVar1 = *(longlong *)(param_1 + 8), *(char *)(lVar1 + 0xf8) != '\0')) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar2 != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x5a8);
    }
    if ((param_2 == 0) || (*(longlong *)(param_2 + 0xf0) != lVar5)) {
      if (lVar2 != 0) {
        lVar4 = *(longlong *)(lVar2 + 0x5b0);
      }
      if (param_2 == 0) {
        return;
      }
      if (*(longlong *)(param_2 + 0xf0) != lVar4) {
        return;
      }
    }
    FUN_1411d3870(lVar1,*(undefined8 *)(lVar1 + 0x68));
  }
  return;
}



// FUNCTION 1411ded60 FUN_1411ded60 body=472 status=ok
// SIG undefined FUN_1411ded60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411ded60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  undefined1 *local_28;
  uint local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if ((cVar3 != '\0') && (lVar8 = *(longlong *)(param_1 + 8), *(char *)(lVar8 + 0xf8) != '\0')) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    uVar6 = 0;
    uVar4 = uVar6;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      uVar4 = *(ulonglong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x5a8);
    }
    if (((param_2 != 0) && (*(ulonglong *)(param_2 + 0xf0) == uVar4)) &&
       (lVar8 = *(longlong *)(lVar8 + 0x68), lVar8 != 0)) {
      lVar5 = FUN_141404840();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (plVar1 = *(longlong **)(lVar8 + 0x168), plVar1 != (longlong *)0x0)) &&
         (*(longlong *)(lVar8 + 0x22a0) != 0)) {
        (**(code **)(*plVar1 + 0x418))(plVar1,&DAT_14653218c);
        lVar8 = *(longlong *)(lVar8 + 0x22a0);
        local_28 = (undefined1 *)0x0;
        local_1c = 0;
        local_20 = 0;
        uVar4 = uVar6;
        if (lVar8 != 0) {
          while( true ) {
            local_20 = (int)uVar4 + 1;
            if ((int)uVar6 < (int)local_20) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (local_48,uVar4);
            }
            puVar7 = local_48;
            if (local_28 != (undefined1 *)0x0) {
              puVar7 = local_28;
            }
            *(longlong *)(puVar7 + (longlong)(int)uVar4 * 8) = lVar8;
            lVar8 = *(longlong *)(lVar8 + 400);
            uVar4 = (ulonglong)local_20;
            if (lVar8 == 0) break;
            uVar6 = (ulonglong)local_1c;
          }
        }
        lVar8 = (longlong)(int)(local_20 - 1);
        if (-1 < (int)(local_20 - 1)) {
          do {
            puVar7 = local_48;
            if (local_28 != (undefined1 *)0x0) {
              puVar7 = local_28;
            }
            FUN_140942fb0(*(undefined8 *)(puVar7 + lVar8 * 8),8,1);
            lVar8 = lVar8 + -1;
          } while (-1 < lVar8);
        }
        if (local_28 != (undefined1 *)0x0) {
          FMemory::Free(local_28);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411def40 FUN_1411def40 body=73 status=ok
// SIG undefined FUN_1411def40(void)

void FUN_1411def40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (((cVar2 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x10) + 0xf8) != '\0')) &&
     (lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68))) {
    FUN_1411eb0d0();
  }
  return;
}



// FUNCTION 1411def90 FUN_1411def90 body=91 status=ok
// SIG undefined FUN_1411def90(void)

void FUN_1411def90(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (((cVar2 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x10) + 0xf8) != '\0')) &&
     (lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68))) {
    FUN_1411eb0d0();
  }
  if (lVar1 != 0) {
    FUN_142227350(lVar1,0,1);
  }
  return;
}



// FUNCTION 1411deff0 FUN_1411deff0 body=49 status=ok
// SIG undefined FUN_1411deff0(void)

void FUN_1411deff0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_1411d8c20(uVar2);
    return;
  }
  return;
}



// FUNCTION 1411df030 FUN_1411df030 body=43 status=ok
// SIG undefined FUN_1411df030(void)

undefined1 FUN_1411df030(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    FUN_1411e8130(lVar1,param_1 + 0x10);
  }
  return 0;
}



// FUNCTION 1411df080 Execute body=81 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,TTypeWrapper<void>___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&)>
     ::Execute(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001411df0ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1411df0e0 FUN_1411df0e0 body=78 status=ok
// SIG undefined FUN_1411df0e0(void)

void FUN_1411df0e0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001411df12b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1411df130 FUN_1411df130 body=213 status=ok
// SIG undefined FUN_1411df130(void)

undefined8 FUN_1411df130(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar4 == '\0') {
    return 1;
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if (param_2 != 0) {
    plVar5 = *(longlong **)(lVar3 + 0x70);
    iVar2 = *(int *)(lVar3 + 0x78);
    plVar1 = plVar5 + iVar2;
    while( true ) {
      if (plVar5 == plVar1) {
        *(int *)(lVar3 + 0x78) = iVar2 + 1;
        if (*(int *)(lVar3 + 0x7c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar3 + 0x70);
        }
        *(longlong *)((longlong)iVar2 * 8 + *(longlong *)(lVar3 + 0x70)) = param_2;
        if (*(longlong *)(lVar3 + 0x48) != 0) {
          FUN_1411d31b0(*(longlong *)(lVar3 + 0x48),param_2,1);
        }
        FUN_1411d3760(lVar3);
        FUN_1411e02b0(param_2);
        return 1;
      }
      if (*plVar5 == param_2) break;
      plVar5 = plVar5 + 1;
    }
    return 1;
  }
  return 1;
}



// FUNCTION 1411df210 FUN_1411df210 body=253 status=ok
// SIG undefined FUN_1411df210(void)

undefined8 FUN_1411df210(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar3 = (longlong)*(int *)(lVar1 + 0x78);
    if (*(int *)(lVar1 + 0x78) != 0) {
      iVar8 = 0;
      bVar9 = **(longlong **)(lVar1 + 0x70) != param_2;
      lVar5 = 0;
      iVar6 = 0;
      do {
        lVar5 = lVar5 + 1;
        iVar7 = iVar6 + 1;
        if (lVar5 < lVar3) {
          plVar4 = (longlong *)(*(longlong *)(lVar1 + 0x70) + lVar5 * 8);
          do {
            if (bVar9 != (*plVar4 != param_2)) break;
            iVar7 = iVar7 + 1;
            lVar5 = lVar5 + 1;
            plVar4 = plVar4 + 1;
          } while (lVar5 < lVar3);
        }
        if (bVar9 != false) {
          if (iVar8 != iVar6) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar1 + 0x70) + (longlong)iVar8 * 8),
                       (void *)(*(longlong *)(lVar1 + 0x70) + (longlong)iVar6 * 8),
                       (longlong)(iVar7 - iVar6) << 3);
          }
          iVar8 = iVar8 + (iVar7 - iVar6);
        }
        bVar9 = (bool)(bVar9 ^ 1);
        iVar6 = iVar7;
      } while (lVar5 < lVar3);
      *(int *)(lVar1 + 0x78) = iVar8;
    }
  }
  return 1;
}



// FUNCTION 1411df310 FUN_1411df310 body=154 status=ok
// SIG undefined FUN_1411df310(void)

undefined8 FUN_1411df310(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if ((cVar3 != '\0') && (lVar1 = *(longlong *)(param_1 + 8), *(char *)(lVar1 + 0xf8) != '\0')) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
    lVar4 = 0;
    lVar5 = lVar4;
    if (lVar2 != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x5a8);
    }
    if ((param_2 == 0) || (*(longlong *)(param_2 + 0xf0) != lVar5)) {
      if (lVar2 != 0) {
        lVar4 = *(longlong *)(lVar2 + 0x5b0);
      }
      if (param_2 == 0) {
        return 1;
      }
      if (*(longlong *)(param_2 + 0xf0) != lVar4) {
        return 1;
      }
    }
    FUN_1411d3870(lVar1,*(undefined8 *)(lVar1 + 0x68));
  }
  return 1;
}



// FUNCTION 1411df3b0 FUN_1411df3b0 body=474 status=ok
// SIG undefined FUN_1411df3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1411df3b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  undefined1 *local_28;
  uint local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if ((cVar2 != '\0') && (lVar8 = *(longlong *)(param_1 + 8), *(char *)(lVar8 + 0xf8) != '\0')) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    uVar6 = 0;
    uVar4 = uVar6;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      uVar4 = *(ulonglong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x5a8);
    }
    if (((param_2 != 0) && (*(ulonglong *)(param_2 + 0xf0) == uVar4)) &&
       (lVar8 = *(longlong *)(lVar8 + 0x68), lVar8 != 0)) {
      lVar5 = FUN_141404840();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((bVar3) && (plVar1 = *(longlong **)(lVar8 + 0x168), plVar1 != (longlong *)0x0)) &&
         (*(longlong *)(lVar8 + 0x22a0) != 0)) {
        (**(code **)(*plVar1 + 0x418))(plVar1,&DAT_14653218c);
        lVar8 = *(longlong *)(lVar8 + 0x22a0);
        local_28 = (undefined1 *)0x0;
        local_1c = 0;
        local_20 = 0;
        uVar4 = uVar6;
        if (lVar8 != 0) {
          while( true ) {
            local_20 = (int)uVar4 + 1;
            if ((int)uVar6 < (int)local_20) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (local_48,uVar4);
            }
            puVar7 = local_48;
            if (local_28 != (undefined1 *)0x0) {
              puVar7 = local_28;
            }
            *(longlong *)(puVar7 + (longlong)(int)uVar4 * 8) = lVar8;
            lVar8 = *(longlong *)(lVar8 + 400);
            uVar4 = (ulonglong)local_20;
            if (lVar8 == 0) break;
            uVar6 = (ulonglong)local_1c;
          }
        }
        lVar8 = (longlong)(int)(local_20 - 1);
        if (-1 < (int)(local_20 - 1)) {
          do {
            puVar7 = local_48;
            if (local_28 != (undefined1 *)0x0) {
              puVar7 = local_28;
            }
            FUN_140942fb0(*(undefined8 *)(puVar7 + lVar8 * 8),8,1);
            lVar8 = lVar8 + -1;
          } while (-1 < lVar8);
        }
        if (local_28 != (undefined1 *)0x0) {
          FMemory::Free(local_28);
        }
      }
    }
  }
  return 1;
}



// FUNCTION 1411df590 FUN_1411df590 body=75 status=ok
// SIG undefined FUN_1411df590(void)

undefined1 FUN_1411df590(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (((cVar2 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x10) + 0xf8) != '\0')) &&
     (lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68))) {
    FUN_1411eb0d0();
  }
  return 1;
}



// FUNCTION 1411df5e0 FUN_1411df5e0 body=93 status=ok
// SIG undefined FUN_1411df5e0(void)

undefined1 FUN_1411df5e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (((cVar2 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x10) + 0xf8) != '\0')) &&
     (lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68))) {
    FUN_1411eb0d0();
  }
  if (lVar1 != 0) {
    FUN_142227350(lVar1,0,1);
  }
  return 1;
}



// FUNCTION 1411df640 FUN_1411df640 body=46 status=ok
// SIG undefined FUN_1411df640(void)

undefined1 FUN_1411df640(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_1411d8c20(uVar2);
  }
  return 1;
}



// FUNCTION 1411df670 FUN_1411df670 body=21 status=ok
// SIG undefined FUN_1411df670(void)

undefined8 FUN_1411df670(longlong param_1)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 1411df690 FUN_1411df690 body=31 status=ok
// SIG undefined FUN_1411df690(void)

undefined8 FUN_1411df690(longlong param_1)

{
  (**(code **)(param_1 + 0x10))
            (*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),
             *(undefined1 *)(param_1 + 0x1c));
  return 1;
}



// FUNCTION 1411df6b0 ExecuteIfSafe body=111 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&)>
::ExecuteIfSafe(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1411df720 FUN_1411df720 body=109 status=ok
// SIG undefined FUN_1411df720(void)

undefined1 FUN_1411df720(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1411df790 FUN_1411df790 body=238 status=ok
// SIG undefined FUN_1411df790(void)

void FUN_1411df790(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  *(uint *)(param_1[3] + 0x5c) = *(uint *)(param_1[3] + 0x5c) & ~*(uint *)(param_1 + 2);
  *param_1 = &PTR_FUN_1446fe980;
  *(undefined1 *)(param_1 + 4) = 0;
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
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1411df880 FUN_1411df880 body=236 status=ok
// SIG undefined FUN_1411df880(void)

void FUN_1411df880(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  *(uint *)(param_1[3] + 0x5c) = *(uint *)(param_1[3] + 0x5c) | *(uint *)(param_1 + 2);
  *param_1 = &PTR_FUN_1446fe970;
  *(undefined1 *)(param_1 + 4) = 0;
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
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1411df970 FUN_1411df970 body=250 status=ok
// SIG undefined FUN_1411df970(void)

void FUN_1411df970(longlong param_1,float param_2)

{
  float fVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  
  pcVar2 = *(char **)(param_1 + 0x50);
  if (pcVar2 != (char *)0x0) {
    if ((pcVar2[0xfa] != '\0') &&
       ((lVar6 = FUN_1411e5ff0(pcVar2), lVar6 == 0 ||
        (cVar5 = FUN_140e53930(lVar6 + 0x26f0), cVar5 != '\0')))) {
      pcVar2[0xfa] = '\0';
      FUN_1411e8db0(pcVar2);
    }
    if (((*pcVar2 != '\0') && (pcVar2[0x2a8] != '\0')) &&
       (fVar1 = *(float *)(pcVar2 + 0x2a4), *(float *)(pcVar2 + 0x2a4) = fVar1 - param_2,
       fVar1 - param_2 <= 0.0)) {
      pcVar2[0x2a8] = '\0';
      pcVar2[0x2a4] = '\0';
      pcVar2[0x2a5] = '\0';
      pcVar2[0x2a6] = '\0';
      pcVar2[0x2a7] = '\0';
      FUN_1411e8db0(pcVar2);
    }
    FUN_1411fe9d0(pcVar2,param_2);
    FUN_1411ff4b0(pcVar2,param_2);
    FUN_1411ff720(pcVar2,param_2);
    FUN_1411fee60(pcVar2);
    FUN_1411d3760(pcVar2);
    plVar3 = *(longlong **)(pcVar2 + 0x68);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_142a07000();
      lVar6 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
      if (lVar6 != 0) {
        FUN_1427da940(lVar6);
      }
    }
    return;
  }
  return;
}



// FUNCTION 1411dfa70 FUN_1411dfa70 body=1511 status=ok
// SIG undefined FUN_1411dfa70(void)

undefined8
FUN_1411dfa70(longlong param_1,float *param_2,longlong param_3,longlong *param_4,float param_5,
             float param_6,float param_7,float param_8,float *param_9)

{
  float *pfVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float local_108;
  float fStack_104;
  float local_100;
  longlong *local_f8;
  float local_f0;
  ulonglong local_e8;
  uint local_e0;
  uint local_dc;
  
  pfVar6 = param_9;
  fVar21 = DAT_1468b5d88._4_4_;
  fVar19 = (float)DAT_1468b5d88;
  uVar10 = 0;
  iVar12 = 0;
  if (param_9 != (float *)0x0) {
    param_9[2] = (float)DAT_1468b5d88;
    param_9[3] = fVar21;
    *param_9 = fVar19;
    param_9[1] = fVar21;
    param_9[10] = 0.0;
    if (param_9[0xb] != 0.0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_9 + 8,0);
    }
    pfVar6[0xe] = 0.0;
    if (pfVar6[0xf] != 0.0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(pfVar6 + 0xc,0);
    }
  }
  if ((param_3 != 0) && (0 < (int)param_4[1])) {
    fVar19 = param_2[1];
    fVar21 = *param_2;
    fVar16 = fVar21 * fVar21 + fVar19 * fVar19;
    if (fVar16 == 1.0) {
      fVar17 = fVar19;
      fVar20 = fVar21;
      if (param_2[2] == 0.0) {
        local_f8 = *(longlong **)param_2;
        local_f0 = param_2[2];
        fVar17 = (float)((ulonglong)local_f8 >> 0x20);
        fVar20 = local_f8._0_4_;
      }
    }
    else {
      fVar17 = DAT_1468b5d94;
      fVar20 = DAT_1468b5d90;
      if (1e-08 <= fVar16) {
        auVar18 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
        param_9._0_4_ = auVar18._0_4_;
        param_9._0_4_ =
             param_9._0_4_ + param_9._0_4_ * (0.5 - fVar16 * 0.5 * param_9._0_4_ * param_9._0_4_);
        param_9._0_4_ =
             param_9._0_4_ + param_9._0_4_ * (0.5 - fVar16 * 0.5 * param_9._0_4_ * param_9._0_4_);
        fVar20 = fVar21 * param_9._0_4_;
        fVar17 = fVar19 * param_9._0_4_;
      }
    }
    if (param_1 == 0) {
      local_108 = (float)DAT_1468b5d88;
      fStack_104 = DAT_1468b5d88._4_4_;
    }
    else {
      local_f8 = *(longlong **)(param_3 + 0x220);
      local_100 = *(float *)(param_3 + 0x228);
      local_f0 = local_100;
      USceneComponent::K2_AttachTo(*(undefined4 *)(param_3 + 0x220),&local_f8,&local_108,1,0);
    }
    if (pfVar6 != (float *)0x0) {
      fVar19 = pfVar6[0xe];
      pfVar6[0xe] = (float)((int)fVar19 + 1);
      if ((int)pfVar6[0xf] < (int)fVar19 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(pfVar6 + 0xc,fVar19);
      }
      *(ulonglong *)(*(longlong *)(pfVar6 + 0xc) + (longlong)(int)fVar19 * 8) =
           CONCAT44(fStack_104,local_108);
      *(ulonglong *)pfVar6 = CONCAT44(fStack_104,local_108);
      pfVar6[2] = fVar20 * param_6 + local_108;
      pfVar6[3] = fVar17 * param_6 + fStack_104;
    }
    param_9._0_4_ = (float)FGenericPlatformMath::Atan2(fVar17,fVar20);
    plVar14 = (longlong *)*param_4;
    local_e8 = 0;
    plVar8 = plVar14 + (int)param_4[1];
    local_dc = 0;
    uVar11 = uVar10;
    uVar13 = uVar10;
    local_f8 = plVar8;
    if (plVar14 != plVar8) {
      do {
        lVar2 = *plVar14;
        if (lVar2 != 0) {
          iVar12 = (int)uVar13;
          local_e0 = iVar12 + 1;
          if ((int)uVar10 < (int)local_e0) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_e8,uVar13);
            uVar11 = local_e8;
          }
          uVar13 = (ulonglong)local_e0;
          pfVar1 = (float *)(uVar11 + (longlong)iVar12 * 0x18);
          *pfVar1 = (float)DAT_1468b5d88;
          pfVar1[1] = DAT_1468b5d88._4_4_;
          *(longlong *)(pfVar1 + 2) = lVar2;
          FUN_1411d7510(param_1,lVar2,pfVar1);
          fVar19 = *pfVar1 - local_108;
          fVar21 = pfVar1[1] - fStack_104;
          fVar16 = fVar21 * fVar21 + fVar19 * fVar19;
          if (fVar16 <= 1e-08) {
            fVar19 = 0.0;
            fVar21 = 0.0;
          }
          else {
            auVar18 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
            fVar17 = auVar18._0_4_;
            fVar17 = fVar17 + fVar17 * (0.5 - fVar16 * 0.5 * fVar17 * fVar17);
            fVar17 = fVar17 + fVar17 * (0.5 - fVar16 * 0.5 * fVar17 * fVar17);
            fVar19 = fVar19 * fVar17;
            fVar21 = fVar21 * fVar17;
          }
          fVar19 = (float)FGenericPlatformMath::Atan2(fVar21,fVar19);
          uVar15 = __libm_sse2_sincosf_(fVar19 - param_9._0_4_);
          fVar19 = (float)FGenericPlatformMath::Atan2
                                    ((int)uVar15,
                                     CONCAT44((int)uVar15,(int)((ulonglong)uVar15 >> 0x20)));
          fVar19 = param_5 * 0.017453292 - ABS(fVar19);
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          fVar21 = (param_6 * param_6 - fVar16) / (param_6 * param_6);
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          pfVar1[4] = fVar19 * param_7 * fVar21 * param_8;
          if (pfVar6 != (float *)0x0) {
            fVar19 = pfVar6[0xe];
            pfVar6[0xe] = (float)((int)fVar19 + 1);
            if ((int)pfVar6[0xf] < (int)fVar19 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(pfVar6 + 0xc,fVar19)
              ;
            }
            *(undefined8 *)(*(longlong *)(pfVar6 + 0xc) + (longlong)(int)fVar19 * 8) =
                 *(undefined8 *)pfVar1;
            fVar19 = pfVar6[10];
            pfVar6[10] = (float)((int)fVar19 + 1);
            if ((int)pfVar6[0xb] < (int)fVar19 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(pfVar6 + 8,fVar19);
            }
            puVar7 = (undefined4 *)&DAT_1464aa710;
            puVar9 = (undefined8 *)((longlong)(int)fVar19 * 0x20 + *(longlong *)(pfVar6 + 8));
            *puVar9 = CONCAT44(fStack_104,local_108);
            puVar9[1] = *(undefined8 *)pfVar1;
            if (0.0001 < pfVar1[4]) {
              puVar7 = (undefined4 *)&DAT_1464aa700;
            }
            uVar3 = puVar7[1];
            uVar4 = puVar7[2];
            uVar5 = puVar7[3];
            *(undefined4 *)(puVar9 + 2) = *puVar7;
            *(undefined4 *)((longlong)puVar9 + 0x14) = uVar3;
            *(undefined4 *)(puVar9 + 3) = uVar4;
            *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
          }
          uVar10 = (ulonglong)local_dc;
          plVar8 = local_f8;
        }
        iVar12 = (int)uVar13;
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar8);
    }
    uVar15 = 0;
    param_9._0_4_ = (float)((uint)param_9._0_4_ & 0xffffff00);
    FUN_1411c6f90(uVar11,(longlong)iVar12,0,&param_9);
    if ((0 < iVar12) && (0.0001 < *(float *)(uVar11 + 0x10))) {
      uVar15 = *(undefined8 *)(uVar11 + 8);
    }
    if (uVar11 != 0) {
      FMemory::Free(uVar11);
    }
    return uVar15;
  }
  return 0;
}



// FUNCTION 1411e0060 FindId body=432 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FSoftObjectPtr,int>,TDefaultMapHashableKeyFuncs<FSoftObjectPtr,int,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = (int)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20) +
            (int)*(undefined8 *)(param_3 + 0x10);
    uVar7 = uVar8 >> 0xd ^ -uVar8;
    uVar5 = (-0x61c88647 - uVar7) - uVar8 ^ uVar7 << 8;
    uVar8 = (uVar8 - uVar5) - uVar7 ^ uVar5 >> 0xd;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar8 >> 0xc;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 << 0x10;
    uVar8 = (uVar8 - uVar5) - uVar7 ^ uVar5 >> 5;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar8 >> 3;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 << 10;
    if (*(int *)(param_3 + 0x20) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(param_3 + 0x18);
    }
    uVar2 = FUN_140438070(puVar6);
    uVar5 = ((uVar8 - uVar5) - uVar7 ^ uVar5 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
    uVar7 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
    uVar8 = (uVar2 - uVar7) - uVar5 ^ uVar7 >> 0xd;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar8 >> 0xc;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar5 << 0x10;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar7 >> 5;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar8 >> 3;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar5 << 10;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar9 = *(int *)((longlong)plVar3 +
                    (((longlong)(int)((uVar8 - uVar7) - uVar5) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar9 != -1) {
      lVar4 = *param_1;
      do {
        cVar1 = FSoftObjectPath::operator==(lVar4 + 0x10 + (longlong)iVar9 * 0x38,param_3 + 0x10);
        if (cVar1 != '\0') {
          *param_2 = iVar9;
          return param_2;
        }
        lVar4 = *param_1;
        iVar9 = *(int *)((longlong)iVar9 * 0x38 + 0x30 + lVar4);
      } while (iVar9 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1411e0210 FUN_1411e0210 body=139 status=ok
// SIG undefined FUN_1411e0210(void)

void FUN_1411e0210(longlong param_1,int *param_2)

{
  int iVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
  if ((-1 < *param_2) && (*param_2 < *(int *)(param_1 + 0x44))) {
    iVar1 = *(int *)(param_1 + 0x90);
    *(int *)(param_1 + 0x90) = iVar1 + 1;
    if (*(int *)(param_1 + 0x94) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x88,iVar1);
    }
    *(int *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 4) = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001411e0294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
  return;
}



// FUNCTION 1411e02a0 FUN_1411e02a0 body=9 status=ok
// SIG undefined FUN_1411e02a0(void)

void FUN_1411e02a0(longlong param_1)

{
  FUN_142eb4bb0(param_1 + 0x28);
  return;
}



// FUNCTION 1411e02b0 FUN_1411e02b0 body=201 status=ok
// SIG undefined FUN_1411e02b0(void)

void FUN_1411e02b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *local_18;
  undefined8 local_10;
  
  if (param_1 != 0) {
    uVar5 = 0;
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_14083bac0(param_1,&local_18,0);
    plVar2 = local_18;
    uVar3 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
    if (local_18 + (int)local_10 < local_18) {
      uVar3 = uVar5;
    }
    plVar4 = local_18;
    if (uVar3 != 0) {
      do {
        plVar1 = (longlong *)*plVar4;
        if (plVar1 != (longlong *)0x0) {
          FUN_1423be6d0(plVar1,0,0);
          (**(code **)(*plVar1 + 0x960))(plVar1,0);
          FUN_1427da950(plVar1);
        }
        uVar5 = uVar5 + 1;
        plVar4 = plVar4 + 1;
      } while (uVar5 != uVar3);
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free(plVar2);
    }
  }
  return;
}



// FUNCTION 1411e0380 FUN_1411e0380 body=505 status=ok
// SIG undefined FUN_1411e0380(void)

/* WARNING: Removing unreachable block (ram,0x0001411e04fd) */

void FUN_1411e0380(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (((*(int *)(param_1 + 0x248) == 0) || (*(longlong **)(param_1 + 0x240) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x240) + 0x18))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  plVar7 = (longlong *)0x0;
  if (bVar4) {
    if (*(int *)(param_1 + 0x248) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x240);
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,param_2);
  }
  bVar2 = *(byte *)(param_1 + 0x230);
  if (2 < bVar2) {
    if (bVar2 < 5) {
      plVar7 = *(longlong **)(param_1 + 0x270);
      if (plVar7 != (longlong *)0x0) {
        lVar8 = ULevelStreaming::GetPrivateStaticClass();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          (**(code **)(*plVar7 + 0x2b0))(plVar7,param_2,0,0);
        }
      }
    }
    else if ((bVar2 == 5) && (lVar8 = *(longlong *)(param_1 + 0x270), lVar8 != 0)) {
      lVar6 = FUN_1412fb190();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar7 = (longlong *)FString::FString(local_38,lVar8 + 0x130);
        local_28 = 0;
        local_20 = 0;
        local_18 = 0;
        local_48 = *plVar7;
        *plVar7 = 0;
        local_40 = (undefined4)plVar7[1];
        local_3c = *(undefined4 *)((longlong)plVar7 + 0xc);
        plVar7[1] = 0;
        FUN_1417978e0(&local_28,&local_48);
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar3);
        }
        puVar1 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x18);
        *puVar1 = local_28;
        puVar1[1] = 0;
        puVar1[1] = local_20;
        *(undefined4 *)(puVar1 + 2) = (undefined4)local_18;
        *(undefined4 *)((longlong)puVar1 + 0x14) = local_18._4_4_;
      }
    }
  }
  return;
}



// FUNCTION 1411e0580 FUN_1411e0580 body=918 status=ok
// SIG undefined FUN_1411e0580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1411e0580(LARGE_INTEGER *param_1,undefined8 *param_2)

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
  code *local_88 [2];
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
    puVar5 = (undefined8 *)operator_new(0x90);
    puVar9 = (undefined8 *)0x0;
    puVar10 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      *(undefined4 *)(puVar5 + 8) = 0;
      *puVar5 = AK::MemoryMgr::StartProfileThreadUsage;
      uVar6 = FUN_1415ab270(1);
      puVar5[10] = uVar6;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      puVar5[0xc] = 0xffffffffffffffff;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      *(undefined4 *)(puVar5 + 0xf) = 0xffffffff;
      puVar5[0x10] = 0;
      puVar10 = puVar5;
    }
    puVar5 = (undefined8 *)operator_new(0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 1;
      *puVar5 = &PTR_FUN_1446fefe0;
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
  local_88[0] = FUN_1411d5230;
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
    *puVar9 = &PTR_CopyToEmptyStorage_1446feff0;
    puVar9[2] = local_e8;
    puVar9[3] = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 4,local_d8);
  }
  *param_2 = &LAB_1411d5030;
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



// FUNCTION 1411e0920 FUN_1411e0920 body=998 status=ok
// SIG undefined FUN_1411e0920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1411e0920(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_2a8 [32];
  undefined2 local_288;
  longlong *local_278;
  longlong *local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  longlong *local_250;
  LARGE_INTEGER local_248 [2];
  code *local_238 [2];
  undefined1 local_228 [32];
  undefined8 local_208;
  undefined4 local_1f8;
  undefined1 *local_1e8 [2];
  undefined1 local_1d8 [32];
  undefined8 local_1b8;
  undefined4 local_1a8;
  longlong *local_198;
  longlong *local_190;
  undefined1 local_188 [16];
  longlong local_178 [4];
  longlong *local_158;
  int local_148;
  undefined1 *local_138 [2];
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  LARGE_INTEGER local_e8 [24];
  longlong local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  plVar7 = *(longlong **)(param_1 + 200);
  if ((plVar7 == (longlong *)0x0) &&
     (plVar7 = (longlong *)0x0, (*(uint *)(param_1 + 8) >> 4 & 1) == 0)) {
    local_208 = 0;
    local_1f8 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_228);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = param_1;
      *puVar3 = &PTR_FUN_143f77b70;
    }
    local_268 = 0;
    local_238[0] = FUN_1411d5060;
    local_260 = 0x45;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
    local_288 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_268,0x45,"UOakThumbnailManager::GetActorThumbnail::CreateNewThumbnailSceneTask"
              );
    FUN_140cdf730(local_e8,&local_268,local_238);
    QueryPerformanceCounter(local_248);
    local_e8[0] = local_248[0];
    lVar4 = operator_new(0x18);
    plVar5 = plVar7;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140cdf810(lVar4);
    }
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *plVar6 = (longlong)&PTR_DestroyObject_1444f8938;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      plVar6[2] = (longlong)plVar5;
      plVar7 = plVar6;
    }
    local_278 = plVar5;
    local_270 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_278,plVar5,plVar5);
    *(undefined1 *)(local_278 + 2) = 1;
    local_250 = (longlong *)local_278[1];
    local_28 = *local_278;
    if (local_250 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_250 + 1) = (int)local_250[1] + 1;
      UNLOCK();
    }
    local_258 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_20,&local_250);
    plVar7 = local_250;
    if (local_250 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_250 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_250)(local_250);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_250 + 8))(local_250,1);
        }
      }
    }
    local_108 = (longlong *)0x0;
    local_f8 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_128);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1444f8620;
      puVar3[1] = local_e8;
    }
    local_138[0] = &LAB_140cee980;
    local_198 = local_278;
    local_190 = local_270;
    if (local_270 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_270 + 1) = (int)local_270[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_188,local_138);
    local_1b8 = 0;
    local_1a8 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x70,local_1d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_CopyToEmptyStorage_1444f8578;
      puVar3[2] = local_198;
      puVar3[3] = local_190;
      if (local_190 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_190 + 1) = (int)local_190[1] + 1;
        UNLOCK();
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 4,local_188);
    }
    local_1e8[0] = &LAB_140cee8d0;
    if (local_148 != 0) {
      plVar7 = local_178;
      if (local_158 != (longlong *)0x0) {
        plVar7 = local_158;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar7 = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_190 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_190)(local_190);
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
    if (local_f8 != 0) {
      plVar7 = local_128;
      if (local_108 != (longlong *)0x0) {
        plVar7 = local_108;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar7 = local_270;
    if (local_270 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_270 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_270)(local_270);
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
    FUN_142032330(local_1e8);
    FUN_140d1b3a0(local_e8);
    FUN_140ce1dc0(local_e8);
    plVar7 = *(longlong **)(param_1 + 200);
  }
  return plVar7;
}



// FUNCTION 1411e0d10 FUN_1411e0d10 body=285 status=ok
// SIG undefined FUN_1411e0d10(void)

void FUN_1411e0d10(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  iVar1 = *(int *)(param_1 + 0x1068);
  if (iVar1 != 0) {
    iVar3 = (int)param_2[1];
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
      iVar3 = (int)param_2[1];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_2 + (longlong)iVar3 * 8),*(void **)(param_1 + 0x1060),
               (longlong)iVar1 << 3);
    *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar2 != 0) {
    uVar5 = 0;
    plVar6 = *(longlong **)(lVar2 + 0x1098);
    uVar7 = (longlong)*(int *)(lVar2 + 0x10a0) & 0x1fffffffffffffff;
    if (plVar6 + *(int *)(lVar2 + 0x10a0) < plVar6) {
      uVar7 = uVar5;
    }
    if (uVar7 != 0) {
      do {
        if (*plVar6 != 0) {
          puVar4 = (undefined8 *)FUN_140aaea60();
          iVar1 = *(int *)(puVar4 + 1);
          if (iVar1 != 0) {
            iVar3 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < iVar3 + iVar1) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar3 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar3 * 8),(void *)*puVar4,(longlong)iVar1 << 3
                      );
            *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
          }
        }
        plVar6 = plVar6 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar7);
    }
  }
  return;
}



// FUNCTION 1411e0e30 FUN_1411e0e30 body=248 status=ok
// SIG undefined FUN_1411e0e30(void)

void FUN_1411e0e30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x60);
  plVar1 = (longlong *)(param_1 + 0x58);
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      cVar2 = FWeakObjectPtr::IsValid(*plVar1 + (longlong)iVar5 * 8);
      if (cVar2 == '\0') {
        iVar4 = *(int *)(param_1 + 0x60);
        iVar3 = (iVar4 - iVar5) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar5 * 8),
                     (void *)(*plVar1 + (longlong)(iVar4 - iVar3) * 8),(longlong)iVar3 << 3);
          iVar4 = *(int *)(param_1 + 0x60);
        }
        *(int *)(param_1 + 0x60) = iVar4 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
      }
      else {
        iVar5 = iVar5 + 1;
      }
      iVar4 = *(int *)(param_1 + 0x60);
    } while (iVar5 < iVar4);
  }
  if (param_2 != plVar1) {
    _Src = (void *)*plVar1;
    *(int *)(param_2 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar4);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar4 << 3);
  }
  return;
}



// FUNCTION 1411e0f30 FUN_1411e0f30 body=25 status=ok
// SIG undefined FUN_1411e0f30(void)

float FUN_1411e0f30(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x4c0);
  if (fVar1 < 0.0) {
    fVar1 = *(float *)(param_1 + 0x470);
  }
  return fVar1;
}



// FUNCTION 1411e0f50 FUN_1411e0f50 body=126 status=ok
// SIG undefined FUN_1411e0f50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_1411e0f50(longlong param_1,undefined1 (*param_2) [16],int param_3,int param_4)

{
  undefined8 uVar1;
  undefined1 (*pauVar2) [16];
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  
  uVar1 = _DAT_1464aa6c8;
  *(undefined8 *)*param_2 = _DAT_1464aa6c0;
  *(undefined8 *)(*param_2 + 8) = uVar1;
  if (0 < param_4) {
    pfVar3 = *(float **)(param_1 + 0x468);
    pfVar4 = pfVar3 + (longlong)*(int *)(param_1 + 0x470) * 0xc;
    if (pfVar3 != pfVar4) {
      pauVar2 = (undefined1 (*) [16])(pfVar3 + 2);
      do {
        if (*pfVar3 <= ((float)param_3 * 100.0) / (float)param_4) {
          if (*(undefined1 (**) [16])((longlong)pauVar2[1] + 8) == (undefined1 (*) [16])0x0) {
            auVar5 = *pauVar2;
          }
          else {
            auVar5 = **(undefined1 (**) [16])((longlong)pauVar2[1] + 8);
          }
          *param_2 = auVar5;
        }
        pfVar3 = pfVar3 + 0xc;
        pauVar2 = pauVar2 + 3;
      } while (pfVar3 != pfVar4);
    }
  }
  return param_2;
}



// FUNCTION 1411e0fd0 FUN_1411e0fd0 body=19 status=ok
// SIG undefined FUN_1411e0fd0(void)

undefined8 FUN_1411e0fd0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_142dcdb70(param_1 + 0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1411e0ff0 FUN_1411e0ff0 body=474 status=ok
// SIG undefined FUN_1411e0ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1411e0ff0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar4 = param_1 + 0x288;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x290)) &&
       (local_108 = 0, *(longlong *)(param_1 + 0x298) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x290) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar4);
      if (lVar2 != 0) goto LAB_1411e1094;
    }
  }
  else {
LAB_1411e1094:
    lVar3 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1411e10f5;
  }
  FUN_14282a800(local_f8);
  FUN_14283c290(local_f8,param_1 + 0x298,1,0);
  FUN_14282cc40(local_f8);
LAB_1411e10f5:
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x290)) {
      return 0;
    }
    local_108 = 0;
    if (*(longlong *)(param_1 + 0x298) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x290) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar4);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar4 = FUN_142f2cf80();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  return lVar2;
}



// FUNCTION 1411e11d0 FUN_1411e11d0 body=104 status=ok
// SIG undefined FUN_1411e11d0(void)

longlong * FUN_1411e11d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((param_2 == 0) ||
     (((((plVar1 = (longlong *)(param_1 + 0xc08), *plVar1 != param_2 &&
         (plVar1 = (longlong *)(param_1 + 0xc38), *plVar1 != param_2)) &&
        (plVar1 = (longlong *)(param_1 + 0xc68), *plVar1 != param_2)) &&
       ((plVar1 = (longlong *)(param_1 + 0xc98), *plVar1 != param_2 &&
        (plVar1 = (longlong *)(param_1 + 0xcc8), *plVar1 != param_2)))) &&
      ((plVar1 = (longlong *)(param_1 + 0xcf8), *plVar1 != param_2 &&
       ((plVar1 = (longlong *)(param_1 + 0xd28), *plVar1 != param_2 &&
        (plVar1 = (longlong *)(param_1 + 0xd58), *plVar1 != param_2)))))))) {
    plVar1 = (longlong *)0x0;
  }
  return plVar1;
}



// FUNCTION 1411e1240 FUN_1411e1240 body=345 status=ok
// SIG undefined FUN_1411e1240(void)

undefined8 * FUN_1411e1240(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar9;
  undefined8 *puVar8;
  
  if (((*(char *)(param_1 + 0x98) == '\x02') || (*(char *)(param_1 + 800) != '\0')) ||
     (*(char *)(param_1 + 0x2a8) != '\0')) {
    lVar6 = *(longlong *)(param_1 + 0xa0);
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x90);
  }
  puVar8 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar8;
  if (lVar6 != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (((*(longlong *)(DAT_146b33f38 + 0xd0) != 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0xd0) + 0x30), lVar1 != 0)) &&
       (puVar9 = puVar7, *(longlong *)(lVar1 + 0x28) != 0)) {
      lVar3 = FUN_1414ce2b0();
      lVar4 = *(longlong *)(lVar1 + 0x28);
      if (lVar4 != 0) {
        while (lVar4 != lVar3) {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          if (lVar4 == 0) {
            return (undefined8 *)0x0;
          }
        }
        if (lVar6 != 0) {
          if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
            lVar4 = *(longlong *)(lVar1 + 0x70);
            if (*(longlong *)(lVar1 + 0x70) == 0) {
              lVar4 = lVar1 + 0x68;
            }
            iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                                     (longlong)*(int *)(lVar1 + 0x78) - 1U) * 4);
            if (iVar2 != -1) {
              do {
                puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar2 * 0x18);
                if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar2 * 0x18) == lVar6) {
                  if (iVar2 != -1) goto LAB_1411e1373;
                  break;
                }
                iVar2 = *(int *)(puVar7 + 2);
              } while (iVar2 != -1);
            }
          }
          puVar7 = puVar8;
LAB_1411e1373:
          puVar5 = puVar7 + 1;
          if (puVar7 == (undefined8 *)0x0) {
            puVar5 = puVar8;
          }
          if (puVar5 != (undefined8 *)0x0) {
            puVar9 = (undefined8 *)*puVar5;
          }
        }
      }
    }
  }
  return puVar9;
}



// FUNCTION 1411e13a0 FUN_1411e13a0 body=42 status=ok
// SIG undefined FUN_1411e13a0(void)

longlong FUN_1411e13a0(longlong param_1)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0x98) == '\x02') || (*(char *)(param_1 + 800) != '\0')) ||
     (lVar1 = param_1 + 0x230, *(char *)(param_1 + 0x2a8) != '\0')) {
    lVar1 = param_1 + 0xa8;
  }
  return lVar1;
}



// FUNCTION 1411e13d0 FUN_1411e13d0 body=268 status=ok
// SIG undefined FUN_1411e13d0(void)

longlong FUN_1411e13d0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x470))(param_1,local_res8);
  if (*plVar3 == 0) {
    return 0;
  }
  lVar4 = FUN_142e49950();
  lVar6 = *plVar3;
  while( true ) {
    if (lVar6 == 0) {
      return 0;
    }
    if (lVar6 == lVar4) break;
    lVar6 = *(longlong *)(lVar6 + 0x30);
  }
  if (*plVar3 == 0) {
    return 0;
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x470))(param_1,local_res10);
  if (*plVar3 != 0) {
    plVar5 = (longlong *)FUN_142e49950();
    plVar3 = (longlong *)*plVar3;
    for (plVar1 = plVar3; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
      if (plVar1 == plVar5) goto LAB_1411e1470;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1411e1470:
  lVar6 = plVar3[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar6 = plVar3[0x1f];
    if (lVar6 == 0) {
      return 0;
    }
  }
  lVar4 = FUN_142e49950();
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
    return 0;
  }
  return lVar6;
}



// FUNCTION 1411e14e0 FUN_1411e14e0 body=594 status=ok
// SIG undefined FUN_1411e14e0(void)

void FUN_1411e14e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if (param_2 == (longlong *)0x0) {
    uVar3 = FUN_14301f8f0();
    param_2 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar3);
    if (param_2 != (longlong *)0x0) goto LAB_1411e1520;
  }
  else {
LAB_1411e1520:
    lVar4 = APlayArea::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    plVar11 = param_2;
    if (bVar2) goto LAB_1411e155e;
  }
  plVar11 = (longlong *)0x0;
LAB_1411e155e:
  lVar4 = FUN_1411e13d0(param_2);
  if (lVar4 != 0) {
    plVar5 = (longlong *)*param_3;
    iVar1 = (int)param_3[1];
    for (plVar8 = plVar5; plVar8 != plVar5 + iVar1; plVar8 = plVar8 + 1) {
      if (*plVar8 == lVar4) {
        if ((int)((longlong)plVar8 - (longlong)plVar5 >> 3) != -1) goto LAB_1411e15be;
        break;
      }
    }
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
    }
    *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar4;
  }
LAB_1411e15be:
  if (plVar11 != (longlong *)0x0) {
    uVar10 = 0;
    lVar4 = plVar11[0x73];
    if (0 < (int)lVar4) {
LAB_1411e15f0:
      plVar5 = (longlong *)(**(code **)(*plVar11 + 0x540))(plVar11,local_res8,uVar10 & 0xff);
      if (*plVar5 != 0) {
        lVar6 = FUN_142e49950();
        for (lVar9 = *plVar5; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
          if (lVar9 == lVar6) {
            if (*plVar5 != 0) {
              plVar7 = (longlong *)FUN_142e49950();
              plVar5 = (longlong *)*plVar5;
              plVar8 = plVar5;
              goto joined_r0x0001411e1650;
            }
            break;
          }
        }
      }
      goto LAB_1411e1710;
    }
  }
  return;
joined_r0x0001411e1650:
  if (plVar8 == (longlong *)0x0) goto LAB_1411e1660;
  if (plVar8 == plVar7) goto LAB_1411e1662;
  plVar8 = (longlong *)plVar8[6];
  goto joined_r0x0001411e1650;
LAB_1411e1660:
  plVar5 = (longlong *)0x0;
LAB_1411e1662:
  lVar9 = plVar5[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar9 = plVar5[0x1f];
    if (lVar9 == 0) goto LAB_1411e1710;
  }
  lVar6 = FUN_142e49950();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    plVar5 = (longlong *)*param_3;
    iVar1 = (int)param_3[1];
    for (plVar8 = plVar5; plVar8 != plVar5 + iVar1; plVar8 = plVar8 + 1) {
      if (*plVar8 == lVar9) {
        if ((int)((longlong)plVar8 - (longlong)plVar5 >> 3) != -1) goto LAB_1411e1710;
        break;
      }
    }
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
    }
    *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar9;
  }
LAB_1411e1710:
  uVar10 = uVar10 + 1;
  if ((int)lVar4 <= (int)uVar10) {
    return;
  }
  goto LAB_1411e15f0;
}



// FUNCTION 1411e1740 FUN_1411e1740 body=586 status=ok
// SIG undefined FUN_1411e1740(void)

longlong FUN_1411e1740(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  plVar8 = (longlong *)0x0;
  iVar10 = *(int *)(param_1 + 0x1068);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  plVar6 = plVar8;
  plVar11 = plVar8;
  if (iVar10 != 0) {
    iVar9 = 0;
    if (0 < iVar10) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_88,iVar10);
      iVar9 = (int)local_80;
    }
    plVar6 = local_88;
    _guard_xfg_dispatch_icall_nop
              (local_88 + iVar9,*(void **)(param_1 + 0x1060),(longlong)iVar10 << 3);
    plVar11 = (longlong *)(ulonglong)(uint)(iVar9 + iVar10);
    local_80 = CONCAT44(local_80._4_4_,iVar9 + iVar10);
  }
  iVar10 = (int)plVar11;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar12 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar12 != 0) {
    plVar7 = *(longlong **)(lVar12 + 0x1098);
    plVar5 = (longlong *)((longlong)*(int *)(lVar12 + 0x10a0) & 0x1fffffffffffffff);
    if (plVar7 + *(int *)(lVar12 + 0x10a0) < plVar7) {
      plVar5 = plVar8;
    }
    plVar13 = plVar8;
    if (plVar5 != (longlong *)0x0) {
      do {
        if (*plVar7 != 0) {
          puVar3 = (undefined8 *)FUN_140aaea60();
          iVar10 = *(int *)(puVar3 + 1);
          if (iVar10 != 0) {
            iVar9 = (int)plVar11;
            if (local_80._4_4_ < iVar10 + (int)plVar11) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(&local_88);
              plVar6 = local_88;
              iVar9 = (int)local_80;
            }
            _guard_xfg_dispatch_icall_nop(plVar6 + iVar9,(void *)*puVar3,(longlong)iVar10 << 3);
            plVar11 = (longlong *)(ulonglong)(uint)(iVar9 + iVar10);
            local_80 = CONCAT44(local_80._4_4_,iVar9 + iVar10);
          }
        }
        iVar10 = (int)plVar11;
        plVar7 = plVar7 + 1;
        plVar13 = (longlong *)((longlong)plVar13 + 1);
      } while (plVar13 != plVar5);
    }
  }
  plVar11 = plVar6 + iVar10;
  plVar7 = plVar6;
  for (; lVar12 = 0, plVar6 != plVar11; plVar6 = plVar6 + 1) {
    lVar12 = *plVar6;
    if (lVar12 == 0) {
LAB_1411e1929:
      bVar1 = false;
    }
    else {
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_60 = 0xffffffff;
      local_5c = 0;
      if (param_2 == 0) {
        local_50 = 0;
      }
      else {
        uVar4 = FSoftObjectPath::FSoftObjectPath(local_78,param_2);
        FSoftObjectPath::operator=(&local_50,uVar4);
        FWeakObjectPtr::operator=(&local_60,param_2);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_5c = CONCAT44(DAT_1464b56f4,(undefined4)local_5c);
      }
      plVar8 = (longlong *)0x1;
      cVar2 = FSoftObjectPath::operator==(lVar12 + 0x50,&local_50);
      if (cVar2 == '\0') goto LAB_1411e1929;
      bVar1 = true;
    }
    if ((plVar8 != (longlong *)0x0) && (plVar8 = (longlong *)0x0, local_48 != 0)) {
      FMemory::Free();
    }
    plVar7 = local_88;
    if (bVar1) break;
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  return lVar12;
}



// FUNCTION 1411e1990 FUN_1411e1990 body=763 status=ok
// SIG undefined FUN_1411e1990(void)

float * FUN_1411e1990(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong local_res8;
  undefined1 local_res10 [8];
  
  fVar2 = DAT_1468b5da8;
  *(undefined8 *)param_2 = DAT_1468b5da0;
  param_2[2] = fVar2;
  lVar7 = FUN_1411e1240();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = *(longlong *)(DAT_146b33f38 + 0xd0);
  lVar13 = *(longlong *)(param_1 + 0x40);
  if (lVar13 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(longlong *)(lVar13 + 0xa58);
  }
  if ((((lVar7 == 0) || (lVar3 == 0)) || (lVar13 == 0)) || (*(char *)(param_1 + 0x98) == '\x02')) {
    return param_2;
  }
  lVar13 = *(longlong *)(param_1 + 0x68);
  if (lVar13 == 0) {
    return param_2;
  }
  lVar8 = FUN_1428dfc70();
  lVar13 = *(longlong *)(lVar13 + 0x10);
  if ((*(int *)(lVar13 + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar13 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return param_2;
  }
  cVar5 = FUN_142dcfc60(*(undefined8 *)(param_1 + 0x40));
  if (cVar5 == '\0') {
LAB_1411e1aa3:
    lVar13 = 0x274;
  }
  else if (cVar5 == '\x01') {
    lVar13 = 0x2e4;
  }
  else if (cVar5 == '\x02') {
    lVar13 = 0x354;
  }
  else {
    if (cVar5 != '\x03') goto LAB_1411e1aa3;
    lVar13 = 0x3c4;
  }
  lVar8 = FUN_1411e6da0(lVar7,cVar5);
  fVar2 = *(float *)(lVar8 + 0x10);
  *(undefined8 *)param_2 = *(undefined8 *)(lVar8 + 8);
  param_2[2] = fVar2;
  cVar5 = FUN_1411ea9a0(param_1);
  if ((cVar5 == '\0') || (lVar12 == 0)) goto LAB_1411e1bd9;
  FUN_140c74430(lVar8 + 0x28,&local_res8,lVar12);
  if (((int)local_res8 == -1) ||
     ((lVar12 = (longlong)(int)local_res8 * 0x78 + *(longlong *)(lVar8 + 0x28), lVar12 == 0 ||
      (lVar12 == -8)))) goto LAB_1411e1bd9;
  iVar6 = 0;
  local_res8 = 0;
  lVar8 = FUN_140fe3d00(param_1,0);
  if ((lVar8 != 0) && (plVar9 = *(longlong **)(lVar8 + 0x22a8), plVar9 != (longlong *)0x0)) {
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x460))(plVar9,local_res10);
    local_res8 = *plVar9;
    iVar6 = (int)local_res8;
  }
  if ((*(int *)(lVar12 + 0x28) != *(int *)(lVar12 + 0x54)) &&
     (iVar6 = *(int *)(((ulonglong)(*(longlong *)(lVar12 + 0x60) != 0) - 1 & lVar12 + 0x58U |
                       *(ulonglong *)(lVar12 + 0x60)) +
                      ((longlong)((int)((ulonglong)local_res8 >> 0x20) + iVar6) &
                      (longlong)*(int *)(lVar12 + 0x68) - 1U) * 4), iVar6 != -1)) {
    lVar8 = *(longlong *)(lVar12 + 0x20);
    iVar10 = iVar6;
    do {
      if (*(longlong *)(lVar8 + (longlong)iVar10 * 0x28) == local_res8) {
        if (iVar10 != -1) {
          if ((*(int *)(lVar12 + 0x28) == *(int *)(lVar12 + 0x54)) || (iVar6 == -1))
          goto LAB_1411e1c68;
          goto LAB_1411e1c40;
        }
        break;
      }
      iVar10 = *(int *)(lVar8 + 0x20 + (longlong)iVar10 * 0x28);
    } while (iVar10 != -1);
  }
  puVar11 = (undefined8 *)(lVar12 + 0x10);
LAB_1411e1bcb:
  fVar2 = *(float *)(puVar11 + 1);
  *(undefined8 *)param_2 = *puVar11;
  param_2[2] = fVar2;
LAB_1411e1bd9:
  if (*(char *)(lVar7 + 8) != '\0') {
    fVar2 = *(float *)(lVar3 + 4 + lVar13);
    *param_2 = *(float *)(lVar3 + lVar13) + *param_2;
    fVar1 = *(float *)(lVar3 + 8 + lVar13);
    param_2[1] = fVar2 + param_2[1];
    param_2[2] = fVar1 + param_2[2];
  }
  return param_2;
LAB_1411e1c40:
  lVar12 = lVar8 + (longlong)iVar6 * 0x28;
  if (*(longlong *)(lVar8 + (longlong)iVar6 * 0x28) != local_res8) goto code_r0x0001411e1c51;
  if (iVar6 == -1) {
LAB_1411e1c68:
    lVar12 = 0;
  }
  puVar11 = (undefined8 *)(lVar12 + 0x10);
  goto LAB_1411e1bcb;
code_r0x0001411e1c51:
  iVar6 = *(int *)(lVar12 + 0x20);
  if (iVar6 == -1) goto code_r0x0001411e1c59;
  goto LAB_1411e1c40;
code_r0x0001411e1c59:
  puVar11 = (undefined8 *)&DAT_00000010;
  goto LAB_1411e1bcb;
}



// FUNCTION 1411e1c90 FUN_1411e1c90 body=508 status=ok
// SIG undefined FUN_1411e1c90(void)

longlong * FUN_1411e1c90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  switch(*(undefined1 *)(param_1 + 0x230)) {
  case 1:
    lVar4 = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0xa58);
    }
    if ((lVar4 == 0) || (lVar4 = FUN_140e50900(), lVar4 == 0)) goto switchD_1411e1cc3_default;
    if (*(longlong *)(lVar4 + 0x30) != 0) {
      lVar3 = FUN_141404840();
      lVar4 = *(longlong *)(lVar4 + 0x30);
      for (lVar5 = lVar4; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar3) goto LAB_1411e1d18;
      }
    }
    break;
  case 2:
    lVar4 = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0xa58);
    }
    if ((lVar4 == 0) || (lVar4 = FUN_140e50900(), lVar4 == 0)) goto switchD_1411e1cc3_default;
    if (*(longlong *)(lVar4 + 0x38) != 0) {
      lVar3 = FUN_141404840();
      lVar4 = *(longlong *)(lVar4 + 0x38);
      lVar5 = lVar4;
      if (lVar4 != 0) {
        while (lVar5 != lVar3) {
          plVar1 = (longlong *)(lVar5 + 0x30);
          lVar5 = *plVar1;
          if (*plVar1 == 0) {
            *param_2 = 0;
            return param_2;
          }
        }
        goto LAB_1411e1d18;
      }
    }
    break;
  case 3:
    lVar4 = *(longlong *)(param_1 + 0x270);
    if (lVar4 == 0) goto switchD_1411e1cc3_default;
    lVar5 = FUN_1414eba50();
    goto LAB_1411e1dbe;
  case 4:
    lVar4 = *(longlong *)(param_1 + 0x270);
    if (lVar4 != 0) {
      lVar5 = FUN_1414ecd30();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar4 = AAfrPlayerState::GetPrivateStaticClass();
        *param_2 = lVar4;
        return param_2;
      }
    }
    goto switchD_1411e1cc3_default;
  case 5:
    lVar4 = *(longlong *)(param_1 + 0x270);
    if (lVar4 == 0) goto switchD_1411e1cc3_default;
    lVar5 = FUN_1412fb190();
LAB_1411e1dbe:
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
      lVar4 = FUN_1428dfc70();
      *param_2 = lVar4;
      return param_2;
    }
switchD_1411e1cc3_default:
    *param_2 = 0;
    return param_2;
  case 6:
    *param_2 = *(longlong *)(param_1 + 0x238);
    return param_2;
  default:
    goto switchD_1411e1cc3_default;
  }
  lVar4 = 0;
LAB_1411e1d18:
  *param_2 = lVar4;
  return param_2;
}



// FUNCTION 1411e1eb0 FUN_1411e1eb0 body=119 status=ok
// SIG undefined FUN_1411e1eb0(void)

undefined8 FUN_1411e1eb0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1405e8b50(param_2);
  if (lVar1 != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x90) != 0) {
      FUN_1405e8e50(lVar1,param_1,*(longlong *)(DAT_146b33f38 + 0x90) + 0x1080);
      return param_1;
    }
  }
  FText::FText(param_1);
  return param_1;
}



// FUNCTION 1411e1f30 FUN_1411e1f30 body=395 status=ok
// SIG undefined FUN_1411e1f30(void)

longlong FUN_1411e1f30(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x300;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x308)) && (*(longlong *)(param_1 + 0x310) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x308) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar4);
      if (lVar2 != 0) goto LAB_1411e1fb7;
    }
  }
  else {
LAB_1411e1fb7:
    lVar3 = FUN_141319ff0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1411e1fff;
  }
  lVar2 = FUN_1405ec200(lVar4);
  if (lVar2 != 0) {
    FUN_141319ff0();
  }
LAB_1411e1fff:
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x308)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x310) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x308) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar4);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar4 = FUN_141319ff0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  return lVar2;
}



// FUNCTION 1411e20c0 FUN_1411e20c0 body=395 status=ok
// SIG undefined FUN_1411e20c0(void)

longlong FUN_1411e20c0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x2b0;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x2b8)) && (*(longlong *)(param_1 + 0x2c0) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x2b8) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar4);
      if (lVar2 != 0) goto LAB_1411e2147;
    }
  }
  else {
LAB_1411e2147:
    lVar3 = FUN_141319ff0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1411e218f;
  }
  lVar2 = FUN_1405ec200(lVar4);
  if (lVar2 != 0) {
    FUN_141319ff0();
  }
LAB_1411e218f:
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x2b8)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x2c0) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x2b8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar4);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar4 = FUN_141319ff0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  return lVar2;
}



// FUNCTION 1411e2250 FUN_1411e2250 body=168 status=ok
// SIG undefined FUN_1411e2250(void)

longlong FUN_1411e2250(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 0x98) != '\x02') && (lVar1 = *(longlong *)(param_1 + 0x68), lVar1 != 0))
  {
    lVar4 = FUN_141404840();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar1 = *(longlong *)(lVar1 + 0x2298), lVar1 != 0)) {
      lVar4 = *(longlong *)(lVar1 + 0x2a0);
      lVar1 = lVar4 + (longlong)*(int *)(lVar1 + 0x2a8) * 0x28;
      for (; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
        lVar2 = *(longlong *)(lVar4 + 0x10);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xf0) == param_2)) {
          return lVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1411e2300 FUN_1411e2300 body=8 status=ok
// SIG undefined FUN_1411e2300(void)

longlong FUN_1411e2300(longlong param_1)

{
  return param_1 + 0xc38;
}



// FUNCTION 1411e2310 FUN_1411e2310 body=7 status=ok
// SIG undefined FUN_1411e2310(void)

undefined4 FUN_1411e2310(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}



// FUNCTION 1411e2320 FUN_1411e2320 body=54 status=ok
// SIG undefined FUN_1411e2320(void)

undefined8 FUN_1411e2320(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x140);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x140);
    uVar2 = FUN_140bb7440(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1411e2360 FUN_1411e2360 body=115 status=ok
// SIG undefined FUN_1411e2360(void)

longlong FUN_1411e2360(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 4);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FWeakObjectPtr::Get(param_1 + 4);
  lVar4 = UGameInstance::GetGameViewportClient(uVar3);
  if (lVar4 != 0) {
    lVar5 = AReplicationGraphDebugActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 1411e23e0 FUN_1411e23e0 body=8 status=ok
// SIG undefined FUN_1411e23e0(void)

longlong FUN_1411e23e0(longlong param_1)

{
  return param_1 + 0xc68;
}



// FUNCTION 1411e23f0 FUN_1411e23f0 body=1614 status=ok
// SIG undefined FUN_1411e23f0(void)

undefined8 * FUN_1411e23f0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  void *_Dst;
  longlong *plVar8;
  longlong *plVar9;
  longlong **pplVar10;
  longlong lVar11;
  int iVar12;
  longlong *plStack_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  longlong local_158;
  int local_150;
  longlong local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong local_138;
  longlong local_130;
  int local_128;
  longlong local_120;
  longlong *local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8 [2];
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [8];
  longlong local_78;
  undefined1 local_68 [24];
  longlong local_50;
  
  iVar12 = -1;
  if (*(longlong *)(param_3 + 0x10) == 0) {
LAB_1411e2a0d:
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 3) = 0xffffffff;
    param_2[4] = 0;
  }
  else {
    plStack_170 = (longlong *)0x0;
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x68));
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_68,param_3);
    plVar6 = *(longlong **)(param_1 + 0x58);
    plVar8 = plVar6 + (longlong)*(int *)(param_1 + 0x60) * 2;
    local_118 = plVar6;
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_90,local_68);
    plVar9 = plVar6;
    for (; plVar6 != plVar8; plVar6 = plVar6 + 2) {
      lVar11 = *plVar6;
      AcquireSRWLockShared((PSRWLOCK)(lVar11 + 0x38));
      local_f0 = 0;
      local_e8 = 0;
      local_f8 = 0;
      local_108 = *(undefined4 *)(lVar11 + 0x10);
      local_104 = *(undefined8 *)(lVar11 + 0x14);
      local_a8 = *(undefined8 *)(lVar11 + 0x20);
      FString::FString(local_a0,lVar11 + 0x28);
      FSoftObjectPath::operator=(&local_f8,&local_a8);
      ReleaseSRWLockShared((PSRWLOCK)(lVar11 + 0x38));
      cVar5 = FSoftObjectPath::operator==(&local_f8,local_80);
      if (local_f0 != 0) {
        FMemory::Free();
      }
      plVar9 = local_118;
      if (cVar5 != '\0') break;
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (plVar6 != plVar8) {
      iVar12 = (int)((longlong)plVar6 - (longlong)plVar9 >> 4);
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
    if ((iVar12 < 0) || (*(int *)(param_1 + 0x60) <= iVar12)) {
      lVar11 = 0;
      pplVar10 = &local_118;
      local_110 = (longlong *)0x0;
      bVar3 = false;
      bVar2 = true;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar12 * 0x10 + *(longlong *)(param_1 + 0x58));
      local_d8 = (longlong *)plVar6[1];
      lVar11 = *plVar6;
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
        UNLOCK();
      }
      pplVar10 = &local_e0;
      bVar3 = true;
      bVar2 = false;
    }
    plVar9 = (longlong *)0x0;
    *pplVar10 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_170);
    plVar6 = local_110;
    if ((bVar2) && (local_110 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_110 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_110 + 8))();
        }
      }
    }
    plVar6 = local_d8;
    if ((bVar3) && (local_d8 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_d8 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_d8 + 8))();
        }
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x68));
    if (lVar11 == 0) {
      _Dst = (void *)operator_new(0x710);
      plVar6 = plVar9;
      if (_Dst != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(_Dst,0,0x710);
        plVar6 = (longlong *)FUN_1411c87d0(_Dst);
      }
      plVar8 = (longlong *)operator_new(0x18);
      if (plVar8 != (longlong *)0x0) {
        *(undefined4 *)(plVar8 + 1) = 1;
        *plVar8 = (longlong)&PTR_FUN_1446fefd0;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        plVar8[2] = (longlong)plVar6;
        plVar9 = plVar8;
      }
      local_c8[0] = plVar9;
      SharedPointerInternals::EnableSharedFromThis(&local_d0,plVar6,plVar6);
      local_d0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_170,local_c8);
      plVar9 = local_c8[0];
      if (local_c8[0] != (longlong *)0x0) {
        LOCK();
        plVar8 = local_c8[0] + 1;
        lVar11 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_c8[0])(local_c8[0]);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar9 = plStack_170;
      plStack_b0 = plStack_170;
      if (plStack_170 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
        UNLOCK();
      }
      local_b8 = plVar6;
      cVar5 = FUN_1411d2aa0(param_1,&local_b8);
      plVar8 = plStack_170;
      if (cVar5 == '\0') {
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar9 + 1;
          lVar11 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plStack_170)(plStack_170);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plStack_170 + 8))(plStack_170,1);
            }
          }
        }
        goto LAB_1411e2a0d;
      }
      FUN_1411fae30(plVar6,param_3);
      LOCK();
      *(undefined4 *)((longlong)plVar6 + 0x70c) = 1;
      UNLOCK();
      AcquireSRWLockShared((PSRWLOCK)(plVar6 + 0x10));
      local_140 = 0xffffffff;
      uVar7 = FUN_1416f8720((int)plVar6[0xb]);
      FUN_14170c210(&local_140,uVar7);
      local_13c = 0xffffffff;
      uVar7 = FUN_1416f8720(*(undefined4 *)((longlong)plVar6 + 0x5c));
      FUN_14170c210(&local_13c,uVar7);
      local_138 = plVar6[0xc];
      local_130 = plVar6[0xd];
      if (local_130 != 0) {
        LOCK();
        *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
        UNLOCK();
      }
      local_128 = (int)plVar6[0xe];
      local_120 = plVar6[0xf];
      if (local_120 != 0) {
        LOCK();
        *(int *)(local_120 + 0x48) = *(int *)(local_120 + 0x48) + 1;
        UNLOCK();
      }
      ReleaseSRWLockShared((PSRWLOCK)(plVar6 + 0x10));
      local_128 = local_128 + *(int *)(param_1 + 0xd8) * *(int *)(param_1 + 0x44);
      *(undefined4 *)param_2 = local_140;
      *(undefined4 *)((longlong)param_2 + 4) = local_13c;
      param_2[1] = local_138;
      param_2[2] = local_130;
      *(int *)(param_2 + 3) = local_128;
      param_2[4] = local_120;
      local_140 = 0xffffffff;
      local_13c = 0xffffffff;
      local_130 = 0;
      local_138 = 0;
      local_120 = 0;
      FUN_140ddef50(&local_140);
    }
    else {
      LOCK();
      *(undefined4 *)(lVar11 + 0x70c) = 1;
      UNLOCK();
      AcquireSRWLockShared((PSRWLOCK)(lVar11 + 0x80));
      local_168 = 0xffffffff;
      uVar7 = FUN_1416f8720(*(undefined4 *)(lVar11 + 0x58));
      FUN_14170c210(&local_168,uVar7);
      local_164 = 0xffffffff;
      uVar7 = FUN_1416f8720(*(undefined4 *)(lVar11 + 0x5c));
      FUN_14170c210(&local_164,uVar7);
      local_160 = *(undefined8 *)(lVar11 + 0x60);
      local_158 = *(longlong *)(lVar11 + 0x68);
      if (local_158 != 0) {
        LOCK();
        *(int *)(local_158 + 8) = *(int *)(local_158 + 8) + 1;
        UNLOCK();
      }
      local_150 = *(int *)(lVar11 + 0x70);
      local_148 = *(longlong *)(lVar11 + 0x78);
      if (local_148 != 0) {
        LOCK();
        *(int *)(local_148 + 0x48) = *(int *)(local_148 + 0x48) + 1;
        UNLOCK();
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar11 + 0x80));
      local_150 = local_150 + *(int *)(param_1 + 0xd8) * *(int *)(param_1 + 0x44);
      *(undefined4 *)param_2 = local_168;
      *(undefined4 *)((longlong)param_2 + 4) = local_164;
      param_2[1] = local_160;
      param_2[2] = local_158;
      *(int *)(param_2 + 3) = local_150;
      param_2[4] = local_148;
      local_168 = 0xffffffff;
      local_164 = 0xffffffff;
      local_158 = 0;
      local_160 = 0;
      local_148 = 0;
      FUN_1416f8340(0xffffffff);
      FUN_1416f8340(local_168);
    }
    plVar6 = plStack_170;
    if (plStack_170 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_170 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_170)(plStack_170);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plStack_170 + 8))(plStack_170,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1411e2a40 FUN_1411e2a40 body=1342 status=ok
// SIG undefined FUN_1411e2a40(void)

undefined8 * FUN_1411e2a40(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  void *_Dst;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong **pplVar11;
  int iVar12;
  longlong *plStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  longlong local_b8;
  int local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *plStack_40;
  
  local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000);
  if (param_3 == 0) {
LAB_1411e2f52:
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 3) = 0xffffffff;
    param_2[4] = 0;
  }
  else {
    plStack_d0 = (longlong *)0x0;
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x68));
    plVar8 = *(longlong **)(param_1 + 0x58);
    plVar10 = plVar8 + (longlong)*(int *)(param_1 + 0x60) * 2;
    local_78 = plVar8;
    for (; plVar8 != plVar10; plVar8 = plVar8 + 2) {
      lVar6 = *plVar8;
      SRWLock = (PSRWLOCK)(lVar6 + 8);
      AcquireSRWLockShared(SRWLock);
      lVar6 = FWeakObjectPtr::Get(lVar6);
      ReleaseSRWLockShared(SRWLock);
      if (lVar6 == param_3) {
        if (((plVar8 != plVar10) &&
            (iVar12 = (int)((longlong)plVar8 - (longlong)local_78 >> 4), -1 < iVar12)) &&
           (iVar12 < *(int *)(param_1 + 0x60))) {
          plVar8 = (longlong *)((longlong)iVar12 * 0x10 + *(longlong *)(param_1 + 0x58));
          local_60 = (longlong *)plVar8[1];
          lVar6 = *plVar8;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          pplVar11 = &local_68;
          bVar3 = true;
          bVar2 = false;
          goto LAB_1411e2af9;
        }
        break;
      }
    }
    lVar6 = 0;
    pplVar11 = &local_78;
    local_70 = (longlong *)0x0;
    bVar3 = false;
    bVar2 = true;
LAB_1411e2af9:
    plVar10 = (longlong *)0x0;
    *pplVar11 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_d0);
    plVar8 = local_70;
    if ((bVar2) && (local_70 != (longlong *)0x0)) {
      LOCK();
      plVar9 = local_70 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_70 + 8))();
        }
      }
    }
    plVar8 = local_60;
    if ((bVar3) && (local_60 != (longlong *)0x0)) {
      LOCK();
      plVar9 = local_60 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_60 + 8))();
        }
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x68));
    if (lVar6 == 0) {
      _Dst = (void *)operator_new(0x710);
      plVar8 = plVar10;
      if (_Dst != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(_Dst,0,0x710);
        plVar8 = (longlong *)FUN_1411c87d0(_Dst);
      }
      plVar9 = (longlong *)operator_new(0x18);
      if (plVar9 != (longlong *)0x0) {
        *(undefined4 *)(plVar9 + 1) = 1;
        *plVar9 = (longlong)&PTR_FUN_1446fefd0;
        *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
        plVar9[2] = (longlong)plVar8;
        plVar10 = plVar9;
      }
      local_50 = plVar10;
      SharedPointerInternals::EnableSharedFromThis(&local_58,plVar8,plVar8);
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_d0,&local_50);
      plVar10 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_50 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_50)(local_50);
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
      plVar10 = plStack_d0;
      plStack_40 = plStack_d0;
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
        UNLOCK();
      }
      local_48 = plVar8;
      cVar5 = FUN_1411d2aa0(param_1,&local_48);
      plVar9 = plStack_d0;
      if (cVar5 == '\0') {
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar10 + 1;
          lVar6 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_d0)(plStack_d0);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
            }
          }
        }
        goto LAB_1411e2f52;
      }
      FUN_1411f93e0(plVar8,param_3);
      FUN_1411fa9f0(plVar8,param_4);
      LOCK();
      *(undefined4 *)((longlong)plVar8 + 0x70c) = 1;
      UNLOCK();
      AcquireSRWLockShared((PSRWLOCK)(plVar8 + 0x10));
      local_a0 = 0xffffffff;
      uVar7 = FUN_1416f8720((int)plVar8[0xb]);
      FUN_14170c210(&local_a0,uVar7);
      local_9c = 0xffffffff;
      uVar7 = FUN_1416f8720(*(undefined4 *)((longlong)plVar8 + 0x5c));
      FUN_14170c210(&local_9c,uVar7);
      local_98 = plVar8[0xc];
      local_90 = plVar8[0xd];
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
        UNLOCK();
      }
      local_88 = (int)plVar8[0xe];
      local_80 = plVar8[0xf];
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 0x48) = *(int *)(local_80 + 0x48) + 1;
        UNLOCK();
      }
      ReleaseSRWLockShared((PSRWLOCK)(plVar8 + 0x10));
      local_88 = local_88 + *(int *)(param_1 + 0xd8) * *(int *)(param_1 + 0x44);
      *(undefined4 *)param_2 = local_a0;
      *(undefined4 *)((longlong)param_2 + 4) = local_9c;
      param_2[1] = local_98;
      param_2[2] = local_90;
      *(int *)(param_2 + 3) = local_88;
      param_2[4] = local_80;
      local_a0 = 0xffffffff;
      local_9c = 0xffffffff;
      local_90 = 0;
      local_98 = 0;
      local_80 = 0;
      FUN_140ddef50(&local_a0);
    }
    else {
      LOCK();
      *(undefined4 *)(lVar6 + 0x70c) = 1;
      UNLOCK();
      AcquireSRWLockShared((PSRWLOCK)(lVar6 + 0x80));
      local_c8 = 0xffffffff;
      uVar7 = FUN_1416f8720(*(undefined4 *)(lVar6 + 0x58));
      FUN_14170c210(&local_c8,uVar7);
      local_c4 = 0xffffffff;
      uVar7 = FUN_1416f8720(*(undefined4 *)(lVar6 + 0x5c));
      FUN_14170c210(&local_c4,uVar7);
      local_c0 = *(undefined8 *)(lVar6 + 0x60);
      local_b8 = *(longlong *)(lVar6 + 0x68);
      if (local_b8 != 0) {
        LOCK();
        *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
        UNLOCK();
      }
      local_b0 = *(int *)(lVar6 + 0x70);
      local_a8 = *(longlong *)(lVar6 + 0x78);
      if (local_a8 != 0) {
        LOCK();
        *(int *)(local_a8 + 0x48) = *(int *)(local_a8 + 0x48) + 1;
        UNLOCK();
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 0x80));
      local_b0 = local_b0 + *(int *)(param_1 + 0xd8) * *(int *)(param_1 + 0x44);
      *(undefined4 *)param_2 = local_c8;
      *(undefined4 *)((longlong)param_2 + 4) = local_c4;
      param_2[1] = local_c0;
      param_2[2] = local_b8;
      *(int *)(param_2 + 3) = local_b0;
      param_2[4] = local_a8;
      local_c8 = 0xffffffff;
      local_c4 = 0xffffffff;
      local_b8 = 0;
      local_c0 = 0;
      local_a8 = 0;
      FUN_1416f8340(0xffffffff);
      FUN_1416f8340(local_c8);
    }
    plVar8 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_d0 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1411e2f80 FUN_1411e2f80 body=1637 status=ok
// SIG undefined FUN_1411e2f80(void)

undefined8 * FUN_1411e2f80(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  PVOID pvVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  short *psVar9;
  longlong *plVar10;
  undefined8 uVar11;
  void *pvVar12;
  longlong *plVar13;
  longlong *plVar14;
  PSRWLOCK *ppRVar15;
  PSRWLOCK pRVar16;
  int iVar17;
  PSRWLOCK pRVar18;
  undefined2 *puVar19;
  int iVar20;
  PSRWLOCK SRWLock;
  longlong lVar21;
  short *psVar22;
  PSRWLOCK pRVar23;
  longlong *plStack_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  longlong local_f8;
  int local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  longlong local_d0;
  int local_c8;
  longlong local_c0;
  PSRWLOCK local_b8;
  longlong *local_b0;
  PSRWLOCK local_a8;
  longlong *local_a0;
  short *local_98;
  int local_90;
  undefined4 local_8c;
  undefined2 *local_88;
  int local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68 [2];
  longlong *local_58;
  longlong *plStack_50;
  
  iVar20 = *(int *)(param_3 + 8) + -1;
  if (*(int *)(param_3 + 8) == 0) {
    iVar20 = 0;
  }
  iVar17 = -1;
  if (iVar20 < 1) {
LAB_1411e35b4:
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 3) = 0xffffffff;
    param_2[4] = 0;
  }
  else {
    SRWLock = (PSRWLOCK)(param_1 + 0x68);
    plStack_110 = (longlong *)0x0;
    local_a8 = SRWLock;
    AcquireSRWLockShared(SRWLock);
    FString::FString(local_68,param_3);
    pRVar18 = *(PSRWLOCK *)(param_1 + 0x58);
    pRVar16 = pRVar18 + (longlong)*(int *)(param_1 + 0x60) * 2;
    local_b8 = pRVar18;
    FString::FString(&local_88,local_68);
    pRVar23 = pRVar18;
    for (; pRVar18 != pRVar16; pRVar18 = pRVar18 + 2) {
      pvVar4 = pRVar18->Ptr;
      AcquireSRWLockShared((PSRWLOCK)((longlong)pvVar4 + 0x50));
      local_90 = *(int *)((longlong)pvVar4 + 0x48);
      lVar21 = (longlong)local_90;
      psVar22 = (short *)0x0;
      pvVar12 = *(void **)((longlong)pvVar4 + 0x40);
      local_98 = (short *)0x0;
      if (local_90 == 0) {
        local_8c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
        psVar22 = local_98;
        _guard_xfg_dispatch_icall_nop(local_98,pvVar12,lVar21 * 2);
      }
      iVar20 = local_90;
      ReleaseSRWLockShared((PSRWLOCK)((longlong)pvVar4 + 0x50));
      puVar19 = &DAT_143f3eda8;
      if (local_80 != 0) {
        puVar19 = local_88;
      }
      psVar9 = &DAT_143f3eda8;
      if (iVar20 != 0) {
        psVar9 = psVar22;
      }
      lVar21 = (longlong)puVar19 - (longlong)psVar9;
      do {
        sVar2 = *psVar9;
        sVar3 = *(short *)((longlong)psVar9 + lVar21);
        if (sVar2 != sVar3) break;
        psVar9 = psVar9 + 1;
      } while (sVar3 != 0);
      if (psVar22 != (short *)0x0) {
        FMemory::Free(psVar22);
      }
      SRWLock = local_a8;
      pRVar23 = local_b8;
      if (sVar2 == sVar3) break;
    }
    if (local_88 != (undefined2 *)0x0) {
      FMemory::Free(local_88);
    }
    if (pRVar18 != pRVar16) {
      iVar17 = (int)((longlong)pRVar18 - (longlong)pRVar23 >> 4);
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if ((iVar17 < 0) || (*(int *)(param_1 + 0x60) <= iVar17)) {
      lVar21 = 0;
      ppRVar15 = &local_a8;
      local_a0 = (longlong *)0x0;
      bVar6 = false;
      bVar5 = true;
    }
    else {
      plVar10 = (longlong *)((longlong)iVar17 * 0x10 + *(longlong *)(param_1 + 0x58));
      local_b0 = (longlong *)plVar10[1];
      lVar21 = *plVar10;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
        UNLOCK();
      }
      ppRVar15 = &local_b8;
      bVar6 = true;
      bVar5 = false;
    }
    plVar14 = (longlong *)0x0;
    *ppRVar15 = (PSRWLOCK)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_110);
    plVar10 = local_a0;
    if ((bVar5) && (local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar13 = local_a0 + 1;
      lVar7 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_a0 + 8))();
        }
      }
    }
    plVar10 = local_b0;
    if ((bVar6) && (local_b0 != (longlong *)0x0)) {
      LOCK();
      plVar13 = local_b0 + 1;
      lVar7 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_b0 + 8))();
        }
      }
    }
    ReleaseSRWLockShared(SRWLock);
    if (lVar21 == 0) {
      pvVar12 = (void *)operator_new(0x710);
      plVar10 = plVar14;
      if (pvVar12 != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(pvVar12,0,0x710);
        plVar10 = (longlong *)FUN_1411c87d0(pvVar12);
      }
      plVar13 = (longlong *)operator_new(0x18);
      if (plVar13 != (longlong *)0x0) {
        *(undefined4 *)(plVar13 + 1) = 1;
        *plVar13 = (longlong)&PTR_FUN_1446fefd0;
        *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
        plVar13[2] = (longlong)plVar10;
        plVar14 = plVar13;
      }
      local_70 = plVar14;
      SharedPointerInternals::EnableSharedFromThis(&local_78,plVar10,plVar10);
      local_78 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_110,&local_70);
      plVar14 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_70 + 1;
        lVar21 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar21 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      plVar14 = plStack_110;
      plStack_50 = plStack_110;
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
        UNLOCK();
      }
      local_58 = plVar10;
      cVar8 = FUN_1411d2aa0(param_1,&local_58);
      plVar13 = plStack_110;
      if (cVar8 == '\0') {
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar14 + 1;
          lVar21 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar21 == 1) {
            (**(code **)*plStack_110)(plStack_110);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*plStack_110 + 8))(plStack_110,1);
            }
          }
        }
        goto LAB_1411e35b4;
      }
      AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 10));
      FString::operator=(plVar10 + 8,param_3);
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 10));
      LOCK();
      *(undefined4 *)((longlong)plVar10 + 0x70c) = 1;
      UNLOCK();
      AcquireSRWLockShared((PSRWLOCK)(plVar10 + 0x10));
      local_e0 = 0xffffffff;
      uVar11 = FUN_1416f8720((int)plVar10[0xb]);
      FUN_14170c210(&local_e0,uVar11);
      local_dc = 0xffffffff;
      uVar11 = FUN_1416f8720(*(undefined4 *)((longlong)plVar10 + 0x5c));
      FUN_14170c210(&local_dc,uVar11);
      local_d8 = plVar10[0xc];
      local_d0 = plVar10[0xd];
      if (local_d0 != 0) {
        LOCK();
        *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
        UNLOCK();
      }
      local_c8 = (int)plVar10[0xe];
      local_c0 = plVar10[0xf];
      if (local_c0 != 0) {
        LOCK();
        *(int *)(local_c0 + 0x48) = *(int *)(local_c0 + 0x48) + 1;
        UNLOCK();
      }
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 0x10));
      local_c8 = local_c8 + *(int *)(param_1 + 0xd8) * *(int *)(param_1 + 0x44);
      *(undefined4 *)param_2 = local_e0;
      *(undefined4 *)((longlong)param_2 + 4) = local_dc;
      param_2[1] = local_d8;
      param_2[2] = local_d0;
      *(int *)(param_2 + 3) = local_c8;
      param_2[4] = local_c0;
      local_e0 = 0xffffffff;
      local_dc = 0xffffffff;
      local_d0 = 0;
      local_d8 = 0;
      local_c0 = 0;
      FUN_140ddef50(&local_e0);
    }
    else {
      LOCK();
      *(undefined4 *)(lVar21 + 0x70c) = 1;
      UNLOCK();
      AcquireSRWLockShared((PSRWLOCK)(lVar21 + 0x80));
      local_108 = 0xffffffff;
      uVar11 = FUN_1416f8720(*(undefined4 *)(lVar21 + 0x58));
      FUN_14170c210(&local_108,uVar11);
      local_104 = 0xffffffff;
      uVar11 = FUN_1416f8720(*(undefined4 *)(lVar21 + 0x5c));
      FUN_14170c210(&local_104,uVar11);
      local_100 = *(undefined8 *)(lVar21 + 0x60);
      local_f8 = *(longlong *)(lVar21 + 0x68);
      if (local_f8 != 0) {
        LOCK();
        *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
        UNLOCK();
      }
      local_f0 = *(int *)(lVar21 + 0x70);
      local_e8 = *(longlong *)(lVar21 + 0x78);
      if (local_e8 != 0) {
        LOCK();
        *(int *)(local_e8 + 0x48) = *(int *)(local_e8 + 0x48) + 1;
        UNLOCK();
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar21 + 0x80));
      local_f0 = local_f0 + *(int *)(param_1 + 0xd8) * *(int *)(param_1 + 0x44);
      *(undefined4 *)param_2 = local_108;
      *(undefined4 *)((longlong)param_2 + 4) = local_104;
      param_2[1] = local_100;
      param_2[2] = local_f8;
      *(int *)(param_2 + 3) = local_f0;
      param_2[4] = local_e8;
      local_108 = 0xffffffff;
      local_104 = 0xffffffff;
      local_f8 = 0;
      local_100 = 0;
      local_e8 = 0;
      FUN_1416f8340(0xffffffff);
      FUN_1416f8340(local_108);
    }
    plVar10 = plStack_110;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_110 + 1;
      lVar21 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar21 == 1) {
        (**(code **)*plStack_110)(plStack_110);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plStack_110 + 8))(plStack_110,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1411e35f0 FUN_1411e35f0 body=130 status=ok
// SIG undefined FUN_1411e35f0(void)

undefined8 FUN_1411e35f0(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146876aa8) {
    _Init_thread_header(&DAT_146876aa8);
    if (DAT_146876aa8 == -1) {
      FName::FName(&DAT_146876aa0,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_146876aa8);
    }
  }
  lVar1 = FModuleManager::GetModulePtr_Internal(DAT_146876aa0);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x18);
  }
  return 0;
}



// FUNCTION 1411e3680 FUN_1411e3680 body=137 status=ok
// SIG undefined FUN_1411e3680(void)

void FUN_1411e3680(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar2 = *(longlong *)(lVar2 + 0x148);
    if (lVar2 != 0) {
      lVar3 = FUN_141424d10();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar2 = UWidgetComponent::GetUserWidgetObject(lVar2), lVar2 != 0)) {
        return;
      }
    }
  }
  FUN_142eb6870(param_1);
  return;
}



// FUNCTION 1411e3710 FUN_1411e3710 body=285 status=ok
// SIG undefined FUN_1411e3710(void)

undefined8 FUN_1411e3710(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  iVar2 = (int)((ulonglong)param_3 >> 0x20);
  puVar6 = (undefined8 *)0x0;
  if (*(int *)(param_1 + 0xd98) != *(int *)(param_1 + 0xdc4)) {
    lVar3 = *(longlong *)(param_1 + 0xdd0);
    if (*(longlong *)(param_1 + 0xdd0) == 0) {
      lVar3 = param_1 + 0xdc8;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)(iVar2 + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0xdd8) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0xd90) + (longlong)iVar1 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0xd90) + (longlong)iVar1 * 0x18) == param_3) {
          if (iVar1 != -1) goto LAB_1411e3793;
          break;
        }
        iVar1 = *(int *)(puVar5 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar5 = puVar6;
LAB_1411e3793:
  puVar4 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar4 = puVar6;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xd98) != *(int *)(param_1 + 0xdc4)) {
    lVar3 = *(longlong *)(param_1 + 0xdd0);
    if (*(longlong *)(param_1 + 0xdd0) == 0) {
      lVar3 = param_1 + 0xdc8;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)(iVar2 + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0xdd8) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0xd90) + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0xd90) + (longlong)iVar2 * 0x18) == param_3) {
          if (iVar2 != -1) goto LAB_1411e3813;
          break;
        }
        iVar2 = *(int *)(puVar5 + 2);
      } while (iVar2 != -1);
    }
  }
  puVar5 = puVar6;
LAB_1411e3813:
  puVar4 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar4 = puVar6;
  }
  return *puVar4;
}



// FUNCTION 1411e3830 FUN_1411e3830 body=139 status=ok
// SIG undefined FUN_1411e3830(void)

longlong FUN_1411e3830(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xdc);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_14301f8f0();
  uVar4 = FWeakObjectPtr::Get(param_1 + 0xdc);
  lVar5 = AGameStateBase::OnRep_GameModeClass(uVar4,uVar3);
  if (lVar5 != 0) {
    lVar6 = FUN_14301f8f0();
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
      return lVar5;
    }
  }
  return 0;
}



// FUNCTION 1411e38c0 FUN_1411e38c0 body=1293 status=ok
// SIG undefined FUN_1411e38c0(void)

longlong FUN_1411e38c0(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_128 [8];
  longlong *local_120;
  longlong local_110 [2];
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
  undefined1 local_88 [72];
  
  FUN_140ed0240();
  FWeakObjectPtr::operator=(param_1 + 0xdc,param_2);
  uVar8 = FUN_1411e3dd0(local_d0,param_2);
  FText::operator=(param_1,uVar8);
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_c8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  if (param_2 == (longlong *)0x0) {
LAB_1411e3bdb:
    uVar8 = FUN_1404b03b0();
    FText::FText(local_128,uVar8);
  }
  else {
    local_res18 = FUN_14301f8f0();
    lVar9 = (**(code **)(*param_2 + 0x628))(param_2,local_res18);
    if ((lVar9 == 0) || (*(longlong *)(lVar9 + 0x208) == 0)) goto LAB_1411e3bdb;
    FText::FText(local_100,*(longlong *)(lVar9 + 0x208) + 0x40);
    cVar5 = FText::IsEmpty(local_100);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_f8 + 1;
      lVar12 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_f8 + 8))(local_f8,1);
        }
      }
    }
    if (cVar5 == '\0') {
      FText::FText(local_128,*(longlong *)(lVar9 + 0x208) + 0x40);
    }
    else {
      local_res10 = *(undefined8 *)(*(longlong *)(lVar9 + 0x208) + 0x18);
      FName::ToString(&local_res10,local_110);
      FText::FromString(local_128,local_110);
      if (local_110[0] != 0) {
        FMemory::Free();
      }
    }
  }
  FText::operator=(param_1 + 0x20,local_128);
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_120 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)local_120 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  if ((param_2 != (longlong *)0x0) && (param_3 != 0)) {
    uVar8 = FUN_142ffbee0(param_3,local_88,param_2);
    FUN_1411cb440(param_1 + 0x98,uVar8);
    bVar3 = *(byte *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xc4);
    *(byte *)(param_1 + 0x54) = ~bVar3 & 1;
    *(byte *)(param_1 + 0x56) = bVar3 >> 2 & 1;
    *(byte *)(param_1 + 0x55) = bVar3 >> 1 & 1;
    puVar10 = (undefined4 *)FUN_142ffa6f0(param_3,local_res8,param_2);
    *(undefined4 *)(param_1 + 0xd8) = *puVar10;
  }
  cVar5 = FText::IsEmpty(param_1);
  if (cVar5 != '\0') {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"EMPTY",L"OakUILibrary",L"EmptyItemText");
    FText::operator=(param_1,uVar8);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_b0 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xdc);
  if (cVar5 != '\0') {
    plVar11 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xdc);
    local_res20 = FUN_14301f8f0();
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0x628))(plVar11,local_res20);
    if (plVar11 != (longlong *)0x0) {
      uVar7 = (**(code **)(*plVar11 + 0x408))(plVar11);
      *(undefined4 *)(param_1 + 0x18) = uVar7;
      if (plVar11[0x42] == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(plVar11[0x42] + 0xb8);
      }
      FWeakObjectPtr::operator=(param_1 + 0xe4,uVar8);
      FWeakObjectPtr::operator=(param_1 + 0xec,plVar11[0x43]);
      uVar7 = FSceneViewport::GetMouseY(plVar11);
      *(undefined4 *)(param_1 + 0x50) = uVar7;
      uVar8 = FUN_1411e13d0(plVar11);
      FWeakObjectPtr::operator=(param_1 + 0xf4,uVar8);
      *(undefined1 *)(param_1 + 0x10c) = 1;
      if (((plVar11[0x41] != 0) && (lVar9 = *(longlong *)(plVar11[0x41] + 0x1d8), lVar9 != 0)) &&
         (*(char *)(lVar9 + 0x5e) != '\0')) {
        *(undefined1 *)(param_1 + 0x10c) = 0;
      }
    }
  }
  if ((param_3 != 0) && (lVar9 = *(longlong *)(param_3 + 0x118), lVar9 != 0)) {
    lVar12 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
        != lVar12 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_1411e3cb2;
  }
  lVar9 = 0;
LAB_1411e3cb2:
  if (((param_2 == (longlong *)0x0) || (lVar9 == 0)) ||
     (cVar5 = FUN_140c48e60(lVar9,param_2), cVar5 == '\0')) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 0x58) = uVar6;
  cVar5 = FText::IsEmpty(param_1);
  if (cVar5 != '\0') {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"Fix Me: No Item Name",L"OakUILibrary",L"NoItemText");
    FText::operator=(param_1,uVar8);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_98 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
  }
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xec);
  if (cVar5 != '\0') {
    lVar9 = FWeakObjectPtr::Get(param_1 + 0xec);
    FText::FText(local_e8,lVar9 + 0xa8);
    FText::operator=(param_1 + 0x38,local_e8);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_e0 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 1411e3dd0 FUN_1411e3dd0 body=490 status=ok
// SIG undefined FUN_1411e3dd0(void)

undefined8 FUN_1411e3dd0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (param_2 != (longlong *)0x0) {
    local_res18 = FUN_14301f8f0();
    lVar6 = (**(code **)(*param_2 + 0x628))(param_2,local_res18);
    if (lVar6 != 0) {
      FText::FText(local_68,lVar6 + 0x268);
      cVar5 = FText::IsEmpty(local_68);
      if ((cVar5 != '\0') && (lVar6 = *(longlong *)(lVar6 + 0x208), lVar6 != 0)) {
        FText::FText(local_50,lVar6 + 0x40);
        FText::operator=(local_68,local_50);
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
        cVar5 = FText::IsEmpty(local_68);
        if (cVar5 != '\0') {
          local_res10 = *(undefined8 *)(lVar6 + 0x18);
          FName::ToString(&local_res10,local_78);
          uVar7 = FText::FromString(local_38,local_78);
          FText::operator=(local_68,uVar7);
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
          if (local_78[0] != 0) {
            FMemory::Free();
          }
        }
      }
      FText::FText(param_1,local_68);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      return param_1;
    }
  }
  uVar7 = FUN_1404b03b0();
  FText::FText(param_1,uVar7);
  return param_1;
}



// FUNCTION 1411e3fc0 FUN_1411e3fc0 body=717 status=ok
// SIG undefined FUN_1411e3fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1411e3fc0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 auStack_e8 [32];
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
  longlong local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xb0);
  if (cVar4 == '\0') {
    lVar7 = 0;
  }
  else {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0xb0);
    lVar7 = FWeakObjectPtr::Get(lVar7 + 0x70);
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_142dcdb70(param_1 + 0x10);
  }
  if ((lVar7 == 0) || (lVar8 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_142dcf470(lVar7,*(undefined8 *)(lVar8 + 0x10));
  }
  if ((((lVar7 == 0) || (*(char *)(param_1 + 0xa0) != '\0')) || (*(longlong *)(param_1 + 0x78) == 0)
      ) || (iVar5 == 0)) {
    uVar9 = FUN_1404b03b0();
    FText::FText(param_2,uVar9);
  }
  else {
    iVar6 = FUN_142dce8d0(lVar7,*(undefined8 *)(lVar8 + 0x10));
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_80,L"Rank {0}",L"GFxChallengeMenu",L"ChallengeLevel");
    puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_68,uVar9);
    local_58[0] = 0;
    local_30 = '\0';
    iVar11 = iVar6 + 1;
    if (iVar5 <= iVar6 + 1) {
      iVar11 = iVar5;
    }
    local_50 = (longlong)iVar11;
    local_b8 = local_58;
    puStack_b0 = local_28;
    local_c8 = *puVar10;
    lStack_c0 = puVar10[1];
    if (lStack_c0 != 0) {
      LOCK();
      *(int *)(lStack_c0 + 8) = *(int *)(lStack_c0 + 8) + 1;
      UNLOCK();
    }
    uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_a8,&local_b8);
    uVar9 = FText::Format(local_98,&local_c8,uVar9);
    FText::FText(param_2,uVar9);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_90 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_a8);
    if (local_30 != '\0') {
      local_30 = '\0';
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
    plVar3 = (longlong *)puVar10[1];
    if (plVar3 != (longlong *)0x0) {
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
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_78 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1411e4290 FUN_1411e4290 body=433 status=ok
// SIG undefined FUN_1411e4290(void)

void FUN_1411e4290(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146876ac0) && (_Init_thread_header(&DAT_146876ac0), DAT_146876ac0 == -1)) {
    uVar1 = FUN_141437710();
    FUN_141437710();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsTracking",1);
    DAT_146876ab8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146876ac0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146876ab8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146876ab8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146876ab8 + 0x30));
  }
  if ((*piVar5 < DAT_146876ad0) && (_Init_thread_header(&DAT_146876ad0), DAT_146876ad0 == -1)) {
    uVar1 = FUN_141437710();
    FUN_141437710();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InstancedPlayerOwnerInfo",1);
    DAT_146876ac8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146876ad0);
  }
  if (0 < *(int *)(DAT_146876ac8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146876ac8 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146876ac8 + 0x30));
  }
  return;
}



// FUNCTION 1411e4450 FUN_1411e4450 body=246 status=ok
// SIG undefined FUN_1411e4450(void)

undefined8 FUN_1411e4450(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_5a8 [360];
  undefined1 local_440 [360];
  undefined1 local_2d8 [360];
  undefined1 local_170 [360];
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 == 0) {
    puVar5 = (undefined1 *)FUN_1411c9410(local_170);
    bVar3 = false;
    bVar2 = true;
  }
  else {
    if ((param_3 < 0) || (*(int *)(lVar1 + 0x38) <= param_3)) {
      uVar4 = FUN_1411c9410(local_440);
      bVar3 = false;
      bVar2 = true;
    }
    else {
      uVar4 = FUN_1411c9050(local_2d8,(longlong)param_3 * 0x168 + *(longlong *)(lVar1 + 0x30));
      bVar3 = true;
      bVar2 = false;
    }
    FUN_1411c8eb0(local_5a8,uVar4);
    if (bVar2) {
      FUN_1411ca750(local_440);
    }
    if (bVar3) {
      FUN_1411ca750(local_2d8);
    }
    bVar3 = true;
    bVar2 = false;
    puVar5 = local_5a8;
  }
  FUN_1411c8eb0(param_2,puVar5);
  if (bVar2) {
    FUN_1411ca750(local_170);
  }
  if (bVar3) {
    FUN_1411ca750(local_5a8);
  }
  return param_2;
}



// FUNCTION 1411e4550 FUN_1411e4550 body=747 status=ok
// SIG undefined FUN_1411e4550(void)

undefined8 FUN_1411e4550(longlong param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  undefined8 local_res8 [2];
  longlong local_res18;
  undefined8 local_res20;
  uint uVar10;
  
  if ((*(longlong *)(param_1 + 0x40) != 0) || (*(longlong *)(param_1 + 0x58) == 0)) {
    return *(undefined8 *)(param_1 + 0x40);
  }
  lVar2 = AXActionCue::GetPrivateStaticClass();
  lVar6 = *(longlong *)(param_1 + 0x58);
  do {
    if (lVar6 == 0) {
LAB_1411e4592:
      return *(undefined8 *)(param_1 + 0x40);
    }
    if (lVar6 == lVar2) {
      if ((*(longlong *)(param_1 + 0x58) != 0) && (param_2 != '\0')) {
        FUN_14172a070(local_res8,0);
        pwVar9 = (wchar_t *)0x0;
        local_res18 = 0;
        pwVar5 = pwVar9;
        if (*(longlong *)(param_1 + 0x58) != 0) {
          pwVar3 = (wchar_t *)AXActionCue::GetPrivateStaticClass();
          for (pwVar7 = *(wchar_t **)(param_1 + 0x58);
              (pwVar5 = pwVar9, pwVar7 != (wchar_t *)0x0 &&
              (pwVar5 = *(wchar_t **)(param_1 + 0x58), pwVar7 != pwVar3));
              pwVar7 = *(wchar_t **)(pwVar7 + 0x18)) {
          }
        }
        uVar4 = GetTransientPackage();
        lVar6 = local_res18;
        local_res20 = 0;
        if (local_res18 == 0) {
          FUN_1417846f0(uVar4,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        uVar10 = 0;
        uVar4 = FUN_1417985e0(pwVar5,uVar4,lVar6,0,0,0,0,0,0);
        *(undefined8 *)(param_1 + 0x40) = uVar4;
        FUN_14172a400(local_res8);
        plVar8 = *(longlong **)(param_1 + 0x40);
        if (plVar8 == (longlong *)0x0) {
          return 0;
        }
        if (*(longlong *)(param_1 + 0x48) == 0) {
          uVar4 = 0;
          pwVar5 = pwVar9;
          goto LAB_1411e46d3;
        }
        pwVar5 = (wchar_t *)FUN_1422312c0(*(longlong *)(param_1 + 0x48));
        if (pwVar5 == (wchar_t *)0x0) {
LAB_1411e46c3:
          pwVar5 = pwVar9;
        }
        else {
          lVar6 = FUN_14141f270();
          if ((*(int *)(*(longlong *)(pwVar5 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pwVar5 + 8) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_1411e46c3;
        }
        plVar8 = *(longlong **)(param_1 + 0x40);
        uVar4 = *(undefined8 *)(param_1 + 0x48);
LAB_1411e46d3:
        (**(code **)(*plVar8 + 0x5a8))(plVar8,pwVar5,uVar4,0,uVar10 & 0xffffff00);
        if (((*(longlong *)(param_1 + 0x48) != 0) && (lVar6 = FUN_140cff1b0(), lVar6 != 0)) &&
           (*(longlong *)(lVar6 + 0x5e8) != 0)) {
          FUN_142ecf820(*(longlong *)(lVar6 + 0x5e8),*(undefined8 *)(param_1 + 0x40));
        }
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x3a0))(*(longlong **)(param_1 + 0x40),1);
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x3a8))(*(longlong **)(param_1 + 0x40),1);
        pwVar7 = _guard_xfg_dispatch_icall_nop
                           (L"&UMessageStackManager::HandleCompleteAnimation",L"::");
        pwVar5 = pwVar9;
        while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar5 = pwVar3;
        }
        FName::FName(local_res8,pwVar5 + 2,1);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
                  (*(longlong *)(param_1 + 0x40) + 0x870,param_1,FUN_1411e7560,local_res8[0]);
        pwVar5 = _guard_xfg_dispatch_icall_nop
                           (L"&UMessageStackManager::HandleCompleteAnimation",L"::");
        while (pwVar7 = pwVar5, pwVar7 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
          pwVar9 = pwVar7;
        }
        FName::FName(local_res8,pwVar9 + 2,1);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
                  (*(longlong *)(param_1 + 0x40) + 0x880,param_1,FUN_1411e7560,local_res8[0]);
        return *(undefined8 *)(param_1 + 0x40);
      }
      goto LAB_1411e4592;
    }
    lVar6 = *(longlong *)(lVar6 + 0x30);
  } while( true );
}



// FUNCTION 1411e4840 FUN_1411e4840 body=8 status=ok
// SIG undefined FUN_1411e4840(void)

longlong FUN_1411e4840(longlong param_1)

{
  return param_1 + 0xc08;
}



// FUNCTION 1411e4850 FUN_1411e4850 body=825 status=ok
// SIG undefined FUN_1411e4850(void)

undefined4 * FUN_1411e4850(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  wchar_t *_Str;
  int iVar8;
  longlong local_a8 [6];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  iVar8 = 0;
  *param_2 = 0;
  plVar2 = (longlong *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x22) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x26) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x2a) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  param_2[0x2e] = 0;
  *(undefined1 *)(param_2 + 0x2f) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_2 + 0x32) = 0;
  param_2[0x34] = 0xffffffff;
  FText::FText(local_48);
  local_a8[0] = 0;
  local_a8[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy(local_a8[0],L"Header",0xe);
  cVar4 = FUN_141606040(param_3,local_a8,local_48,0);
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  if (cVar4 != '\0') {
    uVar6 = FText::ToString(local_48);
    FString::operator=(param_2 + 2,uVar6);
  }
  FText::FText(local_60);
  local_a8[2] = 0;
  local_a8[3] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy(local_a8[2],L"Body",10);
  cVar4 = FUN_141606040(param_3,local_a8 + 2,local_60,0);
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  if (cVar4 != '\0') {
    uVar6 = FText::ToString(local_60);
    FString::operator=(param_2 + 6,uVar6);
  }
  FText::FText(local_78);
  local_a8[4] = 0;
  local_a8[5] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
  FGenericPlatformString::Memcpy(local_a8[4],L"DisplayTime",0x18);
  cVar4 = FUN_141606040(param_3,local_a8 + 4,local_78,0);
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  if (cVar4 != '\0') {
    puVar7 = (undefined8 *)FText::ToString(local_78);
    if (*(int *)(puVar7 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*puVar7;
    }
    iVar5 = _wtoi(_Str);
    param_2[0x2e] = iVar5;
  }
  if ((wchar_t *)*plVar2 != L"default") {
    param_2[0x32] = 0;
    if (param_2[0x33] != 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar2,8);
      iVar8 = param_2[0x32];
    }
    param_2[0x32] = iVar8 + 8;
    if ((int)param_2[0x33] < iVar8 + 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar2,iVar8);
    }
    builtin_wcsncpy((wchar_t *)*plVar2,L"default",8);
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return param_2;
}



// FUNCTION 1411e4b90 FUN_1411e4b90 body=2129 status=ok
// SIG undefined FUN_1411e4b90(void)

void FUN_1411e4b90(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  short *psVar15;
  int iVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  ushort *puVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong local_2e8;
  ulonglong local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  int local_220;
  undefined1 local_21c;
  longlong local_218;
  undefined8 local_210;
  undefined4 local_208 [4];
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  short *local_148;
  int local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128 [2];
  longlong local_118 [2];
  undefined1 local_108 [8];
  undefined1 local_100 [184];
  longlong local_48;
  undefined4 local_38;
  
  plVar2 = (longlong *)(param_1 + 0x370);
  iVar6 = *(int *)(param_1 + 0x37c);
  iVar16 = *(int *)(param_1 + 0x378);
  if (iVar6 < 0) {
    if (iVar16 != 0) {
      plVar13 = (longlong *)(*plVar2 + 0xc0);
      do {
        FUN_1416f8340((int)plVar13[2]);
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        FUN_1411ca660(plVar13 + -0x17);
        plVar13 = plVar13 + 0x1b;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      iVar6 = *(int *)(param_1 + 0x37c);
    }
    *(undefined4 *)(param_1 + 0x378) = 0;
    if (iVar6 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<216,8>_>,FDefaultAllocator>::ResizeTo
                (plVar2,0);
    }
  }
  else {
    if (iVar16 != 0) {
      plVar13 = (longlong *)(*plVar2 + 0xc0);
      do {
        FUN_1416f8340((int)plVar13[2]);
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        FUN_1411ca660(plVar13 + -0x17);
        plVar13 = plVar13 + 0x1b;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    *(undefined4 *)(param_1 + 0x378) = 0;
  }
  uVar14 = 0;
  local_2d8 = 0;
  local_208[0] = 0xffffffff;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_21c = 0;
  local_218 = 0;
  local_210 = 0;
  lVar7 = FUN_142b45e90();
  FOnlineSubsystemEOS::GetLeaderboardsInterface(*(undefined8 *)(lVar7 + 0x18),&local_138);
  uVar22 = uVar14;
  if ((local_138 == 0) || (iVar6 = FUN_140953d20(), iVar6 < 1)) {
    do {
      FString::PrintfImpl(local_128,L"NewsItem%d",uVar22);
      puVar17 = (undefined4 *)FUN_1411e4850(param_1,local_108,local_128);
      local_2d8 = *puVar17;
      FUN_1411cbb80(&local_2d0,puVar17 + 2);
      local_220 = puVar17[0x2e];
      plVar13 = (longlong *)(puVar17 + 0x30);
      local_21c = *(undefined1 *)(puVar17 + 0x2f);
      if (&local_218 != plVar13) {
        if (local_218 != 0) {
          FMemory::Free();
        }
        local_218 = *plVar13;
        *plVar13 = 0;
        local_210 = *(undefined8 *)(puVar17 + 0x32);
        *(undefined8 *)(puVar17 + 0x32) = 0;
      }
      FUN_1416ff870(local_208,puVar17 + 0x34);
      FUN_1416f8340(local_38);
      if (local_48 != 0) {
        FMemory::Free();
      }
      FUN_1411ca660(local_100);
      if (local_128[0] != 0) {
        FMemory::Free();
      }
      if ((local_220 < 1) ||
         ((((int)local_2c8 < 2 && ((int)local_2b8 < 2)) &&
          (((int)local_298 < 2 || ((int)local_278 < 2)))))) {
        uVar22 = 0xffffffff;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x378);
        *(int *)(param_1 + 0x378) = iVar6 + 1;
        if (*(int *)(param_1 + 0x37c) < iVar6 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<216,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar2,iVar6);
        }
        puVar17 = (undefined4 *)((longlong)iVar6 * 0xd8 + *plVar2);
        *puVar17 = local_2d8;
        FUN_1411c8a10(puVar17 + 2,&local_2d0);
        puVar17[0x2e] = local_220;
        *(undefined1 *)(puVar17 + 0x2f) = local_21c;
        FString::FString(puVar17 + 0x30,&local_218);
        puVar17[0x34] = 0xffffffff;
        uVar8 = FUN_1416f8720(local_208[0]);
        FUN_14170c210(puVar17 + 0x34,uVar8);
        uVar22 = (ulonglong)((int)uVar22 + 1);
      }
    } while (-1 < (int)uVar22);
  }
  else {
    do {
      local_1f8 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_190 = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = (longlong *)0x0;
      local_170 = 0;
      local_168 = 0;
      local_160 = 0;
      local_158 = 0;
      local_150 = 0;
      if ((local_138 != 0) && (cVar5 = FUN_142b46080(local_138,uVar22,&local_1f8), cVar5 != '\0')) {
        FUN_1411cbe80(&local_2d0,&local_1f8);
        local_220 = 0xf;
        if (((1 < (int)local_2c8) || (1 < (int)local_2b8)) ||
           ((1 < (int)local_298 && (1 < (int)local_278)))) {
          iVar16 = *(int *)(param_1 + 0x378);
          *(int *)(param_1 + 0x378) = iVar16 + 1;
          if (*(int *)(param_1 + 0x37c) < iVar16 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<216,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar2,iVar16);
          }
          puVar17 = (undefined4 *)((longlong)iVar16 * 0xd8 + *plVar2);
          *puVar17 = local_2d8;
          FUN_1411c8a10(puVar17 + 2,&local_2d0);
          puVar17[0x2e] = local_220;
          *(undefined1 *)(puVar17 + 0x2f) = local_21c;
          FString::FString(puVar17 + 0x30,&local_218);
          puVar17[0x34] = 0xffffffff;
          uVar8 = FUN_1416f8720(local_208[0]);
          FUN_14170c210(puVar17 + 0x34,uVar8);
        }
      }
      TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
      ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(&local_158);
      if (local_168 != 0) {
        FMemory::Free();
      }
      plVar13 = local_178;
      for (iVar16 = (int)local_170; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        plVar13 = plVar13 + 2;
      }
      if (local_178 != (longlong *)0x0) {
        FMemory::Free(local_178);
      }
      if (local_188 != 0) {
        FMemory::Free();
      }
      if (local_198 != 0) {
        FMemory::Free();
      }
      if (local_1a8 != 0) {
        FMemory::Free();
      }
      if (local_1b8 != 0) {
        FMemory::Free();
      }
      if (local_1c8 != 0) {
        FMemory::Free();
      }
      if (local_1d8 != 0) {
        FMemory::Free();
      }
      if (local_1e8 != 0) {
        FMemory::Free();
      }
      if (local_1f8 != 0) {
        FMemory::Free();
      }
      uVar23 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar23;
    } while ((int)uVar23 < iVar6);
  }
  uVar22 = uVar14;
  if (0 < *(int *)(param_1 + 0x378)) {
    do {
      puVar18 = (uint *)(*plVar2 + uVar22);
      if (puVar18[0x1c] == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = *(undefined2 **)(puVar18 + 0x1a);
      }
      if (puVar18[0x18] == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = *(undefined2 **)(puVar18 + 0x16);
      }
      if (puVar18[0x10] == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = *(undefined2 **)(puVar18 + 0xe);
      }
      if (puVar18[8] == 0) {
        puVar20 = &DAT_143f3eda8;
      }
      else {
        puVar20 = *(undefined2 **)(puVar18 + 6);
      }
      if (puVar18[4] == 0) {
        puVar19 = &DAT_143f3eda8;
      }
      else {
        puVar19 = *(undefined2 **)(puVar18 + 2);
      }
      FString::PrintfImpl(&local_148,L"%s:%s:%s:%s:%s",puVar19,puVar20,puVar9,puVar11,puVar12);
      psVar15 = &DAT_143f3eda8;
      if (local_140 != 0) {
        psVar15 = local_148;
      }
      local_2e8 = 0;
      local_2e0 = 0;
      if ((psVar15 != (short *)0x0) && (*psVar15 != 0)) {
        lVar7 = -1;
        do {
          lVar4 = lVar7 + 1;
          lVar7 = lVar7 + 1;
        } while (psVar15[lVar4] != 0);
        uVar23 = (int)lVar7 + 1;
        local_2e0 = (ulonglong)uVar23;
        if (0 < (int)uVar23) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,0);
        }
        FGenericPlatformString::Memcpy(local_2e8,psVar15,(longlong)(int)uVar23 * 2);
      }
      if (local_148 != (short *)0x0) {
        FMemory::Free();
      }
      puVar10 = (undefined8 *)FString::ToUpper(&local_2e8,local_118);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (ushort *)*puVar10;
      }
      uVar23 = 0xffffffff;
      uVar3 = *puVar21;
      while (uVar3 != 0) {
        puVar21 = puVar21 + 1;
        uVar23 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(byte)((byte)uVar23 ^ (byte)uVar3) * 4) ^
                 uVar23 >> 8;
        uVar23 = *(uint *)(&DAT_1464aaab0 + (ulonglong)((uVar3 >> 8 ^ uVar23) & 0xff) * 4) ^
                 uVar23 >> 8;
        uVar23 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar23 & 0xff) * 4) ^ uVar23 >> 8;
        uVar23 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar23 & 0xff) * 4) ^ uVar23 >> 8;
        uVar3 = *puVar21;
      }
      *puVar18 = ~uVar23;
      if (local_118[0] != 0) {
        FMemory::Free();
      }
      if (local_2e8 != 0) {
        FMemory::Free();
      }
      uVar23 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar23;
      uVar22 = uVar22 + 0xd8;
    } while ((int)uVar23 < *(int *)(param_1 + 0x378));
  }
  FUN_1411f8210(param_1);
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_130 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)local_130 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  FUN_1416f8340(local_208[0]);
  if (local_218 != 0) {
    FMemory::Free();
  }
  FUN_1411ca660(&local_2d0);
  return;
}



// FUNCTION 1411e53f0 GetNumInstances body=7 status=ok
// SIG undefined GetNumInstances(void)

undefined4 FSlateUpdatableInstanceBuffer::GetNumInstances(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



// FUNCTION 1411e5400 FUN_1411e5400 body=131 status=ok
// SIG undefined FUN_1411e5400(void)

void FUN_1411e5400(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1 + 0x274;
  cVar3 = FUN_140bf9690(0,lVar1);
  if (cVar3 == '\0') goto LAB_1411e5471;
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 == 0) {
LAB_1411e5464:
    lVar5 = 0;
  }
  else {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1411e5464;
  }
  FWeakObjectPtr::operator=(lVar1,lVar5);
LAB_1411e5471:
  FWeakObjectPtr::Get(lVar1);
  return;
}



// FUNCTION 1411e5490 FUN_1411e5490 body=2073 status=ok
// SIG undefined FUN_1411e5490(void)

/* WARNING: Type propagation algorithm not settling */

longlong FUN_1411e5490(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  DWORD DVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  int local_138;
  int local_134 [3];
  longlong local_128;
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined **local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined **local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38 [2];
  
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    bVar4 = false;
    if (DVar6 == DAT_1468c21c0) goto LAB_1411e54dc;
  }
  else {
LAB_1411e54dc:
    bVar4 = true;
  }
  if ((!bVar4) || (param_1 == 0)) goto LAB_1411e5bdf;
  if (*param_4 == 0) {
    plVar11 = (longlong *)*param_3;
    if (plVar11 != (longlong *)0x0) {
      puVar9 = (undefined8 *)(**(code **)(*plVar11 + 8))(plVar11,local_58);
      local_b0 = *puVar9;
      local_a8 = puVar9[1];
      if (local_a8 != 0) {
        LOCK();
        *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
        UNLOCK();
      }
      local_b8 = &PTR_FUN_143f740c8;
      local_a0 = 0;
      local_98 = 0;
      uVar10 = FUN_140bb7440(param_1);
      plVar11 = (longlong *)FUN_140d80730(uVar10,local_68,&local_b8);
      local_150 = (longlong *)plVar11[1];
      local_158 = *plVar11;
      if (local_150 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_150 + 1) = (int)local_150[1] + 1;
        UNLOCK();
      }
      if (param_4 != &local_158) {
        *param_4 = local_158;
        local_158 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_4 + 1,&local_150);
      }
      plVar11 = local_150;
      if (local_150 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_150 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_150)(local_150);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_150 + 8))(local_150,1);
          }
        }
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_60 + 1;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      FUN_1404bf980(&local_b8);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_50 + 1;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    if (*param_4 != 0) goto LAB_1411e5791;
    lVar12 = *param_2;
    if (lVar12 != 0) {
      local_80 = param_2[1];
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      local_90 = &PTR_FUN_143f740c8;
      local_78 = 0;
      local_70 = 0;
      local_88 = lVar12;
      uVar10 = FUN_140bb7440(param_1);
      plVar11 = (longlong *)FUN_140d80730(uVar10,local_48,&local_90);
      local_140 = (longlong *)plVar11[1];
      local_148 = *plVar11;
      if (local_140 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_140 + 1) = (int)local_140[1] + 1;
        UNLOCK();
      }
      if (param_4 != &local_148) {
        *param_4 = local_148;
        local_148 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_4 + 1,&local_140);
      }
      plVar11 = local_140;
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_140 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_140 + 8))(local_140,1);
          }
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_40 + 1;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
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
      FUN_1404bf980(&local_90);
      goto LAB_1411e5791;
    }
  }
  else {
LAB_1411e5791:
    lVar12 = *param_2;
    if (lVar12 != 0) {
      local_118 = (longlong *)param_2[1];
      if (local_118 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_118 + 1) = (int)local_118[1] + 1;
        UNLOCK();
      }
      local_120 = lVar12;
      cVar5 = FUN_140bc2a80(param_1,&local_120);
      plVar11 = local_118;
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_118 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      if (cVar5 != '\0') {
        local_110 = *param_2;
        local_108 = (longlong *)param_2[1];
        if (local_108 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_108 + 1) = (int)local_108[1] + 1;
          UNLOCK();
        }
        uVar7 = FUN_140bb6bd0(param_1,&local_110);
        lVar12 = FUN_140bbaee0(param_1,uVar7);
        plVar11 = local_108;
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_108 + 1;
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        if (lVar12 != 0) {
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
          return lVar12;
        }
      }
      local_100 = *param_2;
      local_f8 = (longlong *)param_2[1];
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
        UNLOCK();
      }
      local_128 = FUN_140bbb8d0(param_1,&local_100);
      if (local_128 == 0) {
LAB_1411e5907:
        local_128 = 0;
      }
      else {
        lVar12 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(local_128 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_128 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_1411e5907;
      }
      plVar11 = local_f8;
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f8 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      if (local_128 != 0) {
        local_138 = *(int *)(local_128 + 0x568);
        plVar11 = (longlong *)param_2[1];
        local_d8 = *param_2;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        local_e0 = &PTR_FUN_143f740c8;
        local_c8 = 0;
        local_c0 = 0;
        local_d0 = plVar11;
        uVar10 = UAssetRegistryImpl::OnAssetAdded(param_1);
        iVar8 = FUN_1404cc060(uVar10,&local_e0);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar11 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_d0)();
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_d0 + 8))(local_d0,1);
            }
          }
        }
        if ((((iVar8 == -1) && (*(char *)(local_128 + 0x5d6) == '\0')) && (local_138 < 2)) &&
           (cVar5 = FUN_140bca8a0(param_1), cVar5 == '\0')) goto LAB_1411e5ae2;
        lVar12 = *(longlong *)(local_128 + 0x570);
        if (lVar12 != 0) goto LAB_1411e5a1b;
      }
      local_f0 = *param_2;
      local_e8 = (longlong *)param_2[1];
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
        UNLOCK();
      }
      lVar12 = FUN_140bb7f10(param_1,&local_f0);
      plVar11 = local_e8;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e8 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      if (lVar12 != 0) {
        if ((*(char *)(lVar12 + 0x5c) == '\0') && (*(int *)(lVar12 + 0x50) < 2)) goto LAB_1411e5ae2;
        lVar12 = FUN_140bbaee0(param_1,*(undefined4 *)(lVar12 + 0x54));
        if (lVar12 != 0) goto LAB_1411e5a1b;
      }
    }
  }
  lVar12 = *param_4;
  if (lVar12 != 0) {
    if ((*(char *)(lVar12 + 0x82) == '\0') && (*(int *)(lVar12 + 0x40) < 2)) goto LAB_1411e5ae2;
    lVar12 = FUN_140bbaee0(param_1,*(undefined4 *)(lVar12 + 0x6c));
    if (lVar12 != 0) goto LAB_1411e5a1b;
  }
  if (((longlong *)*param_3 != (longlong *)0x0) &&
     (lVar12 = (**(code **)(*(longlong *)*param_3 + 0x38))(), (*(byte *)(lVar12 + 0x10) & 4) != 0))
  {
    TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar12 + 0x30),local_134,&DAT_1462a1f40);
    if ((local_134[0] != -1) &&
       (((lVar13 = (longlong)local_134[0] * 0x30 + *(longlong *)(lVar12 + 0x30), lVar13 != 0 &&
         (piVar2 = (int *)(lVar13 + 0x10), piVar2 != (int *)0x0)) && (*piVar2 == 6)))) {
      uVar10 = FUN_1404b73f0(piVar2,local_38);
      iVar8 = FUN_141592950(uVar10,L"PlayerStatusChoosingCharacter",1,0,0xffffffff);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (iVar8 != -1) {
LAB_1411e5ae2:
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
        return 0;
      }
    }
    local_134[1] = 1;
    lVar12 = FUN_140be2190(param_1,lVar12 + 0x18,local_134 + 1);
    if (lVar12 != 0) {
LAB_1411e5a1b:
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
      return lVar12;
    }
  }
LAB_1411e5bdf:
  plVar11 = (longlong *)param_2[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar11 = (longlong *)param_3[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar11 = (longlong *)param_4[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return 0;
}



// FUNCTION 1411e5cb0 FUN_1411e5cb0 body=620 status=ok
// SIG undefined FUN_1411e5cb0(void)

longlong FUN_1411e5cb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                      undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined8 local_5c;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_a8 = *param_4;
  local_a0 = param_4[1];
  if (local_a0 != 0) {
    LOCK();
    *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
    UNLOCK();
  }
  local_98 = *param_3;
  local_90 = param_3[1];
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
  }
  local_88 = *param_2;
  local_80 = param_2[1];
  if (local_80 != 0) {
    LOCK();
    *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
    UNLOCK();
  }
  lVar4 = FUN_1411e5490(param_1,&local_88,&local_98,&local_a8);
  lVar7 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_60 = 0xffffffff;
  local_5c = 0;
  local_res20 = 0;
  if (lVar4 == 0) {
    local_res20 = 0;
    local_50 = 0;
  }
  else {
    uVar5 = FSoftObjectPath::FSoftObjectPath(local_78,lVar4);
    FSoftObjectPath::operator=(&local_50,uVar5);
    FWeakObjectPtr::operator=(&local_60,lVar4);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    local_5c = CONCAT44(DAT_1464b56f4,(undefined4)local_5c);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = *(longlong *)(DAT_146b33f38 + 0x90);
  local_res20 = 0;
  if (((local_50 != 0) && (lVar4 != 0)) &&
     (piVar6 = (int *)TSet<TTuple<FSoftObjectPtr,int>,TDefaultMapHashableKeyFuncs<FSoftObjectPtr,int,0>,FDefaultSetAllocator>
                      ::FindId(lVar4 + 0x368,local_res18,&local_60), *piVar6 != -1)) {
    TSet<TTuple<FSoftObjectPtr,int>,TDefaultMapHashableKeyFuncs<FSoftObjectPtr,int,0>,FDefaultSetAllocator>
    ::FindId(lVar4 + 0x368,local_res10,&local_60);
    if (local_res10[0] != -1) {
      lVar7 = (longlong)local_res10[0] * 0x38 + *(longlong *)(lVar4 + 0x368);
    }
    lVar4 = *(longlong *)(lVar7 + 0x28);
    if (lVar4 != 0) {
      if (local_48 != 0) {
        FMemory::Free();
      }
      goto LAB_1411e5e43;
    }
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  lVar4 = 0;
LAB_1411e5e43:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar6 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar6 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = (longlong *)param_4[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar6 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return lVar4;
}



// FUNCTION 1411e5f20 FUN_1411e5f20 body=204 status=ok
// SIG undefined FUN_1411e5f20(void)

longlong FUN_1411e5f20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = 0;
  local_res8 = 0;
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(DAT_146b33f38 + 0x90) != 0)) {
    plVar1 = (longlong *)(*(longlong *)(DAT_146b33f38 + 0x90) + 0x368);
    piVar2 = (int *)TSet<TTuple<FSoftObjectPtr,int>,TDefaultMapHashableKeyFuncs<FSoftObjectPtr,int,0>,FDefaultSetAllocator>
                    ::FindId(plVar1,&local_res8,param_1);
    if (*piVar2 != -1) {
      TSet<TTuple<FSoftObjectPtr,int>,TDefaultMapHashableKeyFuncs<FSoftObjectPtr,int,0>,FDefaultSetAllocator>
      ::FindId(plVar1,&local_res8,param_1);
      if ((int)local_res8 != -1) {
        lVar3 = (longlong)(int)local_res8 * 0x38 + *plVar1;
      }
      lVar3 = *(longlong *)(lVar3 + 0x28);
      if (lVar3 != 0) {
        if (*(longlong *)(param_1 + 0x18) != 0) {
          FMemory::Free();
        }
        return lVar3;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 1411e5ff0 FUN_1411e5ff0 body=98 status=ok
// SIG undefined FUN_1411e5ff0(void)

longlong FUN_1411e5ff0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x848), lVar1 != 0)) {
    lVar3 = FUN_1413ffe00();
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



// FUNCTION 1411e6060 FUN_1411e6060 body=34 status=ok
// SIG undefined FUN_1411e6060(void)

undefined8 * FUN_1411e6060(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x148);
  lVar1 = *(longlong *)(param_1 + 0x150);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1411e6090 FUN_1411e6090 body=1764 status=ok
// SIG undefined FUN_1411e6090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411e6090(longlong *param_1,undefined4 *param_2,float *param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  float fVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  char *pcVar14;
  undefined1 auStack_268 [32];
  int *local_248;
  undefined1 local_240;
  int local_238;
  int local_234 [3];
  undefined4 *local_228;
  ulonglong *puStack_220;
  undefined4 *local_218;
  undefined1 *puStack_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined4 *local_1e8;
  ulonglong *puStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined4 local_f0 [2];
  longlong local_e8;
  longlong *local_d8;
  char local_c8;
  undefined1 local_c0 [8];
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined1 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined1 local_60;
  ulonglong local_58 [4];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_268;
  *param_3 = 0.0;
  local_228 = param_2;
  uVar9 = FUN_1404b03b0();
  FText::operator=(param_2,uVar9);
  local_234[0] = 0;
  local_238 = 0;
  if (*param_1 == 0) {
    if ((char)param_1[0x14] != '\0') {
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_188,&DAT_1446eba34,L"GFxChallengeMenu",L"UndiscoveredPct");
      FText::operator=(param_2,uVar9);
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_180 + 1;
        lVar13 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar1 = (int *)((longlong)local_180 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_180 + 8))(local_180,1);
          }
        }
      }
      *param_3 = 0.0;
      goto LAB_1411e635a;
    }
    cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x12);
    plVar5 = param_1 + 0x16;
    cVar7 = FWeakObjectPtr::IsValid(plVar5);
    if (cVar7 == '\0') {
      return;
    }
    if (cVar6 != '\0') {
      lVar13 = FWeakObjectPtr::Get(plVar5);
      uVar9 = FWeakObjectPtr::Get(lVar13 + 0x60);
      uVar10 = FWeakObjectPtr::Get(param_1 + 0x12);
      local_240 = (char)param_1[0x17] == '\0';
      local_248 = local_234;
      FUN_14129f250(uVar10,uVar9,0,&local_238);
      if (local_238 < 1) {
        *param_3 = 1.0;
      }
      else {
        *param_3 = (float)local_234[0] / (float)local_238;
      }
      goto LAB_1411e635a;
    }
    if (((param_1[3] == 0) || (lVar13 = FUN_142dcdb70(param_1 + 2), lVar13 == 0)) ||
       (cVar6 = FWeakObjectPtr::IsValid(plVar5), cVar6 == '\0')) goto LAB_1411e635a;
    lVar11 = FWeakObjectPtr::Get(plVar5);
    cVar6 = FWeakObjectPtr::IsValid(lVar11 + 0x70);
    if (cVar6 == '\0') goto LAB_1411e635a;
    iVar8 = (int)param_1[0x13];
    if (iVar8 < 1) {
      uVar9 = *(undefined8 *)(lVar13 + 0x10);
      lVar11 = FWeakObjectPtr::Get(plVar5);
      uVar10 = FWeakObjectPtr::Get(lVar11 + 0x70);
      local_234[0] = FUN_142dcded0(uVar10,uVar9);
      uVar9 = *(undefined8 *)(lVar13 + 0x10);
      lVar11 = FWeakObjectPtr::Get(plVar5);
      uVar10 = FWeakObjectPtr::Get(lVar11 + 0x70);
      iVar8 = FUN_142dce190(uVar10,uVar9);
    }
    else {
      local_234[0] = *(int *)((longlong)param_1 + 0x9c);
    }
    uVar9 = *(undefined8 *)(lVar13 + 0x10);
    local_238 = iVar8;
    lVar13 = FWeakObjectPtr::Get(plVar5);
    uVar10 = FWeakObjectPtr::Get(lVar13 + 0x70);
    cVar6 = FUN_142dd3360(uVar10,uVar9);
    if (cVar6 != '\0') {
      *param_3 = 1.0;
      goto LAB_1411e635a;
    }
    if (0 < local_238) {
      *param_3 = (float)local_234[0] / (float)local_238;
      goto LAB_1411e635a;
    }
  }
  else {
    local_234[0] = *(int *)((longlong)param_1 + 0xc);
    local_238 = (int)param_1[1];
    if (local_238 < 1) {
      *param_3 = 1.0;
    }
    else {
      *param_3 = (float)local_234[0] / (float)local_238;
    }
LAB_1411e635a:
    iVar8 = local_238;
    if (0 < local_238) {
      lVar13 = (longlong)local_234[0];
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_158,L"{0}/{1}",L"GFxChallengeMenu",L"ProgressOutOfText");
      puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_110,uVar9);
      local_80 = (longlong)iVar8;
      local_b8[0] = 0;
      local_90 = 0;
      local_88 = 0;
      local_60 = 0;
      local_228 = local_b8;
      puStack_220 = local_58;
      local_208 = *puVar12;
      local_200 = puVar12[1];
      if (local_200 != 0) {
        LOCK();
        *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
        UNLOCK();
      }
      local_1e8 = local_228;
      puStack_1e0 = puStack_220;
      local_b0 = lVar13;
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8,&local_1e8);
      uVar9 = FText::Format(local_170,&local_208,uVar9);
      FText::FText(local_1b8,uVar9);
      if (local_168 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_168 + 1;
        lVar13 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_168)(local_168);
          LOCK();
          piVar1 = (int *)((longlong)local_168 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_168 + 8))(local_168,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8);
      lVar13 = 2;
      pcVar14 = &stack0xffffffffffffffd0;
      do {
        lVar13 = lVar13 + -1;
        pcVar2 = pcVar14 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar5 = *(longlong **)(pcVar14 + -0x40);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            lVar11 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
        }
        pcVar14 = pcVar2;
      } while (lVar13 != 0);
      plVar5 = (longlong *)puVar12[1];
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
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      FText::operator=(param_2,local_1b8);
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_1b0 + 1;
        lVar13 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar1 = (int *)((longlong)local_1b0 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_1b0 + 8))(local_1b0,1);
          }
        }
      }
      goto LAB_1411e671c;
    }
  }
  fVar4 = *param_3;
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_128,L"{0}%",L"GFxChallengeMenu",L"ProgressPercentText");
  puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_100,uVar9);
  local_f0[0] = 0;
  local_c8 = '\0';
  local_218 = local_f0;
  puStack_210 = local_c0;
  local_1f8 = *puVar12;
  local_1f0 = puVar12[1];
  local_e8 = (longlong)(int)ROUND(fVar4 * 200.0 + 0.5) >> 1;
  if (local_1f0 != 0) {
    LOCK();
    *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
    UNLOCK();
  }
  uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_1c8,&local_218);
  uVar9 = FText::Format(local_140,&local_1f8,uVar9);
  FText::FText(local_1a0,uVar9);
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_138 + 1;
    lVar13 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar1 = (int *)((longlong)local_138 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_138 + 8))(local_138,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_1c8);
  if ((local_c8 != '\0') && (local_c8 = '\0', local_d8 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_d8 + 1;
    lVar13 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  plVar5 = (longlong *)puVar12[1];
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
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  FText::operator=(local_228,local_1a0);
  local_150 = local_120;
  if (local_198 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_198 + 1;
    lVar13 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar1 = (int *)((longlong)local_198 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      local_150 = local_120;
      if (iVar8 == 1) {
        (**(code **)(*local_198 + 8))(local_198,1);
        local_150 = local_120;
      }
    }
  }
LAB_1411e671c:
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_150 + 1;
    lVar13 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)local_150 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  return;
}



// FUNCTION 1411e6780 FUN_1411e6780 body=236 status=ok
// SIG undefined FUN_1411e6780(void)

undefined8 * FUN_1411e6780(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x700));
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  *param_2 = *(undefined8 *)(param_1 + 0x90);
  param_2[1] = uVar5;
  uVar2 = *(undefined4 *)(param_1 + 0xa4);
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  uVar4 = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 3) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar4;
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  param_2[4] = *(undefined8 *)(param_1 + 0xb0);
  param_2[5] = uVar5;
  uVar2 = *(undefined4 *)(param_1 + 0xc4);
  uVar3 = *(undefined4 *)(param_1 + 200);
  uVar4 = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar2;
  *(undefined4 *)(param_2 + 7) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar4;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xd0);
  param_2[9] = 0;
  iVar1 = *(int *)(param_1 + 0xe0);
  _Src = *(void **)(param_1 + 0xd8);
  *(int *)(param_2 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  }
  else {
    FUN_1409b7fb0(param_2 + 9,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_2[9],_Src,(longlong)iVar1 * 0x14);
  }
  uVar2 = *(undefined4 *)(param_1 + 0xec);
  uVar3 = *(undefined4 *)(param_1 + 0xf0);
  uVar4 = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((longlong)param_2 + 0x5c) = uVar2;
  *(undefined4 *)(param_2 + 0xc) = uVar3;
  *(undefined4 *)((longlong)param_2 + 100) = uVar4;
  FUN_140a25aa0(param_2 + 0xe,param_1 + 0x100);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x700));
  return param_2;
}



// FUNCTION 1411e6870 FUN_1411e6870 body=156 status=ok
// SIG undefined FUN_1411e6870(void)

longlong FUN_1411e6870(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int local_res8 [2];
  
  piVar1 = (int *)FUN_140dea820(param_1 + 0x4b0,local_res8,param_2);
  if (*piVar1 == -1) {
    return param_1 + 0x500;
  }
  FUN_140dea820(param_1 + 0x4b0,local_res8,param_2);
  if (local_res8[0] != -1) {
    return (longlong)local_res8[0] * 0x690 + *(longlong *)(param_1 + 0x4b0) + 0x10;
  }
  return 0x10;
}



// FUNCTION 1411e6910 FUN_1411e6910 body=395 status=ok
// SIG undefined FUN_1411e6910(void)

longlong FUN_1411e6910(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x2d8;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x2e0)) && (*(longlong *)(param_1 + 0x2e8) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x2e0) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar4);
      if (lVar2 != 0) goto LAB_1411e6997;
    }
  }
  else {
LAB_1411e6997:
    lVar3 = FUN_141319ff0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1411e69df;
  }
  lVar2 = FUN_1405ec200(lVar4);
  if (lVar2 != 0) {
    FUN_141319ff0();
  }
LAB_1411e69df:
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x2e0)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x2e8) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x2e0) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar4);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar4 = FUN_141319ff0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  return lVar2;
}



// FUNCTION 1411e6aa0 FUN_1411e6aa0 body=109 status=ok
// SIG undefined FUN_1411e6aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1411e6aa0(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    *param_2 = DAT_1468b5da0;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5da8;
  }
  else {
    puVar1 = (undefined4 *)FUN_14238d0c0(*(longlong *)(param_1 + 0x60),local_48);
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    FQuat::Rotator(&local_58,param_2);
  }
  return param_2;
}



// FUNCTION 1411e6b10 FUN_1411e6b10 body=279 status=ok
// SIG undefined FUN_1411e6b10(void)

undefined8 * FUN_1411e6b10(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  lVar1 = *param_3;
  if (*(int *)(param_1 + 0xde8) != *(int *)(param_1 + 0xe14)) {
    lVar7 = *(longlong *)(param_1 + 0xe20);
    if (*(longlong *)(param_1 + 0xe20) == 0) {
      lVar7 = param_1 + 0xe18;
    }
    iVar3 = (int)((ulonglong)lVar1 >> 0x20);
    iVar4 = *(int *)(lVar7 + ((longlong)(iVar3 + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 0xe28) - 1U) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0xde0);
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar4 * 0x18) == lVar1) {
          if (iVar4 != -1) {
            iVar4 = *(int *)(lVar7 + ((longlong)(iVar3 + (int)lVar1) &
                                     (longlong)*(int *)(param_1 + 0xe28) - 1U) * 4);
            goto joined_r0x0001411e6bd0;
          }
          break;
        }
        iVar4 = *(int *)(lVar2 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  goto LAB_1411e6b97;
joined_r0x0001411e6bd0:
  if (iVar4 == -1) goto LAB_1411e6c00;
  puVar6 = (undefined8 *)(lVar2 + (longlong)iVar4 * 0x18);
  if (*(longlong *)(lVar2 + (longlong)iVar4 * 0x18) == lVar1) {
    if (iVar4 != -1) goto LAB_1411e6c03;
    goto LAB_1411e6c00;
  }
  iVar4 = *(int *)(puVar6 + 2);
  goto joined_r0x0001411e6bd0;
LAB_1411e6c00:
  puVar6 = (undefined8 *)0x0;
LAB_1411e6c03:
  puVar5 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    *param_2 = *puVar5;
    return param_2;
  }
LAB_1411e6b97:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1411e6c30 FUN_1411e6c30 body=356 status=ok
// SIG undefined FUN_1411e6c30(void)

longlong FUN_1411e6c30(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = *param_1;
  if (param_1[3] != 0) {
    FUN_142dcdb70(param_1 + 2);
  }
  plVar1 = param_1 + 0x16;
  cVar4 = FWeakObjectPtr::IsValid(plVar1);
  if (cVar4 == '\0') {
    if (param_1[0x15] == 0) {
      return lVar8;
    }
    lVar6 = FUN_142dfdfe0();
    lVar5 = param_1[0x15];
    lVar7 = lVar5;
    while( true ) {
      if (lVar7 == 0) {
        return lVar8;
      }
      if (lVar7 == lVar6) break;
      lVar7 = *(longlong *)(lVar7 + 0x30);
    }
    if (lVar5 == 0) {
      return lVar8;
    }
    if (lVar5 != 0) {
      lVar6 = FUN_142dfdfe0();
      lVar5 = param_1[0x15];
      for (lVar7 = lVar5; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar6) goto LAB_1411e6cf6;
      }
    }
    lVar5 = 0;
LAB_1411e6cf6:
    lVar5 = *(longlong *)(lVar5 + 0xf8);
    if (lVar5 == 0) {
      return lVar8;
    }
    lVar7 = FUN_142dfdfe0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return lVar8;
    }
  }
  else {
    if (param_1[3] == 0) {
      return lVar8;
    }
    lVar5 = FUN_142dcdb70(param_1 + 2);
  }
  if (((lVar5 != 0) && (lVar8 = *(longlong *)(lVar5 + 0xd8), lVar8 == 0)) &&
     (cVar4 = FUN_14044af00(plVar1,0), cVar4 != '\0')) {
    lVar8 = FWeakObjectPtr::Get(plVar1);
    iVar2 = *(int *)(lVar8 + 0x9c);
    lVar8 = FWeakObjectPtr::Get(plVar1);
    if (iVar2 == 1) {
      lVar8 = *(longlong *)(lVar8 + 0x40);
    }
    else {
      lVar8 = *(longlong *)(lVar8 + 0x38);
    }
  }
  return lVar8;
}



// FUNCTION 1411e6da0 FUN_1411e6da0 body=58 status=ok
// SIG undefined FUN_1411e6da0(void)

longlong FUN_1411e6da0(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    if (param_2 == '\x01') {
      return param_1 + 0x2a0;
    }
    if (param_2 == '\x02') {
      return param_1 + 0x318;
    }
    if (param_2 == '\x03') {
      return param_1 + 0x390;
    }
  }
  return param_1 + 0xf0;
}



// FUNCTION 1411e6de0 FUN_1411e6de0 body=36 status=ok
// SIG undefined FUN_1411e6de0(void)

undefined4 FUN_1411e6de0(longlong param_1,int param_2)

{
  if ((-1 < param_2 + -1) && (param_2 + -1 < *(int *)(param_1 + 0x408))) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x400) + -4 + (longlong)param_2 * 4);
  }
  return 0;
}



// FUNCTION 1411e6e10 FUN_1411e6e10 body=90 status=ok
// SIG undefined FUN_1411e6e10(void)

undefined4 * FUN_1411e6e10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1416f8720(*param_1);
  if (lVar2 == 0) {
    lVar2 = FUN_1416f8720(param_1[1]);
    *param_2 = 0xffffffff;
    if (lVar2 == 0) {
      return param_2;
    }
    uVar1 = param_1[1];
  }
  else {
    *param_2 = 0xffffffff;
    uVar1 = *param_1;
  }
  uVar3 = FUN_1416f8720(uVar1);
  FUN_14170c210(param_2,uVar3);
  return param_2;
}



// FUNCTION 1411e6e70 FUN_1411e6e70 body=48 status=ok
// SIG undefined FUN_1411e6e70(void)

undefined4 FUN_1411e6e70(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x148))();
    if (lVar1 != 0) {
      return *(undefined4 *)(lVar1 + 0x790);
    }
  }
  return 0;
}



// FUNCTION 1411e6ea0 FUN_1411e6ea0 body=541 status=ok
// SIG undefined FUN_1411e6ea0(void)

undefined8 FUN_1411e6ea0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(param_2);
  if (*param_1 == 0) {
    if ((char)param_1[0x14] == '\0') {
      cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x12);
      if (cVar4 == '\0') {
        if ((param_1[3] != 0) && (lVar5 = FUN_142dcdb70(param_1 + 2), lVar5 != 0)) {
          if (param_1[3] == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = FUN_142dcdb70(param_1 + 2);
          }
          FText::operator=(param_2,lVar5 + 0x40);
          cVar4 = FUN_1411ea780(param_1);
          if (cVar4 == '\0') {
            uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_40,L"Undiscovered Challenge",L"GFxChallengeMenu",
                               L"UndiscoveredChallenge");
            FText::operator=(param_2,uVar6);
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
          }
        }
      }
      else {
        lVar5 = FWeakObjectPtr::Get(param_1 + 0x12);
        FText::operator=(param_2,lVar5 + 0x30);
      }
    }
    else {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"Undiscovered",L"GFxChallengeMenu",L"Undiscovered");
      FText::operator=(param_2,uVar6);
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
    }
  }
  else {
    FText::operator=(param_2,*param_1 + 0x30);
  }
  cVar4 = FText::IsEmpty(param_2);
  if (cVar4 != '\0') {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Unnamed Challenge",L"GFxChallengeMenu",L"NoChallengeNameText");
    FText::operator=(param_2,uVar6);
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
  return param_2;
}



// FUNCTION 1411e70c0 FUN_1411e70c0 body=42 status=ok
// SIG undefined FUN_1411e70c0(void)

undefined1 FUN_1411e70c0(longlong param_1)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0x98) == '\x02') || (*(char *)(param_1 + 800) != '\0')) ||
     (lVar1 = 0x230, *(char *)(param_1 + 0x2a8) != '\0')) {
    lVar1 = 0xa8;
  }
  return *(undefined1 *)(lVar1 + param_1);
}



// FUNCTION 1411e70f0 FUN_1411e70f0 body=65 status=ok
// SIG undefined FUN_1411e70f0(void)

void FUN_1411e70f0(undefined4 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 != 0) {
    FUN_1416f8720(*param_1);
    return;
  }
  lVar1 = FUN_1416f8720(param_1[1]);
  if (lVar1 != 0) {
    FUN_1416f8720(param_1[1]);
    return;
  }
  return;
}



// FUNCTION 1411e7140 FUN_1411e7140 body=134 status=ok
// SIG undefined FUN_1411e7140(void)

int FUN_1411e7140(longlong param_1)

{
  int iVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
  if (*(int *)(param_1 + 0x90) < 1) {
    if (*(int *)(param_1 + 0xa0) < *(int *)(param_1 + 0x44) + -1) {
      iVar1 = *(int *)(param_1 + 0xa0) + 1;
      *(int *)(param_1 + 0xa0) = iVar1;
    }
    else {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x88) + -4 + (longlong)*(int *)(param_1 + 0x90) * 4);
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
  return iVar1;
}



// FUNCTION 1411e71d0 FUN_1411e71d0 body=614 status=ok
// SIG undefined FUN_1411e71d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1411e71d0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  undefined2 *local_60;
  int local_58;
  int local_54;
  longlong local_50;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x38));
  if (*(int *)(param_1 + 0x30) < 1) {
LAB_1411e7216:
    FUN_14172a070(local_res8,0);
    local_res18 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x18);
    puVar6 = (undefined8 *)FName::ToString(&local_res18);
    lVar12 = 0;
    iVar1 = *(int *)(puVar6 + 1);
    local_60 = (undefined2 *)*puVar6;
    *puVar6 = 0;
    local_58 = *(int *)(puVar6 + 1);
    local_54 = *(int *)((longlong)puVar6 + 0xc);
    puVar6[1] = 0;
    iVar11 = local_58;
    if (local_54 < (int)((6 - (uint)(iVar1 != 0)) + local_58)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_60);
      iVar11 = local_58;
    }
    local_58 = (6 - (uint)(iVar11 != 0)) + iVar11;
    if (local_54 < local_58) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar11);
    }
    puVar5 = local_60;
    lVar10 = (longlong)iVar11 - (ulonglong)(iVar11 != 0);
    puVar13 = &DAT_143f3eda8;
    if (local_58 != 0) {
      puVar13 = local_60;
    }
    *(undefined8 *)(local_60 + lVar10) = 0x6f00630049005f;
    local_60[lVar10 + 4] = 0x6e;
    local_60[lVar10 + 5] = 0;
    uVar7 = UTexture2D::GetPrivateStaticClass();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    puVar6 = (undefined8 *)FName::FName(local_res20,puVar13,1);
    plVar8 = (longlong *)FUN_141791c20(local_68,uVar9,uVar7,*puVar6);
    lVar10 = *plVar8;
    uVar9 = GetTransientPackage();
    local_res10 = 0;
    if (lVar10 == 0) {
      FUN_1417846f0(uVar9,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar7 = UTexture2D::GetPrivateStaticClass();
    lVar10 = FUN_1417985e0(uVar7,uVar9,lVar10,0,0,0,0,0,0);
    if (puVar5 != (undefined2 *)0x0) {
      FMemory::Free(puVar5);
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
    FUN_14172a400(local_res8);
    if (lVar10 == 0) goto LAB_1411e741b;
    *(uint *)(lVar10 + 0xbc) = *(uint *)(lVar10 + 0xbc) & 0xfffffffe;
    uVar4 = uRam00000001468b5d84;
    uVar3 = uRam00000001468b5d80;
    uVar2 = uRam00000001468b5d7c;
    *(undefined4 *)(lVar10 + 200) = _DAT_1468b5d78;
    *(undefined4 *)(lVar10 + 0xcc) = uVar2;
    *(undefined4 *)(lVar10 + 0xd0) = uVar3;
    *(undefined4 *)(lVar10 + 0xd4) = uVar4;
    FUN_14287a580(lVar10,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    lVar12 = lVar10;
  }
  else {
    lVar12 = *(longlong *)
              (*(longlong *)(param_1 + 0x28) + -8 + (longlong)*(int *)(param_1 + 0x30) * 8);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
    if (lVar12 == 0) goto LAB_1411e7216;
  }
  FUN_142894320(lVar12,1);
LAB_1411e741b:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x38));
  return lVar12;
}



// FUNCTION 1411e7440 FUN_1411e7440 body=8 status=ok
// SIG undefined FUN_1411e7440(void)

longlong FUN_1411e7440(longlong param_1)

{
  return param_1 + 0xc98;
}



// FUNCTION 1411e7450 FUN_1411e7450 body=165 status=ok
// SIG undefined FUN_1411e7450(void)

undefined8 * FUN_1411e7450(longlong param_1,undefined8 *param_2,byte param_3)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x1018) != *(int *)(param_1 + 0x1044)) {
    lVar2 = *(longlong *)(param_1 + 0x1050);
    if (*(longlong *)(param_1 + 0x1050) == 0) {
      lVar2 = param_1 + 0x1048;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x1058) - 1U & (ulonglong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        pbVar4 = (byte *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x1010));
        if (*pbVar4 == param_3) {
          if (iVar1 != -1) goto LAB_1411e74d1;
          break;
        }
        iVar1 = *(int *)(pbVar4 + 0x18);
      } while (iVar1 != -1);
    }
  }
  pbVar4 = (byte *)0x0;
LAB_1411e74d1:
  pbVar3 = pbVar4 + 8;
  if (pbVar4 == (byte *)0x0) {
    pbVar3 = (byte *)0x0;
  }
  if (pbVar3 != (byte *)0x0) {
    FString::operator=(param_2,pbVar3);
  }
  return param_2;
}



// FUNCTION 1411e7500 FUN_1411e7500 body=93 status=ok
// SIG undefined FUN_1411e7500(void)

void FUN_1411e7500(longlong param_1,longlong param_2)

{
  int iVar1;
  
  FUN_142eb90d0();
  if (*(char *)(param_1 + 900) != '\0') {
    iVar1 = *(int *)(param_1 + 0x380);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x378))) {
      FUN_1411fc260(param_1,*(longlong *)(param_1 + 0x370) + 8 + (longlong)iVar1 * 0xd8,
                    *(undefined4 *)(param_2 + 8));
    }
  }
  return;
}



// FUNCTION 1411e7560 FUN_1411e7560 body=246 status=ok
// SIG undefined FUN_1411e7560(void)

void FUN_1411e7560(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong local_res8;
  undefined1 local_178 [368];
  
  *(undefined1 *)(param_1 + 0x60) = 0;
  if ((param_2 == 0) || ((*(int *)(param_2 + 0x63c) - 1U & 0xfffffffd) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x50);
  if ((cVar2 != '\0') &&
     (lVar4 = FWeakObjectPtr::Get(param_1 + 0x50), param_1 == *(longlong *)(lVar4 + 0x68))) {
    if (!bVar1) {
      return;
    }
    *(undefined8 *)(lVar4 + 0x48) = 0;
  }
  if (bVar1) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x5b0))();
      }
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    local_res8 = FUN_141038e40(param_2,local_178);
    local_res8 = local_res8 + 0x140;
    uVar3 = FUN_1411c7fd0(param_1 + 0x30,&local_res8);
    FUN_1411e81a0(param_1,uVar3);
    FUN_1411ca750(local_178);
    if (0 < *(int *)(param_1 + 0x38)) {
      FUN_1411d9610(param_1,*(undefined8 *)(param_1 + 0x30));
    }
  }
  return;
}



// FUNCTION 1411e7660 FUN_1411e7660 body=336 status=ok
// SIG undefined FUN_1411e7660(void)

undefined8 FUN_1411e7660(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  if (DAT_1462a1a88 == 0) {
    return 0;
  }
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 4);
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x102) != '\0') {
    cVar3 = FPreLoadScreenManager::ArePreLoadScreensEnabled();
    if ((cVar3 == '\0') || (lVar6 = GetMoviePlayer(), lVar6 == 0)) {
LAB_1411e76c1:
      bVar4 = false;
    }
    else {
      plVar7 = (longlong *)GetMoviePlayer();
      cVar3 = (**(code **)(*plVar7 + 0x60))(plVar7);
      if (cVar3 == '\0') goto LAB_1411e76c1;
      bVar4 = true;
    }
    if (bVar4) {
      bVar4 = true;
      goto LAB_1411e76cd;
    }
  }
  bVar4 = false;
LAB_1411e76cd:
  if (!bVar4) {
    return 0;
  }
  pbVar1 = (byte *)(param_1 + 0x104);
  if (*pbVar1 < 2) {
    cVar3 = FUN_1411ea880(param_1);
    uVar9 = 2;
    if (cVar3 == '\0') {
      uVar9 = 1;
    }
    FUN_140ec03e0(pbVar1,uVar9);
  }
  else if ((((*pbVar1 == 2) && (cVar3 = FUN_1411ea880(param_1), cVar3 != '\0')) &&
           (lVar6 = (**(code **)(*plVar5 + 0x148))(plVar5), lVar6 != 0)) &&
          (lVar6 = *(longlong *)(lVar6 + 0x148), lVar6 != 0)) {
    lVar8 = FUN_141424d10();
    lVar2 = *(longlong *)(lVar6 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_140cd00f0(lVar6,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
      FRootMotionMovementParams::Clear(pbVar1);
      return 1;
    }
  }
  return 1;
}



// FUNCTION 1411e77b0 FUN_1411e77b0 body=183 status=ok
// SIG undefined FUN_1411e77b0(void)

undefined8 FUN_1411e77b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)((longlong)param_2 + 0xc) != '\0') {
LAB_1411e785e:
    uVar2 = FUN_142eb9ae0();
    return uVar2;
  }
  if (DAT_146876460 == *param_2) {
    if (1 < *(int *)(param_1 + 0x208)) {
      FUN_1411f27e0(param_1 + -0x170,param_1 + 0x180,*(int *)(param_1 + 0x210),
                    (longlong)(*(int *)(param_1 + 0x210) + 1) % (longlong)*(int *)(param_1 + 0x208)
                    & 0xffffffff,0);
      return 1;
    }
  }
  else {
    if (DAT_146876458 != *param_2) goto LAB_1411e785e;
    iVar1 = *(int *)(param_1 + 0x208);
    if (1 < iVar1) {
      FUN_1411f27e0(param_1 + -0x170,param_1 + 0x1a0,*(int *)(param_1 + 0x210),
                    (longlong)(iVar1 + -1 + *(int *)(param_1 + 0x210)) % (longlong)iVar1 &
                    0xffffffff,0);
    }
  }
  return 1;
}



// FUNCTION 1411e7870 FUN_1411e7870 body=21 status=ok
// SIG undefined FUN_1411e7870(void)

undefined1 FUN_1411e7870(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0xd0) == '\0') {
    return 0;
  }
  uVar1 = FUN_142eb98b0(param_1 + 0x28);
  return uVar1;
}



// FUNCTION 1411e7890 FUN_1411e7890 body=152 status=ok
// SIG undefined FUN_1411e7890(void)

void FUN_1411e7890(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    lVar3 = UMovieScene3DTransformSection::GetPrivateStaticClass();
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
      lVar4 = FWeakObjectPtr::Get(lVar4 + 0x59c);
      if (lVar4 != 0) {
        lVar4 = FUN_1410f7490(lVar4);
        if (lVar4 != 0) {
          cVar2 = FUN_142ebd930(lVar4);
          if ((cVar2 != '\0') && (*(char *)(param_1 + 0x2c9) != '\0')) {
            LOCK();
            *(undefined4 *)(lVar4 + 0x588) = 1;
            UNLOCK();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1411e7930 FUN_1411e7930 body=48 status=ok
// SIG undefined FUN_1411e7930(void)

undefined1 FUN_1411e7930(undefined4 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 == 0) {
    lVar1 = FUN_1416f8720(param_1[1]);
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1411e7960 FUN_1411e7960 body=59 status=ok
// SIG undefined FUN_1411e7960(void)

void FUN_1411e7960(char *param_1)

{
  if (*param_1 != '\0') {
    if (*(int *)(param_1 + 0x20) == 0) {
      *param_1 = '\0';
      AK::MemoryMgr::StartProfileThreadUsage(5);
      FUN_1411fe160(param_1);
      return;
    }
    param_1[0x20] = '\x02';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
  }
  return;
}



// FUNCTION 1411e79a0 FUN_1411e79a0 body=76 status=ok
// SIG undefined FUN_1411e79a0(void)

void FUN_1411e79a0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1411e8130(*(longlong *)(param_1 + 0x68),local_res10);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1411e8130(*(longlong *)(param_1 + 0x70),local_res10);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1411e8130(*(longlong *)(param_1 + 0x78),local_res10);
  }
  return;
}



// FUNCTION 1411e79f0 FUN_1411e79f0 body=56 status=ok
// SIG undefined FUN_1411e79f0(void)

void FUN_1411e79f0(longlong param_1)

{
  undefined1 local_res8 [32];
  
  FUN_1411ce120(local_res8,*(undefined8 *)(param_1 + 0x68));
  FUN_1411ce120(local_res8,*(undefined8 *)(param_1 + 0x70));
  FUN_1411ce120(local_res8,*(undefined8 *)(param_1 + 0x78));
  return;
}



// FUNCTION 1411e7a30 FUN_1411e7a30 body=1661 status=ok
// SIG undefined FUN_1411e7a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411e7a30(longlong param_1,float param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  LARGE_INTEGER local_e8 [2];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  cVar2 = FPreLoadScreenManager::ArePreLoadScreensEnabled();
  if (cVar2 == '\0') {
    return;
  }
  FRootMotionMovementParams::Clear(param_1 + 0x104);
  plVar7 = (longlong *)(param_1 + 0x30);
  if (*plVar7 != 0) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 4);
    FUN_142880530(*(undefined8 *)(lVar3 + 0x90),plVar7);
    *plVar7 = 0;
  }
  plVar4 = (longlong *)GetMoviePlayer();
  cVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
  if ((cVar2 == '\0') || (*(char *)(param_1 + 0x38) != '\0')) {
LAB_1411e7d35:
    if (param_2 <= 0.0) {
      if (*(char *)(param_1 + 0x38) == '\0') {
        FUN_1412007b0(param_1,1);
      }
      lVar3 = *(longlong *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = 0;
      plVar7 = (longlong *)GetMoviePlayer();
      cVar2 = (**(code **)(*plVar7 + 0xb8))(plVar7);
      plVar7 = (longlong *)GetMoviePlayer();
      (**(code **)(*plVar7 + 0x48))(plVar7);
      plVar7 = (longlong *)GetMoviePlayer();
      (**(code **)(*plVar7 + 0x50))(plVar7,0);
      plVar7 = (longlong *)GetMoviePlayer();
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0xe8))(plVar7);
      iVar9 = 0;
      if (0 < (int)plVar7[1]) {
        lVar5 = 0;
        do {
          lVar8 = *plVar7;
          if (((*(int *)(lVar5 + 8 + lVar8) != 0) &&
              (plVar4 = *(longlong **)(lVar5 + lVar8), plVar4 != (longlong *)0x0)) &&
             (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_e8), *plVar4 == lVar3)
             ) {
            if ((*(int *)(lVar5 + 8 + lVar8) != 0) &&
               (plVar4 = *(longlong **)(lVar5 + lVar8), plVar4 != (longlong *)0x0)) {
              (**(code **)(*plVar4 + 0x28))(plVar4,0);
              if (*(longlong *)(lVar5 + lVar8) != 0) {
                uVar6 = FMemory::Realloc(*(longlong *)(lVar5 + lVar8),0,0);
                *(undefined8 *)(lVar5 + lVar8) = uVar6;
              }
              *(undefined4 *)(lVar5 + 8 + lVar8) = 0;
            }
            break;
          }
          iVar9 = iVar9 + 1;
          lVar5 = lVar5 + 0x10;
        } while (iVar9 < (int)plVar7[1]);
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,0);
      if ((cVar2 != '\0') && (lVar3 = FUN_140cb5ff0(), lVar3 != 0)) {
        uVar6 = FUN_140cb5ff0();
        FUN_140cc9000(uVar6);
      }
      lVar3 = DAT_146b17150;
      if (DAT_146b17150 != 0) {
        lVar8 = FUN_142937670();
        lVar5 = *(longlong *)(lVar3 + 0x10);
        if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_142463010(lVar3);
        }
      }
      lVar3 = FUN_1411e2360(param_1);
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0x7c) = *(uint *)(lVar3 + 0x7c) & 0xfffffffb;
      }
      uVar6 = FWeakObjectPtr::Get(param_1 + 4);
      FUN_140ba81c0(uVar6);
      lVar3 = FUN_140cb5ff0();
      if (lVar3 != 0) {
        uVar6 = FUN_140cb5ff0();
        FUN_140cb5e40(uVar6);
        uVar6 = FUN_140cb5ff0();
        FUN_140c6cad0(uVar6);
      }
      uVar6 = FWeakObjectPtr::Get(param_1 + 4);
      FUN_140bce040(uVar6);
      QueryPerformanceCounter(local_e8);
      FWeakObjectPtr::Get(param_1 + 4);
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x1a8);
      return;
    }
    lVar3 = FUN_1411e2360(param_1);
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x7c) = *(uint *)(lVar3 + 0x7c) & 0xfffffffb;
    }
    lVar3 = FUN_140cb5ff0();
    if (lVar3 != 0) {
      uVar6 = FUN_140cb5ff0();
      FUN_140c72d20(uVar6,param_2);
    }
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      plVar4[1] = param_1;
      *plVar4 = (longlong)&PTR_GetPoolName_1446fe8e0;
      plVar4[2] = (longlong)FUN_1411e7a30;
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined1 *)((longlong)plVar4 + 0x1c) = 1;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar3;
      *plVar4 = (longlong)&PTR_GetPoolName_1446fe928;
    }
    lVar3 = FWeakObjectPtr::Get(param_1 + 4);
    local_d8 = 0;
    local_d0 = 0;
    uVar6 = *(undefined8 *)(lVar3 + 0x90);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_d8);
    }
    FWeakObjectPtr::operator=(local_c8,0);
  }
  else {
    cVar2 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
    if (cVar2 != '\0') goto LAB_1411e7aef;
    lVar3 = FWeakObjectPtr::Get(param_1 + 4);
    if (lVar3 == 0) {
LAB_1411e7c12:
      lVar3 = *(longlong *)(param_1 + 0xd0);
      if (lVar3 == 0) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        lVar3 = *(longlong *)(DAT_146b33f38 + 0xe8);
        *(longlong *)(param_1 + 0xd0) = lVar3;
      }
      if (param_3 == '\0') {
        if (lVar3 == 0) {
          uVar10 = 0x3f000000;
        }
        else {
          uVar10 = *(undefined4 *)(lVar3 + 0x360);
        }
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar4 != (longlong *)0x0) {
          plVar4[1] = param_1;
          *plVar4 = (longlong)&PTR_GetPoolName_1446fe8e0;
          plVar4[2] = (longlong)FUN_1411e7a30;
          *(float *)(plVar4 + 3) = param_2;
          *(undefined1 *)((longlong)plVar4 + 0x1c) = 1;
          lVar3 = FDelegateHandle::GenerateNewID();
          plVar4[4] = lVar3;
          *plVar4 = (longlong)&PTR_GetPoolName_1446fe928;
        }
        lVar3 = FWeakObjectPtr::Get(param_1 + 4);
        local_d8 = 0;
        local_d0 = 0;
        uVar6 = *(undefined8 *)(lVar3 + 0x90);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4,&local_d8);
        }
        FWeakObjectPtr::operator=(local_c8,0);
        local_f0 = 0xbf800000;
        local_f8 = 0;
        local_c0 = 0;
        local_88 = (longlong *)0x0;
        local_78 = 0;
        local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar6,plVar7,&local_d8,uVar10);
        goto LAB_1411e7e27;
      }
      goto LAB_1411e7d35;
    }
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1411e7c12;
    cVar2 = FUN_140becb30(lVar3);
    if ((cVar2 == '\0') || (*(char *)(lVar3 + 0x13c0) != '\0')) {
      cVar2 = FUN_140becb30(lVar3);
      if ((cVar2 == '\0') || (cVar2 = FUN_140bc9f40(lVar3), cVar2 == '\0')) {
        FUN_140becb30(lVar3);
        goto LAB_1411e7c12;
      }
    }
    else {
      uVar6 = FWeakObjectPtr::Get(param_1 + 4);
      FUN_140ba53b0(uVar6);
    }
LAB_1411e7aef:
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_1446fe8e0;
      plVar4[1] = param_1;
      plVar4[2] = (longlong)FUN_1411e7a30;
      *(float *)(plVar4 + 3) = param_2;
      *(undefined1 *)((longlong)plVar4 + 0x1c) = 0;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar3;
      *plVar4 = (longlong)&PTR_GetPoolName_1446fe928;
    }
    lVar3 = FWeakObjectPtr::Get(param_1 + 4);
    local_d0 = 0;
    local_d8 = 0;
    uVar6 = *(undefined8 *)(lVar3 + 0x90);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_d8);
    }
    FWeakObjectPtr::operator=(local_c8,0);
    param_2 = 0.25;
  }
  local_f0 = 0xbf800000;
  local_f8 = 0;
  local_c0 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar6,plVar7,&local_d8,param_2);
LAB_1411e7e27:
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar3 = FMemory::Realloc(plVar4,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 1411e80b0 FUN_1411e80b0 body=122 status=ok
// SIG undefined FUN_1411e80b0(void)

void FUN_1411e80b0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (DAT_146876440 != 0) {
    lVar2 = FUN_1411e2360();
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x7c) = *(uint *)(lVar2 + 0x7c) & 0xfffffffb;
    }
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 4);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      lVar2 = FWeakObjectPtr::Get(param_1 + 4);
      uVar3 = *(undefined4 *)(lVar2 + 0x974);
    }
    FUN_1411e7a30(param_1,uVar3,0);
    return;
  }
  lVar2 = FUN_1411e2360();
  if (lVar2 != 0) {
    FUN_140cba7e0(lVar2);
    return;
  }
  return;
}



// FUNCTION 1411e8130 FUN_1411e8130 body=103 status=ok
// SIG undefined FUN_1411e8130(void)

void FUN_1411e8130(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x168 + lVar1;
  if (lVar1 != lVar3) {
    lVar2 = lVar1;
    do {
      if (*(longlong *)(lVar2 + 0x140) == *param_2) {
        if (lVar2 != lVar3) {
          FUN_1411e81a0(param_1,(lVar2 - lVar1) / 0x168);
          return;
        }
        break;
      }
      lVar2 = lVar2 + 0x168;
    } while (lVar2 != lVar3);
  }
  FUN_1411e81a0(param_1,0xffffffff);
  return;
}



// FUNCTION 1411e81a0 FUN_1411e81a0 body=170 status=ok
// SIG undefined FUN_1411e81a0(void)

void FUN_1411e81a0(longlong param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x40) == 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    lVar3 = AXActionCue::GetPrivateStaticClass();
    for (lVar1 = *(longlong *)(param_1 + 0x58); (lVar1 != 0 && (lVar1 != lVar3));
        lVar1 = *(longlong *)(lVar1 + 0x30)) {
    }
  }
  if ((*(longlong **)(param_1 + 0x40) == (longlong *)0x0) || (param_2 != 0)) {
    if (-1 < param_2) goto LAB_1411e81fc;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x5f0))();
LAB_1411e81fc:
    if (param_2 < *(int *)(param_1 + 0x38)) {
      bVar2 = true;
      goto LAB_1411e8207;
    }
  }
  bVar2 = false;
LAB_1411e8207:
  if (bVar2) {
    FUN_1411f8680(param_1 + 0x30,param_2,1,1);
  }
  if (((*(longlong *)(param_1 + 0x48) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x1428), lVar1 != 0)) &&
     (param_1 == *(longlong *)(lVar1 + 0x70))) {
    FUN_1411fe4d0();
  }
  return;
}



// FUNCTION 1411e8250 FUN_1411e8250 body=479 status=ok
// SIG undefined FUN_1411e8250(void)

void FUN_1411e8250(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  DAT_146876440 = 1;
  uVar3 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar3,L"OakMovies");
  uVar3 = 0;
  if (cVar2 == '\0') {
    uVar4 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar4,L"NoOakMovies");
    if (cVar2 != '\0') {
      DAT_146876440 = 0;
    }
  }
  else {
    DAT_146876440 = 1;
  }
  FWeakObjectPtr::operator=(param_1 + 4,param_2);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  uVar4 = uVar3;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = param_1;
    *plVar5 = (longlong)&DAT_143f3ed00;
    plVar5[2] = (longlong)FUN_1411f5720;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57b8,1);
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
    iVar1 = DAT_1464b57c0;
    lVar6 = (longlong)DAT_1464b57c0;
    uVar4 = *puVar7;
    DAT_1464b57c0 = DAT_1464b57c0 + 1;
    if (DAT_1464b57c4 < DAT_1464b57c0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57b8,iVar1);
    }
    puVar7 = (undefined8 *)(lVar6 * 0x10 + DAT_1464b57b8);
    *puVar7 = plVar5;
    *(undefined4 *)(puVar7 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = param_1;
    *plVar5 = (longlong)&DAT_143f3ed00;
    plVar5[2] = (longlong)&LAB_1411f5610;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
    iVar1 = DAT_1464b57d8;
    lVar6 = (longlong)DAT_1464b57d8;
    uVar3 = *puVar7;
    DAT_1464b57d8 = DAT_1464b57d8 + 1;
    if (DAT_1464b57dc < DAT_1464b57d8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar1);
    }
    puVar7 = (undefined8 *)(lVar6 * 0x10 + DAT_1464b57d0);
    *puVar7 = plVar5;
    *(undefined4 *)(puVar7 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  return;
}



// FUNCTION 1411e8430 FUN_1411e8430 body=1352 status=ok
// SIG undefined FUN_1411e8430(void)

void FUN_1411e8430(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint local_f8;
  uint uStack_f4;
  uint uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_b4;
  uint uStack_a8;
  uint uStack_a4;
  uint *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  uint *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_3 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xf8) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xf8) = 1;
  *(longlong *)(param_1 + 0x38) = param_2;
  *(longlong *)(param_1 + 0x40) = param_3;
  uVar11 = AActor::GetLevel(param_3);
  FTickFunction::RegisterTickFunction(param_1 + 0x2b0,uVar11);
  FUN_14288e3d0(param_1 + 0x2b0,1);
  uVar12 = FWeakObjectPtr::Get(param_1 + 8);
  uVar21 = 0;
  uVar16 = uVar21;
  if (uVar12 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x10)) && (*(longlong *)(param_1 + 0x18) != 0)) {
      lVar13 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1 + 8,lVar13);
      if ((lVar13 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x10) = DAT_1464b56f4;
      }
      uVar12 = FWeakObjectPtr::Get(param_1 + 8);
      if (uVar12 != 0) goto LAB_1411e8524;
    }
  }
  else {
LAB_1411e8524:
    lVar13 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(uVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) {
      uVar14 = AAFGameState::GetPrivateStaticClass();
      uVar18 = uVar12;
      do {
        uVar16 = uVar12;
        if (uVar18 == uVar14) break;
        uVar18 = *(ulonglong *)(uVar18 + 0x30);
        uVar16 = uVar21;
      } while (uVar18 != 0);
    }
  }
  puVar7 = *(uint **)(param_1 + 0x40);
  uVar18 = 0;
  uVar12 = uVar21;
  if (uVar16 != 0) {
    uVar15 = AAFGameState::GetPrivateStaticClass();
    uVar14 = uVar16;
    do {
      if (uVar14 == uVar15) {
        uVar12 = uVar18;
        if ((puVar7 != (uint *)0x0) &&
           (lVar13 = (**(code **)(*(longlong *)puVar7 + 0x148))(puVar7), lVar13 != 0)) {
          FActorSpawnParameters::FActorSpawnParameters(&local_88);
          local_60 = 1;
          puStack_78 = puVar7;
          if (*(longlong *)(puVar7 + 0x14a) != 0) {
            FUN_1426e1d20(*(longlong *)(puVar7 + 0x14a),local_58);
            FUN_1426e1ca0(*(longlong *)(puVar7 + 0x14a),local_48);
            uVar18 = AAFGameState::GetPrivateStaticClass();
            uVar12 = uVar16;
            goto LAB_1411e8605;
          }
        }
        break;
      }
      uVar14 = *(ulonglong *)(uVar14 + 0x30);
    } while (uVar14 != 0);
  }
LAB_1411e865e:
  *(ulonglong *)(param_1 + 0x48) = uVar12;
  if (uVar12 != 0) {
    plVar1 = (longlong *)(uVar12 + 0x2b0);
    local_f8 = 0;
    uVar5 = *(uint *)(uVar12 + 0x2d8);
    puVar7 = (uint *)(uVar12 + 0x2c0);
    uStack_f4 = 1;
    uStack_e4 = 0;
    uStack_e0 = 0;
    if (uVar5 != 0) {
      puVar20 = *(uint **)(uVar12 + 0x2d0);
      if (*(uint **)(uVar12 + 0x2d0) == (uint *)0x0) {
        puVar20 = puVar7;
      }
      uVar19 = *puVar20;
      uVar16 = uVar21;
      uVar18 = uVar21;
      while (uVar19 == 0) {
        iVar10 = (int)uVar16;
        uStack_e0 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_e0;
        local_f8 = iVar10 + 1;
        uVar16 = (ulonglong)local_f8;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_1411e8732;
        uVar19 = puVar20[(longlong)iVar10 + 1];
      }
      uStack_f4 = uVar19 - 1 & uVar19 ^ uVar19;
      iVar10 = 0x1f;
      if (uStack_f4 != 0) {
        for (; uStack_f4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_f4 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_e4 = (uStack_e0 - iVar10) + 0x1f;
      if ((int)uVar5 < (int)uStack_e4) {
LAB_1411e8732:
        uStack_e4 = uVar5;
      }
    }
    uStack_c4 = *(uint *)(uVar12 + 0x2d8);
    uStack_80 = CONCAT44(uStack_f4,local_f8);
    uStack_98 = CONCAT44(uStack_e4,0xffffffff);
    local_90 = CONCAT44(uStack_dc,uStack_e0);
    uVar19 = uStack_c4 & 0xffffffe0;
    uStack_a8 = local_f8;
    uStack_a4 = uStack_f4;
    local_a0 = puVar7;
    local_88 = plVar1;
    puStack_78 = puVar7;
    uStack_70 = uStack_98;
    uStack_68 = local_90;
    if (uStack_c4 != uVar5) {
      puVar20 = *(uint **)(uVar12 + 0x2d0);
      if (*(uint **)(uVar12 + 0x2d0) == (uint *)0x0) {
        puVar20 = puVar7;
      }
      uVar17 = puVar20[(int)uStack_c4 >> 5] & -1 << ((byte)uStack_c4 & 0x1f);
      iVar10 = (int)uStack_c4 >> 5;
      while (uVar17 == 0) {
        uVar19 = uVar19 + 0x20;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_1411e8807;
        uVar17 = puVar20[(longlong)iVar10 + 1];
        iVar10 = iVar10 + 1;
      }
      uVar17 = uVar17 - 1 & uVar17 ^ uVar17;
      iVar10 = 0x1f;
      if (uVar17 != 0) {
        for (; uVar17 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uVar17 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_c4 = (uVar19 - iVar10) + 0x1f;
      if ((int)uVar5 < (int)uStack_c4) {
LAB_1411e8807:
        uStack_c4 = uVar5;
      }
    }
    while( true ) {
      if ((uStack_98._4_4_ == uStack_c4) && (local_a0 == puVar7)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) break;
      uVar16 = *(ulonglong *)(*plVar1 + (longlong)(int)uStack_98._4_4_ * 0x10);
      if (uVar16 == 0) {
LAB_1411e888d:
        uVar16 = uVar21;
      }
      else {
        lVar13 = UAkAudioInputComponent::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(uVar16 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar16 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (!bVar9) goto LAB_1411e888d;
      }
      if (uVar16 != 0) {
        uVar12 = *(ulonglong *)(uVar16 + 0x1ec);
        iVar10 = *(int *)(param_1 + 0x58);
        lVar13 = (longlong)iVar10;
        uVar11 = *(undefined8 *)(uVar16 + 500);
        uVar6 = *(undefined4 *)(uVar16 + 0x200);
        uStack_c0 = (undefined4)((ulonglong)*(undefined8 *)(uVar16 + 0x1f8) >> 0x20);
        uVar4 = *(undefined4 *)(uVar16 + 0x2e4);
        *(int *)(param_1 + 0x58) = iVar10 + 1;
        if (*(int *)(param_1 + 0x5c) < iVar10 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x50,iVar10);
        }
        lVar8 = *(longlong *)(param_1 + 0x50);
        puVar2 = (ulonglong *)(lVar8 + lVar13 * 0x28);
        *puVar2 = uVar16;
        puVar2[1] = uVar12;
        puVar3 = (undefined8 *)(lVar8 + 0x10 + lVar13 * 0x28);
        *puVar3 = uVar11;
        puVar3[1] = CONCAT44(uVar6,uStack_c0);
        *(ulonglong *)(lVar8 + 0x20 + lVar13 * 0x28) = CONCAT44(uStack_b4,uVar4);
      }
      uStack_98 = CONCAT44(uStack_98._4_4_,(uint)uStack_98 & ~uStack_a4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a8);
    }
  }
  FUN_1411e8db0(param_1);
  return;
  while (uVar12 = *(ulonglong *)(uVar12 + 0x30), uVar14 = uVar21, uVar12 != 0) {
LAB_1411e8605:
    uVar14 = uVar16;
    if (uVar12 == uVar18) break;
  }
  uVar12 = UWorld::SpawnActor(lVar13,uVar14,local_48,local_58,&local_88);
  if (uVar12 != 0) {
    FUN_1422232e0(uVar12,*(undefined8 *)(*(longlong *)(puVar7 + 0x14a) + 0x460),&DAT_146532180,0);
  }
  goto LAB_1411e865e;
}



// FUNCTION 1411e8980 FUN_1411e8980 body=669 status=ok
// SIG undefined FUN_1411e8980(void)

void FUN_1411e8980(longlong *param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  char cVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined8 local_res8;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong local_20;
  
  FWeakObjectPtr::operator=(param_1 + 0xc);
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar3 = FUN_142dcdcd0(uVar3);
  FWeakObjectPtr::operator=(param_1 + 0xd,uVar3);
  pwVar8 = (wchar_t *)0x0;
  pwVar4 = pwVar8;
  if (param_2 != (longlong *)0x0) {
    uVar3 = FUN_142e035e0();
    pwVar4 = (wchar_t *)(**(code **)(*param_2 + 0x628))(param_2,uVar3);
  }
  FWeakObjectPtr::operator=(param_1 + 0xe,pwVar4);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xe);
  if (cVar2 != '\0') {
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnChallengeActivated",L"::");
    pwVar4 = pwVar8;
    while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar4 = pwVar1;
    }
    FName::FName(&local_res8,pwVar4 + 2,1);
    lVar6 = FWeakObjectPtr::Get(param_1 + 0xe);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
              (lVar6 + 0x188,param_1,thunk_FUN_1411f6450,local_res8);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnChallengeUpdated",L"::");
    pwVar4 = pwVar8;
    while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar4 = pwVar1;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar6 = FWeakObjectPtr::Get(param_1 + 0xe);
    FWeakObjectPtr::operator=(local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(local_28,param_1);
    local_20 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(local_28), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_20);
    }
    FUN_1406a5aa0(lVar6 + 0x198,local_28);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnChallengeCompleted",L"::");
    pwVar4 = pwVar8;
    while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar4 = pwVar1;
    }
    FName::FName(&local_res8,pwVar4 + 2,1);
    lVar6 = FWeakObjectPtr::Get(param_1 + 0xe);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
              (lVar6 + 0x1a8,param_1,thunk_FUN_1411f6450,local_res8);
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnChallengeChildCompleted",L"::");
    while (pwVar5 = pwVar4, pwVar5 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar8 = pwVar5;
    }
    FName::FName(&local_res8,pwVar8 + 2,1);
    lVar6 = FWeakObjectPtr::Get(param_1 + 0xe);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
              (lVar6 + 0x1b8,param_1,thunk_FUN_1411f6450,local_res8);
  }
  return;
}



// FUNCTION 1411e8c20 FUN_1411e8c20 body=115 status=ok
// SIG undefined FUN_1411e8c20(void)

void FUN_1411e8c20(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  FWeakObjectPtr::operator=(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x10) = *param_3;
  FUN_1411cafb0(param_1 + 0x18,param_3 + 1);
  *(undefined8 *)(param_1 + 0x78) = param_3[0xd];
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_3 + 0xe);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((longlong)param_3 + 0x74);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_3 + 0xf);
  *(undefined1 *)(param_1 + 0x89) = *(undefined1 *)((longlong)param_3 + 0x79);
  *(undefined1 *)(param_1 + 0x8a) = *(undefined1 *)((longlong)param_3 + 0x7a);
  return;
}



// FUNCTION 1411e8ca0 FUN_1411e8ca0 body=266 status=ok
// SIG undefined FUN_1411e8ca0(void)

void FUN_1411e8ca0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong local_20;
  
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x1b0);
  }
  else {
    *(longlong *)(param_1 + 0x1b0) = param_2;
  }
  if (param_2 != 0) {
    FUN_1407665e0(param_2 + 0x1418,param_1);
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnGameEventCallback",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    lVar1 = *(longlong *)(param_1 + 0x1b0);
    FWeakObjectPtr::operator=(local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(local_28,param_1);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(local_28), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_20);
    }
    FUN_1406a5aa0(lVar1 + 0x1418,local_28);
  }
  return;
}



// FUNCTION 1411e8db0 FUN_1411e8db0 body=859 status=ok
// SIG undefined FUN_1411e8db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411e8db0(longlong param_1)

{
  int *piVar1;
  undefined8 **ppuVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  longlong local_c8 [2];
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return;
  }
  lVar7 = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  FUN_1411f7760();
  if (*(longlong *)(param_1 + 0x68) != 0) {
    iVar10 = *(int *)(*(longlong *)(param_1 + 0x68) + 0xc);
    if (iVar10 < (int)DAT_1469e91c4) {
      uVar8 = iVar10 >> 0x1f & 0xffff;
      uVar5 = iVar10 + uVar8;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar8) * 0x18;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) goto LAB_1411e8e58;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
LAB_1411e8e58:
  *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + 1;
  uVar3 = *(undefined4 *)(param_1 + 0x2a0);
  FWeakObjectPtr::operator=(&local_b8,*(undefined8 *)(param_1 + 0x38));
  local_a8 = local_b8;
  local_a4 = local_b4;
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  local_b0 = param_1;
  local_a0 = uVar3;
  FUN_1411e0380(param_1,&local_d8);
  if ((int)local_d0 < 1) {
    FUN_1411d16f0(&local_b0);
  }
  else {
    ppuVar2 = (undefined8 **)(param_1 + 0x290);
    if (ppuVar2 != &local_d8) {
      iVar10 = *(int *)(param_1 + 0x298);
      iVar11 = (int)local_d0;
      if (iVar10 != 0) {
        plVar9 = *ppuVar2 + 1;
        do {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 3;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar11 = (int)local_d0;
      }
      puVar6 = local_d8;
      *(int *)(param_1 + 0x298) = iVar11;
      if ((iVar11 == 0) && (*(int *)(param_1 + 0x29c) == 0)) {
        *(undefined4 *)(param_1 + 0x29c) = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(ppuVar2,iVar11);
        puVar4 = *ppuVar2;
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar4 = *puVar6;
          FString::FString(puVar4 + 1,puVar6 + 1);
          puVar4 = puVar4 + 3;
          puVar6 = puVar6 + 3;
        }
      }
    }
    *(undefined1 *)(param_1 + 800) = 1;
    local_c8[0] = 0;
    local_c8[1] = 0x1d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
    FGenericPlatformString::Memcpy(local_c8[0],L"RequestAsyncLoad ArrayLambda",0x3a);
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x20,local_78);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_144213c48;
      puVar6[1] = local_b0;
      *(undefined4 *)(puVar6 + 2) = local_a8;
      *(undefined4 *)((longlong)puVar6 + 0x14) = local_a4;
      *(undefined4 *)(puVar6 + 3) = local_a0;
    }
    local_88[0] = &LAB_1411d5210;
    lVar7 = FUN_1422ca050();
    local_e0 = local_c8;
    local_e8 = 0;
    local_f0 = 0;
    local_f8 = 0;
    FStreamableManager::RequestAsyncLoad(lVar7 + 0x178,local_98,&local_d8,local_88);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_90 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
  }
  if ((int)local_d0 != 0) {
    plVar9 = local_d8 + 1;
    iVar10 = (int)local_d0;
    do {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 3;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (local_d8 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411e9110 FUN_1411e9110 body=1023 status=ok
// SIG undefined FUN_1411e9110(void)

void FUN_1411e9110(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 uVar13;
  wchar_t *pwVar14;
  ulonglong local_res8;
  longlong local_res10;
  undefined1 local_38 [8];
  longlong local_30;
  
  *(longlong *)(param_1 + 0x58) = param_2;
  if (param_2 == 0) {
    lVar5 = 0;
    lVar6 = 0;
    goto LAB_1411e9181;
  }
  lVar5 = (**(code **)(*(longlong *)(param_2 + 0x980) + 0x10))();
  if (lVar5 == 0) {
LAB_1411e9174:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1411e9174;
  }
  lVar6 = *(longlong *)(param_1 + 0x58);
LAB_1411e9181:
  pwVar14 = (wchar_t *)0x0;
  *(longlong *)(param_1 + 0x40) = lVar5;
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)FName::FName(&local_res8,"OnlineMessageInputComponent",1);
    uVar8 = FUN_140cdf650(*(undefined8 *)(param_1 + 0x58),*puVar7,0,0,0,0);
    *(undefined8 *)(param_1 + 0x60) = uVar8;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      puVar7 = (undefined8 *)FName::FName(&local_res8,"OnlineMessageManager",1);
      lVar6 = FUN_1411c72d0(*(undefined8 *)(param_1 + 0x58),*puVar7,0,0,0,0);
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      *(longlong *)(param_1 + 0x70) = lVar6;
      *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xf20);
      *(undefined8 *)(lVar6 + 0x48) = uVar8;
      FWeakObjectPtr::operator=(lVar6 + 0x50,param_1);
      puVar7 = (undefined8 *)FName::FName(&local_res8,"SocialEventMessageManager",1);
      lVar6 = FUN_1411c72d0(*(undefined8 *)(param_1 + 0x58),*puVar7,0,0,0,0);
      *(longlong *)(param_1 + 0x78) = lVar6;
      *(undefined1 *)(lVar6 + 0x28) = 1;
      lVar6 = *(longlong *)(param_1 + 0x78);
      uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xf28);
      *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(lVar6 + 0x58) = uVar8;
      FWeakObjectPtr::operator=(lVar6 + 0x50,param_1);
      puVar7 = (undefined8 *)FName::FName(&local_res8,"TravelMessageManager",1);
      lVar6 = FUN_1411c72d0(*(undefined8 *)(param_1 + 0x58),*puVar7,0,0,0,0);
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      *(longlong *)(param_1 + 0x68) = lVar6;
      *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xf18);
      *(undefined8 *)(lVar6 + 0x48) = uVar8;
      FWeakObjectPtr::operator=(lVar6 + 0x50,param_1);
    }
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::AutoUpdateTravelMessage",L"::");
    pwVar4 = pwVar14;
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar6 = *(longlong *)(param_1 + 0x58);
    FWeakObjectPtr::operator=(local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(local_38,param_1);
    local_res8 = 0;
    local_30 = local_res10;
    if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(local_38), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_30);
    }
    FUN_1406a5aa0(lVar6 + 0xb98,local_38);
    lVar6 = FUN_1422312c0(*(undefined8 *)(param_1 + 0x58));
    if (lVar6 != 0) {
      lVar5 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        puVar7 = (undefined8 *)FUN_140ac3b30(lVar6 + 0x930,&local_res8,param_1,&LAB_1411ef270);
        *(undefined8 *)(param_1 + 0x80) = *puVar7;
        puVar7 = (undefined8 *)FUN_140ac3b30(lVar6 + 0x948,&local_res8,param_1,&LAB_1411ef260);
        *(undefined8 *)(param_1 + 0x88) = *puVar7;
      }
    }
  }
  local_res8._0_4_ = 0xffffffff;
  FUN_14170c210(&local_res8,param_1);
  uVar13 = (undefined4)local_res8;
  local_res8 = CONCAT44(local_res8._4_4_,0xffffffff);
  plVar10 = (longlong *)FUN_14203bd20();
  plVar11 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_GetPoolName_1446fef28;
    *(undefined4 *)(plVar11 + 1) = uVar13;
    uVar13 = 0xffffffff;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar11[2] = lVar6;
    *plVar11 = (longlong)&PTR_GetPoolName_1446fef70;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
    plVar12 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11,&local_res10);
    iVar1 = (int)plVar10[1];
    pwVar14 = (wchar_t *)*plVar12;
    *(int *)(plVar10 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar10 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar10);
    *puVar7 = plVar11;
    *(undefined4 *)(puVar7 + 1) = 2;
  }
  *(wchar_t **)(param_1 + 0x30) = pwVar14;
  FUN_1416f8340(uVar13);
  FUN_1416f8340(local_res8 & 0xffffffff);
  return;
}



// FUNCTION 1411e9510 FUN_1411e9510 body=2578 status=ok
// SIG undefined FUN_1411e9510(void)

void FUN_1411e9510(longlong param_1)

{
  int *piVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  char cStackX_9;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined1 local_218;
  undefined1 local_217;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0;
  undefined1 local_1df;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170;
  undefined1 local_16f;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_130 [8];
  longlong *local_128;
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
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x148) + 0x38))();
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnOptionClicked",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res18,pwVar4 + 2,1);
    lVar9 = *(longlong *)(param_1 + 0x2f0);
    FWeakObjectPtr::operator=(lVar9 + 400,param_1);
    *(longlong *)(lVar9 + 0x198) = local_res18;
    if ((local_res18 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar9 + 400), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar9 + 0x198));
    }
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnOptionSelected",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res20,pwVar4 + 2,1);
    lVar9 = *(longlong *)(param_1 + 0x2f0);
    FWeakObjectPtr::operator=(lVar9 + 0x180,param_1);
    *(longlong *)(lVar9 + 0x188) = local_res20;
    if ((local_res20 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar9 + 0x180), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar9 + 0x188));
    }
    local_res10 = param_1;
    FUN_1411f8b50(param_1 + 0x2f8,0);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_118,L"Friends Can Join",L"NetworkOptionsMenu",L"OnlineFriendsOnlyLabel"
                      );
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_130,
                       L"Your friends will be allowed to join your game without an invite.",
                       L"NetworkOptionsMenu",L"OnlineFriendsOnlyDescription");
    uVar15 = DAT_146297e39;
    uVar14 = DAT_146297e38;
    FText::FText(local_168,uVar7);
    FText::FText(local_150,uVar8);
    local_138 = uVar14;
    local_137 = uVar15;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_128 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_110 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
    FUN_1411cccd0(&local_res10,local_168);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e8,L"Invite Only",L"NetworkOptionsMenu",L"OnlineInviteOnlyLabel");
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_100,L"An invite is required to join your game.",L"NetworkOptionsMenu",
                       L"OnlineInviteOnlyDescription");
    uVar15 = DAT_146297e3c._1_1_;
    uVar14 = (undefined1)DAT_146297e3c;
    FText::FText(local_1a0,uVar7);
    FText::FText(local_188,uVar8);
    local_170 = uVar14;
    local_16f = uVar15;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_f8 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_f8 + 8))(local_f8,1);
        }
      }
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_e0 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    FUN_1411cccd0(&local_res10,local_1a0);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"Anyone Can Join",L"NetworkOptionsMenu",L"OnlinePublicLabel");
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d0,L"Anyone will be allowed to join your game without an invite.",
                       L"NetworkOptionsMenu",L"OnlinePublicDescription");
    uVar15 = DAT_146297e34._1_1_;
    uVar14 = (undefined1)DAT_146297e34;
    FText::FText(local_1d8,uVar7);
    FText::FText(local_1c0,uVar8);
    local_1a8 = uVar14;
    local_1a7 = uVar15;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_c8 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar1 = (int *)((longlong)local_c8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_b0 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    FUN_1411cccd0(&local_res10,local_1d8);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,&DAT_1446f6b18,L"NetworkOptionsMenu",L"LANLabel");
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"Create a local network game or browse for others.",
                       L"NetworkOptionsMenu",L"LANDescription");
    uVar15 = DAT_146297e30._1_1_;
    uVar14 = (undefined1)DAT_146297e30;
    FText::FText(local_210,uVar7);
    FText::FText(local_1f8,uVar8);
    local_1e0 = uVar14;
    local_1df = uVar15;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_98 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_80 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    FUN_1411cccd0(&local_res10,local_210);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Offline",L"NetworkOptionsMenu",L"OfflineLabel");
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,
                       L"Play alone. You will not be able to take advantage of network features.",
                       L"NetworkOptionsMenu",L"OfflineDescription");
    uVar15 = DAT_14686a12c._1_1_;
    uVar14 = (undefined1)DAT_14686a12c;
    FText::FText(local_248,uVar7);
    FText::FText(local_230,uVar8);
    local_218 = uVar14;
    local_217 = uVar15;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_68 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_50 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    FUN_1411cccd0(&local_res10,local_248);
    if (local_228 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_228 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_228)(local_228);
        LOCK();
        piVar1 = (int *)((longlong)local_228 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_228 + 8))(local_228,1);
        }
      }
    }
    if (local_240 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_240 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_240)(local_240);
        LOCK();
        piVar1 = (int *)((longlong)local_240 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_240 + 8))(local_240,1);
        }
      }
    }
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_1f0 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar1 = (int *)((longlong)local_1f0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_1f0 + 8))(local_1f0,1);
        }
      }
    }
    if (local_208 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_208 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_208)(local_208);
        LOCK();
        piVar1 = (int *)((longlong)local_208 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_208 + 8))(local_208,1);
        }
      }
    }
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_1b8 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar1 = (int *)((longlong)local_1b8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_1d0 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar1 = (int *)((longlong)local_1d0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_180 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    if (local_198 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_198 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_198)(local_198);
        LOCK();
        piVar1 = (int *)((longlong)local_198 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_198 + 8))(local_198,1);
        }
      }
    }
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_148 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_160 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)local_160 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (lVar9 = FUN_140eccb70(param_1), lVar9 != 0)) {
    puVar10 = (undefined2 *)FUN_140a5dc70(lVar9);
    lVar9 = *(longlong *)(param_1 + 0x2f8);
    lVar6 = (longlong)*(int *)(param_1 + 0x300) * 0x38 + lVar9;
    if (lVar6 != lVar9) {
      cStackX_9 = (char)((ushort)*puVar10 >> 8);
      do {
        lVar12 = lVar6 + -0x38;
        if ((*(char *)(lVar6 + -8) == (char)*puVar10) && (*(char *)(lVar6 + -7) == cStackX_9)) {
          uVar13 = (lVar12 - lVar9) / 0x38;
          goto LAB_1411e9ea8;
        }
        lVar6 = lVar12;
      } while (lVar12 != lVar9);
    }
    uVar13 = 0xffffffff;
LAB_1411e9ea8:
    if (*(longlong *)(param_1 + 0x2f0) != 0) {
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x148);
      (**(code **)(*plVar11 + 0x18))(plVar11,0,CONCAT71((int7)((ulonglong)lVar9 >> 8),1),0);
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x148);
      lVar9 = (**(code **)(*plVar11 + 0x40))(plVar11,uVar13 & 0xffffffff);
      if (lVar9 != 0) {
        (**(code **)(*(longlong *)(lVar9 + 0x208) + 0x38))((longlong *)(lVar9 + 0x208),0);
      }
    }
  }
  return;
}



// FUNCTION 1411e9f30 FUN_1411e9f30 body=779 status=ok
// SIG undefined FUN_1411e9f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411e9f30(longlong param_1)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90 [3];
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar10 = (longlong *)(param_1 + 0x28);
  FUN_142ebae60(plVar10);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_1446feb38;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)FUN_1411ef060;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_1446feb80;
  }
  if (local_90 != plVar10) {
    if (plVar4 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x30) != 0) &&
         (plVar6 = (longlong *)*plVar10, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar10 != 0) {
          lVar5 = FMemory::Realloc(*plVar10,0,0);
          *plVar10 = lVar5;
        }
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
    else {
      (**(code **)(*plVar4 + 0x30))(plVar4,plVar10);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar5 = FMemory::Realloc(plVar4,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  plVar4 = (longlong *)(param_1 + 0x38);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_1442e83c8;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    plVar6[2] = (longlong)&LAB_1411ef050;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar5;
    *plVar6 = (longlong)&PTR_FUN_1442e8410;
  }
  if (local_90 != plVar4) {
    if (plVar6 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x40) != 0) &&
         (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*plVar4 != 0) {
          lVar5 = FMemory::Realloc(*plVar4,0,0);
          *plVar4 = lVar5;
        }
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar4);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar5 = FMemory::Realloc(plVar6,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  lVar5 = FUN_14103aae0(plVar10);
  if (lVar5 != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnListScrollBarUpdated",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(local_90,pwVar3 + 2,1);
    FWeakObjectPtr::operator=(lVar5 + 0x378,param_1);
    *(longlong *)(lVar5 + 0x380) = local_90[0];
    local_98 = 0;
    if ((local_90[0] != 0) && (lVar8 = FWeakObjectPtr::Get(lVar5 + 0x378), lVar8 != 0)) {
      UObject::FindFunction(lVar8,*(undefined8 *)(lVar5 + 0x380));
    }
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = param_1;
    *puVar9 = &PTR_FUN_143f77b70;
  }
  local_78[0] = FUN_1411d5140;
  FUN_142eb4bb0(plVar10,local_78);
  if (local_38 != 0) {
    plVar10 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar10 = local_48;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411ea240 FUN_1411ea240 body=118 status=ok
// SIG undefined FUN_1411ea240(void)

void FUN_1411ea240(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FName::FName(local_res8,"OnlineMessageInputComponent",1);
    uVar2 = FUN_140cdf650(param_2,*puVar1,0,0,0,0);
    *(undefined8 *)(param_1 + 0x370) = uVar2;
    *(undefined1 *)(param_1 + 0x338) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x338) = 1;
  return;
}



// FUNCTION 1411ea2c0 FUN_1411ea2c0 body=664 status=ok
// SIG undefined FUN_1411ea2c0(void)

void FUN_1411ea2c0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  void *_Src;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 local_d8 [128];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined1 local_30;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x70);
  if ((cVar3 != '\0') && (0 < *(int *)(param_1 + 0x80))) {
    lVar11 = 0;
    iVar12 = 0;
    lVar10 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0x78) + lVar10;
      lVar9 = lVar10;
      if (*(char *)(lVar8 + 0xa0) == '\0') {
        lVar7 = FUN_1411e6c30(lVar8);
LAB_1411ea3a0:
        if (lVar7 != 0) {
          if ((((*(longlong *)(lVar11 + *(longlong *)(param_1 + 0x78)) == 0) ||
               (cVar3 = FText::IsEmpty(lVar7 + 0x30), cVar3 != '\0')) ||
              (cVar3 = FText::IsEmpty(*(longlong *)(lVar11 + *(longlong *)(param_1 + 0x78)) + 0x30),
              cVar3 != '\0')) ||
             (iVar4 = FText::CompareToCaseIgnored
                                (*(longlong *)(lVar11 + *(longlong *)(param_1 + 0x78)) + 0x30,
                                 lVar7 + 0x30), iVar4 != 0)) {
            FUN_142dc16a0(local_d8);
            FWeakObjectPtr::operator=(local_58,0);
            local_50 = 0;
            local_48 = 0;
            local_40 = 0;
            FWeakObjectPtr::operator=(local_38,0);
            local_30 = 0;
            FUN_1411ea6e0(lVar8);
            iVar4 = *(int *)(param_1 + 0x80);
            *(int *)(param_1 + 0x80) = iVar4 + 1;
            if (*(int *)(param_1 + 0x84) < iVar4 + 1) {
              FUN_1404852a0(param_1 + 0x78,iVar4);
            }
            _Src = (void *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar12 * 0xc0);
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)_Src + 0xc0),_Src,(longlong)(iVar4 - iVar12) * 0xc0);
            FUN_1411c8960(*(longlong *)(param_1 + 0x78) + (longlong)iVar12 * 0xc0);
            lVar9 = lVar10 + 0xc0;
            iVar12 = iVar12 + 1;
            FUN_1411ca4a0(local_d8);
            lVar11 = lVar10;
          }
          else {
            piVar1 = (int *)(lVar11 + 8 + *(longlong *)(param_1 + 0x78));
            *piVar1 = *piVar1 + 1;
            lVar10 = *(longlong *)(param_1 + 0x78);
            cVar3 = FUN_1411ea6e0(lVar8);
            piVar1 = (int *)(lVar10 + 0xc + lVar11);
            *piVar1 = *piVar1 + (uint)(cVar3 != '\0');
          }
        }
      }
      else {
        if (*(longlong *)(lVar8 + 0xa8) != 0) {
          lVar5 = FUN_142dfdfe0();
          lVar7 = *(longlong *)(lVar8 + 0xa8);
          for (lVar2 = lVar7; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
            if (lVar2 == lVar5) goto LAB_1411ea370;
          }
        }
        lVar7 = 0;
LAB_1411ea370:
        uVar6 = FWeakObjectPtr::Get(param_1 + 0x70);
        lVar7 = FUN_142dcdc10(uVar6,lVar7);
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0xd8);
          goto LAB_1411ea3a0;
        }
      }
      iVar12 = iVar12 + 1;
      lVar10 = lVar9 + 0xc0;
    } while (iVar12 < *(int *)(param_1 + 0x80));
  }
  return;
}



// FUNCTION 1411ea560 FUN_1411ea560 body=348 status=ok
// SIG undefined FUN_1411ea560(void)

void FUN_1411ea560(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x70);
  if (cVar6 != '\0') {
    iVar3 = *(int *)(param_1 + 0x80);
    puVar4 = *(undefined8 **)(param_1 + 0x78);
    if (puVar4 != puVar4 + (longlong)iVar3 * 0x18) {
      puVar12 = puVar4 + 0x13;
      do {
        *puVar12 = 0;
        if ((puVar12[-0x10] != 0) && (lVar7 = FUN_142dcdb70(), lVar7 != 0)) {
          lVar8 = FUN_142e6a220();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            *(undefined4 *)puVar12 = *(undefined4 *)(lVar7 + 0x108);
            plVar11 = *(longlong **)(lVar7 + 0x100);
            plVar2 = plVar11 + *(int *)(lVar7 + 0x108);
            for (; plVar11 != plVar2; plVar11 = plVar11 + 1) {
              lVar7 = 0;
              if (*plVar11 != 0) {
                lVar9 = FUN_142dfdfe0();
                for (lVar8 = *plVar11; (lVar7 = 0, lVar8 != 0 && (lVar7 = *plVar11, lVar8 != lVar9))
                    ; lVar8 = *(longlong *)(lVar8 + 0x30)) {
                }
              }
              uVar10 = FWeakObjectPtr::Get(param_1 + 0x70);
              cVar6 = FUN_142dd3360(uVar10,lVar7);
              if (cVar6 != '\0') {
                *(int *)((longlong)puVar12 + 4) = *(int *)((longlong)puVar12 + 4) + 1;
              }
            }
          }
        }
        puVar1 = puVar12 + 5;
        puVar12 = puVar12 + 0x18;
      } while (puVar1 != puVar4 + (longlong)iVar3 * 0x18);
    }
  }
  return;
}



// FUNCTION 1411ea6c0 FUN_1411ea6c0 body=18 status=ok
// SIG undefined FUN_1411ea6c0(void)

undefined1 FUN_1411ea6c0(char *param_1)

{
  if ((*param_1 == '\0') && (*(longlong *)(param_1 + 0x30) == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 1411ea6e0 FUN_1411ea6e0 body=156 status=ok
// SIG undefined FUN_1411ea6e0(void)

undefined8 FUN_1411ea6e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xb0);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0xb0);
    lVar2 = FWeakObjectPtr::Get(lVar2 + 0x70);
    if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      lVar3 = FUN_142dcdb70(param_1 + 0x10);
      if (lVar3 != 0) {
        if (*(longlong *)(param_1 + 0x18) == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = FUN_142dcdb70(param_1 + 0x10);
        }
        cVar1 = FUN_142dd3360(lVar2,*(undefined8 *)(lVar3 + 0x10));
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1411ea780 FUN_1411ea780 body=156 status=ok
// SIG undefined FUN_1411ea780(void)

undefined8 FUN_1411ea780(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xb0);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0xb0);
    lVar2 = FWeakObjectPtr::Get(lVar2 + 0x70);
    if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      lVar3 = FUN_142dcdb70(param_1 + 0x10);
      if (lVar3 != 0) {
        if (*(longlong *)(param_1 + 0x18) == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = FUN_142dcdb70(param_1 + 0x10);
        }
        cVar1 = FUN_142dd61f0(lVar2,*(undefined8 *)(lVar3 + 0x10));
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1411ea820 IsGamePaused body=5 status=ok
// SIG undefined IsGamePaused(void)

void UGameplayStatics::IsGamePaused(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    FUN_14254a160(lVar1);
    return;
  }
  return;
}



// FUNCTION 1411ea830 FUN_1411ea830 body=79 status=ok
// SIG undefined FUN_1411ea830(void)

longlong FUN_1411ea830(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x5a8);
  }
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0xf0) == lVar1)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 1411ea880 FUN_1411ea880 body=104 status=ok
// SIG undefined FUN_1411ea880(void)

undefined1 FUN_1411ea880(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 4);
  if (lVar2 != 0) {
    plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 4);
    lVar2 = (**(code **)(*plVar1 + 0x148))(plVar1);
    if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0x830) & 4) == 0)) && (DAT_146b17150 != 0)) {
      lVar2 = FUN_1428761d0(DAT_146b17150,lVar2);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 8) == '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1411ea8f0 FUN_1411ea8f0 body=55 status=ok
// SIG undefined FUN_1411ea8f0(void)

undefined1 FUN_1411ea8f0(void)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  
  cVar2 = FPreLoadScreenManager::ArePreLoadScreensEnabled();
  if (cVar2 != '\0') {
    lVar1 = GetMoviePlayer();
    if (lVar1 != 0) {
      plVar3 = (longlong *)GetMoviePlayer();
      cVar2 = (**(code **)(*plVar3 + 0x60))(plVar3);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1411ea9a0 FUN_1411ea9a0 body=49 status=ok
// SIG undefined FUN_1411ea9a0(void)

bool FUN_1411ea9a0(longlong param_1)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0x98) == '\x02') || (*(char *)(param_1 + 800) != '\0')) ||
     (lVar1 = 0x230, *(char *)(param_1 + 0x2a8) != '\0')) {
    lVar1 = 0xa8;
  }
  return (byte)(*(char *)(lVar1 + param_1) - 1U) < 2;
}



// FUNCTION 1411ea9e0 FUN_1411ea9e0 body=189 status=ok
// SIG undefined FUN_1411ea9e0(void)

void FUN_1411ea9e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = *(int *)(param_1 + 0x60);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x18);
    do {
      FUN_140591060(plVar7 + 5);
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
      plVar7 = plVar7 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x58,0);
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x38,param_1 + 0x58);
  return;
}



// FUNCTION 1411eaaa0 FUN_1411eaaa0 body=815 status=ok
// SIG undefined FUN_1411eaaa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411eaaa0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_188 [32];
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_158 [8];
  longlong local_150 [8];
  longlong *local_110;
  undefined8 local_108;
  longlong local_100 [24];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  FUN_1411d0860(local_168,*(undefined8 *)(param_1 + 0x68));
  plVar14 = *(longlong **)(param_1 + 0x70);
  plVar9 = plVar14 + *(int *)(param_1 + 0x78);
  local_160 = plVar9;
  if (plVar14 != plVar9) {
    do {
      lVar2 = *plVar14;
      if (lVar2 != 0) {
        plVar9 = (longlong *)(lVar2 + 0x3b0);
        plVar6 = (longlong *)FMemory::Realloc(0,0x20);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_GetPoolName_143f4c9a8;
          plVar6[1] = (longlong)FUN_1411d85e0;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar6[3] = lVar7;
          *plVar6 = (longlong)&PTR_GetPoolName_143f4c9f0;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
          (**(code **)(*plVar6 + 0x20))(plVar6,local_158);
          iVar5 = *(int *)(lVar2 + 0x3b8);
          *(int *)(lVar2 + 0x3b8) = iVar5 + 1;
          if (*(int *)(lVar2 + 0x3bc) < iVar5 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar5);
          }
          lVar7 = *plVar9;
          *(longlong **)(lVar7 + (longlong)iVar5 * 0x10) = plVar6;
          *(undefined4 *)(lVar7 + 8 + (longlong)iVar5 * 0x10) = 2;
        }
        plVar9 = (longlong *)0x0;
        local_40 = (longlong *)0x0;
        local_38 = 0;
        FUN_140749cd0(lVar2,local_100,0);
        local_110 = (longlong *)0x0;
        plVar6 = local_100;
        if (local_40 != (longlong *)0x0) {
          plVar6 = local_40;
        }
        local_108 = 0;
        plVar13 = plVar6 + (int)local_38;
        for (; plVar6 != plVar13; plVar6 = plVar6 + 1) {
          plVar12 = *(longlong **)(*plVar6 + 0x1a0);
          plVar1 = plVar12 + *(int *)(*plVar6 + 0x1a8);
          for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
            lVar2 = *plVar12;
            if (lVar2 != 0) {
              lVar7 = AGFreezeCharacterCue::GetPrivateStaticClass();
              uVar4 = local_108;
              if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              plVar9 = local_110;
              if (bVar3) {
                plVar10 = local_150;
                if (local_110 != (longlong *)0x0) {
                  plVar10 = local_110;
                }
                for (plVar8 = plVar10; plVar8 != plVar10 + (int)local_108; plVar8 = plVar8 + 1) {
                  if (*plVar8 == lVar2) {
                    if ((int)((longlong)plVar8 - (longlong)plVar10 >> 3) != -1) goto LAB_1411eace1;
                    break;
                  }
                }
                lVar7 = (longlong)(int)local_108;
                iVar5 = (int)local_108 + 1;
                local_108 = CONCAT44(local_108._4_4_,iVar5);
                if (local_108._4_4_ < iVar5) {
                  TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                            (local_150,uVar4 & 0xffffffff);
                }
                plVar9 = local_150;
                if (local_110 != (longlong *)0x0) {
                  plVar9 = local_110;
                }
                plVar9[lVar7] = lVar2;
                plVar9 = local_110;
              }
            }
LAB_1411eace1:
          }
        }
        plVar13 = (longlong *)0x0;
        plVar6 = local_150;
        if (plVar9 != (longlong *)0x0) {
          plVar6 = plVar13;
        }
        puVar11 = (undefined8 *)((ulonglong)plVar6 | (ulonglong)plVar9);
        plVar6 = (longlong *)((longlong)(int)local_108 & 0x1fffffffffffffff);
        if (puVar11 + (int)local_108 < puVar11) {
          plVar6 = (longlong *)0x0;
        }
        if (plVar6 != (longlong *)0x0) {
          do {
            (**(code **)(*(longlong *)*puVar11 + 0x288))();
            plVar13 = (longlong *)((longlong)plVar13 + 1);
            puVar11 = puVar11 + 1;
            plVar9 = local_110;
          } while (plVar13 != plVar6);
        }
        if (plVar9 != (longlong *)0x0) {
          FMemory::Free(plVar9);
        }
        plVar9 = local_160;
        if (local_40 != (longlong *)0x0) {
          FMemory::Free();
          plVar9 = local_160;
        }
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar9);
  }
  return;
}



// FUNCTION 1411eadd0 FUN_1411eadd0 body=304 status=ok
// SIG undefined FUN_1411eadd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411eadd0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 *puVar12;
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  pfVar10 = (float *)FRotator::Quaternion(param_1 + 0x330,local_28);
  pfVar11 = (float *)FRotator::Quaternion(param_1 + 0x33c,local_18);
  fVar1 = *pfVar10;
  fVar2 = pfVar10[1];
  fVar3 = pfVar10[2];
  fVar4 = pfVar10[3];
  fVar5 = *pfVar11;
  fVar6 = pfVar11[1];
  fVar7 = pfVar11[2];
  fVar8 = pfVar11[3];
  local_38 = fVar5 * fVar4 * _DAT_146876740 + fVar8 * fVar1 + fVar6 * fVar3 * _DAT_146876730 +
             fVar7 * fVar2 * _DAT_146876720;
  fStack_34 = fVar5 * fVar3 * fRam0000000146876744 + fVar8 * fVar2 +
              fVar6 * fVar4 * fRam0000000146876734 + fVar7 * fVar1 * fRam0000000146876724;
  fStack_30 = fVar5 * fVar2 * fRam0000000146876748 + fVar8 * fVar3 +
              fVar6 * fVar1 * fRam0000000146876738 + fVar7 * fVar4 * fRam0000000146876728;
  fStack_2c = fVar5 * fVar1 * fRam000000014687674c + fVar8 * fVar4 +
              fVar6 * fVar2 * fRam000000014687673c + fVar7 * fVar3 * fRam000000014687672c;
  puVar12 = (undefined8 *)FQuat::Rotator(&local_38,local_48);
  *(undefined8 *)(param_1 + 0x330) = *puVar12;
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(puVar12 + 1);
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x33c) = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x344) = DAT_1468b5da8;
  uVar9 = _DAT_1464aa818;
  *(undefined8 *)(param_1 + 0x360) = _DAT_1464aa810;
  *(undefined8 *)(param_1 + 0x368) = uVar9;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x348) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x34c) = DAT_1468b5d88._4_4_;
  return;
}



// FUNCTION 1411eaf00 FUN_1411eaf00 body=80 status=ok
// SIG undefined FUN_1411eaf00(void)

void FUN_1411eaf00(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1411fdf60();
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_1411fdf60(*(longlong *)(param_1 + 0x78),param_2);
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_1411fdf60(*(longlong *)(param_1 + 0x68),param_2);
    }
  }
  return;
}



// FUNCTION 1411eaf50 FUN_1411eaf50 body=94 status=ok
// SIG undefined FUN_1411eaf50(void)

void FUN_1411eaf50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0xec) == '\0') {
    *(undefined1 *)(param_1 + 0xec) = 1;
    DAT_1462054a0 = 0;
    lVar1 = FUN_1405c6c00();
    if ((DAT_1468536c6 != '\0') || (lVar2 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
      lVar2 = 0;
    }
    if (((lVar1 != 0) && (lVar2 != 0)) && (*(longlong *)(lVar1 + 0x40) != 0)) {
      FUN_1405a1960();
      return;
    }
  }
  return;
}



// FUNCTION 1411eafb0 FUN_1411eafb0 body=59 status=ok
// SIG undefined FUN_1411eafb0(void)

void FUN_1411eafb0(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  undefined8 local_10;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  local_18 = param_1;
  local_10 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x2b8,&local_18);
  return;
}



// FUNCTION 1411eaff0 FUN_1411eaff0 body=214 status=ok
// SIG undefined FUN_1411eaff0(void)

void FUN_1411eaff0(undefined **param_1,undefined *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined **local_18;
  undefined *local_10;
  
  plVar3 = (longlong *)param_1[0x60];
  if (plVar3 != (longlong *)0x0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1411eb049;
  }
  plVar3 = (longlong *)0x0;
LAB_1411eb049:
  if ((param_2 == param_1[0x66]) && (plVar3 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x288))(param_1,2);
    if (param_1[0x6e] != (undefined *)0x0) {
      FUN_142712050(plVar3);
    }
    local_10 = (undefined *)CONCAT71(local_10._1_7_,1);
    local_18 = &PTR_FUN_1445c4dd0;
    (**(code **)(*plVar3 + 0xcc0))(plVar3,&local_18);
  }
  local_18 = param_1;
  local_10 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x62,&local_18);
  return;
}



// FUNCTION 1411eb0d0 FUN_1411eb0d0 body=199 status=ok
// SIG undefined FUN_1411eb0d0(void)

void FUN_1411eb0d0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x98) == '\x01') {
    *(undefined1 *)(param_1 + 0x98) = 0;
    lVar1 = *(longlong *)(param_1 + 0x68);
    if (lVar1 != 0) {
      lVar3 = FUN_141404840();
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
        FUN_140e55e40(lVar1);
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x98) == '\x02') {
    if (*(char *)(param_1 + 800) != '\0') {
      if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_142227350(*(longlong *)(param_1 + 0x68),0,1);
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined1 *)(param_1 + 0x98) = 0;
      return;
    }
    FUN_1411d6330(param_1,*(undefined1 *)(param_1 + 0x99));
    return;
  }
  return;
}



// FUNCTION 1411eb1a0 thunk_FUN_1411f6450 body=5 status=ok
// SIG undefined thunk_FUN_1411f6450(void)

void thunk_FUN_1411f6450(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar4 = FUN_142dfdfe0();
    lVar8 = param_3;
    while (lVar8 != lVar4) {
      lVar8 = *(longlong *)(lVar8 + 0x30);
      if (lVar8 == 0) {
        return;
      }
    }
    lVar4 = FUN_142dfdfe0();
    lVar8 = param_3;
    do {
      if (lVar8 == lVar4) goto LAB_1411f64b2;
      lVar8 = *(longlong *)(lVar8 + 0x30);
    } while (lVar8 != 0);
    param_3 = 0;
LAB_1411f64b2:
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x70);
    plVar6 = (longlong *)FUN_142dcdc90(uVar5,param_3);
    if (plVar6 != (longlong *)0x0) {
      lVar8 = *(longlong *)(param_1 + 0x78);
      lVar4 = (longlong)*(int *)(param_1 + 0x80) * 0xc0 + lVar8;
      if (lVar8 != lVar4) {
        while ((*plVar6 != *(longlong *)(lVar8 + 0x10) || (plVar6[1] != *(longlong *)(lVar8 + 0x18))
               )) {
          lVar8 = lVar8 + 0xc0;
          if (lVar8 == lVar4) {
            return;
          }
        }
        FUN_1411e8c20(lVar8,param_1);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        bVar1 = false;
        iVar7 = *(int *)(param_1 + 0x5c);
        iVar3 = *(int *)(param_1 + 0x50) + -1;
        lVar4 = (longlong)iVar3;
        if (-1 < iVar3) {
          lVar9 = lVar4 << 4;
          bVar1 = false;
          do {
            if (((*(int *)(lVar9 + 8 + *(longlong *)(param_1 + 0x48)) == 0) ||
                (plVar6 = *(longlong **)(lVar9 + *(longlong *)(param_1 + 0x48)),
                plVar6 == (longlong *)0x0)) ||
               (cVar2 = (**(code **)(*plVar6 + 0x40))(plVar6,lVar8), cVar2 == '\0')) {
              bVar1 = true;
            }
            lVar9 = lVar9 + -0x10;
            lVar4 = lVar4 + -1;
          } while (-1 < lVar4);
          iVar7 = *(int *)(param_1 + 0x5c);
        }
        *(int *)(param_1 + 0x5c) = iVar7 + -1;
        if (bVar1) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x48,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411eb1b0 FUN_1411eb1b0 body=66 status=ok
// SIG undefined FUN_1411eb1b0(void)

void FUN_1411eb1b0(longlong *param_1)

{
  int iVar1;
  
  if (*(char *)((longlong)param_1 + 0x272) != '\0') {
    *(undefined1 *)(param_1 + 0x4e) = 0;
    iVar1 = FUN_14233f450();
    if (iVar1 == 3) {
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    FUN_1411f0560(param_1);
    return;
  }
  return;
}



// FUNCTION 1411eb200 FUN_1411eb200 body=41 status=ok
// SIG undefined FUN_1411eb200(void)

void FUN_1411eb200(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x2e0);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x308))) {
      FUN_1411eb230(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x300) + (longlong)iVar1 * 8));
      return;
    }
  }
  return;
}



// FUNCTION 1411eb230 FUN_1411eb230 body=1638 status=ok
// SIG undefined FUN_1411eb230(void)

void FUN_1411eb230(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *local_130;
  longlong *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  longlong *plStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  longlong *plStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong *plStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong *plStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong *plStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **local_58 [2];
  longlong *local_48;
  longlong local_40;
  
  plVar13 = (longlong *)0x0;
  cVar10 = FUN_142ef5430();
  if (cVar10 != '\0') {
    FUN_142ef6530(param_1);
  }
  plVar4 = (longlong *)param_1[99];
  lVar5 = param_1[0x62];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar5 == 0) goto LAB_1411eb841;
  lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar11 = *(longlong *)(lVar11 + 400);
  if (lVar11 == 0) goto LAB_1411eb841;
  lVar12 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
      != lVar12 + 0x88)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (!bVar7) goto LAB_1411eb841;
  lVar12 = (**(code **)(*param_1 + 0x2a8))(param_1);
  if (lVar12 == 0) {
    bVar9 = false;
    bVar8 = false;
    bVar7 = true;
    local_130 = (longlong *)0x0;
    plVar14 = plVar13;
  }
  else {
    bVar9 = true;
    bVar8 = true;
    bVar7 = false;
    lVar12 = FUN_142547b50(lVar12,local_58);
    plVar13 = *(longlong **)(lVar12 + 0x10);
    plVar14 = *(longlong **)(lVar12 + 8);
    local_120 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  if ((bVar7) && (local_130 != (longlong *)0x0)) {
    LOCK();
    plVar6 = local_130 + 1;
    lVar12 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)local_130 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  if ((bVar8) && (local_120 != (longlong *)0x0)) {
    LOCK();
    plVar6 = local_120 + 1;
    lVar12 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  if (bVar9) {
    local_58[0] = &PTR_FUN_143f740c8;
    if (local_40 != 0) {
      FMemory::Free();
    }
    local_58[0] = &PTR_FUN_143f73d18;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_48 + 1;
      lVar12 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
  }
  uStack_154 = (undefined4)((ulonglong)plVar14 >> 0x20);
  uStack_14c = (undefined4)((ulonglong)plVar13 >> 0x20);
  local_158 = SUB84(plVar14,0);
  uStack_150 = SUB84(plVar13,0);
  if (param_2 == DAT_146876950) {
    if (plVar14 != (longlong *)0x0) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_118 = local_158;
      uStack_114 = uStack_154;
      uStack_110 = uStack_150;
      uStack_10c = uStack_14c;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_108 = lVar5;
      plStack_100 = plVar4;
      FUN_140bf76e0(lVar11,&local_118,&local_108);
      plVar6 = (longlong *)CONCAT44(uStack_10c,uStack_110);
      plVar14 = plStack_100;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar14 = plStack_100;
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
            plVar14 = plStack_100;
          }
        }
      }
      goto LAB_1411eb7c7;
    }
  }
  else {
    if (param_2 == DAT_146876958) {
      if (plVar14 == (longlong *)0x0) goto LAB_1411eb7fa;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_f8 = local_158;
      uStack_f4 = uStack_154;
      uStack_f0 = uStack_150;
      uStack_ec = uStack_14c;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_e8 = lVar5;
      plStack_e0 = plVar4;
      FUN_140bcd520(lVar11,&local_f8,&local_e8);
      plVar6 = (longlong *)CONCAT44(uStack_ec,uStack_f0);
      plVar14 = plStack_e0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar14 = plStack_e0;
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
            plVar14 = plStack_e0;
          }
        }
      }
    }
    else if (param_2 == DAT_146876960) {
      if (plVar14 == (longlong *)0x0) goto LAB_1411eb7fa;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_d8 = local_158;
      uStack_d4 = uStack_154;
      uStack_d0 = uStack_150;
      uStack_cc = uStack_14c;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_c8 = lVar5;
      plStack_c0 = plVar4;
      FUN_140bf3290(lVar11,&local_d8,&local_c8);
      plVar6 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
      plVar14 = plStack_c0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar14 = plStack_c0;
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
            plVar14 = plStack_c0;
          }
        }
      }
    }
    else if (param_2 == DAT_146876978) {
      if (plVar14 == (longlong *)0x0) goto LAB_1411eb7fa;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_b8 = local_158;
      uStack_b4 = uStack_154;
      uStack_b0 = uStack_150;
      uStack_ac = uStack_14c;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_a8 = lVar5;
      plStack_a0 = plVar4;
      FUN_140bc9a00(lVar11,&local_b8,&local_a8);
      plVar6 = (longlong *)CONCAT44(uStack_ac,uStack_b0);
      plVar14 = plStack_a0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar14 = plStack_a0;
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
            plVar14 = plStack_a0;
          }
        }
      }
    }
    else if (param_2 == DAT_146876980) {
      if (plVar14 == (longlong *)0x0) goto LAB_1411eb7fa;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_98 = local_158;
      uStack_94 = uStack_154;
      uStack_90 = uStack_150;
      uStack_8c = uStack_14c;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_88 = lVar5;
      plStack_80 = plVar4;
      FUN_140bcaeb0(lVar11,&local_98,&local_88);
      plVar6 = (longlong *)CONCAT44(uStack_8c,uStack_90);
      plVar14 = plStack_80;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar14 = plStack_80;
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
            plVar14 = plStack_80;
          }
        }
      }
    }
    else {
      local_148 = (undefined4)lVar5;
      uStack_144 = (undefined4)((ulonglong)lVar5 >> 0x20);
      uStack_140 = SUB84(plVar4,0);
      uStack_13c = (undefined4)((ulonglong)plVar4 >> 0x20);
      if (param_2 == DAT_146876970) {
        local_78 = local_148;
        uStack_74 = uStack_144;
        uStack_70 = uStack_140;
        uStack_6c = uStack_13c;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        FUN_140bc97d0(lVar11,&local_78);
        plVar14 = (longlong *)CONCAT44(uStack_6c,uStack_70);
      }
      else {
        if (param_2 != DAT_146876968) goto LAB_1411eb7fa;
        local_68 = local_148;
        uStack_64 = uStack_144;
        uStack_60 = uStack_140;
        uStack_5c = uStack_13c;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        FUN_140bcbd60(lVar11,&local_68);
        plVar14 = (longlong *)CONCAT44(uStack_5c,uStack_60);
      }
    }
LAB_1411eb7c7:
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar14 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
  }
LAB_1411eb7fa:
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar13 + 1;
    lVar5 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
LAB_1411eb841:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar4 + 1;
    lVar5 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
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
  return;
}



// FUNCTION 1411eb8a0 FUN_1411eb8a0 body=140 status=ok
// SIG undefined FUN_1411eb8a0(void)

void FUN_1411eb8a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x180) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0x170);
    plVar4 = plVar1;
    if (plVar1 != plVar1 + *(int *)(param_1 + 0x178)) {
      while (param_2 != *plVar4) {
        plVar4 = plVar4 + 1;
        if (plVar4 == plVar1 + *(int *)(param_1 + 0x178)) {
          return;
        }
      }
      uVar5 = (longlong)plVar4 - (longlong)plVar1 >> 3;
      iVar3 = (int)uVar5;
      if (iVar3 != -1) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x180) + 900) = 0;
        lVar2 = *(longlong *)(param_1 + 0x180);
        lVar6 = 0x2f0;
        if (iVar3 <= *(int *)(lVar2 + 0x380)) {
          lVar6 = 0x310;
        }
        FUN_1411f27e0(lVar2,lVar6 + lVar2,*(int *)(lVar2 + 0x380),uVar5 & 0xffffffff,0);
      }
    }
  }
  return;
}



// FUNCTION 1411eb930 FUN_1411eb930 body=2725 status=ok
// SIG undefined FUN_1411eb930(void)

void FUN_1411eb930(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  void *_Src;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  uint *puVar20;
  longlong *plVar21;
  longlong *plVar22;
  bool bVar23;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_res18;
  undefined8 local_res20;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_190;
  int local_188;
  longlong *local_180;
  undefined8 uStack_178;
  uint *puStack_170;
  undefined8 uStack_168;
  longlong *plStack_160;
  undefined1 local_158;
  undefined8 local_150;
  uint uStack_148;
  uint uStack_144;
  uint *local_140;
  undefined8 uStack_138;
  longlong *local_130;
  uint local_118;
  uint uStack_114;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [16];
  longlong *local_a0;
  longlong *local_90;
  longlong *local_80;
  longlong *local_70;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x168) == 0) {
    return;
  }
  FWeakObjectPtr::operator=(&local_res10,*(undefined8 *)(param_1 + 0x38));
  plVar16 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar17 = *(longlong *)(param_1 + 0x48);
    lVar12 = *(longlong *)(lVar17 + 0x460);
    if (lVar12 != 0) {
      FUN_1417846f0(lVar17,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_res18 = 0;
      uVar11 = FUN_1429ff160();
      uVar11 = FUN_1417985e0(uVar11,lVar17,0,0,0,0,0,0,0);
      *(undefined8 *)(param_1 + 0x60) = uVar11;
      local_res20 = 0;
      FUN_142399e30(uVar11,lVar12,0);
      FUN_14234b150(*(undefined8 *)(param_1 + 0x60));
      local_188 = *(int *)(lVar12 + 0x1a8);
      lVar17 = (longlong)local_188;
      _Src = *(void **)(lVar12 + 0x1a0);
      local_190 = (longlong *)0x0;
      plVar21 = plVar16;
      if (local_188 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (&local_190,local_188,0);
        plVar21 = local_190;
        _guard_xfg_dispatch_icall_nop(local_190,_Src,lVar17 << 3);
      }
      plVar13 = (longlong *)
                ((ulonglong)((longlong)(plVar21 + local_188) + (7 - (longlong)plVar21)) >> 3);
      if (plVar21 + local_188 < plVar21) {
        plVar13 = plVar16;
      }
      plVar18 = plVar21;
      plVar22 = plVar16;
      if (plVar13 != (longlong *)0x0) {
        do {
          plVar4 = (longlong *)*plVar18;
          if ((plVar4 != (longlong *)0x0) && (plVar4 != *(longlong **)(param_1 + 0x60))) {
            (**(code **)(*plVar4 + 0x418))(plVar4,&DAT_14653218c);
            FUN_142382f60(plVar4,*(undefined8 *)(param_1 + 0x60),&DAT_146af29ec,0);
          }
          plVar18 = plVar18 + 1;
          plVar22 = (longlong *)((longlong)plVar22 + 1);
        } while (plVar22 != plVar13);
      }
      if (plVar21 != (longlong *)0x0) {
        FMemory::Free(plVar21);
      }
    }
  }
  FUN_1411d3870(param_1,*(undefined8 *)(param_1 + 0x68));
  if (((*(char *)(param_1 + 0x98) == '\x02') || (*(char *)(param_1 + 800) != '\0')) ||
     (lVar17 = 0x230, *(char *)(param_1 + 0x2a8) != '\0')) {
    lVar17 = 0xa8;
  }
  if (((byte)(*(char *)(param_1 + lVar17) - 1U) < 2) &&
     (lVar17 = *(longlong *)(param_1 + 0x68), lVar17 != 0)) {
    lVar12 = FUN_141404840();
    if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    if (bVar23) {
      puStack_170 = *(uint **)(param_1 + 0x40);
      uVar5 = uStack_178 >> 0x18;
      local_158 = 0;
      uStack_168 = 0;
      plStack_160 = (longlong *)0x0;
      local_180 = plVar16;
      if (puStack_170 != (uint *)0x0) {
        local_180 = *(longlong **)(puStack_170 + 0x296);
      }
      plVar21 = (longlong *)&DAT_00000004;
      if (*(char *)(param_1 + 0x230) != '\x02') {
        plVar21 = plVar16;
      }
      uStack_178._0_3_ = CONCAT12(1,*(undefined2 *)(*(longlong *)(param_1 + 0x48) + 0x475));
      uStack_178 = CONCAT53((int5)uVar5,(undefined3)uStack_178) & 0xffffffff00ffffff;
      FUN_140e529a0(lVar17,&local_180,plVar21);
      uVar11 = FUN_1411e5ff0(param_1);
      uVar6 = local_res10;
      lVar12 = *(longlong *)(lVar17 + 0x22a8);
      *(undefined8 *)(lVar17 + 0x2388) = uVar11;
      if (lVar12 != 0) {
        plVar21 = (longlong *)(lVar12 + 0x178);
        local_e8 = local_res10;
        local_res8[0] = local_res14;
        local_e4 = local_res14;
        plVar13 = (longlong *)FMemory::Realloc(0,0x30);
        local_a0 = plVar13;
        if (plVar13 != (longlong *)0x0) {
          *plVar13 = (longlong)&PTR_GetPoolName_1446fece8;
          plVar13[1] = param_1;
          *(undefined4 *)(plVar13 + 2) = uVar6;
          *(undefined4 *)((longlong)plVar13 + 0x14) = local_res8[0];
          lVar14 = FDelegateHandle::GenerateNewID();
          plVar13[4] = lVar14;
          *plVar13 = (longlong)&PTR_GetPoolName_1446fed30;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar21,1);
          (**(code **)(*plVar13 + 0x20))(plVar13,local_108);
          iVar9 = *(int *)(lVar12 + 0x180);
          *(int *)(lVar12 + 0x180) = iVar9 + 1;
          if (*(int *)(lVar12 + 0x184) < iVar9 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar21,iVar9);
          }
          lVar14 = *plVar21;
          *(longlong **)(lVar14 + (longlong)iVar9 * 0x10) = plVar13;
          *(undefined4 *)(lVar14 + 8 + (longlong)iVar9 * 0x10) = 3;
        }
        uVar6 = local_res10;
        plVar21 = (longlong *)(lVar12 + 400);
        local_d8 = local_res10;
        local_res8[0] = local_res14;
        local_d4 = local_res14;
        plVar13 = (longlong *)FMemory::Realloc(0,0x30);
        local_90 = plVar13;
        if (plVar13 != (longlong *)0x0) {
          *plVar13 = (longlong)&PTR_GetPoolName_1446fed78;
          plVar13[1] = param_1;
          *(undefined4 *)(plVar13 + 2) = uVar6;
          *(undefined4 *)((longlong)plVar13 + 0x14) = local_res8[0];
          lVar14 = FDelegateHandle::GenerateNewID();
          plVar13[4] = lVar14;
          *plVar13 = (longlong)&PTR_GetPoolName_1446fedc0;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar21,1);
          (**(code **)(*plVar13 + 0x20))(plVar13,local_res8);
          iVar9 = *(int *)(lVar12 + 0x198);
          *(int *)(lVar12 + 0x198) = iVar9 + 1;
          if (*(int *)(lVar12 + 0x19c) < iVar9 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar21,iVar9);
          }
          lVar14 = *plVar21;
          *(longlong **)(lVar14 + (longlong)iVar9 * 0x10) = plVar13;
          *(undefined4 *)(lVar14 + 8 + (longlong)iVar9 * 0x10) = 3;
        }
        FUN_140e91b70(lVar12,param_1,*(undefined8 *)(param_1 + 0x38));
      }
      uVar7 = local_res14;
      uVar6 = local_res10;
      lVar17 = *(longlong *)(lVar17 + 0x2298);
      if (lVar17 != 0) {
        plVar21 = (longlong *)(lVar17 + 0x2d8);
        local_c8 = local_res10;
        local_c4 = local_res14;
        plVar13 = (longlong *)FMemory::Realloc(0,0x30);
        local_80 = plVar13;
        if (plVar13 != (longlong *)0x0) {
          *plVar13 = (longlong)&PTR_GetPoolName_1446fee08;
          plVar13[1] = param_1;
          *(undefined4 *)(plVar13 + 2) = uVar6;
          *(undefined4 *)((longlong)plVar13 + 0x14) = uVar7;
          lVar12 = FDelegateHandle::GenerateNewID();
          plVar13[4] = lVar12;
          *plVar13 = (longlong)&PTR_GetPoolName_1446fee50;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar21,1);
          (**(code **)(*plVar13 + 0x20))(plVar13,local_100);
          iVar9 = *(int *)(lVar17 + 0x2e0);
          *(int *)(lVar17 + 0x2e0) = iVar9 + 1;
          if (*(int *)(lVar17 + 0x2e4) < iVar9 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar21,iVar9);
          }
          lVar12 = *plVar21;
          *(longlong **)(lVar12 + (longlong)iVar9 * 0x10) = plVar13;
          *(undefined4 *)(lVar12 + 8 + (longlong)iVar9 * 0x10) = 3;
        }
        plVar21 = (longlong *)(lVar17 + 0x2f0);
        local_b8 = local_res10;
        local_b4 = local_res14;
        plVar13 = (longlong *)FMemory::Realloc(0,0x30);
        local_70 = plVar13;
        if (plVar13 != (longlong *)0x0) {
          *plVar13 = (longlong)&PTR_GetPoolName_1446fee98;
          plVar13[1] = param_1;
          *(undefined4 *)(plVar13 + 2) = local_res10;
          *(undefined4 *)((longlong)plVar13 + 0x14) = local_res14;
          lVar12 = FDelegateHandle::GenerateNewID();
          plVar13[4] = lVar12;
          *plVar13 = (longlong)&PTR_GetPoolName_1446feee0;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar21,1);
          (**(code **)(*plVar13 + 0x20))(plVar13,local_f8);
          iVar9 = *(int *)(lVar17 + 0x2f8);
          *(int *)(lVar17 + 0x2f8) = iVar9 + 1;
          if (*(int *)(lVar17 + 0x2fc) < iVar9 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar21,iVar9);
          }
          lVar17 = *plVar21;
          *(longlong **)(lVar17 + (longlong)iVar9 * 0x10) = plVar13;
          *(undefined4 *)(lVar17 + 8 + (longlong)iVar9 * 0x10) = 3;
        }
      }
      plVar21 = plStack_160;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        plVar13 = plStack_160 + 1;
        lVar17 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*plStack_160)(plStack_160);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar21 + 8))(plVar21,1);
          }
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x278) != '\0') {
    lVar17 = *(longlong *)(param_1 + 0x68);
    plVar21 = (longlong *)(lVar17 + 0x2b0);
    local_1b8 = 0;
    uVar3 = *(uint *)(lVar17 + 0x2d8);
    puVar2 = (uint *)(lVar17 + 0x2c0);
    uStack_1b4 = 1;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    if (uVar3 != 0) {
      puVar20 = *(uint **)(lVar17 + 0x2d0);
      if (*(uint **)(lVar17 + 0x2d0) == (uint *)0x0) {
        puVar20 = puVar2;
      }
      uVar19 = *puVar20;
      plVar13 = plVar16;
      plVar18 = plVar16;
      while (uVar19 == 0) {
        iVar9 = (int)plVar13;
        uStack_1a0 = (int)plVar18 + 0x20;
        plVar18 = (longlong *)(ulonglong)uStack_1a0;
        local_1b8 = iVar9 + 1;
        plVar13 = (longlong *)(ulonglong)local_1b8;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_1411ebff3;
        uVar19 = puVar20[(longlong)iVar9 + 1];
      }
      uStack_1b4 = uVar19 - 1 & uVar19 ^ uVar19;
      iVar9 = 0x1f;
      if (uStack_1b4 != 0) {
        for (; uStack_1b4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_1b4 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_1a4 = (uStack_1a0 - iVar9) + 0x1f;
      if ((int)uVar3 < (int)uStack_1a4) {
LAB_1411ebff3:
        uStack_1a4 = uVar3;
      }
    }
    uStack_114 = *(uint *)(lVar17 + 0x2d8);
    uStack_178 = CONCAT44(uStack_1b4,local_1b8);
    uStack_168 = CONCAT44(uStack_1a4,0xffffffff);
    plStack_160 = (longlong *)CONCAT44(uStack_19c,uStack_1a0);
    local_118 = -1 << ((byte)uStack_114 & 0x1f);
    uVar19 = uStack_114 & 0xffffffe0;
    uStack_148 = local_1b8;
    uStack_144 = uStack_1b4;
    local_180 = plVar21;
    puStack_170 = puVar2;
    local_140 = puVar2;
    uStack_138 = uStack_168;
    local_130 = plStack_160;
    local_150 = plVar21;
    uVar15 = uStack_114;
    if (uStack_114 != uVar3) {
      puVar20 = *(uint **)(lVar17 + 0x2d0);
      if (*(uint **)(lVar17 + 0x2d0) == (uint *)0x0) {
        puVar20 = puVar2;
      }
      uVar15 = puVar20[(int)uStack_114 >> 5] & local_118;
      iVar9 = (int)uStack_114 >> 5;
      while (uVar15 == 0) {
        uVar19 = uVar19 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_1411ec0c9;
        uVar15 = puVar20[(longlong)iVar9 + 1];
        local_118 = 0xffffffff;
        iVar9 = iVar9 + 1;
      }
      uVar15 = uVar15 - 1 & uVar15 ^ uVar15;
      iVar9 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar15 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_114 = (uVar19 - iVar9) + 0x1f;
      uVar15 = uStack_114;
      if ((int)uVar3 < (int)uStack_114) {
LAB_1411ec0c9:
        uStack_114 = uVar3;
        uVar15 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_138._4_4_ == uVar15) && (local_140 == puVar2)) {
        bVar23 = true;
      }
      else {
        bVar23 = false;
      }
      if ((bVar23) && (local_150 == plVar21)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if (!bVar23) break;
      lVar17 = *(longlong *)(*local_150 + (longlong)(int)uStack_138._4_4_ * 0x10);
      if (lVar17 != 0) {
        lVar12 = FUN_142a07000();
        if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if (bVar23) {
          *(byte *)(lVar17 + 0xb1c) = *(byte *)(lVar17 + 0xb1c) | 8;
        }
      }
      uStack_138 = CONCAT44(uStack_138._4_4_,(uint)uStack_138 & ~uStack_144);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_148);
    }
  }
  FUN_1411d3760(param_1);
  uVar11 = FUN_1411e1990(param_1,local_b0);
  FUN_1411faae0(param_1,uVar11);
  lVar17 = FUN_1411e1240(param_1);
  if (lVar17 != 0) {
    if (*(char *)(lVar17 + 0x408) == '\0') {
      if (*(char *)(param_1 + 0x37c) != '\0') {
        *(undefined1 *)(param_1 + 0x37c) = 0;
        bVar23 = *(char *)(param_1 + 0x37d) != '\0';
        if (bVar23) {
          *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(param_1 + 0x380);
          *(undefined4 *)(param_1 + 0x378) = 0;
        }
        *(bool *)(param_1 + 0x321) = bVar23;
        *(undefined1 *)(param_1 + 0x37d) = 0;
        *(undefined4 *)(param_1 + 0x380) = 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0x37c) == '\0') {
        *(undefined1 *)(param_1 + 0x37d) = *(undefined1 *)(param_1 + 0x321);
        *(undefined1 *)(param_1 + 0x37c) = 1;
        *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_1 + 0x374);
      }
      if (*(float *)(lVar17 + 0x40c) <= 0.0) {
        *(undefined1 *)(param_1 + 0x321) = 0;
      }
      else {
        *(float *)(param_1 + 0x374) = *(float *)(lVar17 + 0x40c);
        *(undefined4 *)(param_1 + 0x378) = 0;
        *(undefined1 *)(param_1 + 0x321) = 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x230) == '\x01') {
    FUN_1411f7810(param_1,1);
  }
  else if (*(char *)(param_1 + 0x230) == '\x02') {
    FUN_1411d7580(param_1);
    lVar17 = FUN_140fe3d00(param_1,0);
    if (lVar17 != 0) {
      uVar11 = FUN_1411e5ff0(param_1);
      FUN_140e52820(lVar17,uVar11);
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  if ((*(int *)(param_1 + 600) == 0) || (*(longlong **)(param_1 + 0x250) == (longlong *)0x0)) {
LAB_1411ec2b6:
    bVar23 = false;
  }
  else {
    cVar8 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x18))();
    if (cVar8 == '\0') goto LAB_1411ec2b6;
    bVar23 = true;
  }
  if (bVar23) {
    if (*(int *)(param_1 + 600) != 0) {
      plVar16 = *(longlong **)(param_1 + 0x250);
    }
    (**(code **)(*plVar16 + 0x40))(plVar16,uVar11);
  }
  if ((*(int *)(param_1 + 600) != 0) && (*(longlong **)(param_1 + 0x250) != (longlong *)0x0)) {
    cVar8 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x18))();
    if (cVar8 != '\0') {
      bVar23 = true;
      goto LAB_1411ec2fc;
    }
  }
  bVar23 = false;
LAB_1411ec2fc:
  if ((bVar23) && (*(longlong *)(param_1 + 0x48) != 0)) {
    FUN_1411d31b0(*(longlong *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x68),1);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  *(int *)(param_1 + 0x31c) = *(int *)(param_1 + 0x31c) + 1;
  bVar23 = false;
  iVar9 = *(int *)(param_1 + 0x31c);
  iVar10 = *(int *)(param_1 + 0x310) + -1;
  lVar17 = (longlong)iVar10;
  if (-1 < iVar10) {
    lVar12 = lVar17 << 4;
    bVar23 = false;
    do {
      lVar14 = *(longlong *)(param_1 + 0x308);
      if ((*(int *)(lVar12 + 8 + lVar14) == 0) ||
         (plVar16 = *(longlong **)(lVar12 + lVar14), plVar16 == (longlong *)0x0)) {
LAB_1411ec360:
        bVar23 = true;
      }
      else {
        cVar8 = (**(code **)(*plVar16 + 0x40))(plVar16,uVar11);
        if (cVar8 == '\0') goto LAB_1411ec360;
      }
      lVar12 = lVar12 + -0x10;
      lVar17 = lVar17 + -1;
    } while (-1 < lVar17);
    iVar9 = *(int *)(param_1 + 0x31c);
  }
  *(int *)(param_1 + 0x31c) = iVar9 + -1;
  if (bVar23) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x308),0);
  }
  FUN_1411ff720(param_1,0);
  FUN_1411e02b0(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 1411ec3e0 FUN_1411ec3e0 body=59 status=ok
// SIG undefined FUN_1411ec3e0(void)

void FUN_1411ec3e0(float param_1)

{
  longlong in_RCX;
  
  if (*(char *)(in_RCX + 0x180) == '\x01') {
    param_1 = *(float *)(in_RCX + 0x178);
    if (*(float *)(in_RCX + 0x184) <= param_1 && param_1 != *(float *)(in_RCX + 0x184)) {
      return;
    }
  }
  else if (*(char *)(in_RCX + 0x180) != '\0') {
    return;
  }
  *(undefined4 *)(in_RCX + 0x184) = 0;
  *(undefined1 *)(in_RCX + 0x180) = 1;
  FUN_141473f20(param_1,1);
  return;
}



// FUNCTION 1411ec420 FUN_1411ec420 body=51 status=ok
// SIG undefined FUN_1411ec420(void)

void FUN_1411ec420(float param_1)

{
  longlong in_RCX;
  
  if ((*(char *)(in_RCX + 0x180) == '\x02') &&
     (param_1 = *(float *)(in_RCX + 0x17c),
     *(float *)(in_RCX + 0x184) <= param_1 && param_1 != *(float *)(in_RCX + 0x184))) {
    return;
  }
  *(undefined4 *)(in_RCX + 0x184) = 0;
  *(undefined1 *)(in_RCX + 0x180) = 2;
  FUN_141473f20(param_1,2);
  return;
}



// FUNCTION 1411ec460 FUN_1411ec460 body=383 status=ok
// SIG undefined FUN_1411ec460(void)

void FUN_1411ec460(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x2c8);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  FUN_142ebfc00(param_1);
  return;
}



// FUNCTION 1411ec5e0 FUN_1411ec5e0 body=675 status=ok
// SIG undefined FUN_1411ec5e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411ec5e0(longlong param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  ulonglong uVar5;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FWeakObjectPtr::operator=(&local_88,param_1);
  uVar5 = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8920;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = local_88;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_84;
  }
  local_78[0] = &LAB_1411d5220;
  FUN_14208c300(param_1,local_78);
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
  plVar7 = *(longlong **)(param_1 + 0x2e8);
  if (plVar7 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar7 + 0x288))(plVar7);
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  if (plVar7 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar7 + 0x288))(plVar7);
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  if (plVar7 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar7 + 0x288))(plVar7);
    }
  }
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  uVar6 = uVar5;
  if (0 < *(int *)(param_1 + 0x340)) {
    do {
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x338) + uVar6);
      if (plVar7 != (longlong *)0x0) {
        lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*plVar7 + 0x288))(plVar7);
        }
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      *(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0x338)) = 0;
      uVar6 = uVar6 + 8;
    } while ((int)uVar4 < *(int *)(param_1 + 0x340));
  }
  *(undefined4 *)(param_1 + 0x340) = 0;
  if (*(int *)(param_1 + 0x344) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x338,0);
  }
  FUN_142ebfc00(param_1);
  return;
}



// FUNCTION 1411ec890 FUN_1411ec890 body=228 status=ok
// SIG undefined FUN_1411ec890(void)

void FUN_1411ec890(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  uVar6 = uVar4;
  if (0 < *(int *)(param_1 + 0x178)) {
    do {
      plVar1 = *(longlong **)(uVar4 + *(longlong *)(param_1 + 0x170));
      if (plVar1 != (longlong *)0x0) {
        lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          (**(code **)(*plVar1 + 0x288))(plVar1);
        }
      }
      uVar5 = (int)uVar6 + 1;
      *(undefined8 *)(uVar4 + *(longlong *)(param_1 + 0x170)) = 0;
      uVar4 = uVar4 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x178));
  }
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(int *)(param_1 + 0x17c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x170,0);
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1411ec980 FUN_1411ec980 body=298 status=ok
// SIG undefined FUN_1411ec980(void)

void FUN_1411ec980(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1411ecab0 FUN_1411ecab0 body=308 status=ok
// SIG undefined FUN_1411ecab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411ecab0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_14170c210(&local_88);
  }
  FWeakObjectPtr::operator=(&local_84,param_1);
  uVar2 = local_88;
  local_88 = 0xffffffff;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c50;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_84;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_80;
    *(undefined4 *)(puVar1 + 3) = uVar2;
    uVar2 = 0xffffffff;
  }
  local_78[0] = &LAB_1411d50c0;
  FUN_14208c300(param_1,local_78);
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
  FUN_1416f8340(uVar2);
  FUN_1416f8340(local_88);
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1411ecbf0 FUN_1411ecbf0 body=31 status=ok
// SIG undefined FUN_1411ecbf0(void)

void FUN_1411ecbf0(longlong param_1)

{
  FUN_1411d6ad0();
  FUN_1411f8cf0(param_1 + 0x148);
  return;
}



// FUNCTION 1411ecc10 FUN_1411ecc10 body=64 status=ok
// SIG undefined FUN_1411ecc10(void)

void FUN_1411ecc10(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x158);
  if ((puVar2 != (undefined8 *)0x0) ||
     (puVar2 = *(undefined8 **)(param_1 + 0x148), puVar2 != (undefined8 *)0x0)) {
    cVar1 = (**(code **)*puVar2)(puVar2,*param_2);
    if (cVar1 != '\0') {
      FUN_1411f7640(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1411ecc50 FUN_1411ecc50 body=309 status=ok
// SIG undefined FUN_1411ecc50(void)

void FUN_1411ecc50(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 local_30;
  
  uVar4 = UNF_CustomizationStatics::IsWeaponType(param_2);
  *(undefined1 *)(param_1 + 0x159) = uVar4;
  cVar5 = UNF_CustomizationStatics::IsWeaponType(param_3);
  if ((*(char *)(param_1 + 0x159) == '\0') || (cVar5 != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*(char *)(param_1 + 0x159) == '\0') && (cVar5 != '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  plVar8 = *(longlong **)(param_1 + -0x138);
  if (plVar8 != (longlong *)0x0) {
    lVar6 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1411eccf6;
  }
  plVar8 = (longlong *)0x0;
LAB_1411eccf6:
  if (bVar2) {
    if (plVar8 != (longlong *)0x0) {
      lVar6 = *plVar8;
      local_38 = 0;
      local_30 = 0;
      puVar7 = (undefined8 *)FName::FName(local_res8,"Navigate",1);
      (**(code **)(lVar6 + 0x4e8))(plVar8,*puVar7,&local_38);
    }
    FUN_1411d6c00(param_1 + -0x170);
  }
  else if (bVar3) {
    FUN_1411fac10(param_1 + -0x170);
  }
  FUN_142ec1770(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1411ecd90 FUN_1411ecd90 body=34 status=ok
// SIG undefined FUN_1411ecd90(void)

ulonglong FUN_1411ecd90(longlong param_1,char param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if (param_2 == '\x01') {
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x1bc);
    *(uint *)(param_1 + 0x1bc) = 1;
    UNLOCK();
    return (ulonglong)uVar1;
  }
  if (param_2 == '\x02') {
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x1b8);
    *(uint *)(param_1 + 0x1b8) = 1;
    in_RAX = (ulonglong)uVar1;
    UNLOCK();
  }
  return in_RAX;
}



// FUNCTION 1411ecdc0 FUN_1411ecdc0 body=26 status=ok
// SIG undefined FUN_1411ecdc0(void)

void FUN_1411ecdc0(longlong param_1,char param_2)

{
  if (param_2 == *(char *)(param_1 + 0x180)) {
    *(undefined1 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x184) = 0;
  }
  return;
}



// FUNCTION 1411ecdf0 FUN_1411ecdf0 body=687 status=ok
// SIG undefined FUN_1411ecdf0(void)

void FUN_1411ecdf0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec5080();
  local_10 = 0x13;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"challengeItemCheck",0x26);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e98b90(param_1,param_1 + 0x3c8,&local_18,0,6,&local_28);
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
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"progressBar",0x18);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140f16560(param_1,param_1 + 0x3d0,&local_28,0,6,&local_18);
  plVar2 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"progressText",0x1a);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140e99270(param_1,param_1 + 0x3d8,&local_28,0,6,&local_18);
  plVar2 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"rankLabel",0x14);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140e99270(param_1,param_1 + 0x3e0,&local_28,0,6,&local_18);
  plVar2 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411ed0a0 FUN_1411ed0a0 body=219 status=ok
// SIG undefined FUN_1411ed0a0(void)

void FUN_1411ed0a0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong local_res10;
  undefined1 local_18 [8];
  longlong local_10;
  
  FUN_142ef9e70();
  pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnNewsImageLoadComplete",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res10,pwVar2 + 2,1);
  FWeakObjectPtr::operator=(local_18,0);
  local_10 = 0;
  FWeakObjectPtr::operator=(local_18,param_1);
  local_10 = local_res10;
  if ((local_res10 != 0) && (lVar4 = FWeakObjectPtr::Get(local_18), lVar4 != 0)) {
    UObject::FindFunction(lVar4,local_10);
  }
  FUN_1406a5aa0(param_1 + 0x170,local_18);
  return;
}



// FUNCTION 1411ed180 FUN_1411ed180 body=687 status=ok
// SIG undefined FUN_1411ed180(void)

void FUN_1411ed180(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec3600();
  local_10 = 9;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"toolTips",0x12);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x2c8) = uVar1;
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
  local_20 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"CONT_NewsPict",0x1c);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140e98b90(param_1,param_1 + 0x2d0,&local_28,0,6,&local_18);
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
  local_20 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"loadingCircle",0x1c);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140e98b90(param_1,param_1 + 0x2d8,&local_28,0,6,&local_18);
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
  local_20 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"newsImageLoader",0x20);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_1411c7370(param_1,param_1 + 0x2e0,&local_28,0,6,&local_18);
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



// FUNCTION 1411ed430 FUN_1411ed430 body=1867 status=ok
// SIG undefined FUN_1411ed430(void)

void FUN_1411ed430(longlong param_1)

{
  int *piVar1;
  void **ppvVar2;
  bool bVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
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
  void *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  void *local_78;
  ulonglong local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_142ec3600();
  FUN_142f10940(param_1,1);
  iVar11 = 0;
  local_f0 = 9;
  local_f8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  FGenericPlatformString::Memcpy(local_f8,L"newsText",0x12);
  local_108 = (longlong *)0x0;
  local_100 = 0;
  uVar5 = FUN_140ecc7d0(param_1,&local_f8,0,6,&local_108);
  *(undefined8 *)(param_1 + 0x330) = uVar5;
  plVar12 = local_108;
  for (iVar9 = (int)local_100; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0x330) != (longlong *)0x0) {
    lVar6 = **(longlong **)(param_1 + 0x330);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"NEWS",L"GFxNewsWidget",L"NewsText");
    (**(code **)(lVar6 + 0x2b0))(*(undefined8 *)(param_1 + 0x330),uVar5,1,0);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_40 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  local_d8 = 0;
  local_d0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"CONT_News",0x14);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  uVar5 = FUN_140ecbdf0(param_1,&local_d8,0,6,&local_e8);
  *(undefined8 *)(param_1 + 0x2e8) = uVar5;
  plVar12 = local_e8;
  for (iVar9 = (int)local_e0; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    local_b8 = 0;
    local_b0 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"entry0",0xe);
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    lVar6 = FUN_1411c03b0(*(undefined8 *)(param_1 + 0x2e8),&local_b8,0,6,&local_c8);
    plVar12 = local_c8;
    for (iVar9 = (int)local_c0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
    local_a8 = (void *)0x0;
    local_a0 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    pvVar4 = local_a8;
    FGenericPlatformString::Memcpy(local_a8,L"New00",0xc);
    if (lVar6 != 0) {
      ppvVar2 = (void **)(lVar6 + 0x2e8);
      if (ppvVar2 != &local_a8) {
        lVar10 = (longlong)(int)local_a0;
        *(int *)(lVar6 + 0x2f0) = (int)local_a0;
        if (((int)local_a0 == 0) && (*(int *)(lVar6 + 0x2f4) == 0)) {
          *(undefined4 *)(lVar6 + 0x2f4) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar2,local_a0 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop(*ppvVar2,pvVar4,lVar10 * 2);
        }
      }
      lVar10 = *(longlong *)(lVar6 + 0x38);
      if (lVar10 != 0) {
        lVar7 = UMovieScene3DTransformSection::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (*(longlong *)(lVar6 + 0x2e0) != 0)) {
          FUN_142ef5f70(*(longlong *)(lVar6 + 0x2e0),*(undefined8 *)(lVar10 + 0x688));
        }
      }
      iVar9 = *(int *)(param_1 + 0x340);
      *(int *)(param_1 + 0x340) = iVar9 + 1;
      if (*(int *)(param_1 + 0x344) < iVar9 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x338,iVar9);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x338) + (longlong)iVar9 * 8) = lVar6;
    }
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    local_88 = 0;
    local_80 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    FGenericPlatformString::Memcpy(local_88,L"entry1",0xe);
    local_98 = (longlong *)0x0;
    local_90 = 0;
    lVar10 = FUN_1411c03b0(*(undefined8 *)(param_1 + 0x2e8),&local_88,0,6,&local_98);
    plVar12 = local_98;
    for (iVar9 = (int)local_90; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    local_78 = (void *)0x0;
    local_70 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    pvVar4 = local_78;
    FGenericPlatformString::Memcpy(local_78,L"New01",0xc);
    if (lVar10 != 0) {
      ppvVar2 = (void **)(lVar10 + 0x2e8);
      if (ppvVar2 != &local_78) {
        lVar7 = (longlong)(int)local_70;
        *(int *)(lVar10 + 0x2f0) = (int)local_70;
        if (((int)local_70 == 0) && (*(int *)(lVar10 + 0x2f4) == 0)) {
          *(undefined4 *)(lVar10 + 0x2f4) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar2,local_70 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop(*ppvVar2,pvVar4,lVar7 * 2);
        }
      }
      lVar7 = *(longlong *)(lVar10 + 0x38);
      if (lVar7 != 0) {
        lVar8 = UMovieScene3DTransformSection::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (*(longlong *)(lVar10 + 0x2e0) != 0)) {
          FUN_142ef5f70(*(longlong *)(lVar10 + 0x2e0),*(undefined8 *)(lVar7 + 0x688));
        }
      }
      iVar9 = *(int *)(param_1 + 0x340);
      *(int *)(param_1 + 0x340) = iVar9 + 1;
      if (*(int *)(param_1 + 0x344) < iVar9 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x338,iVar9);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x338) + (longlong)iVar9 * 8) = lVar10;
    }
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    plVar12 = (longlong *)(param_1 + 0x300);
    *(longlong *)(param_1 + 0x2f0) = lVar6;
    *(longlong *)(param_1 + 0x2f8) = lVar10;
    if ((wchar_t *)*plVar12 != L"firstToSecond") {
      *(undefined4 *)(param_1 + 0x308) = 0;
      iVar9 = iVar11;
      if (*(int *)(param_1 + 0x30c) != 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar12,0xe);
        iVar9 = *(int *)(param_1 + 0x308);
      }
      *(int *)(param_1 + 0x308) = iVar9 + 0xe;
      if (*(int *)(param_1 + 0x30c) < iVar9 + 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar12);
      }
      builtin_wcsncpy((wchar_t *)*plVar12,L"firstToSecond",0xe);
    }
    *(longlong *)(param_1 + 0x310) = lVar10;
    plVar12 = (longlong *)(param_1 + 800);
    *(longlong *)(param_1 + 0x318) = lVar6;
    if ((wchar_t *)*plVar12 != L"secondToFirst") {
      *(undefined4 *)(param_1 + 0x328) = 0;
      if (*(int *)(param_1 + 0x32c) != 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar12,0xe);
        iVar11 = *(int *)(param_1 + 0x328);
      }
      *(int *)(param_1 + 0x328) = iVar11 + 0xe;
      if (*(int *)(param_1 + 0x32c) < iVar11 + 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar12);
      }
      builtin_wcsncpy((wchar_t *)*plVar12,L"secondToFirst",0xe);
    }
  }
  local_58 = 0;
  local_50 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"CONT_Dots",0x14);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  FUN_1411c7a50(param_1,param_1 + 0x2e0,&local_58,0,6,&local_68);
  plVar12 = local_68;
  for (iVar11 = (int)local_60; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    *(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x180) = param_1;
  }
  return;
}



// FUNCTION 1411edb80 FUN_1411edb80 body=443 status=ok
// SIG undefined FUN_1411edb80(void)

void FUN_1411edb80(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  wchar_t *pwVar9;
  
  FUN_142ef9e70();
  pwVar9 = (wchar_t *)0x0;
  do {
    local_res10 = 0;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FString::PrintfImpl(local_38,L"entry%d",pwVar9);
    FUN_140f15b10(param_1,&local_res10,local_38,0,6,&local_48);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    plVar6 = local_48;
    for (iVar7 = (int)local_40; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
    lVar3 = local_res10;
    if (local_res10 != 0) {
      iVar7 = *(int *)(param_1 + 0x178);
      *(int *)(param_1 + 0x178) = iVar7 + 1;
      if (*(int *)(param_1 + 0x17c) < iVar7 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x170,iVar7);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar7 * 8) = lVar3;
      pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCircleButtonClicked",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res20,pwVar2 + 2,1);
      lVar5 = local_res20;
      FWeakObjectPtr::operator=(lVar3 + 0x1b0,param_1);
      *(longlong *)(lVar3 + 0x1b8) = lVar5;
      local_res18 = 0;
      if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(lVar3 + 0x1b0), lVar5 != 0)) {
        UObject::FindFunction(lVar5,*(undefined8 *)(lVar3 + 0x1b8));
      }
    }
    uVar8 = (int)pwVar9 + 1;
    pwVar9 = (wchar_t *)(ulonglong)uVar8;
  } while ((int)uVar8 < 6);
  return;
}



// FUNCTION 1411edd40 FUN_1411edd40 body=1659 status=ok
// SIG undefined FUN_1411edd40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411edd40(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_142ef9e70();
  pwVar12 = (wchar_t *)0x0;
  local_a0 = 9;
  local_a8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"BTN_News",0x12);
  local_b0 = &local_98;
  local_98 = (longlong *)0x0;
  local_b8 = 6;
  local_90 = 0;
  FUN_1411c76e0(param_1,param_1 + 0x170,&local_a8,0);
  plVar13 = local_98;
  for (iVar11 = (int)local_90; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"leftButton.leftButtonInner",0x36);
  local_b0 = &local_98;
  local_98 = (longlong *)0x0;
  plVar13 = (longlong *)(param_1 + 0x178);
  local_b8 = 6;
  local_90 = 0;
  FUN_140f15b10(param_1,plVar13,&local_a8,0);
  plVar9 = local_98;
  for (iVar11 = (int)local_90; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 0x1d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"rightButton.rightButtonInner",0x3a);
  local_b0 = &local_98;
  local_98 = (longlong *)0x0;
  plVar9 = (longlong *)(param_1 + 0x180);
  local_b8 = 6;
  local_90 = 0;
  FUN_140f15b10(param_1,plVar9,&local_a8,0);
  plVar10 = local_98;
  for (iVar11 = (int)local_90; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if ((*plVar13 != 0) && (*plVar9 != 0)) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnNavigationButtonClicked",L"::");
    pwVar7 = pwVar12;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar7 = pwVar2;
    }
    FName::FName(&local_98,pwVar7 + 2,1);
    plVar10 = local_98;
    lVar1 = *plVar13;
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,param_1);
    *(longlong **)(lVar1 + 0x1b8) = plVar10;
    local_a8 = 0;
    if ((plVar10 != (longlong *)0x0) && (lVar6 = FWeakObjectPtr::Get(lVar1 + 0x1b0), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar1 + 0x1b8));
    }
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnNavigationButtonHovered",L"::");
    pwVar7 = pwVar12;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar7 = pwVar2;
    }
    FName::FName(&local_98,pwVar7 + 2,1);
    plVar10 = local_98;
    lVar1 = *plVar13;
    FWeakObjectPtr::operator=(lVar1 + 0x210,param_1);
    *(longlong **)(lVar1 + 0x218) = plVar10;
    local_a8 = 0;
    if ((plVar10 != (longlong *)0x0) && (lVar6 = FWeakObjectPtr::Get(lVar1 + 0x210), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar1 + 0x218));
    }
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnNavigationButtonUnhovered",L"::");
    pwVar7 = pwVar12;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar7 = pwVar2;
    }
    FName::FName(&local_98,pwVar7 + 2,1);
    plVar10 = local_98;
    lVar1 = *plVar13;
    FWeakObjectPtr::operator=(lVar1 + 0x220,param_1);
    *(longlong **)(lVar1 + 0x228) = plVar10;
    local_a8 = 0;
    if ((plVar10 != (longlong *)0x0) && (lVar6 = FWeakObjectPtr::Get(lVar1 + 0x220), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar1 + 0x228));
    }
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnNavigationButtonClicked",L"::");
    pwVar7 = pwVar12;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar7 = pwVar2;
    }
    FName::FName(&local_98,pwVar7 + 2,1);
    plVar10 = local_98;
    lVar1 = *plVar9;
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,param_1);
    *(longlong **)(lVar1 + 0x1b8) = plVar10;
    local_a8 = 0;
    if ((plVar10 != (longlong *)0x0) && (lVar6 = FWeakObjectPtr::Get(lVar1 + 0x1b0), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar1 + 0x1b8));
    }
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnNavigationButtonHovered",L"::");
    pwVar7 = pwVar12;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar7 = pwVar2;
    }
    FName::FName(&local_98,pwVar7 + 2,1);
    plVar10 = local_98;
    lVar1 = *plVar9;
    FWeakObjectPtr::operator=(lVar1 + 0x210,param_1);
    *(longlong **)(lVar1 + 0x218) = plVar10;
    local_a8 = 0;
    if ((plVar10 != (longlong *)0x0) && (lVar6 = FWeakObjectPtr::Get(lVar1 + 0x210), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar1 + 0x218));
    }
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnNavigationButtonUnhovered",L"::");
    while (pwVar5 = pwVar7, pwVar5 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar12 = pwVar5;
    }
    FName::FName(&local_98,pwVar12 + 2,1);
    plVar10 = local_98;
    lVar1 = *plVar9;
    FWeakObjectPtr::operator=(lVar1 + 0x220,param_1);
    *(longlong **)(lVar1 + 0x228) = plVar10;
    local_a8 = 0;
    if ((plVar10 != (longlong *)0x0) && (lVar6 = FWeakObjectPtr::Get(lVar1 + 0x220), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar1 + 0x228));
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x170);
  if (lVar1 != 0) {
    lVar6 = *plVar9;
    FWeakObjectPtr::operator=(lVar1 + 0x348,*plVar13);
    FWeakObjectPtr::operator=(lVar1 + 0x350,lVar6);
    FWeakObjectPtr::operator=(&local_a8,lVar1);
    uVar3 = (undefined4)local_a8;
    uVar4 = local_a8._4_4_;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_78);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_1444f8920;
      puVar8[1] = lVar1;
      *(undefined4 *)(puVar8 + 2) = uVar3;
      *(undefined4 *)((longlong)puVar8 + 0x14) = uVar4;
    }
    local_88[0] = &LAB_1411d4fa0;
    FUN_14208c300(lVar1,local_88);
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
  }
  return;
}



// FUNCTION 1411ee3c0 FUN_1411ee3c0 body=524 status=ok
// SIG undefined FUN_1411ee3c0(void)

void FUN_1411ee3c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ef9e70();
  plVar6 = *(longlong **)(param_1 + 0x38);
  if (plVar6 != (longlong *)0x0) {
    iVar7 = 1;
    if (*(int *)(param_1 + 0x1a8) != 1) {
      do {
        FString::PrintfImpl(&local_48,L"hitFeedback%i",iVar7);
        puVar8 = &DAT_143f3eda8;
        if (local_40 != 0) {
          puVar8 = local_48;
        }
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x4a8))
                  (*(longlong **)(param_1 + 0x38),&local_38,puVar8);
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        plVar6 = local_30;
        lVar3 = local_38;
        if (local_38 != 0) {
          if (local_30 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
            UNLOCK();
          }
          iVar2 = *(int *)(param_1 + 400);
          *(int *)(param_1 + 400) = iVar2 + 1;
          if (*(int *)(param_1 + 0x194) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x188,iVar2);
          }
          plVar4 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x188));
          *plVar4 = lVar3;
          plVar4[1] = (longlong)plVar6;
        }
        plVar6 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_30 + 1;
          lVar3 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != *(int *)(param_1 + 0x1a8));
      plVar6 = *(longlong **)(param_1 + 0x38);
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x4a8))(plVar6,local_28,L"hitFeedbackKill");
    *(undefined8 *)(param_1 + 0x198) = *puVar5;
    plVar6 = (longlong *)puVar5[1];
    plVar4 = *(longlong **)(param_1 + 0x1a0);
    if (plVar6 != plVar4) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(param_1 + 0x1a0);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(longlong **)(param_1 + 0x1a0) = plVar6;
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 1411ee5d0 FUN_1411ee5d0 body=233 status=ok
// SIG undefined FUN_1411ee5d0(void)

void FUN_1411ee5d0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_140f39860();
  (**(code **)(*param_1 + 0x3b0))(param_1,1);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
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
      local_18 = 0;
      local_10 = 0;
      FWeakObjectPtr::operator=(&local_28,0);
      FWeakObjectPtr::operator=(&local_20,0);
      FWeakObjectPtr::operator=(&local_18,0);
      FWeakObjectPtr::operator=(&local_10,0);
      local_30 = 0;
      local_38 = param_1;
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_30 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
      FUN_142ecfd10(lVar1,&local_38,&local_28);
    }
  }
  return;
}



// FUNCTION 1411ee6c0 FUN_1411ee6c0 body=2249 status=ok
// SIG undefined FUN_1411ee6c0(void)

void FUN_1411ee6c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [8];
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
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  if (param_2 == (longlong *)0x0) goto LAB_1411eef72;
  puVar4 = (undefined8 *)FUN_142085870(param_2,local_128,L"picture");
  *(undefined8 *)(param_1 + 0x60) = *puVar4;
  plVar10 = (longlong *)puVar4[1];
  plVar6 = *(longlong **)(param_1 + 0x68);
  if (plVar10 != plVar6) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x68);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0x68) = plVar10;
  }
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_120 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  uVar5 = FUN_142085870(param_2,local_118,L"playerName");
  FUN_142ede260(param_1 + 0x70,uVar5);
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_110 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  uVar5 = FUN_142085870(param_2,local_108,L"characterClassName");
  FUN_142ede260(param_1 + 0x88,uVar5);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_100 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  uVar5 = FUN_142085870(param_2,local_f8,L"characterLevel");
  FUN_142ede260(param_1 + 0xa0,uVar5);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_f0 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
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
  puVar4 = (undefined8 *)FUN_142085870(param_2,local_e8,L"characterClassIcon");
  *(undefined8 *)(param_1 + 0xb8) = *puVar4;
  plVar10 = (longlong *)puVar4[1];
  plVar6 = *(longlong **)(param_1 + 0xc0);
  if (plVar10 != plVar6) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0xc0);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0xc0) = plVar10;
  }
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_e0 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  puVar4 = (undefined8 *)FUN_142085870(param_2,local_d8,L"selectionConfirmedIcon");
  *(undefined8 *)(param_1 + 200) = *puVar4;
  plVar10 = (longlong *)puVar4[1];
  plVar6 = *(longlong **)(param_1 + 0xd0);
  if (plVar10 != plVar6) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0xd0);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0xd0) = plVar10;
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_d0 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
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
  uVar5 = FUN_142085870(param_2,local_c8,L"vaultHunterStatus");
  FUN_142ede260(param_1 + 0xf8,uVar5);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_c0 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  plVar6 = (longlong *)FUN_142085870(param_2,local_b8,L"vaultHunterStatusIcon");
  plVar10 = (longlong *)(param_1 + 0xd8);
  *plVar10 = *plVar6;
  plVar6 = (longlong *)plVar6[1];
  plVar9 = *(longlong **)(param_1 + 0xe0);
  if (plVar6 != plVar9) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(param_1 + 0xe0);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    *(longlong **)(param_1 + 0xe0) = plVar6;
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_b0 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  puVar4 = (undefined8 *)FUN_142085870(param_2,local_a8,L"vaultStatusAnim");
  *(undefined8 *)(param_1 + 0xe8) = *puVar4;
  plVar6 = (longlong *)puVar4[1];
  plVar9 = *(longlong **)(param_1 + 0xf0);
  if (plVar6 != plVar9) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(param_1 + 0xf0);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    *(longlong **)(param_1 + 0xf0) = plVar6;
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_a0 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  plVar6 = *(longlong **)(param_1 + 0xf0);
  local_140 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar6[1];
    bVar11 = iVar3 == 0;
    if (bVar11) {
      *(int *)(plVar6 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (!bVar11) {
      LOCK();
      bVar11 = iVar3 == (int)plVar6[1];
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar11) {
        local_148 = *(longlong *)(param_1 + 0xe8);
        if (local_148 != 0) {
          FUN_14204d420(local_148,plVar10,L"vaultHunterStatusIcon");
        }
        plVar9 = local_140;
        LOCK();
        plVar6 = plVar6 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_140 + 8))(local_140,1);
          }
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar11 = iVar3 == 0;
      if (bVar11) {
        *(int *)(plVar6 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  puVar4 = (undefined8 *)FUN_142085870(param_2,local_98,L"talkingStateIcon");
  *(undefined8 *)(param_1 + 0x110) = *puVar4;
  plVar6 = (longlong *)puVar4[1];
  plVar9 = *(longlong **)(param_1 + 0x118);
  if (plVar6 != plVar9) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(param_1 + 0x118);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    *(longlong **)(param_1 + 0x118) = plVar6;
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_90 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  puVar4 = (undefined8 *)FUN_142085870(param_2,local_88,L"partyLeaderIcon");
  *(undefined8 *)(param_1 + 0x120) = *puVar4;
  plVar6 = (longlong *)puVar4[1];
  plVar9 = *(longlong **)(param_1 + 0x128);
  if (plVar6 != plVar9) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(param_1 + 0x128);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    *(longlong **)(param_1 + 0x128) = plVar6;
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_80 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  plVar6 = *(longlong **)(param_1 + 0xe0);
  local_130 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar6[1];
    bVar11 = iVar3 == 0;
    if (bVar11) {
      *(int *)(plVar6 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (!bVar11) {
      LOCK();
      bVar11 = iVar3 == (int)plVar6[1];
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar11) {
        local_138 = *plVar10;
        if (local_138 != 0) {
          FUN_14203de70(local_138,"empty");
        }
        plVar10 = local_130;
        LOCK();
        plVar6 = plVar6 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar11 = iVar3 == 0;
      if (bVar11) {
        *(int *)(plVar6 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  FUN_142085870(param_2,&local_158,L"systemIcons");
  if (local_158 != 0) {
    FUN_14203e4e0(local_158,L"none");
    plVar6 = local_150;
    *(longlong *)(param_1 + 0x130) = local_158;
    plVar10 = *(longlong **)(param_1 + 0x138);
    if (local_150 != plVar10) {
      if (local_150 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_150 + 0xc) = *(int *)((longlong)local_150 + 0xc) + 1;
        UNLOCK();
        plVar10 = *(longlong **)(param_1 + 0x138);
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (plVar10 != (longlong *)0x0)) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      *(longlong **)(param_1 + 0x138) = plVar6;
    }
  }
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_150 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)local_150 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  lVar8 = param_2[7];
  *(longlong *)(param_1 + 0x58) = lVar8;
  uVar2 = 0;
  if (lVar8 != 0) {
    lVar7 = AArchVisCharacter::StaticClass();
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
    if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x1a2) = uVar2;
  lVar8 = (**(code **)(*param_2 + 0x148))(param_2);
  if (lVar8 != 0) {
    lVar8 = *(longlong *)(lVar8 + 400);
    if (lVar8 == 0) {
LAB_1411eeeea:
      lVar8 = 0;
    }
    else {
      lVar7 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (!bVar11) goto LAB_1411eeeea;
    }
    FWeakObjectPtr::operator=(param_1 + 0x140,lVar8);
  }
  FWeakObjectPtr::operator=(&local_res10,param_1);
  local_48 = 0;
  local_38 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1444f8920;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = local_res10;
    *(undefined4 *)((longlong)puVar4 + 0x14) = local_res14;
  }
  local_78[0] = &LAB_1411d5200;
  FUN_14204c280(local_78);
LAB_1411eef72:
  FUN_1411f8cf0(param_1 + 0x148);
  return;
}



// FUNCTION 1411eef90 FUN_1411eef90 body=67 status=ok
// SIG undefined FUN_1411eef90(void)

char FUN_1411eef90(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = FUN_142ec6340();
  if (((cVar1 == '\0') && (*(char *)((longlong)param_2 + 0xc) == '\0')) &&
     (DAT_146b3e2b8 == *param_2)) {
    FUN_142eb3990(param_1 + -0x4d8);
    cVar1 = '\x01';
  }
  return cVar1;
}



// FUNCTION 1411eefe0 FUN_1411eefe0 body=76 status=ok
// SIG undefined FUN_1411eefe0(void)

undefined8 FUN_1411eefe0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    cVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x150) + 0x20))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = FUN_142efbf70(param_1,param_2);
  return uVar2;
}



// FUNCTION 1411ef030 FUN_1411ef030 body=31 status=ok
// SIG undefined FUN_1411ef030(void)

void FUN_1411ef030(longlong param_1)

{
  FUN_142efc000();
  FUN_1411fe8b0(param_1 + -0x2b8);
  return;
}



// FUNCTION 1411ef060 FUN_1411ef060 body=488 status=ok
// SIG undefined FUN_1411ef060(void)

void FUN_1411ef060(longlong *param_1,undefined4 param_2,longlong *param_3,char *param_4)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 local_128 [89];
  char local_cf;
  char local_ce;
  undefined1 local_cc [124];
  int local_50;
  undefined1 local_4c [52];
  
  if (param_3 != (longlong *)0x0) {
    lVar2 = FUN_141488730();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140ed0240(local_128);
      (**(code **)(*param_1 + 0x278))(param_1,param_2,local_128);
      cVar1 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                        ((longlong)param_3 + 0x364,local_cc);
      if (cVar1 == '\0') {
        cVar1 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                          ((longlong)param_3 + 0x3e4,local_4c);
        if (cVar1 == '\0') {
          if (*(char *)((longlong)param_3 + 0x361) == local_cf) {
            if ((int)param_3[0x7c] == local_50) {
              bVar3 = *(char *)((longlong)param_3 + 0x362) != local_ce;
            }
            else {
              bVar3 = true;
            }
          }
          else {
            bVar3 = true;
          }
        }
        else {
          bVar3 = true;
        }
      }
      else {
        bVar3 = true;
      }
      if (*param_4 != '\0') {
        (**(code **)(*param_3 + 0x330))(param_3,local_128);
      }
      if ((param_4[2] != '\0') || (*param_4 != '\0')) {
        FUN_142ed3540(param_3 + 0x2e,param_4[1],0);
        FUN_142ed3c20(param_3,0,1);
      }
      (**(code **)(param_3[0x2e] + 0x38))(param_3 + 0x2e,local_ce == '\0');
      cVar1 = FWeakObjectPtr::IsValid(param_3 + 0xd9);
      if ((cVar1 != '\0') && (bVar3)) {
        lVar2 = FWeakObjectPtr::Get(param_3 + 0xd9);
        if (*(char *)(lVar2 + 0xd1) != '\0') {
          FUN_140f3bde0(param_3);
        }
      }
      FUN_140e9c360(local_128);
    }
  }
  if ((*param_4 != '\0') || (param_4[2] != '\0')) {
    (**(code **)(*param_1 + 0x290))(param_1);
    if ((param_4[2] != '\0') && (param_4[1] != '\0')) {
      (**(code **)(*param_1 + 0x280))(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 1411ef250 FUN_1411ef250 body=9 status=ok
// SIG undefined FUN_1411ef250(void)

void FUN_1411ef250(longlong param_1)

{
  FUN_14103cb10(param_1 + 0x28);
  return;
}



// FUNCTION 1411ef280 FUN_1411ef280 body=183 status=ok
// SIG undefined FUN_1411ef280(void)

void FUN_1411ef280(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    FWeakObjectPtr::operator=(lVar1 + 400,0);
    *(undefined8 *)(lVar1 + 0x198) = 0;
    lVar1 = *(longlong *)(param_1 + 0x38);
    FWeakObjectPtr::operator=(lVar1 + 0x180,0);
    *(undefined8 *)(lVar1 + 0x188) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
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
      FUN_140d1b4d0(lVar1);
    }
  }
  FUN_142efc5d0(param_1);
  return;
}



// FUNCTION 1411ef340 FUN_1411ef340 body=132 status=ok
// SIG undefined FUN_1411ef340(void)

void FUN_1411ef340(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + -0x2b8) + 0x148))();
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
      TBaseMulticastDelegate<void>::Remove(lVar2 + 0xa38,*(undefined8 *)(param_1 + 0xd8));
    }
  }
  FUN_142efc5d0(param_1);
  return;
}



// FUNCTION 1411ef3d0 FUN_1411ef3d0 body=222 status=ok
// SIG undefined FUN_1411ef3d0(void)

void FUN_1411ef3d0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ec8650();
  local_10 = 10;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"TabWidget",0x14);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140e96f30(param_1 + -0x4d8,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x1c8) = uVar1;
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
  FUN_1411f65c0(param_1 + -0x4d8);
  return;
}



// FUNCTION 1411ef4b0 FUN_1411ef4b0 body=31 status=ok
// SIG undefined FUN_1411ef4b0(void)

void FUN_1411ef4b0(longlong param_1)

{
  FUN_142efc880();
  FUN_1411e9510(param_1 + -0x2b8);
  return;
}



// FUNCTION 1411ef4d0 FUN_1411ef4d0 body=533 status=ok
// SIG undefined FUN_1411ef4d0(void)

void FUN_1411ef4d0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  undefined8 local_res8;
  longlong local_res10;
  undefined4 uStack_2c;
  
  FUN_142efc880();
  pwVar12 = (wchar_t *)0x0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UOakOnlinePlayerDetailsMenu::OnChoiceClicked",L"::");
    pwVar4 = pwVar12;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar7 = *(longlong *)(param_1 + 0x38);
    FWeakObjectPtr::operator=(lVar7 + 0x898,param_1 + -0x2b8);
    *(longlong *)(lVar7 + 0x8a0) = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar7 + 0x898), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar7 + 0x8a0));
    }
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x860) + 0x38))();
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
    }
  }
  lVar7 = (**(code **)(*(longlong *)(param_1 + -0x2b8) + 0x148))(param_1 + -0x2b8);
  lVar7 = *(longlong *)(lVar7 + 400);
  if (lVar7 != 0) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar11 = (longlong *)(lVar7 + 0xa38);
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_14428ae88;
        FWeakObjectPtr::operator=(plVar8 + 1,param_1 + -0x2b8);
        *(undefined4 *)(plVar8 + 2) = 0x411f02e0;
        *(undefined4 *)((longlong)plVar8 + 0x14) = 1;
        *(undefined4 *)(plVar8 + 3) = 0;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_2c;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar6;
        *plVar8 = (longlong)&PTR_FUN_14428aed0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
        plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,&local_res8);
        iVar1 = *(int *)(lVar7 + 0xa40);
        pwVar12 = (wchar_t *)*plVar9;
        *(int *)(lVar7 + 0xa40) = iVar1 + 1;
        if (*(int *)(lVar7 + 0xa44) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
        }
        puVar10 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar11);
        *puVar10 = plVar8;
        *(undefined4 *)(puVar10 + 1) = 3;
      }
      *(wchar_t **)(param_1 + 0xd8) = pwVar12;
    }
  }
  FUN_1411fe8b0(param_1 + -0x2b8);
  return;
}



// FUNCTION 1411ef6f0 FUN_1411ef6f0 body=729 status=ok
// SIG undefined FUN_1411ef6f0(void)

void FUN_1411ef6f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_1410975c0();
  uVar3 = 0;
  local_20 = 0xc;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"testSpinner",0x18);
  local_38 = (longlong *)0x0;
  lVar1 = param_1 + -0x4d8;
  local_30 = 0;
  uVar2 = FUN_1411c09f0(lVar1,&local_28,0,6,&local_38);
  *(undefined8 *)(param_1 + 0x1d0) = uVar2;
  plVar5 = local_38;
  for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"testSlider",0x16);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar2 = FUN_140f13f30(lVar1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x1d8) = uVar2;
  plVar5 = local_28;
  for (iVar4 = (int)local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"testDropDownList",0x22);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar2 = FUN_1411c0750(lVar1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x1e0) = uVar2;
  plVar5 = local_28;
  for (iVar4 = (int)local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x1d0);
  if (plVar5 != (longlong *)0x0) {
    local_20 = 0;
    local_28 = plVar5;
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_20 = UObjectBaseUtility::GetInterfaceAddress(plVar5,uVar2);
    FUN_142ecfdd0(lVar1,&local_28,0,*(undefined8 *)(param_1 + 0x1d8),0,0);
    plVar5 = *(longlong **)(param_1 + 0x1d0);
    local_28 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      uVar2 = UBlendableInterface::GetPrivateStaticClass();
      uVar3 = UObjectBaseUtility::GetInterfaceAddress(plVar5,uVar2);
    }
    local_20 = uVar3;
    FUN_142ed36d0(lVar1,&local_28,0);
  }
  plVar5 = *(longlong **)(param_1 + 0x1d8);
  if (plVar5 != (longlong *)0x0) {
    local_20 = 0;
    local_28 = plVar5;
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_20 = UObjectBaseUtility::GetInterfaceAddress(plVar5,uVar2);
    FUN_142ecfdd0(lVar1,&local_28,*(undefined8 *)(param_1 + 0x1d0),0,0,0);
  }
  return;
}



// FUNCTION 1411ef9d0 FUN_1411ef9d0 body=90 status=ok
// SIG undefined FUN_1411ef9d0(void)

void FUN_1411ef9d0(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x6c8);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x6c8);
    if (*(char *)(lVar2 + 0xd0) != '\0') {
      FUN_142eba280(lVar2 + 0x28,param_1,param_2);
    }
  }
  return;
}



// FUNCTION 1411efa30 FUN_1411efa30 body=144 status=ok
// SIG undefined FUN_1411efa30(void)

void FUN_1411efa30(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0x5a);
    param_1[0x5a] = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x2d9) = 1;
  if ((char)param_1[0x59] != '\x01') {
    *(undefined1 *)(param_1 + 0x59) = 1;
    FUN_142ed3610(param_1 + 0x2e,1);
    return;
  }
  return;
}



// FUNCTION 1411efac0 FUN_1411efac0 body=90 status=ok
// SIG undefined FUN_1411efac0(void)

void FUN_1411efac0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_142ed3610(param_1 + 0x170,1);
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x6c8);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x6c8);
    if (*(char *)(lVar2 + 0xd0) != '\0') {
      FUN_142eba300(lVar2 + 0x28,param_1,1);
    }
  }
  return;
}



// FUNCTION 1411efb30 FUN_1411efb30 body=90 status=ok
// SIG undefined FUN_1411efb30(void)

void FUN_1411efb30(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_142ed3610(param_1 + 0x170,0);
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x6c8);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x6c8);
    if (*(char *)(lVar2 + 0xd0) != '\0') {
      FUN_142eba300(lVar2 + 0x28,param_1,0);
    }
  }
  return;
}



// FUNCTION 1411efbb0 FUN_1411efbb0 body=155 status=ok
// SIG undefined FUN_1411efbb0(void)

void FUN_1411efbb0(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    FUN_1411dd110(param_1,param_3);
    FUN_1411dc8e0(param_1,param_2,param_3);
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 200));
    uVar1 = FWeakObjectPtr::Get(param_1 + 0xc0);
    FUN_140ea7cb0(param_1 + 0x104,param_3,uVar1,*(undefined8 *)(param_1 + 0xd8));
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 200));
    FUN_1411dc080(param_1,param_3);
  }
  return;
}



// FUNCTION 1411efc50 FUN_1411efc50 body=141 status=ok
// SIG undefined FUN_1411efc50(void)

void FUN_1411efc50(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_res8 [32];
  
  lVar3 = *(longlong *)(param_1 + 0x170);
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0x378), 1 < iVar1)) {
    iVar2 = *(int *)(lVar3 + 0x380);
    if (param_2 == *(longlong *)(param_1 + 0x178)) {
      uVar4 = (longlong)(iVar1 + -1 + iVar2) % (longlong)iVar1;
      lVar6 = lVar3 + 0x310;
    }
    else {
      uVar4 = (longlong)(iVar2 + 1) % (longlong)iVar1;
      lVar6 = lVar3 + 0x2f0;
    }
    FUN_1411f27e0(lVar3,lVar6,iVar2,uVar4 & 0xffffffff,0);
  }
  puVar5 = (undefined8 *)FName::FName(local_res8,L"News_Scroll",1);
  FUN_142f0ad20(param_1,*puVar5);
  return;
}



// FUNCTION 1411efce0 FUN_1411efce0 body=59 status=ok
// SIG undefined FUN_1411efce0(void)

void FUN_1411efce0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x170);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x2d8) != '\x01')) &&
     (*(undefined1 *)(lVar1 + 0x2d8) = 1, *(char *)(lVar1 + 0x2c8) != '\x01')) {
    *(undefined1 *)(lVar1 + 0x2c8) = 1;
    FUN_142ed3610(lVar1 + 0x170,1);
    return;
  }
  return;
}



// FUNCTION 1411efd20 FUN_1411efd20 body=80 status=ok
// SIG undefined FUN_1411efd20(void)

void FUN_1411efd20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x170);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x2d8) != '\0')) {
    *(undefined1 *)(lVar1 + 0x2d8) = 0;
    if (*(char *)(lVar1 + 0x2d9) == '\0') {
      *(undefined1 *)(lVar1 + 0x2d9) = 1;
      FUN_1411d4a50();
      return;
    }
    if (*(char *)(lVar1 + 0x2c8) != '\x01') {
      *(undefined1 *)(lVar1 + 0x2c8) = 1;
      FUN_142ed3610(lVar1 + 0x170,1);
      return;
    }
  }
  return;
}



// FUNCTION 1411efd70 FUN_1411efd70 body=245 status=ok
// SIG undefined FUN_1411efd70(void)

void FUN_1411efd70(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_18 = 0;
    local_10 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"newsContent.inner",0x24);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    uVar1 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x180),&local_18,0,6,&local_28);
    *(undefined8 *)(param_1 + 0x1a8) = uVar1;
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
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_142088cf0(*(longlong *)(param_1 + 0x1a8),param_1 + 0x198);
    return;
  }
  return;
}



// FUNCTION 1411efe70 FUN_1411efe70 body=106 status=ok
// SIG undefined FUN_1411efe70(void)

void FUN_1411efe70(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res10;
  undefined1 local_res11;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x2e0);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x300))) {
      lVar3 = (longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x2f8);
      lVar2 = FUN_140eccb70();
      if (lVar2 != 0) {
        local_res10 = *(undefined1 *)(lVar3 + 0x30);
        local_res11 = *(undefined1 *)(lVar3 + 0x31);
        FUN_140ba40f0(lVar2,&local_res10);
        FUN_142ef79c0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1411efee0 FUN_1411efee0 body=41 status=ok
// SIG undefined FUN_1411efee0(void)

void FUN_1411efee0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x2e0);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x300))) {
      FUN_141444ab0(param_1,param_2,(longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x2f8));
      return;
    }
  }
  return;
}



// FUNCTION 1411eff10 FUN_1411eff10 body=929 status=ok
// SIG undefined FUN_1411eff10(void)

ulonglong FUN_1411eff10(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 extraout_var;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar10 = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  lVar4 = lVar10;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar11 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar11;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar11) * 0x18;
  }
  *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) & 0xfbffffff;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xb0));
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x10), lVar4 != 0)) {
    iVar1 = *(int *)(lVar4 + 0xc);
    lVar4 = lVar10;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar11 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar11;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar11) * 0x18;
    }
    *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) & 0xfbffffff;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x10) = 0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xb0));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  if ((*(longlong *)(param_1 + 0xb8) != 0) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x10), lVar4 != 0)) {
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar11 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar11;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
               (longlong)(int)((uVar2 & 0xffff) - uVar11) * 0x18;
    }
    *(uint *)(lVar10 + 8) = *(uint *)(lVar10 + 8) & 0xfbffffff;
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x10) = 0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x68));
  uVar5 = FUN_1411e35f0();
  FUN_1411de490(param_1,uVar5);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x68));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x88,0);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146876ad8) && (_Init_thread_header(&DAT_146876ad8), DAT_146876ad8 == -1))
  {
    plVar8 = (longlong *)FUN_14178e330();
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_GetPoolName_1446fea78;
      plVar9[1] = (longlong)&DAT_146876ad4;
      plVar9[2] = (longlong)&LAB_1411ecde0;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[4] = lVar10;
      *plVar9 = (longlong)&PTR_GetPoolName_1446feac0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
      (**(code **)(*plVar9 + 0x20))(plVar9,local_res8);
      iVar1 = (int)plVar8[1];
      *(int *)(plVar8 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar8 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
      }
      puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
      *puVar7 = plVar9;
      *(undefined4 *)(puVar7 + 1) = 3;
    }
    _Init_thread_footer(&DAT_146876ad8);
  }
  uVar6 = 0;
  LOCK();
  bVar12 = DAT_146876ad4 == 0;
  if (bVar12) {
    DAT_146876ad4 = 1;
  }
  else {
    uVar6 = (ulonglong)DAT_146876ad4;
  }
  UNLOCK();
  if (bVar12) {
    uVar6 = FUN_1415ad720(&DAT_1468e2448);
    if (((char)uVar6 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      uVar6 = CONCAT71((int7)(CONCAT44(extraout_var,DVar3) >> 8),DVar3 == DAT_1468c21c0);
      if (DVar3 != DAT_1468c21c0) {
        local_28 = 0;
        local_18 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_48);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &PTR_FUN_143f3f130;
        }
        local_58[0] = &LAB_1411d4fc0;
        uVar6 = FUN_14158fcd0(2,local_58);
        return uVar6;
      }
    }
    if (DAT_146b17150 != 0) {
      uVar6 = FUN_14288e5f0(DAT_146b17150,0x40000000);
    }
  }
  return uVar6;
}



// FUNCTION 1411f02c0 FUN_1411f02c0 body=27 status=ok
// SIG undefined FUN_1411f02c0(void)

void FUN_1411f02c0(undefined8 param_1)

{
  FUN_1411f63c0();
  FUN_1411f6ec0(param_1);
  return;
}



// FUNCTION 1411f02e0 FUN_1411f02e0 body=106 status=ok
// SIG undefined FUN_1411f02e0(void)

void FUN_1411f02e0(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x310);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  cVar2 = (**(code **)*puVar1)(puVar1,*param_2);
  if (cVar2 == '\0') {
    return;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      uVar3 = 1;
      goto LAB_1411f0325;
    }
    if (param_3 == 2) {
      uVar3 = 2;
      goto LAB_1411f0325;
    }
  }
  uVar3 = 0;
LAB_1411f0325:
  *(undefined1 *)(param_1 + 0x38d) = uVar3;
  FUN_141444bd0(param_1,param_1 + 0x310);
  return;
}



// FUNCTION 1411f0350 FUN_1411f0350 body=61 status=ok
// SIG undefined FUN_1411f0350(void)

void FUN_1411f0350(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x148);
  if (puVar1 != (undefined8 *)0x0) {
    cVar2 = (**(code **)*puVar1)(puVar1,*param_2);
    if (cVar2 != '\0') {
      FUN_1411f7a30(param_1,param_3);
    }
  }
  return;
}



// FUNCTION 1411f0390 FUN_1411f0390 body=52 status=ok
// SIG undefined FUN_1411f0390(void)

void FUN_1411f0390(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x148);
  if (puVar1 != (undefined8 *)0x0) {
    cVar2 = (**(code **)*puVar1)(puVar1,*param_2);
    if (cVar2 != '\0') {
      FUN_1411f76d0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1411f03d0 FUN_1411f03d0 body=192 status=ok
// SIG undefined FUN_1411f03d0(void)

void FUN_1411f03d0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (param_2 == 0) {
    LOCK();
    bVar2 = *(char *)(param_1 + 0x361) == '\0';
    if (bVar2) {
      *(char *)(param_1 + 0x361) = '\x01';
    }
    UNLOCK();
    if (bVar2) {
      *(undefined4 *)(param_1 + 0x380) = 0xffffffff;
      FUN_1411e7890(param_1);
      FWeakObjectPtr::operator=(&local_res18,param_1);
      local_28 = 0;
      local_18 = 0;
      puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1444f8920;
        puVar1[1] = param_1;
        *(undefined4 *)(puVar1 + 2) = local_res18;
        *(undefined4 *)((longlong)puVar1 + 0x14) = local_res1c;
      }
      local_58[0] = &LAB_1411d50e0;
      FUN_14208c5d0(param_1,local_58);
    }
  }
  return;
}



// FUNCTION 1411f0490 FUN_1411f0490 body=194 status=ok
// SIG undefined FUN_1411f0490(void)

void FUN_1411f0490(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8;
  
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x268);
  if (((*(char *)(param_1 + 0x270) != '\0') &&
      (((lVar3 = *(longlong *)(param_1 + 0x120), lVar3 != 0 || (lVar3 = FUN_1423407b0(), lVar3 != 0)
        ) && (lVar3 = FUN_140c12480(lVar3), lVar3 != 0)))) &&
     (lVar3 = FARSupportInterface::GetXRTrackingSystem(lVar3), lVar3 != 0)) {
    lVar4 = *(longlong *)(lVar3 + 0x58);
    lVar1 = lVar4 + (longlong)*(int *)(lVar3 + 0x60) * 8;
    for (; lVar4 != lVar1; lVar4 = lVar4 + 8) {
      cVar2 = FUN_14058c1e0(lVar4,param_1);
      if (cVar2 != '\0') {
        local_res8 = param_1;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (lVar3 + 0x38,&local_res8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1411f0560 FUN_1411f0560 body=614 status=ok
// SIG undefined FUN_1411f0560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411f0560(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x270) != *(char *)(param_1 + 0x271)) {
    *(char *)(param_1 + 0x271) = *(char *)(param_1 + 0x270);
    lVar1 = *(longlong *)(param_1 + 0x120);
    if ((((lVar1 == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) ||
        (lVar1 = FUN_140c12480(lVar1), lVar1 == 0)) ||
       (lVar1 = FARSupportInterface::GetXRTrackingSystem(lVar1), lVar1 == 0)) {
      if (*(longlong *)(param_1 + 0x288) != 0) {
        uVar2 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
        FUN_142880530(uVar2,param_1 + 0x288);
        *(undefined8 *)(param_1 + 0x288) = 0;
      }
      local_a8 = FUN_1411d8e10;
      uStack_a0 = 0;
      uVar2 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        *(undefined4 *)(plVar3 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(plVar3 + 3) = uStack_a0;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_9c;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar1;
        *plVar3 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_b0 = 0xbf800000;
      local_b8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar2,param_1 + 0x288,&local_98,0x3dcccccd);
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
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar1 = FMemory::Realloc(plVar3,0,0);
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
      }
    }
    else if (*(char *)(param_1 + 0x270) == '\0') {
      FUN_1411de930(lVar1,param_1);
    }
    else {
      FUN_1411d48d0();
    }
  }
  return;
}



// FUNCTION 1411f07d0 FUN_1411f07d0 body=613 status=ok
// SIG undefined FUN_1411f07d0(void)

void FUN_1411f07d0(longlong param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  longlong local_88;
  longlong local_80;
  longlong *local_70;
  longlong *local_68;
  longlong *local_48;
  longlong *local_40;
  
  local_88 = param_1;
  local_80 = param_2;
  if ((param_3 == 2) || (param_3 - 0xf < 2)) {
    plVar3 = *(longlong **)(param_1 + 0x148);
    plVar4 = *(longlong **)(param_1 + 0x150);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_70 = plVar3;
    local_68 = plVar4;
    if ((((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
         (cVar7 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar7 == '\0')) ||
        (plVar3 == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3), cVar7 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
         (cVar7 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar7 == '\0')) &&
        ((plVar3 == (longlong *)0x0 ||
         (cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3), cVar7 == '\0')))) ||
       ((bVar5 && (cVar7 = (**(code **)*plVar3)(plVar3,*(undefined8 *)(param_2 + 8)), cVar7 != '\0')
        ))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    plVar3 = local_68;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar4 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    if (bVar5) {
      FUN_1411cda60(&local_88);
      FUN_1411f7ca0(param_1);
    }
  }
  if (param_3 < 0xc) {
    if ((0x884U >> (param_3 & 0x1f) & 1) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x148);
      plVar4 = *(longlong **)(param_1 + 0x150);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_48 = plVar3;
      local_40 = plVar4;
      if ((((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
           (cVar7 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar7 == '\0')) ||
          (plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3), cVar7 == '\0')) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
           (cVar7 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar7 == '\0')) &&
          ((plVar3 == (longlong *)0x0 ||
           (cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3), cVar7 == '\0')))) ||
         ((bVar5 && (cVar7 = (**(code **)*plVar3)(plVar3,*(undefined8 *)(param_2 + 8)),
                    cVar7 != '\0')))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      plVar3 = local_40;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar4 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      if (bVar5) {
        FUN_1411cda60(&local_88);
        FUN_1411f6ec0(param_1);
      }
      return;
    }
    return;
  }
  return;
}



// FUNCTION 1411f0a40 FUN_1411f0a40 body=200 status=ok
// SIG undefined FUN_1411f0a40(void)

void FUN_1411f0a40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x68));
  puVar8 = *(undefined8 **)(param_1 + 0x58);
  puVar7 = puVar8 + (longlong)*(int *)(param_1 + 0x60) * 2;
  for (; puVar8 != puVar7; puVar8 = puVar8 + 2) {
    plVar4 = (longlong *)puVar8[1];
    uVar5 = *puVar8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    FUN_1411d5a10(uVar5);
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
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xe8,0);
                    /* WARNING: Could not recover jumptable at 0x0001411f0b01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x68));
  return;
}



// FUNCTION 1411f0b10 BeginDestroy body=27 status=ok
// SIG undefined BeginDestroy(void)

void UFlowChart::BeginDestroy(undefined8 param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_1411f65c0(param_1);
  return;
}



// FUNCTION 1411f0b30 FUN_1411f0b30 body=385 status=ok
// SIG undefined FUN_1411f0b30(void)

void FUN_1411f0b30(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *local_18;
  undefined8 local_10;
  
  if (*(char *)((longlong)param_1 + 0x272) == '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 0x19) & 0x20) == 0) {
    return;
  }
  if ((char)param_1[0x2f] != '\x01') {
    return;
  }
  lVar3 = param_1[0x24];
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  if ((((lVar3 != 0) && (DAT_146b17150 != 0)) &&
      (lVar3 = UEngine::GetFirstGamePlayer(DAT_146b17150,lVar3), lVar3 != 0)) &&
     (plVar5 = *(longlong **)(lVar3 + 0x30), plVar5 != (longlong *)0x0)) {
    uVar4 = UCircularThrobber::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar4);
    if (lVar3 != 0) goto LAB_1411f0bf6;
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x678))(plVar5);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = UCircularThrobber::GetPrivateStaticClass();
      lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar4);
      goto LAB_1411f0bf6;
    }
  }
  lVar3 = 0;
LAB_1411f0bf6:
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = 0;
  FUN_142dd0660(param_2,&local_18,0);
  plVar5 = local_18;
  do {
    if (plVar5 == local_18 + (int)local_10) {
LAB_1411f0c59:
      if (*(char *)((longlong)param_1 + 0x272) != '\0') {
        *(undefined1 *)(param_1 + 0x4e) = uVar1;
        iVar2 = FUN_14233f450(param_1);
        if (iVar2 == 3) {
          (**(code **)(*param_1 + 0x260))(param_1);
        }
        FUN_1411f0560(param_1);
      }
      if (local_18 != (longlong *)0x0) {
        FMemory::Free(local_18);
      }
      return;
    }
    if ((*plVar5 != 0) && (lVar3 != 0)) {
      uVar1 = FUN_142dee8a0(lVar3);
      goto LAB_1411f0c59;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 1411f0cc0 FUN_1411f0cc0 body=27 status=ok
// SIG undefined FUN_1411f0cc0(void)

void FUN_1411f0cc0(longlong param_1)

{
  FUN_142ecc510();
  *(undefined1 *)(param_1 + 900) = 1;
  return;
}



// FUNCTION 1411f0ce0 FUN_1411f0ce0 body=1066 status=ok
// SIG undefined FUN_1411f0ce0(void)

void FUN_1411f0ce0(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  
  bVar7 = false;
  bVar6 = false;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  LOCK();
  iVar9 = *(int *)(param_1 + 0x1bc);
  *(int *)(param_1 + 0x1bc) = 0;
  UNLOCK();
  if (iVar9 != 0) {
    plVar12 = *(longlong **)(param_1 + 0x188);
    plVar10 = plVar12 + (longlong)*(int *)(param_1 + 400) * 2;
    for (; lVar13 = 0, plVar12 != plVar10; plVar12 = plVar12 + 2) {
      if ((*plVar12 == 0) || (plVar12[1] == 0)) {
LAB_1411f0dbe:
        plVar11 = &local_68;
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
        bVar6 = true;
      }
      else {
        piVar1 = (int *)(plVar12[1] + 8);
        LOCK();
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          *piVar1 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (iVar9 < 1) goto LAB_1411f0dbe;
        local_70 = (longlong *)plVar12[1];
        bVar7 = true;
        local_78 = 0;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          iVar9 = (int)local_70[1];
          bVar14 = iVar9 == 0;
          if (bVar14) {
            *(int *)(local_70 + 1) = 0;
            iVar9 = 0;
          }
          UNLOCK();
          while (!bVar14) {
            LOCK();
            bVar14 = iVar9 == (int)local_70[1];
            if (bVar14) {
              *(int *)(local_70 + 1) = iVar9 + 1;
            }
            UNLOCK();
            if (bVar14) {
              lVar13 = *plVar12;
              plVar11 = &local_78;
              local_78 = lVar13;
              goto LAB_1411f0dd1;
            }
            LOCK();
            iVar9 = (int)local_70[1];
            bVar14 = iVar9 == 0;
            if (bVar14) {
              *(int *)(local_70 + 1) = 0;
              iVar9 = 0;
            }
            UNLOCK();
          }
          local_70 = (longlong *)0x0;
        }
        lVar13 = 0;
        plVar11 = &local_78;
      }
LAB_1411f0dd1:
      plVar5 = (longlong *)plVar11[1];
      plVar11[1] = 0;
      *plVar11 = 0;
      plVar11 = plStack_60;
      if ((bVar6) && (bVar6 = false, plStack_60 != (longlong *)0x0)) {
        LOCK();
        plVar2 = plStack_60 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      plVar11 = local_70;
      if ((bVar7) && (bVar7 = false, local_70 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_70 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      if ((lVar13 != 0) && (iVar9 = FUN_142039580(lVar13), iVar9 < 4)) {
        FUN_14203dd70(lVar13,4);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar5 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
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
        break;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar5 + 1;
        lVar13 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
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
    }
  }
  LOCK();
  iVar9 = *(int *)(param_1 + 0x1b8);
  *(int *)(param_1 + 0x1b8) = 0;
  UNLOCK();
  if (iVar9 == 0) goto LAB_1411f1093;
  if ((*(longlong *)(param_1 + 0x198) == 0) || (*(longlong *)(param_1 + 0x1a0) == 0)) {
LAB_1411f0fa1:
    plVar12 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
    lVar13 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1a0) + 8);
    LOCK();
    iVar9 = *piVar1;
    if (iVar9 == 0) {
      *piVar1 = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (iVar9 < 1) goto LAB_1411f0fa1;
    local_80 = *(longlong **)(param_1 + 0x1a0);
    bVar7 = true;
    bVar6 = false;
    local_88 = 0;
    if (local_80 == (longlong *)0x0) {
LAB_1411f0f97:
      plVar12 = &local_88;
      lVar13 = local_88;
    }
    else {
      LOCK();
      iVar9 = (int)local_80[1];
      bVar14 = iVar9 == 0;
      if (bVar14) {
        *(int *)(local_80 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
      while (!bVar14) {
        LOCK();
        bVar14 = iVar9 == (int)local_80[1];
        if (bVar14) {
          *(int *)(local_80 + 1) = iVar9 + 1;
        }
        UNLOCK();
        if (bVar14) {
          if (local_80 != (longlong *)0x0) {
            local_88 = *(longlong *)(param_1 + 0x198);
          }
          goto LAB_1411f0f97;
        }
        LOCK();
        iVar9 = (int)local_80[1];
        bVar14 = iVar9 == 0;
        if (bVar14) {
          *(int *)(local_80 + 1) = 0;
          iVar9 = 0;
        }
        UNLOCK();
      }
      plVar12 = &local_88;
      local_80 = (longlong *)0x0;
      lVar13 = 0;
    }
  }
  plVar10 = (longlong *)plVar12[1];
  plVar12[1] = 0;
  plVar11 = plStack_50;
  *plVar12 = 0;
  if ((bVar6) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_50 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  plVar12 = local_80;
  if ((bVar7) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_80 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (lVar13 != 0) {
    FUN_14203e030(lVar13,&DAT_1446f80c4);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    lVar13 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar10)(plVar10);
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
LAB_1411f1093:
  cVar4 = *(char *)(param_1 + 0x180);
  if (cVar4 != '\0') {
    param_2 = param_2 + *(float *)(param_1 + 0x184);
    *(float *)(param_1 + 0x184) = param_2;
    if (cVar4 == '\x01') {
      fVar3 = *(float *)(param_1 + 0x170);
    }
    else {
      if (cVar4 != '\x02') {
        return;
      }
      fVar3 = *(float *)(param_1 + 0x174);
    }
    if (fVar3 <= param_2) {
      *(undefined1 *)(param_1 + 0x180) = 0;
      *(undefined4 *)(param_1 + 0x184) = 0;
    }
  }
  return;
}



// FUNCTION 1411f1110 FUN_1411f1110 body=81 status=ok
// SIG undefined FUN_1411f1110(void)

void FUN_1411f1110(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  FUN_14109d980();
  plVar1 = *(longlong **)(param_1 + 0x6b0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x6b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2);
  }
  return;
}



// FUNCTION 1411f1170 FUN_1411f1170 body=150 status=ok
// SIG undefined FUN_1411f1170(void)

void FUN_1411f1170(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0x5a);
    param_1[0x5a] = 0;
  }
  bVar3 = (char)param_1[0x5b] != '\0';
  *(undefined1 *)((longlong)param_1 + 0x2d9) = 0;
  if (bVar3 != (bool)(char)param_1[0x59]) {
    *(bool *)(param_1 + 0x59) = bVar3;
    FUN_142ed3610(param_1 + 0x2e);
    return;
  }
  return;
}



// FUNCTION 1411f1210 FUN_1411f1210 body=569 status=ok
// SIG undefined FUN_1411f1210(void)

void FUN_1411f1210(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  int iVar3;
  short sVar4;
  short sVar5;
  longlong *plVar6;
  longlong lVar7;
  void *_Src;
  longlong lVar8;
  short *psVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  short *psVar13;
  undefined4 local_58 [2];
  longlong *local_50;
  short *local_48;
  int local_40;
  undefined4 local_3c;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x68));
  plVar12 = *(longlong **)(param_1 + 0x58);
  plVar11 = plVar12 + (longlong)*(int *)(param_1 + 0x60) * 2;
  local_50 = plVar11;
  if (plVar12 != plVar11) {
    do {
      plVar6 = (longlong *)plVar12[1];
      lVar7 = *plVar12;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      SRWLock = (PSRWLOCK)(lVar7 + 0x80);
      AcquireSRWLockShared(SRWLock);
      lVar8 = FUN_1416f8720(*(undefined4 *)(lVar7 + 0x5c));
      if (lVar8 == 0) {
        AcquireSRWLockShared((PSRWLOCK)(lVar7 + 0x50));
        local_40 = *(int *)(lVar7 + 0x48);
        lVar8 = (longlong)local_40;
        psVar13 = (short *)0x0;
        _Src = *(void **)(lVar7 + 0x40);
        local_48 = (short *)0x0;
        if (local_40 == 0) {
          local_3c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
          psVar13 = local_48;
          _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar8 * 2);
        }
        iVar3 = local_40;
        ReleaseSRWLockShared((PSRWLOCK)(lVar7 + 0x50));
        if (*(int *)(param_3 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*param_3;
        }
        psVar9 = &DAT_143f3eda8;
        if (iVar3 != 0) {
          psVar9 = psVar13;
        }
        lVar8 = (longlong)puVar10 - (longlong)psVar9;
        do {
          sVar4 = *psVar9;
          sVar5 = *(short *)((longlong)psVar9 + lVar8);
          if (sVar4 != sVar5) break;
          psVar9 = psVar9 + 1;
        } while (sVar5 != 0);
        if (psVar13 != (short *)0x0) {
          FMemory::Free(psVar13);
        }
        plVar11 = local_50;
        if (sVar4 == sVar5) {
          ReleaseSRWLockShared(SRWLock);
          AcquireSRWLockExclusive(SRWLock);
          local_58[0] = 0xffffffff;
          if (param_4 != 0) {
            FUN_14170c210(local_58,param_4);
          }
          FUN_1416ff870(lVar7 + 0x5c,local_58);
          FUN_1416f8340(local_58[0]);
          ReleaseSRWLockExclusive(SRWLock);
          AcquireSRWLockShared(SRWLock);
          plVar11 = local_50;
        }
      }
      ReleaseSRWLockShared(SRWLock);
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
      plVar12 = plVar12 + 2;
    } while (plVar12 != plVar11);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xe8,0);
                    /* WARNING: Could not recover jumptable at 0x0001411f1442. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x68));
  return;
}



// FUNCTION 1411f1450 FUN_1411f1450 body=52 status=ok
// SIG undefined FUN_1411f1450(void)

void FUN_1411f1450(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_1411d6b60();
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x480) = local_res8;
  *(undefined4 *)(param_1 + 0x484) = local_resc;
  return;
}


